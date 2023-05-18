#ifndef amenbeat5_table_H_
#define amenbeat5_table_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include "mozzi_pgmspace.h"
 
#define amenbeat5_table_NUM_CELLS 1819
#define amenbeat5_table_SAMPLERATE 8000
 
CONSTTABLE_STORAGE(int8_t) amenbeat5_table_DATA [] = {5, 23, 7, -23, 25, -14,
15, -35, 5, -8, 18, 31, -10, 73, 55, 11, 60, 59, 27, 61, 34, 51, 31, 35, -20,
-27, -25, -43, -54, -60, -45, -50, -52, -31, -40, -48, 9, 4, 33, 60, 60, 55, 83,
77, 66, 58, 24, 44, 23, 20, -2, -45, -14, -26, -74, -90, -56, -81, -68, -83,
-54, -50, -26, 30, -3, 18, 5, 31, -16, 1, 52, 22, 32, 30, -11, 9, 49, 22, 17,
43, 11, 9, -18, -15, 9, -29, -61, -18, -33, -37, 12, -43, -12, -39, -28, -13,
-7, -16, -13, -30, -29, 40, 25, 22, 25, 49, 44, 27, 19, 31, 23, 6, 31, 11, 11,
-14, -32, 20, -30, -48, -18, -26, -37, -37, -67, -60, -7, 0, -27, -13, 44, 20,
0, 64, 51, 29, 47, 49, 61, 15, 9, -5, -4, -9, -36, 29, 5, -20, -5, -46, -33,
-46, -39, -42, 4, -8, -9, 22, -1, 41, 36, 55, 42, 48, 36, 29, 17, 22, 34, 46,
16, 11, 34, 0, -14, -49, -12, -11, -12, -45, -2, -7, -26, -14, -28, 16, 1, -3,
-15, 7, 22, -36, -3, 48, -36, 6, 26, 35, 53, -18, -14, 1, 10, 10, -41, -30, -28,
-24, -17, -66, -9, -30, -9, -5, -23, -2, 11, 7, -23, 20, 7, -2, 19, 51, 8, 3,
25, 10, 30, 26, 26, 22, 15, 13, 4, -11, -14, 27, -1, 9, 32, 0, -21, -19, 15,
-16, -18, -17, 17, -34, -18, -6, -11, 19, -9, 11, 52, 10, 8, 36, 1, 39, -12, 8,
-7, 3, 23, -28, -10, -19, -29, -13, -11, -8, -22, -17, -13, 16, -2, -44, 24, 30,
28, 13, 2, 17, -15, 7, 15, -29, -9, 1, 28, -22, -38, 4, 3, 7, 19, -30, -15, 14,
-55, 10, -19, -13, -2, -2, 8, 0, -1, -5, 27, 11, 30, 7, 22, 28, 18, 0, 8, -4,
21, -11, -17, 17, -53, -27, -13, -13, -44, -31, 0, 0, -23, -3, 0, -5, 31, 1, 7,
-4, 23, 0, -18, 30, -15, 28, 18, 6, 15, 21, 1, -11, 3, -17, -2, -43, 3, 0, -37,
-28, -22, -32, 6, -40, -24, 11, -5, 14, -8, 13, 22, 18, 24, 31, 3, 57, 3, 32,
23, -6, 38, 3, 9, -2, 3, -24, 8, 0, -22, -7, -7, -12, -22, -20, -18, -21, -5,
-18, -2, 29, -15, 8, 18, 21, -14, 10, 28, 1, 4, -28, 9, 0, 0, -24, 3, 10, -8,
-18, -7, 12, -37, -11, -11, -16, -6, 6, -4, -21, -13, 16, -8, 4, 19, -7, 29,
-23, 8, 25, -18, 25, -4, 22, 9, -1, 8, 1, 18, -7, -4, 9, -6, -24, 7, -22, -11,
21, 12, -4, -5, -13, -15, -11, -22, -23, -7, -7, -14, 8, -18, 11, 4, -19, 3, 4,
8, 5, -3, 10, 8, -2, 4, 9, 28, 12, 15, 16, -17, 6, 14, -17, -15, -6, 10, -29,
-8, -14, -8, -1, -13, 23, -17, 10, -17, -3, 3, 12, 20, 9, 36, -4, 30, -6, 0, 0,
-10, 1, -3, 22, -13, -5, -11, 15, -3, -24, 14, -4, 10, -1, -13, -9, -9, 8, -9,
0, -3, -16, -11, -8, -15, -8, 3, 0, 9, 6, -1, -1, 7, 24, 12, 2, 15, 10, 5, -6,
3, -6, -4, 6, 7, -15, 11, 2, -21, 0, -7, -3, 3, 2, 1, 1, 1, 21, -1, -3, 4, 17,
-1, 3, -12, -2, -1, -6, -3, -7, 8, -6, -11, -17, -2, -18, -5, -11, 5, -5, -14,
-6, 0, 2, -5, 3, 4, 3, -1, 11, 4, 13, -4, 7, 25, 5, 7, 1, -5, 6, -9, 12, -3, 0,
9, -14, 0, -8, 0, -19, 3, 2, 0, -6, -8, 8, -11, -14, 7, 1, -3, -3, -14, 8, -16,
2, -4, 5, 6, 0, -11, 8, 6, -16, 9, -6, 10, 0, 0, -2, 5, 1, 9, 10, 7, 13, 1, -5,
8, -4, -3, 0, -10, 9, -2, -8, -13, 2, -13, -4, -7, -6, 1, -10, 3, -6, 6, 0, -6,
1, 5, 7, 6, 0, 5, 6, 8, 5, 7, 6, 1, 11, 0, 6, 7, 7, 5, 1, 2, 8, -13, -6, -7,
-13, -3, -14, -15, -15, -19, -17, -24, -6, -12, -16, 16, -14, 0, -1, 11, 3, -1,
14, -1, 7, 19, -4, 11, 23, 6, 14, 5, 9, -3, 12, -3, 7, 1, 3, -2, -7, 8, 4, -8,
0, -4, -6, 12, -9, -7, -12, -4, -9, 1, -10, -8, -9, 5, 1, -13, -6, -10, 1, -2,
-9, -2, 9, -1, -3, -9, 13, -1, 5, 10, -6, 2, 1, 5, 11, 5, 7, 5, 6, 19, 1, 9, 10,
10, 7, -1, 11, -3, 0, -3, -9, -8, -15, -5, -16, -7, -15, -15, -11, -14, -10,
-14, -4, -6, 0, -2, -6, -2, 5, 2, 0, 0, 8, 2, 11, 9, 0, 6, 7, 7, 2, 5, -3, -3,
1, -4, -3, -4, -2, -5, -7, 0, -3, 2, -1, -2, -3, -3, -1, 0, 0, 8, -2, 0, 9, 6,
2, 1, 2, -9, 6, -5, 0, -6, 5, 1, -6, 6, -4, 0, -3, -8, 1, -10, -5, -5, -11, 8,
-11, 2, 8, 9, -1, 0, 10, -1, 3, 3, 0, 1, -2, -1, 0, -2, 2, -5, 1, -1, 0, -1, -5,
0, 2, 0, 2, 1, 4, 3, 4, 6, -4, 8, 3, 0, 3, -2, 6, 0, 4, 1, -3, 7, 1, -7, 0, 3,
-14, 0, -5, -1, -8, -8, -1, -14, 1, -8, -3, -8, -3, 2, -7, 9, -6, 0, 6, 2, 10,
5, 5, 11, 0, 5, 5, -3, 3, -4, -1, -3, -7, -4, -8, -8, -7, -5, -5, -6, 3, -3, 3,
-1, 7, 1, 1, 12, -2, 3, 5, 2, -3, 5, 1, 2, -6, -1, 0, -5, 4, -4, -1, 0, -2, -3,
-6, -6, -5, -9, -7, -1, -7, -3, 4, -14, 3, 5, -5, 4, 2, 6, 8, 6, 6, 6, 1, 7, 2,
-1, 6, -1, -3, -8, -4, 0, -7, -1, -7, -6, -3, -9, 2, -6, -2, 3, -3, 5, -1, 5, 6,
6, 10, 6, 9, 10, 6, 3, 1, 3, 3, -3, -2, 0, -8, -3, -7, -13, -2, -17, -6, -16,
-10, -1, -10, -1, -5, 1, -8, 2, 2, -2, 6, 4, -1, 5, 4, 2, 11, 4, 4, 10, 4, 9, 2,
2, -2, 0, 4, -8, 4, -9, -8, 0, -7, -6, -3, -4, 0, -10, -4, 3, 1, 0, -3, 4, -2,
0, -4, -1, -1, -5, -3, -7, -5, 0, -9, 4, -5, -5, 2, -1, 1, 1, 5, 0, 9, 3, 7, 1,
7, -2, 0, 6, 0, 5, -3, -4, 4, 4, -2, 6, -2, -3, 3, -2, -1, -4, -1, -4, -5, -5,
-7, 0, -12, -6, -8, -1, -6, -9, 0, -1, 0, 3, 4, 4, 8, 3, 10, 7, 6, 7, 8, 4, 0,
3, -1, -11, 0, -4, -6, -6, -8, -3, -13, 1, -5, -8, -2, -5, -11, -1, -3, -4, -1,
3, -1, 1, 8, 0, 9, 3, 10, 5, 9, 7, 3, 7, 2, 5, 0, 1, -3, -1, -6, -4, -4, -14,
-3, -5, -12, -4, -10, 5, -6, 2, -2, -7, 11, -5, 0, 1, 4, -2, 0, -1, 3, 1, -1, 0,
1, 0, -5, 5, 0, 1, 0, 2, -4, 1, 4, -3, 0, 5, 3, -2, 5, 2, -1, 4, 2, 5, 1, 5, 2,
-4, 8, -2, -4, -3, -6, -7, -8, -6, -7, -16, -7, -5, -8, -7, -4, -3, -6, 4, 1, 4,
2, 14, 6, 5, 8, 4, 4, 2, 8, 0, 5, -1, 2, 0, 1, -2, -5, 0, -3, -6, -3, -6, -5,
-1, -9, -1, -7, -1, -3, 0, -1, -1, 4, -4, 0, 2, 4, -3, 3, 1, -2, 2, 1, 1, 0, -2,
3, 1, -5, 3, 1, 0, 1, 3, -1, 1, 3, -5, 5, 0, 1, -1, -2, 4, -7, 2, -4, -4, 0, -1,
-2, -5, 0, -3, -5, -4, 0, -5, -6, -2, -1, -3, -4, -4, 3, -2, 1, 2, -5, 10, -1,
7, 8, 5, 8, 7, 3, 2, 6, 3, 3, -1, 1, -1, -3, -1, 0, -5, -1, -6, -4, -3, -7, -1,
-4, -3, -2, -2, -2, -3, -1, -2, -3, -7, 4, 3, -6, 2, 0, 0, 0, 2, 1, 4, 1, 1, 1,
1, 4, -2, 2, 1, -7, 3, 1, -5, -3, -2, -1, -5, 3, -3, -5, 2, 2, -7, 1, 2, 0, -4,
2, 5, -1, 4, 2, 1, -2, 1, -3, 3, -4, -2, 1, -5, 0, -1, -4, 2, -2, -2, -1, -1, 0,
1, 2, -3, 3, -4, 4, -5, -1, 1, -6, 4, -11, 0, -4, -3, -1, -11, 1, -5, 2, 0, 0,
2, 3, 4, 2, 7, 0, 4, 4, -1, 0, 2, 2, 2, -4, 4, -1, -4, 6, -6, 4, -5, 1, -4, -2,
4, -8, 2, -4, 3, -6, -2, 3, -8, 0, -5, -5, -2, -5, 3, -2, -4, 4, -3, 0, 3, 0, 0,
4, -1, 3, 3, -2, 3, -1, -1, -2, 2, -4, -3, 4, -3, 0, 1, 4, -1, 1, 2, 1, 0, 0, 0,
1, 0, -2, 0, -3, -4, -8, 0, -6, -3, 0, -5, 0, -5, 3, -3, -5, 1, -3, 0, 0, 0, -2,
5, 0, 1, 2, 0, 6, -4, 5, 4, 1, 3, -1, 4, 1, 3, 0, -3, 5, -2, -2, -4, -2, -1, -6,
-2, -3, -7, -1, -7, -1, -5, -6, 3, -3, -1, -9, 8, -3, 3, -3, 2, 4, -4, 7, -2, 5,
-2, 3, 1, -2, 6, -1, 3, 3, 1, 2, 1, 5, 5, 1, 1, 2, -2, 8, -6, -3, 1, -5, -4, 2,
-2, -10, 1, -9, -1, -4, -6, 0, -10, -3, -2, -5, -3, -7, 0, 3, -4, -3, 2, -3, 4,
1, -2, 7, -2, 4, 5, 0, 5, 4, 7, 3, 1, 6, 6, -1, -1, 3, -1, -7, -1, -2, -7, -5,
-7, -5, -13, 1, -9, -9, -5, -5, -1, -7, 1, 1, -1, 3, 4, -3, 6, 1, 4, 4, 0, 2, 5,
0, 3, 0, 1, 3, -1, 4, 1, 6, -6, 3, 1, 0, -1, 1, 1, -6, -2, -2, -2, -6, 1, -5,
-1, -4, -3, -2, -3, -1, -2, -1, -3, 1, 0, 2, -3, 3, 3, -4, 3, 1, -1, 0, 3, 3,
-1, 3, -1, 3, 0, -1, 4, -1, 6, -4, 2, 5, 1, -1, -2, -2, 0, 2, -6, -2, -1, -6, 0,
-3, -2, -4, -6, -4, -1, 5, -6, 2, -2, -1, -1, 1, 6, 2, 0, 4, 0, 1, 0, 0, 8, -4,
-1, 0, 6, -1, 10, 0, -10, 3, -3, 6, 8, };

#endif /* amenbeat5_table_H_ */