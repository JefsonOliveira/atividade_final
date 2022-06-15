#include<stdio.h>
#include<stdlib.h>

int  main (){
	int i, j, m[6][6];

	for (i= 0 ; i < 6; i++){
		for (j= 0 ; j < 6; j++){
			if (i==j){
				m[i][j] = 7 ;
			}else {
				m[i][j] = 0 ;
			}
		}
	}
	printf ( " \n\n           Matriz Diagonal \n\n " );
	for (i= 0 ; i < 6; i++){
		printf ( "    [ ");
		for (j= 0 ; j < 6; j++){
			printf ( " %i  " , m[i][j]);
		}
		printf ( " ] \n " );
	}


	return(0) ;
}