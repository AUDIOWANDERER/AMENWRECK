#ifndef amenbeat3_table_H_
#define amenbeat3_table_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include "mozzi_pgmspace.h"
 
#define amenbeat3_table_NUM_CELLS 1819
#define amenbeat3_table_SAMPLERATE 8000
 
CONSTTABLE_STORAGE(int8_t) amenbeat3_table_DATA [] = {-1, 8, -1, -12, 9, -6, -2,
0, 28, -51, 16, 23, -16, -7, 20, 5, -19, 30, -27, 11, 6, 8, -14, 12, -6, -14, 8,
-13, 2, 1, 9, 0, 9, -13, -4, 15, -13, 4, 5, 6, -4, -3, -3, -1, 9, -11, 10, -15,
-5, -5, 6, -10, 1, -3, -2, 2, -11, 9, 2, 14, 3, 10, -11, 12, -4, -5, 6, -1, -9,
-5, -1, -7, 7, -10, 3, 5, -1, -5, 5, -4, -7, 4, -5, 0, -1, -2, 13, -1, 1, 7, 6,
1, -1, -1, 0, 0, -4, 0, -7, -1, -6, -8, -3, -2, 1, 1, -13, 17, -9, -8, 9, -3, 9,
0, 1, 9, -3, 1, 15, -8, 8, 11, 7, 10, 10, -11, 6, 0, -1, 1, -5, 0, -12, -7, -8,
-12, -14, -7, -18, -13, -10, -6, -5, 5, -10, 1, 8, 5, 8, 5, 11, 8, 18, 11, 15,
1, 4, 10, -15, 6, -1, -9, 0, -14, -4, -10, -2, 0, -15, 3, -5, -4, -3, -3, -5,
-1, 2, -5, 13, -8, 11, 5, 5, 2, 5, -3, 2, 3, -15, 14, -13, 5, 5, -1, -8, -4, 1,
-2, -12, -1, -2, -16, 14, 0, 4, 8, -6, 2, 5, 9, -5, 3, 10, -7, 5, -7, 2, -2, -8,
0, -7, 0, -1, -13, 6, -5, -11, 3, -1, -5, 4, -5, -2, 8, -8, 6, -3, 8, -8, 15, 8,
3, 3, 4, 8, -5, 11, -5, 0, -4, 6, -8, 8, -10, -2, -4, -7, -2, -15, 1, -2, 1, -7,
-7, -1, 1, -6, 7, -3, 6, -1, 7, 0, 8, 4, -3, 2, -6, 10, -1, 4, 2, 1, -11, 5, -3,
4, -5, 2, 2, -4, -3, -3, -1, -6, 4, -8, 8, -10, 8, -9, -1, 6, -3, 7, 5, -7, -1,
5, -1, -4, -1, 8, -7, 7, -4, 2, -2, -2, -2, 4, -11, 10, -8, -8, 11, -14, 0, 3,
-1, -4, 4, -2, 3, -9, 5, -8, 11, -2, 4, 2, -3, 10, -10, 10, -6, 6, -10, -2, -1,
-7, -2, -1, -5, -6, 1, -5, -1, 2, 0, 1, 2, -1, 4, -6, 8, 0, 4, 4, 3, 0, -4, 6,
-2, 1, 2, 5, -6, -4, 2, -2, 0, -1, -2, -3, 1, -7, -4, 4, -7, -3, -8, 2, -2, 1,
1, 0, 9, 0, 9, 2, 5, -5, 6, -1, 4, 3, 1, -2, -5, 6, -3, 3, -3, 4, -11, 1, 0, -6,
-4, -4, -5, -5, -5, -7, 5, -5, 7, 1, 1, 4, 1, 3, 0, 4, 6, 0, 5, 1, 4, 4, -1, 0,
-3, -3, -5, -5, -9, -4, -6, -6, 0, -5, -2, 4, -6, 7, 1, 4, 0, 3, 2, -2, 5, -1,
7, 2, 3, -2, -1, 3, -1, -1, 3, -6, 1, -14, 5, 0, -1, -1, -5, 7, -6, 5, -5, 3, 1,
2, -7, 4, 1, -1, 0, -3, 1, -3, -3, 0, -2, -2, 4, 1, -1, -2, 8, -8, 1, -3, 2, -3,
0, -2, -3, -1, -1, -3, 0, 0, -1, 8, -6, 8, -11, 5, -2, 4, 8, -5, 5, -1, -1, 6,
-1, -3, 4, -10, 2, -3, -5, -1, -4, -3, -1, -8, 2, -5, 1, 0, -2, 2, -3, 2, 1, 3,
-2, 3, 4, -1, 1, 5, -5, 6, 0, 5, -4, -3, 1, -3, -1, -2, -3, -3, 1, -6, -1, -6,
3, -6, -2, 3, -3, -1, 6, -3, 3, 1, 4, 3, 0, 6, -6, 6, 2, -1, 3, -3, -5, -1, -2,
-3, -8, 1, -8, -8, -5, -6, -5, 0, -2, 0, 1, -3, 7, -3, 4, 2, 10, -3, 4, 5, 5, 3,
3, 8, -1, 3, -2, 1, -5, 3, -2, -4, -5, -3, -7, -4, -7, -3, -3, -4, 1, -9, 1, -1,
-4, 2, 2, 5, 2, 0, 13, -1, 7, 3, 4, 1, -2, 7, -9, 0, -4, 0, -10, -2, 0, -6, -3,
-2, 4, -5, 5, 4, 2, 0, 3, -2, 3, 1, -5, -1, -4, -1, 1, -4, -2, 4, -1, 1, -4, 3,
-2, 3, 5, -5, 2, -1, 0, 2, 2, -1, 4, 1, 4, -6, -7, 6, -12, -3, 0, -1, -3, 3, 0,
-6, 4, 1, 5, 0, 4, 1, -4, 6, 1, 0, -1, -2, 6, -7, 1, -4, -2, 0, -9, -1, -2, -7,
-7, 8, -3, 0, 2, 2, -1, -1, 1, 0, 6, 1, 8, -3, 5, 5, 2, 8, -1, 6, -2, -3, 1, -3,
-6, -8, -1, -3, -11, 0, 2, -4, -4, 4, -3, 1, 0, -5, 3, -4, 7, 2, 1, 6, 4, -1, 0,
2, -1, 1, -4, 1, -7, -3, 1, -7, -2, 2, -4, 3, 2, -3, -1, -1, 2, -6, 5, -1, -4,
3, -1, 1, 0, 2, 4, 1, 2, 0, 3, 2, -6, 0, 0, -6, -9, 4, -9, -9, 0, -6, 1, -2, 4,
-1, -3, 4, 1, 5, 2, 1, 3, 5, 3, -1, 4, 2, -1, 2, 1, -1, 2, -7, -6, -7, -4, -2,
-1, -9, -1, -5, -3, 0, -9, 0, -8, 5, -7, 1, 3, 2, 1, 0, 10, 2, 7, 0, 4, 3, 3, 3,
-1, 0, -1, 5, -2, -5, -1, -6, 2, -6, 0, -1, -10, -1, -8, -6, 1, -5, -2, 4, -6,
4, 0, 7, 3, 2, 6, 7, 9, -1, 18, -5, -2, 3, -12, -7, -12, -2, -26, -14, -2, -5,
5, -6, 9, 3, 14, 12, 9, 11, 0, 12, 14, 11, 7, 1, 12, 10, -1, 0, -18, -7, -23,
-33, -22, -31, -34, -26, -22, -15, 4, 4, 13, 15, 20, 20, 33, 32, 20, 26, 17, 24,
20, 9, 9, 8, -1, -12, -15, -17, -28, -31, -27, -34, -27, -18, -23, -13, 3, -3,
-3, 10, 17, 13, 13, 7, 10, 13, 12, 20, 13, 16, 15, 14, 9, 2, -6, 1, -13, -17,
-3, -16, -5, -21, -9, 7, -14, -6, -4, -17, -3, -6, -7, -16, -3, 8, -1, 21, 7,
12, 17, 20, 16, 4, 14, 7, 11, 13, -13, -4, 9, -8, -20, 0, -10, -28, -13, -20,
-27, -25, -5, -3, -10, 9, 3, 20, 19, 15, 22, 24, 20, -2, 16, -4, 3, 1, 6, -6,
-6, -1, -10, -3, -10, -5, -26, -21, -18, -9, -24, -9, -10, 1, 11, 9, 13, 7, 22,
9, 10, 0, 6, 4, 4, 9, 9, 7, 4, -5, 1, -5, -4, -11, -15, -16, -7, -11, -28, 16,
-13, -7, 17, 3, -7, 7, 8, 3, 0, 1, 6, 0, 5, -1, 0, 2, 8, 13, 12, -2, -3, 0, 0,
-26, 8, -9, -11, 13, -11, 1, -3, 6, -5, -6, 2, -2, -1, 7, -5, -1, -2, 10, 4, -3,
18, -5, 8, 3, 6, 7, -13, 1, -15, 3, -1, -8, -1, -2, -3, -9, 6, -15, -6, 1, -2,
-13, -1, 18, 4, 5, 14, 6, 5, 0, -3, 1, 1, -6, -4, 4, -6, 2, -7, 6, -13, 12, -2,
-6, 6, -7, 4, -5, 4, -15, 2, -2, -1, -5, 12, -13, 16, 10, -6, 8, -7, 20, -8, 2,
-4, 10, -4, 6, 1, -1, 3, -15, -1, -12, -5, -11, 0, -7, -4, -8, -3, 12, -3, 4, 0,
11, 0, -1, 12, -1, 5, -2, 7, 4, -2, 2, 0, -5, -5, -6, -4, -12, -11, -4, -13, -2,
-4, 3, 3, 0, 10, -1, -1, 10, -6, 5, 3, 11, 2, -3, 18, -4, 7, 2, 4, 6, -11, 4,
-10, -5, 0, -9, -7, -2, 0, -8, 3, -5, 4, 0, 4, -8, 4, 8, -9, 14, -2, 7, 7, -3,
8, 4, -2, 4, -10, 4, -4, -11, 3, -7, 3, -8, 7, -8, -3, 1, -9, -2, -9, 2, -10, 4,
4, -2, 5, 12, 10, 8, 7, -3, 4, -2, 2, -3, 5, 0, -7, -3, 6, -1, -10, 2, -5, -1,
-10, 0, -6, -2, -9, 0, -1, -4, 5, -5, 8, -8, 5, -1, 4, -2, 3, 1, 1, 15, 1, 5, 0,
1, 4, -6, -6, 3, -10, 2, -4, -9, 1, 2, -3, -15, 5, 2, -7, 0, -3, -3, 2, -3, -1,
5, -7, 7, 7, -1, 6, 5, 0, 1, 0, -3, 6, -4, 1, -4, 3, 1, -7, 6, -2, -6, 1, -6,
-3, 0, -5, 0, -2, -1, -1, 3, -5, 5, 1, -2, -4, -2, 3, -5, 8, -4, 1, 6, 3, 0, -4,
5, -3, -6, 4, -6, -4, -3, 2, -6, -3, 8, -3, -1, 1, 6, -2, 0, -3, 3, -3, -2, 1,
-2, 0, 1, 1, -1, 1, -1, -6, 2, -3, -6, 4, -13, 5, -2, -1, 5, -3, 5, 1, 0, 1, -4,
0, -2, -3, 3, -4, 2, -5, 3, 1, -4, 5, 0, -7, 2, 1, -5, 3, 1, 0, 4, 7, -4, 3, 2,
-2, -2, -2, -5, -3, -5, -2, -1, -2, 0, -4, 1, -2, 6, -3, 3, 2, 2, 0, 0, 2, -3,
5, -2, 0, -4, 1, -4, -5, 4, -5, -6, 1, -6, -1, 0, -7, 5, 1, -1, -2, 5, -1, -1,
0, -1, -2, -2, 2, -6, 2, 2, -1, 0, 3, -4, 2, -5, -3, 0, -5, 2, -3, 1, 0, 2, -3,
0, 1, -1, 0, 0, 1, 3, 5, -2, 3, 1, -1, 2, -1, 4, -3, -2, 3, -1, -6, 0, 0, -5, 2,
-1, -5, -1, 2, -3, -3, 1, 4, -6, 0, 3, -4, 1, 0, -2, 4, -4, 5, 2, -6, 7, 0, -1,
2, 6, -4, 5, -5, 1, -7, -6, 5, -12, -2, -7, -2, -5, -5, -3, -5, 0, 0, 3, -5, 2,
8, 2, 1, 7, 2, 2, 6, 1, -3, 8, 5, -6, 1, -3, -2, -9, 2, -4, -4, -4, 0, -1, -4,
3, -8, -1, 1, -1, -4, 5, -2, -3, 2, 5, -7, 9, 0, 5, -1, 0, 2, 2, -2, 0, 9, -9,
3, -5, 2, -12, 25, -35, 14, 3, -15, 3, -4, 8, -26, 31, -26, -2, 13, 2, -17, 13,
-7, -12, 17, -13, 0, 3, -15, -9, 18, -29, 6, 6, -19, 2, -2, -9, -8, 9, -7, 2, 3,
-11, 14, 3, 14, 16, 7, 0, 12, 0, -1, 20, 2, 7, 11, 1, 3, 3, -5, -1, -8, -6, -25,
-16, -24, -27, -31, -44, -25, -30, -31, -22, -18, -18, -3, 0, 7, 20, 23, 35, 44,
43, 62, 58, 59, 61, 53, 50, 44, 41, 26, 11, 10, -6, -13, -16, -34, -29, -36,
-37, -41, -41, -40, -31, -40, -31, -30, -32, -21, -30, -24, -19, -13, -13, -6,
-13, 0, -7, 0, 4, -2, 5, 7, 9, 7, 9, 13, 13, 12, 18, 12, 11, 16, 16, 8, 13, 10,
15, 6, 8, 10, 9, 12, 17, };

#endif /* amenbeat3_table_H_ */