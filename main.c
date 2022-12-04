#include <stdio.h>
#include "my_mat.h"
#include <math.h>

double fmin(double x, double y);


int main(){
    int mat[ROWS][COLUMNS];
    char user_input;
    // int i;
    // int j;
   // int i,j=0;
    while(scanf("%c",&user_input)==1){ // until the user quits
         
          switch ((int) user_input)
        {
            case (int) 'A':
                set_mat(mat); 
                get_shortest_path_matrix(mat);
                break;
            case (int) 'B':
                //scanf("%d%d", &i, &j);
                is_there_path(mat);
                break;
            case (int) 'C':
                //scanf("%d%d", &i, &j);
                shortest_path(mat);
                break;
            case (int) 'D':
                break;

      }

    }
     return 0;
}
