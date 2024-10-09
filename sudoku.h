#ifndef SUDOKU_H
#define SUDOKU_H

#define SIZE 9
typedef struct Sudoku{
    char board[SIZE][SIZE];
}Sudoku;

int isValid(Sudoku *s,int row,int col,int num);
int solveSudoku(Sudoku *s);
void printGrid(Sudoku *s);

#endif