#ifndef N 
#define N 10
#endif
int mat[N][N];
//A function that receives a matrix from the user:
void getArr();

void printMat();

//returns the minnimum of 2 integers:
int min(int a, int b);

//the algorithm:
void floydWarshall();
