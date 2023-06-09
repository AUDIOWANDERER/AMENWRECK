#ifndef amenbeat4_table_H_
#define amenbeat4_table_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include "mozzi_pgmspace.h"
 
#define amenbeat4_table_NUM_CELLS 1819
#define amenbeat4_table_SAMPLERATE 8000
 
CONSTTABLE_STORAGE(int8_t) amenbeat4_table_DATA [] = {-2, -1, 6, 0, 0, 2, -5, 2,
-13, 3, -4, -9, -2, -7, 0, -8, -2, -5, -2, 0, 3, 0, -4, 7, 6, 0, 4, 6, 0, 5, 5,
-1, 0, 11, -2, -2, 0, -2, -5, -5, 3, -7, -2, -5, 3, -6, 2, -3, -6, 1, 1, -4, 1,
3, -3, -2, 6, -1, -2, 9, -2, 7, -6, 5, -2, 5, -8, 11, -4, -2, -3, 2, -10, 8, 4,
-32, 32, -24, 6, -11, 14, -19, 3, 14, -30, 15, 6, -6, -10, 17, -23, 10, 2, -10,
4, -2, -22, 11, -2, -25, 20, -13, -10, 2, -5, -12, 1, 5, -9, 10, -9, 1, 12, 4,
19, 11, 3, 4, 12, -8, 13, 13, 1, 12, 7, -1, 6, -3, -2, -5, -6, -14, -24, -14,
-30, -24, -41, -35, -24, -33, -27, -19, -20, -12, 0, 1, 14, 22, 26, 42, 42, 51,
64, 55, 62, 57, 52, 46, 43, 36, 18, 10, 6, -13, -11, -25, -33, -31, -38, -38,
-42, -41, -36, -33, -40, -26, -35, -24, -26, -28, -22, -16, -14, -9, -9, -9, 0,
-8, 6, -1, 1, 6, 9, 8, 8, 11, 15, 11, 16, 16, 10, 13, 18, 11, 10, 12, 12, 13, 4,
11, 8, 11, 14, 17, 11, 14, 11, 12, 9, 11, 13, 9, 12, 11, 12, 13, 19, 8, 22, 11,
9, 14, 11, 15, 2, 12, 4, 3, -4, -4, -9, -21, -27, -31, -31, -43, -38, -51, -45,
-54, -56, -48, -49, -54, -50, -53, -49, -39, -49, -33, -31, -29, -20, -15, -7,
8, 8, 20, 34, 37, 47, 59, 58, 65, 71, 72, 77, 74, 76, 68, 67, 65, 52, 50, 43,
33, 32, 15, 17, 10, -6, -1, -15, -19, -25, -32, -32, -46, -46, -50, -52, -62,
-61, -60, -67, -55, -55, -53, -53, -42, -39, -33, -23, -20, -16, -12, -4, -7,
-6, 3, 5, 2, 4, 8, 4, -1, 6, 0, 2, 4, 9, 5, 10, 17, 6, 21, 17, 20, 24, 24, 29,
24, 27, 29, 26, 26, 28, 27, 21, 29, 26, 16, 25, 16, 11, 11, 6, 0, 2, 3, -1, -4,
-14, -4, -15, -12, -19, -24, -17, -26, -27, -26, -26, -36, -26, -28, -32, -32,
-25, -26, -26, -16, -20, -17, -9, -13, -8, -9, -3, 0, 1, 14, 3, 16, 7, 12, 21,
13, 22, 22, 24, 23, 24, 28, 32, 27, 29, 30, 28, 30, 27, 28, 29, 19, 20, 15, 11,
16, 9, 8, 11, 12, 4, 8, 9, 0, 1, -7, -4, -8, -11, -8, -16, -11, -20, -17, -18,
-28, -26, -25, -27, -36, -26, -25, -32, -31, -31, -31, -33, -26, -29, -24, -20,
-27, -16, -25, -18, -19, -22, -11, -16, -6, -8, -3, -6, -4, 4, -3, 3, 3, 6, 5,
7, 14, 6, 18, 13, 15, 17, 20, 21, 18, 29, 21, 26, 26, 26, 23, 25, 21, 17, 26,
19, 16, 20, 17, 19, 12, 16, 13, 9, 12, 6, 13, 6, 6, 2, 6, -4, -4, 2, -9, -6, -7,
-9, -10, -13, -16, -15, -20, -16, -17, -21, -18, -17, -19, -21, -17, -11, -19,
-12, -10, -12, -5, -4, 0, -1, 3, 1, 4, 9, 10, 7, 14, 14, 7, 16, 8, 8, 12, 12,
14, 3, 14, 11, 6, 11, 4, 6, 2, -2, -4, -5, -12, -11, -13, -18, -16, -22, -25,
-22, -28, -24, -29, -31, -27, -35, -28, -29, -27, -29, -23, -28, -22, -24, -22,
-17, -26, -7, -21, -18, -9, -12, -9, -9, 0, -1, -7, 12, 2, 1, 9, 9, 6, 14, 17,
6, 20, 12, 25, 13, 21, 24, 19, 29, 24, 28, 28, 38, 33, 34, 38, 43, 39, 38, 45,
39, 36, 41, 33, 36, 25, 26, 28, 18, 22, 10, 12, 10, 7, 5, 4, 3, 4, -2, -9, -2,
-6, -9, -9, -12, -9, -21, -11, -17, -23, -14, -22, -17, -20, -20, -21, -23, -24,
-20, -23, -21, -22, -27, -24, -20, -27, -18, -20, -24, -23, -23, -15, -23, -12,
-18, -15, -12, -7, -14, -10, -5, -8, -7, -2, 1, -7, -1, 1, -3, -2, 5, 1, 5, 0,
0, 2, 1, -5, -4, -3, -8, -4, -9, -5, -15, -6, -8, -15, -5, -10, -7, -3, -5, 0,
-3, -1, 3, -4, 4, 5, 2, 6, 9, -1, 11, 4, 8, 10, 2, 15, 5, 12, 13, 6, 11, 18, 11,
15, 17, 18, 18, 20, 25, 22, 22, 28, 24, 23, 31, 28, 29, 29, 32, 29, 30, 35, 30,
28, 32, 27, 28, 29, 30, 22, 29, 22, 19, 18, 9, 14, 10, 5, 3, 5, -2, 0, -3, -9,
-13, -13, -13, -18, -22, -18, -23, -30, -32, -30, -36, -39, -37, -40, -38, -40,
-36, -39, -34, -37, -38, -36, -36, -35, -32, -28, -37, -30, -27, -29, -23, -25,
-16, -20, -20, -7, -15, -11, -5, -10, -8, 1, -2, -2, 4, 2, 5, 2, 4, 7, 3, 7, 6,
2, 9, 7, 7, 11, 12, 7, 11, 14, 10, 14, 10, 16, 9, 11, 16, 11, 11, 13, 15, 11,
14, 11, 19, 14, 11, 16, 13, 11, 11, 12, 10, 12, 11, 13, 13, 13, 13, 8, 11, 19,
10, 16, 24, 17, 23, 18, 24, 21, 14, 25, 19, 13, 23, 24, 17, 21, 21, 16, 17, 20,
14, 13, 15, 14, 13, 5, 6, -4, -5, -2, -10, -10, -10, -19, -19, -20, -28, -27,
-33, -33, -34, -39, -38, -36, -41, -35, -42, -44, -38, -44, -39, -43, -38, -37,
-36, -38, -35, -33, -36, -27, -30, -20, -21, -23, -15, -16, -13, -10, -10, -7,
2, -5, 0, 6, 6, 6, 4, 15, 16, 13, 22, 18, 19, 23, 23, 22, 25, 29, 24, 28, 26,
31, 29, 26, 33, 26, 26, 30, 24, 22, 26, 21, 11, 23, 15, 12, 8, 8, 11, 3, 9, -1,
-1, -6, 4, 0, 2, 11, -5, -5, 0, -5, 2, 4, 10, 11, 12, 22, 10, 20, 7, 3, 3, 6,
13, 8, 5, 1, 2, -7, -7, -11, -18, -22, -32, -29, -33, -48, -52, -53, -52, -55,
-51, -52, -36, -22, -18, -5, -5, 12, 28, 31, 47, 61, 68, 70, 81, 89, 77, 65, 54,
44, 28, 9, -14, -32, -49, -59, -70, -84, -85, -88, -95, -92, -82, -78, -74, -66,
-58, -45, -37, -34, -34, -26, -17, -19, -15, -6, -7, -3, 2, -1, 5, 2, 8, 11, 18,
25, 28, 32, 39, 47, 49, 50, 54, 49, 42, 47, 42, 36, 34, 37, 26, 27, 29, 28, 28,
25, 24, 20, 25, 19, 18, 18, 18, 22, 23, 23, 22, 27, 29, 28, 27, 33, 27, 25, 24,
18, 10, 4, 3, -9, -13, -21, -29, -40, -45, -45, -56, -65, -64, -62, -64, -64,
-67, -72, -65, -65, -70, -63, -67, -64, -66, -52, -51, -45, -29, -32, -20, -9,
2, 9, 26, 33, 48, 54, 68, 78, 84, 96, 92, 94, 96, 97, 89, 83, 75, 69, 59, 49,
37, 27, 11, -2, -14, -25, -33, -48, -57, -69, -74, -79, -85, -90, -96, -95, -90,
-95, -82, -76, -70, -60, -51, -41, -34, -25, -18, -10, -4, 4, 7, 18, 22, 27, 28,
28, 26, 33, 31, 19, 24, 20, 22, 21, 22, 21, 22, 25, 24, 27, 31, 28, 30, 31, 32,
34, 30, 29, 31, 31, 26, 26, 24, 23, 19, 12, 11, 8, 7, 6, 5, 5, -1, 7, 4, 4, 9,
6, 7, 3, 3, 1, -4, -6, -11, -23, -18, -26, -37, -35, -37, -46, -47, -47, -48,
-47, -47, -47, -44, -43, -43, -40, -37, -29, -35, -22, -23, -16, -9, -9, 1, 3,
6, 14, 20, 21, 30, 31, 38, 36, 39, 42, 46, 42, 40, 42, 40, 39, 32, 35, 27, 23,
26, 15, 15, 18, 8, 4, 5, 4, 0, -2, -1, -2, -1, 4, 0, 4, 4, 3, 0, -2, -3, -4, -8,
-17, -17, -27, -26, -34, -40, -43, -48, -52, -56, -53, -54, -55, -58, -51, -49,
-45, -44, -43, -36, -31, -31, -25, -19, -16, -5, -4, 4, 8, 20, 20, 30, 39, 43,
44, 49, 59, 56, 67, 67, 72, 69, 78, 72, 73, 76, 74, 67, 66, 62, 53, 50, 43, 43,
30, 33, 21, 19, 12, 11, 4, -2, 0, -8, -11, -11, -14, -17, -16, -25, -24, -29,
-26, -35, -34, -33, -39, -37, -38, -37, -37, -38, -37, -37, -35, -31, -36, -30,
-29, -27, -22, -21, -22, -21, -20, -22, -21, -17, -21, -16, -13, -14, -8, -13,
-1, -6, -6, -1, -1, 3, 9, 10, 10, 18, 15, 19, 17, 18, 15, 11, 17, 11, 10, 6, 5,
3, -1, 2, -6, -6, -9, -8, -9, -10, -12, -14, -14, -14, -16, -13, -18, -18, -16,
-21, -11, -19, -14, -10, -14, -8, -6, -11, -3, -3, -5, 2, -3, 0, 1, -1, 1, 0, 0,
3, 3, 4, 6, 3, 8, 7, 6, 15, 17, 20, 22, 31, 34, 38, 44, 45, 47, 52, 52, 49, 52,
48, 43, 43, 37, 31, 28, 29, 23, 21, 18, 14, 11, 5, 7, -2, -3, -4, -9, -7, -9,
-6, -10, -13, -13, -16, -19, -19, -21, -22, -20, -22, -19, -23, -22, -23, -24,
-23, -25, -24, -25, -26, -27, -25, -28, -26, -25, -30, -31, -29, -31, -29, -29,
-23, -26, -22, -14, -25, -12, -12, -7, -5, 2, 1, 8, 16, 14, 16, 14, 26, 14, 19,
17, 19, 14, 18, 12, 6, 13, 7, 12, -4, 6, -1, -7, -5, -5, -12, -8, -9, -10, -12,
-9, -6, -10, -4, -5, 1, -3, 2, -3, 3, 0, 0, 8, -3, -1, 1, 6, -3, 0, 7, 1, 12,
14, 17, 18, 25, 29, 28, 32, 31, 33, 28, 30, 28, 25, 26, 21, 20, 23, 14, 21, 14,
14, 17, 9, 10, 13, 7, 6, 9, 1, 4, -1, -1, -2, -2, -5, -7, -8, 1, -5, -8, 2, -7,
-3, 1, 0, -4, -3, -4, -4, -13, -10, -13, -20, -15, -21, -22, -24, -24, -23, -24,
-28, -19, -20, -18, -13, -13, -9, -10, -7, -9, -6, -6, -6, -9, -3, -3, -5, -2,
-7, -4, -5, -2, -2, -5, 2, -2, 3, 2, 1, 4, 2, 6, 0, 6, 0, 4, 3, 2, 5, 0, 5, 2,
4, 2, 5, 0, 2, 1, -1, 0, -2, 3, 7, -1, 1, 5, 2, -3, 0, -13, -7, -17, -11, -3,
-3, 15, -7, 25, 8, 53, 15, 24, 2, -19, 24, -15, 16, -39, 11, -14, 27, 22, -4,
76, 49, 11, 66, 53, 31, 60, 34, 51, 30, 34, -26, -25, -27, -43, -56, -58, -46,
-50, -51, -29, -43, -44, 11, 3, 37, 61, 60, 55, 86, 74, 68, 54, 24, 44, 20, 22,
-8, -43, -13, -29, -79, -86, -56, -85, };

#endif /* amenbeat4_table_H_ */
