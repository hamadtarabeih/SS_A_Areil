#include <stdio.h>
#include "my_mat.h"
#define N 10
void GetArr()
{
 for(int i =0 ; i < N; i++ )
 {
    for(int j = i; j < N; j++)
    {
        if(i == j)
        {
            matrix[i][j] = 0 ;
        }
        else
        {
         scanf("%d" , &matrix[i][j]);
         matrix[j][i] = matrix[i][j];
        }
    }
 }
}

void Path(int i , int j)
{
  if(matrix[i][j] > 0)
  {
    printf("True");
   
  }
    else
    {
     if(i < j)
     {
        for(int k = N ; k > 0 ; k--)
        {
           if(matrix[i][k] > 0)
           {
                if(k == j)
                {
                   printf("True");
                
                }
                else
                {
                   i = k;
                   k = N;
                }
          
            }
        }
     }
     else
      {
        Path(j , i);
       }
    }
  printf ("False");
}
  

int MinValue(int a, int b)
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


void ShortestPath()
{
    for (int k = 0; k < N; k++)
    {
        for (int i = 0; i < N; i++)
        {
            for (int j = i ; j < N ; j++)
            {
                if (i == j)
                {
                    matrix[i][j] = 0;
                }
                else {
                      int temp = matrix[i][k] + matrix[k][j];
                      if (matrix[i][k] == 0 || matrix[k][j] == 0)
                       {
                          temp = 0;
                       }
                     matrix[i][j] = MinValue(matrix[i][j], temp);
                     matrix[j][i] = MinValue(matrix[i][j], temp);
                }
            }

        }
    }
    
}
