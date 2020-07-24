/*
Write a C program to print the following pattern
        E 
      D E 
    C D E 
  B C D E 
A B C D E 


*/


#include<stdio.h>
void main(){


	//for row
	for(int row = 1 ; row<=5 ; row++){
		char ch='A';
		//for space
		for(int space = 4 ; space>=row ; space--){

			printf("  ");
			ch++;
			
		}
		//for *
		for(int col = 1 ; col<=row ; col++){

			printf("%c ",ch);
			ch++;
			
		}
		printf("\n");

	}
}


/*

Output-

pradnya@pradnya-Latitude-3480:~/Desktop/DailyFlash/DailyFlash24July$ gedit Prog4.c
pradnya@pradnya-Latitude-3480:~/Desktop/DailyFlash/DailyFlash24July$ cc Prog4.c
pradnya@pradnya-Latitude-3480:~/Desktop/DailyFlash/DailyFlash24July$ ./a.out
        E 
      D E 
    C D E 
  B C D E 
A B C D E 

*/
