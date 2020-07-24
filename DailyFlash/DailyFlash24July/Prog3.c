/*
Write a C program to print the following pattern
         25 
      16 25 
    9 16 25 
  4 9 16 25 
1 4 9 16 25


*/


#include<stdio.h>
void main(){


	//for row
	for(int row = 1 ; row<=5 ; row++){
		int num=1;
		//for space
		for(int space = 4 ; space>=row ; space--){

			printf("  ");
			num++;
			
		}
		//for *
		for(int col = 1 ; col<=row ; col++){

			printf("%d ",num*num);
			num++;
			
		}
		printf("\n");

	}
}


/*

Output-

pradnya@pradnya-Latitude-3480:~/Desktop/DailyFlash/DailyFlash24July$ gedit Prog3.c
pradnya@pradnya-Latitude-3480:~/Desktop/DailyFlash/DailyFlash24July$ cc Prog3.c
pradnya@pradnya-Latitude-3480:~/Desktop/DailyFlash/DailyFlash24July$ ./a.out
        25 
      16 25 
    9 16 25 
  4 9 16 25 
1 4 9 16 25 

*/
