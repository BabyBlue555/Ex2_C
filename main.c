#include <stdio.h>
#include "my_mat.h"

int main ()
{
    
    int mat[ROWS][COLUMNS];
    char user_input;
    int i,j;

  //  while (scanf("%c", &data) == 1){
    while(user_input != 'D'){
        switch ((int) data)
        {
            case (int) 'A':
                set_mat(mat);
                get_shortest_path_matrix(mat);
                break;

           
               // 
                
            case (int) 'B':
                
                scanf("%d", &i);
                scanf("%d", &j);
                is_there_path(mat,i,j);
                break;
            case (int) 'C':
                
                scanf("%d", &i);
                scanf("%d", &j);
                shortest_path(mat, i, j);
                break;
        

             case (int) 'D':
                break;
        }
    }
  return 0;
}