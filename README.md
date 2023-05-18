# AMENWRECK
Amen Breaks Random Generator for Arduino Nano 

Make using the Mozzi Library: https://sensorium.github.io/Mozzi/

Modifiying the "Samples_Tables_Arrays" example and replacing the audio samples with the amenbreak copped and compatibles with Mozzi 

The samples used coming from the classic song from The Winstons "Amen , Brother" https://www.youtube.com/watch?v=GxZuq57_bYM

The Amen Break was chopped in 8 parts to be rearranged in a random way.
Method to create the audio samples is described on the Mozzi library api: https://sensorium.github.io/Mozzi/doc/html/char2mozzi_8py.html

Exporting the audio to signed 8-bit in raw to later on convert using char2mozzi.py in a wavetable.
Ensure you have python installed with all the options selected to work in comand prompt enviroment.

Attention! The converted chopped amenbreaks (amenbeat1.h and friends) must be storaged on the generic sample folder inside mozzi library folder to work properly

More details, info and videos: https://www.youtube.com/@audiowanderer

