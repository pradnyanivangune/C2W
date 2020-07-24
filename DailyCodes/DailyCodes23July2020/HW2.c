#include<stdio.h>
void main(){

	
	//for row
	for(int row = 1 ; row<=4 ; row++){
		char ch = 'A';
		//for space
		for(int space = 3 ; space>=row ; space--){

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

pradnya@pradnya-Latitude-3480:~/Desktop/DailyCodes/DailyCodes23July2020$ gedit HW2.c
pradnya@pradnya-Latitude-3480:~/Desktop/DailyCodes/DailyCodes23July2020$ cc HW2.c
pradnya@pradnya-Latitude-3480:~/Desktop/DailyCodes/DailyCodes23July2020$ ./a.out
      D 
    C D 
  B C D 
A B C D

*/
