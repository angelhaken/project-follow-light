#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 30

typedef struct {
  int x, y;
} coord;

void generate_random();
void set_board(int board[SIZE][SIZE]);
void print_board(int board[SIZE][SIZE]);
// void (int board[SIZE][SIZE]);
coord obstacle(coord obst);

void generate_random() {
  int value = 0;
  value = 1 + ((int)rand() % SIZE);
  printf("%d ", value);
  // return value;
}

coord obstacle(coord obst) {
  obst.x = (int)rand() % SIZE;
  obst.y = (int)rand() % SIZE;
  return obst;
}

void set_board(int board[SIZE][SIZE]) {
  for (int i = 0; i < SIZE; i++) {
    for (int j = 0; j < SIZE; j++) {
      board[i][j] = 0;
    }
  }

  // set the borders of the board
  for (int i = 0; i < SIZE; i++) {
    board[0][i] = 1;
    board[SIZE - 1][i] = 1;
    board[i][0] = 1;
    board[i][SIZE - 1] = 1;
  }

  // fill the board with 50 obstacles set randomly
  for (int i = 0; i < 50; i++) {
    coord c;
    c = obstacle(c);
    board[c.x][c.y] = 1;
  }
}

void print_board(int board[SIZE][SIZE]) {
  printf("\n ");
  for (int i = 0; i < SIZE; i++) {
    for (int j = 0; j < SIZE; j++) {
      printf("%d ", board[i][j]);
    }
    printf("\n ");
  }
}

int main(int argc, char *argv[]) {
  srand(time(0));

  int board[SIZE][SIZE];

  set_board(board);
  print_board(board);

  return EXIT_SUCCESS;
}
