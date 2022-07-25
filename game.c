#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <time.h>


// Global variables
char board[3][3];
const char PLAYER = 'X';
const char COMPUTER = 'O';


// Functions prototypes
void resetBoard();
void printBoard();
int checkFreeSpaces();
void playerMove();
void computerMove();
char checkWinner();
void printWinner(char);


// Main function
int main() {
    char winner = ' ';
    resetBoard();

    return 0;
}


// Prototypes functions started
void resetBoard() {
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            board[i][j] = ' ';
        }
    }
}

void printBoard() {

}

int checkFreeSpaces() {

}

void playerMove() {

}

void computerMove() {

}

char checkWinner() {

}

void printWinner(char winner) {

}