/*
Write a C program to print the following pattern
		A
	      B C
	    C D E
	  D E F G
	E F G H I



*/



#include<stdio.h>
void main(){

	char ch='A';
	//for row
	for(int row = 1 ; row<=5 ; row++){

		//for space
		for(int space = 4 ; space>=row ; space--){

			printf("  ");

			
		}

		//for *
		for(int col = 1 ; col<=row ; col++){

			printf("%c ",ch);
			ch++;
			
		}
		ch = 'A';
		printf("\n");
		ch=ch+row;

	}
}



/*

Output-

pradnya@pradnya-Latitude-3480:~/Desktop/DailyFlash/DailyFlash24July$ gedit Prog1.c
pradnya@pradnya-Latitude-3480:~/Desktop/DailyFlash/DailyFlash24July$ cc Prog1.c
pradnya@pradnya-Latitude-3480:~/Desktop/DailyFlash/DailyFlash24July$ ./a.out
        A 
      B C 
    C D E 
  D E F G 
E F G H I 

*/
