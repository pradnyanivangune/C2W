/*
Write a program to print the following pattern.
	 	 	 1	 
	 	 8	 1	 4	 
	 27	 8	 1	 4	 9	 
64	 27	 8	 1	 4	 9	 16


*/

#include<stdio.h>
void main(){


	int n;
	printf("Enter no. of rows:\n");
	scanf("%d",&n);

	for(int row = 1 ; row <= n ; row++){
	
		int num = n;
		for(int space = n-1 ; space >= row ; space--){

			printf("\t ");
			num--;
		}
		for(int col = 1 ; col <= row * 2 - 1 ; col++){
			

			if(col>=row){
				printf("%d\t ",num*num);
				num++;
			}else{
				printf("%d\t ",num*num*num);
				num--;
			}
		}

		printf("\n");
	}
	
}

/*

Output-

pradnya@pradnya-Latitude-3480:~/Desktop/DailyFlash/DailyFlash30July$ gedit Prog3.c
pradnya@pradnya-Latitude-3480:~/Desktop/DailyFlash/DailyFlash30July$ cc Prog3.c
pradnya@pradnya-Latitude-3480:~/Desktop/DailyFlash/DailyFlash30July$ ./a.out
Enter no. of rows:
4
	 	 	 1	 
	 	 8	 1	 4	 
	 27	 8	 1	 4	 9	 
64	 27	 8	 1	 4	 9	 16

*/
