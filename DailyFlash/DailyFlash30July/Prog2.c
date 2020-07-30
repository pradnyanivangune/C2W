/*
Write a program to print the following pattern.
				1
			1	2	3	
		1	2	3	4	5
	1	2	3	4	5	6	7
1	2	3	4	5	6	7	8	9

*/

#include<stdio.h>
void main(){

	int n;
	printf("Enter no. of rows:\n");
	scanf("%d",&n);

	for(int row = 1 ; row <= n ; row++){
	
		int num = 1;
		for(int space = n-1 ; space >= row ; space--){

			printf("\t ");
		}
		for(int col = 1 ; col <= row * 2 - 1 ; col++){

			printf("%d\t ",num);
			num++;
		}

		printf("\n");
	}
	
}

/*

Output-

pradnya@pradnya-Latitude-3480:~/Desktop/DailyFlash/DailyFlash30July$ gedit Prog2.c
pradnya@pradnya-Latitude-3480:~/Desktop/DailyFlash/DailyFlash30July$ cc Prog2.c
pradnya@pradnya-Latitude-3480:~/Desktop/DailyFlash/DailyFlash30July$ ./a.out
Enter no. of rows:
5
	 	 	 	 1	 
	 	 	 1	 2	 3	 
	 	 1	 2	 3	 4	 5	 
	 1	 2	 3	 4	 5	 6	 7	 
1	 2	 3	 4	 5	 6	 7	 8	 9


*/
