#include<stdio.h>
void main(){


	//for row
	for(int row = 1 ; row<=4 ; row++){
		int num = 1;
		//for space
		for(int space = 3 ; space>=row ; space--){

			printf("  ");
		}
		//for *
		for(int col = 1 ; col<=row ; col++){

			printf("%d ",num);
			num++;
		}
		printf("\n");
	}
}


/*

Output-

pradnya@pradnya-Latitude-3480:~/Desktop/DailyCodes/DailyCodes23July2020$ gedit HW1.c
pradnya@pradnya-Latitude-3480:~/Desktop/DailyCodes/DailyCodes23July2020$ cc HW1.c
pradnya@pradnya-Latitude-3480:~/Desktop/DailyCodes/DailyCodes23July2020$ ./a.out
      1 
    1 2 
  1 2 3 
1 2 3 4

*/
