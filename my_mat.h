#ifndef N
#define N 10
#endif
int matrix[N][N];
// GetArr function that get the values from the user:
void GetArr();
//Path is function check if there is a path between i,j:
void Path();
//Folyd-warshall --ShortestPath Function that write the shortest path between i,j:
void ShortestPath();
//returns the minnimum of 2 integers:
int MinValue(int a, int b);