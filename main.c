#include <stdio.h>
#include "my_mat.h"
int main(){
    int mat[ROWS][COLUMNS];
    char user_input= '0';
    int i,j;
    while(scanf(" %c",&user_input)==1){ // until the user quits
          switch ((int) user_input)
        {
            case (int) 'A':
                set_mat(mat); 
                get_shortest_path_matrix(mat);
            case (int) 'B':
                is_there_path(mat,i,j);
            case (int) 'C':
                shortest_path(mat,i,j);
            case (int) 'D':
                break;

      }

    }
     return 0;
}
