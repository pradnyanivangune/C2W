/*
Write a C program to print the following pattern
        1 
      2 1 
    3 2 1 
  4 3 2 1 
5 4 3 2 1


*/


#include<stdio.h>
void main(){


	//for row
	for(int row = 1 ; row<=5 ; row++){
		int num=5;
		//for space
		for(int space = 4 ; space>=row ; space--){

			printf("  ");
			num--;
			
		}
		//for *
		for(int col = 1 ; col<=row ; col++){

			printf("%d ",num);
			num--;
			
		}
		printf("\n");

	}
}


/*

Output-

pradnya@pradnya-Latitude-3480:~/Desktop/DailyFlash/DailyFlash24July$ gedit Prog5.c
pradnya@pradnya-Latitude-3480:~/Desktop/DailyFlash/DailyFlash24July$ cc Prog5.c
pradnya@pradnya-Latitude-3480:~/Desktop/DailyFlash/DailyFlash24July$ ./a.out
        1 
      2 1 
    3 2 1 
  4 3 2 1 
5 4 3 2 1

*/
