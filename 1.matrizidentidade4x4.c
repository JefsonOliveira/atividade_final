#include<stdio.h>
#include<stdlib.h>

int  main (){
	int i, j, m[4][4];

	for (i= 0 ; i < 4; i++){
		for (j= 0 ; j < 4; j++){
			if (i==j){
				m[i][j] = 1 ;
			}else {
				m[i][j] = 0 ;
			}
		}
	}
	printf ( " \n\n   Matriz Identidade 4x4 \n\n " );
	for (i= 0 ; i < 4; i++){
		printf ( "   %i [ " ,i);
		for (j= 0 ; j < 4; j++){
			printf ( " %i  " , m[i][j]);
		}
		printf ( " ] \n " );
	}


	return(0) ;
}