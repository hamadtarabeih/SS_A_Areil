#include <stdio.h>
#include <math.h>
#include "my_mat.h"
#include "my_mat.c"
int main(){
    
int i, j;
char x='1';

while (x != 'D'){
scanf("%c", &x);
if(x=='A'){
GetArr(matrix);
}

if(x=='B'){
scanf("%d",&i);
scanf("%d", &j);
Path(i , j);
}
if(x=='C'){
scanf("%d",&i);
scanf("%d", &j);
ShortestPath();
  if(matrix [i][j] > 0)
  {
    printf("%d " , matrix[i][j]);
  }
   else
    {
      printf("%d " , -1);  
    }
}
}
}

