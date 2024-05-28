#ifndef MYLIB_H
#define MYLIB_H

// INPUT FUNCTIONS
int input(char string[]);

// MATRIX FUNCTIONS
void fmatrix(int R, int C, int matrix[][C]);
void smatrix(int R, int C, int matrix_0[][C], int matrix_1[][C], int matrix_2[][C]);
void pmatrix(int R, int C, int matrix[][C]);

// GHRAPIC FUNCTIONS
void welcome(void);
void endl(void);

#endif