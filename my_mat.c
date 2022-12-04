#ifndef FUNCS
#define FUNCS
#include <stdio.h>
#include <math.h>
#include <string.h>
#include "my_mat.h"
#endif


double fmin(double __x, double __y);


int set_mat(int mat[ROWS][COLUMNS])
{
    int i,j;
    for(i=0; i<ROWS; i++){
        for(j=0; j<COLUMNS; j++){
           // printf("hello");
            scanf("%d", &mat[i][j]);
        }
    }
    
    return 1;
}

int print_mat(int mat[ROWS][COLUMNS])
{
    int i,j;
    for(i=0; i<ROWS; i++){
            for(j=0; j<COLUMNS; j++){
            printf("%d", mat[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    
    return 1;
}

int is_there_path (int mat[ROWS][COLUMNS],int i,int j)
{
 // int i,j;
  //scanf("%d%d", &i, &j);
  if (mat[i][j] > 0)
    {
      printf ("True\n");
    }
  else
    {
      printf ("False\n");
    }
    return 1;
}

int shortest_path(int mat[ROWS][COLUMNS],int i,int j)
{
   // int i,j;
   // scanf("%d%d", &i, &j);
    if (mat[i][j]>0){
        printf("%d\n", mat[i][j]);
    }
    else{
        printf("-1\n");
    }
    return 1;
}


//double fmin(double __x, double __y);
int get_shortest_path_matrix(int mat[ROWS][COLUMNS])
{
    // printf("ROWS: %d, COLUMNS: %d, UPDATES: %d\n", ROWS, COLUMNS, UPDATES);
    // print_mat(mat);
    int k, i, j;
   // scanf("%d%d", &i, &j);
    for(k=0; k<UPDATES; k++){
        for(i=0; i<ROWS; i++){
            for(j=0; j<COLUMNS; j++){
                if(mat[i][k]>0 && mat[k][j]>0){
                    if(i==j){
                        continue;
                    }
                    if(mat[i][j] > 0){
                        double val1=(double)(mat[i][j]);
                        double val2=(double)(mat[i][k]+mat[k][j]);
                        int ans = (int)(fmin(val1, val2));   
                        mat[i][j]=ans;
                        //mat[i][j] = (int)fmin(3,4);   
                    }
                    else{
                        mat[i][j] = mat[i][k]+mat[k][j];    
                    }
                }
            }
        } 
        //print_mat(mat);
    }
   return 1;
}