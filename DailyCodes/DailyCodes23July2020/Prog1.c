#include<stdio.h>
void main(){

	//for row
	for(int row = 1 ; row<=4 ; row++){
		//for space
		for(int space = 3 ; space>=row ; space--){

			printf("  ");
		}
		//for *
		for(int col = 1 ; col<=row ; col++){

			printf("* ");
		}
		printf("\n");
	}
}


/*

Output-

pradnya@pradnya-Latitude-3480:~/Desktop/DailyCodes/DailyCodes23July2020$ gedit Prog1.c
pradnya@pradnya-Latitude-3480:~/Desktop/DailyCodes/DailyCodes23July2020$ cc Prog1.c
pradnya@pradnya-Latitude-3480:~/Desktop/DailyCodes/DailyCodes23July2020$ ./a.out
      * 
    * * 
  * * * 
* * * * 

*/
