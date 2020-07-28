#include<stdio.h>
void main(){
	for(int row = 1 ; row <= 4 ; row++){

		char ch = 'A' ;
		for(int space = 1 ; space < row ; space++){

			printf("  ");
		}
		for(int col = 4 ; col >= row ; col--){

			printf("%c ",ch);
			ch++;
		}
		printf("\n");
	}
}


/*

Output-

pradnya@pradnya-Latitude-3480:~/Desktop/DailyCodes/DailyCodes28July2020$ gedit Program2.c
pradnya@pradnya-Latitude-3480:~/Desktop/DailyCodes/DailyCodes28July2020$ cc Program2.c
pradnya@pradnya-Latitude-3480:~/Desktop/DailyCodes/DailyCodes28July2020$ ./a.out
A B C D 
  A B C 
    A B 
      A 


*/
