#ifndef FUNCS
#define FUNCS
#include <stdio.h>
#include <math.h>
#include <string.h>
#include "my_mat.h"
#endif


// function 1
int set_mat(int mat[ROWS][COLUMNS]){
    int i,j;
    for(int i=0; i<ROWS; i++){
        for(int j=0; j< COLUMNS; j++){
            scaanf("%d", mat[i][j])
        }
    }
}


// function 2
int is_there_path (int mat[ROWS][COLUMNS], int i, int j){
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

// function 3
int shortest_path(int mat[ROWS][COLUMNS], int i, int j){
    if (mat[i][j]>0){
            printf("%d\n", mat[i][j]);
    }
    else{
        printf("-1\n");
    }
    return 1;
    }

// calculate the values of the matrix according to the Floyd-Warshall algorythm, and by that , finds the shortest path for each pair
int get_shortest_path_matrix(int mat[ROWS][COLUMNS])
{
    // printf("ROWS: %d, COLUMNS: %d, UPDATES: %d\n", ROWS, COLUMNS, UPDATES);
    // print_mat(mat);
    int k, i, j;
    for(k=0; k<UPDATES; k++){
        for(i=0; i<ROWS; i++){
            for(j=0; j<COLUMNS; j++){
                if(mat[i][k]>0 && mat[k][j]>0){
                    if(i==j){
                        continue;
                    }
                    if(mat[i][j] > 0){
                        mat[i][j] = fmin(mat[i][j], mat[i][k]+mat[k][j]);   
                    }
                    else{
                        mat[i][j] = mat[i][k]+mat[k][j];    
                    }
                }
            }
        } 
        // print_mat(mat);
    }
    return 1;
}







