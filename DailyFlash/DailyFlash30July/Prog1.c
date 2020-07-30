/*
Write a program to print the following pattern.
				A
			B	B	B	
		C	C	C	C	C
	D	D	D	D	D	D	D
E	E	E	E	E	E	E	E	E

*/

#include<stdio.h>
void main(){

	int n;
	printf("Enter no. of rows:\n");
	scanf("%d",&n);

	char ch = 'A' ;
	for(int row = 1 ; row <= n ; row++){
	
		for(int space = n-1 ; space >= row ; space--){

			printf("\t ");
		}
		for(int col = 1 ; col <= row * 2 - 1 ; col++){

			printf("%c\t ",ch);


		}
		ch++;
		printf("\n");
	}
	
}

/*

Output-

pradnya@pradnya-Latitude-3480:~/Desktop/DailyFlash/DailyFlash30July$ gedit Prog1.c
pradnya@pradnya-Latitude-3480:~/Desktop/DailyFlash/DailyFlash30July$ cc Prog1.c
pradnya@pradnya-Latitude-3480:~/Desktop/DailyFlash/DailyFlash30July$ ./a.out
Enter no. of rows:
5
	 	 	 	 A	 
	 	 	 B	 B	 B	 
	 	 C	 C	 C	 C	 C	 
	 D	 D	 D	 D	 D	 D	 D	 
E	 E	 E	 E	 E	 E	 E	 E	 E

*/
