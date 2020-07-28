#include<stdio.h>
void main(){

	int square = 1 ;
	for(int row = 1 ; row <= 4 ; row++){

		for(int space = 1 ; space < row ; space++){

			printf("\t ");
		}
		for(int col = 4 ; col >= row ; col--){

			printf("%d\t ",square*square);
			square++;
		}
		printf("\n");
	}
}


/*

Output-

pradnya@pradnya-Latitude-3480:~/Desktop/DailyCodes/DailyCodes28July2020$ gedit Program3.c
pradnya@pradnya-Latitude-3480:~/Desktop/DailyCodes/DailyCodes28July2020$ cc Program3.c
pradnya@pradnya-Latitude-3480:~/Desktop/DailyCodes/DailyCodes28July2020$ ./a.out
1	 4	 9	 16	 
	 25	 36	 49	 
	 	 64	 81	 
	 	 	 100


*/
