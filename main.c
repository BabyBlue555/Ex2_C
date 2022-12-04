#include <stdio.h>
#include "my_mat.h"

int main ()
{
    
    int mat[ROWS][COLUMNS];
    char user_input='0';
    int i,j;

    scanf("%c", &user_input);
    while(user_input != 'D'){
        switch ((int) user_input)
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