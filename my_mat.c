#include <stdio.h>
#include "my_mat.h"
#define N 10

void getArr(){
for (int k=0; k<N; k++){
for (int l=0; l<N; l++){
scanf("%d", &mat[k][l]);
}
}
}

void printMat(){
for (int i=0; i<N; i++){
for(int j=0; j<N; j++){
printf("%d ", mat[i][j]);
if(j==N-1) {
printf("\n");
}
}
}
}

int min(int a, int b)
{
    if (a == 0)
    {
        return b;
    }
    else if (b == 0)
    {
        return a;
    }
    return (a > b) ? b : a;
}


void floydWarshall()
{
    for (size_t k = 0; k < N; k++)
    {
        for (size_t i = 0; i < N; i++)
        {
            for (size_t j = 0; j < N; j++)
            {
                if (i == j)
                {
                    mat[i][j] = 0;
                }
                else if (i != k && j != k ){
              
                    int temp = mat[i][k] + mat[k][j];
                    if (mat[i][k] == 0 || mat[k][j] == 0)
                    {
                        temp = 0;
                    }
                    mat[i][j] = min(mat[i][j], temp);
                }
            }
        }
    }
}
