#include<stdio.h>
void main(){
	for(int row = 1 ; row <= 4 ; row++){

		for(int space = 1 ; space < row ; space++){

			printf("  ");
		}
		for(int col = 4 ; col >= row ; col--){

			printf("* ");
		}
		printf("\n");
	}
}


/*

Output-

pradnya@pradnya-Latitude-3480:~/Desktop/DailyCodes/DailyCodes28July2020$ gedit Program1.c
pradnya@pradnya-Latitude-3480:~/Desktop/DailyCodes/DailyCodes28July2020$ cc Program1.c
pradnya@pradnya-Latitude-3480:~/Desktop/DailyCodes/DailyCodes28July2020$ ./a.out
* * * * 
  * * * 
    * * 
      * 


*/
