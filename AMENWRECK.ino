#include <MozziGuts.h>
#include <Sample.h>
#include <EventDelay.h>
#include <mozzi_rand.h> // for rand()
#include <samples/amenbeat1.h> // wavetable data
#include <samples/amenbeat2.h> // wavetable data
#include <samples/amenbeat3.h> // wavetable data
#include <samples/amenbeat4.h> // wavetable data
#include <samples/amenbeat5.h> // wavetable data
#include <samples/amenbeat6.h> // wavetable data
#include <samples/amenbeat7.h> // wavetable data
#include <samples/amenbeat8.h> // wavetable data

#define AUDIO_RATE 16000
#define CONTROL_RATE 640

// for scheduling samples to play
EventDelay kTriggerDelay;
EventDelay kTriggerSlowDelay;

byte ms_per_note = 3000; // 3000 works good the rest is a salad of noise

const byte NUM_PLAYERS = 4; // 4 are the new enough
const byte NUM_TABLES = 8;

Sample <amenbeat1_table_NUM_CELLS, AUDIO_RATE> aSample[NUM_PLAYERS] ={
  Sample <amenbeat1_table_NUM_CELLS, AUDIO_RATE> (amenbeat1_table_DATA),
  Sample <amenbeat2_table_NUM_CELLS, AUDIO_RATE> (amenbeat2_table_DATA),
  Sample <amenbeat3_table_NUM_CELLS, AUDIO_RATE> (amenbeat3_table_DATA),
  Sample <amenbeat4_table_NUM_CELLS, AUDIO_RATE> (amenbeat4_table_DATA),
};

// watch out - tables are const (but you can choose which ones you reference)
const int8_t * tables[NUM_TABLES] ={
  amenbeat1_table_DATA,
  amenbeat2_table_DATA,
  amenbeat3_table_DATA,
  amenbeat4_table_DATA,
  amenbeat5_table_DATA,
  amenbeat6_table_DATA,
  amenbeat7_table_DATA,
  amenbeat8_table_DATA
};

// gains for each sample player
byte gain[NUM_PLAYERS];

void setup(){
  for (int i=0;i<NUM_PLAYERS;i++){  // play at the speed they're sampled at
    (aSample[i]).setFreq((float) amenbeat1_table_SAMPLERATE / (float) amenbeat1_table_NUM_CELLS);
  }
  kTriggerDelay.set(ms_per_note); // countdown ms, within resolution of CONTROL_RATE
  kTriggerSlowDelay.set(ms_per_note*6); // resolution-dependent inaccuracy leads to polyrhythm :)

  startMozzi();
}


byte randomGain(){
  return rand((byte)80,(byte)255);
}

void updateControl(){
  static byte player = 0;
  static byte knob1 = 0;
  static byte knob2 = 0;

 // Read the analog value from A3/A1 to speed down/up the sample rate
  int speedDown = analogRead(A3);
  float PitchA = map(speedDown, 0, 1023, 8000, 2000);
// Set the sample rate for each sample player
  for (int i = 0; i < NUM_PLAYERS; i++) {
    aSample[i].setFreq(PitchA / amenbeat1_table_NUM_CELLS);
  }

int speedUP = analogRead(A1);

if (speedUP > 1) {
  float PitchB = map(speedUP, 0, 1023, 8000, 20000);
  // Set the sample rate for each sample player
  for (int i = 0; i < NUM_PLAYERS; i++) {
    aSample[i].setFreq(PitchB / amenbeat1_table_NUM_CELLS);
  }
}
// selecting the samples to trigger in a range of 1-8 via knob position A & B
  byte RangeA = analogRead(A0) > 0 ? map(analogRead(A0), 0, 1023, 1, 8) : 0;
  byte RangeB = analogRead(A2) > 0 ? map(analogRead(A2), 0, 1023, 1, 8) : 0;

  if (knob1 != RangeA || knob2 != RangeB) {
    knob1 = RangeA;
    knob2 = RangeB;
    Serial.print("Knob 1: ");
    Serial.print(knob1);
    Serial.print(", Knob 2: ");
    Serial.println(knob2);
  }
 
  if (kTriggerDelay.ready()) {
    gain[player] = randomGain();
    if (knob1 > 0 && knob2 > 0) {
      (aSample[player]).setTable(tables[(knob1) + (knob2)]);
    } else {
      (aSample[player]).setTable(tables[rand(NUM_TABLES)]);
    }
    (aSample[player]).start();
    player++;
    if (player == NUM_PLAYERS) player = 0;
    kTriggerDelay.start();
  }

  if (kTriggerSlowDelay.ready()) {
    gain[player] = randomGain();
    if (knob1 > 0 && knob2 > 0) {
      (aSample[player]).setTable(tables[(knob1) + (knob2)]);
    } else {
      (aSample[player]).setTable(tables[rand(NUM_TABLES)]);
    }
    (aSample[player]).start();
    player++;
    if (player == NUM_PLAYERS) player = 0;
    kTriggerSlowDelay.start();
  }
}

int updateAudio(){
  long asig=0;
  for (byte i=0;i<NUM_PLAYERS;i++){
    asig += (int) (aSample[i]).next() * gain[i];
  }
  asig >>= 8; // shift into usable range
  //clip any stray peaks to max output range
  return (int)constrain((int)asig,-244,243);
}


void loop(){
  audioHook();
}
