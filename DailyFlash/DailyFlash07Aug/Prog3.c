/*
Write a program to accept a number from user and print that number by decrementing until it reaches 0 using do-while loop
*/


#include <stdio.h>

void main(){

	int n ;
	printf("Enter a number:\n");
	scanf("%d",&n);

	do{
		printf("%d ",n);
		n--;
	}while(n>0);

	printf("\n");
}

/*

Output-

pradnya@pradnya-Latitude-3480:~/DailyFlash/DailyFlash07Aug$ gedit Prog3.c
pradnya@pradnya-Latitude-3480:~/DailyFlash/DailyFlash07Aug$ cc Prog3.c
pradnya@pradnya-Latitude-3480:~/DailyFlash/DailyFlash07Aug$ ./a.out
Enter a number:
6
6 5 4 3 2 1

*/
