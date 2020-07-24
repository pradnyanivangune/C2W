/*
Write a C program to print the following pattern
        0 
      0 1 
    0 1 0 
  0 1 0 1 
0 1 0 1 0


*/


#include<stdio.h>
void main(){


	//for row
	for(int row = 1 ; row<=5 ; row++){

		//for space
		for(int space = 4 ; space>=row ; space--){

			printf("  ");
		}
		//for *
		for(int col = 1 ; col<=row ; col++){
			if( col%2 ==0)
				printf("1 ");
			else
				printf("0 ");

		}
		printf("\n");

	}
}


/*

Output-

pradnya@pradnya-Latitude-3480:~/Desktop/DailyFlash/DailyFlash24July$ gedit Prog2.c
pradnya@pradnya-Latitude-3480:~/Desktop/DailyFlash/DailyFlash24July$ cc Prog2.c
pradnya@pradnya-Latitude-3480:~/Desktop/DailyFlash/DailyFlash24July$ ./a.out
        0 
      0 1 
    0 1 0 
  0 1 0 1 
0 1 0 1 0

*/
