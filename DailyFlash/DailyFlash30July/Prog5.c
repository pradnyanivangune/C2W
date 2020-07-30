/*
Write a program to print the following pattern.
	 	 	 D	 
	 	 C	 D	 C	 
	 B	 C	 D	 C	 B	 
A	 B	 C	 D	 C	 B	 A

*/

#include<stdio.h>
void main(){

	int n;
	printf("Enter no. of rows:\n");
	scanf("%d",&n);

	for(int row = 1 ; row <= n ; row++){
	
		char ch = 'A';
		for(int space = n-1 ; space >= row ; space--){

			printf("\t ");
			ch++;
		}
		for(int col = 1 ; col <= row * 2 - 1 ; col++){
			

			if(col>=row){
				printf("%c\t ",ch);
				ch--;
			}else{
				printf("%c\t ",ch);
				ch++;
			}
		}

		printf("\n");
	}
	
}

/*

Output-

pradnya@pradnya-Latitude-3480:~/Desktop/DailyFlash/DailyFlash30July$ gedit Prog5.c
pradnya@pradnya-Latitude-3480:~/Desktop/DailyFlash/DailyFlash30July$ cc Prog5.c
pradnya@pradnya-Latitude-3480:~/Desktop/DailyFlash/DailyFlash30July$ ./a.out
Enter no. of rows:
4
	 	 	 D	 
	 	 C	 D	 C	 
	 B	 C	 D	 C	 B	 
A	 B	 C	 D	 C	 B	 A


*/
