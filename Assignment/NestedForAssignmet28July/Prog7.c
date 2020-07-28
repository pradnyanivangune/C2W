/*
Q7) Write a program to print the tables of 1 to n numbers in reverse order using nested  for 
Take n from user
*/

#include<stdio.h>
void main(){

	int n ;
	printf("Enter integer number:\n");
	scanf("%d",&n);

	int num = 1 ;
	int mul = 1 ;
	for(int i = n ; i >= 2 ; i--){

		for(int j = 1 ; j <= 10 ; j++){

			mul = i * j ;
			printf("%d\t ",mul);
						
		}

		printf("\n");
	}
}

/*

Output-

pradnya@pradnya-Latitude-3480:~/Desktop/Assignment/NestedForAssignmet28July$ gedit Prog7.c
pradnya@pradnya-Latitude-3480:~/Desktop/Assignment/NestedForAssignmet28July$ cc Prog7.c
pradnya@pradnya-Latitude-3480:~/Desktop/Assignment/NestedForAssignmet28July$ ./a.out
Enter integer number:
9
9	 18	 27	 36	 45	 54	 63	 72	 81	 90	 
8	 16	 24	 32	 40	 48	 56	 64	 72	 80	 
7	 14	 21	 28	 35	 42	 49	 56	 63	 70	 
6	 12	 18	 24	 30	 36	 42	 48	 54	 60	 
5	 10	 15	 20	 25	 30	 35	 40	 45	 50	 
4	 8	 12	 16	 20	 24	 28	 32	 36	 40	 
3	 6	 9	 12	 15	 18	 21	 24	 27	 30	 
2	 4	 6	 8	 10	 12	 14	 16	 18	 20

*/
