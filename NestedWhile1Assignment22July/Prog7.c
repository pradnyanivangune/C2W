/*
Q7) Write a program to print the tables of 1 to n numbers in reverse order using nested    while
*/

#include<stdio.h>
void main(){
	int n;
	printf("Enter number:");
	scanf("%d",&n);

	int i=n;

	while(i!=0){

		int j=1;
		while(j<=10){
			printf("%d ",i*j);
			j++;
		}
		printf("\n");
		i--;
		
	}
}



/*

Output-


pradnya@pradnya-Latitude-3480:~/Desktop/NestedWhileLoopAssignment22July$ gedit Prog7.c
pradnya@pradnya-Latitude-3480:~/Desktop/NestedWhileLoopAssignment22July$ cc Prog7.c
pradnya@pradnya-Latitude-3480:~/Desktop/NestedWhileLoopAssignment22July$ ./a.out
Enter number: 6
6 12 18 24 30 36 42 48 54 60 
5 10 15 20 25 30 35 40 45 50 
4 8 12 16 20 24 28 32 36 40 
3 6 9 12 15 18 21 24 27 30 
2 4 6 8 10 12 14 16 18 20 
1 2 3 4 5 6 7 8 9 10 
pradnya@pradnya-Latitude-3480:~/Desktop/NestedWhileLoopAssignment22July$ ./a.out
Enter number:10
10 20 30 40 50 60 70 80 90 100 
9 18 27 36 45 54 63 72 81 90 
8 16 24 32 40 48 56 64 72 80 
7 14 21 28 35 42 49 56 63 70 
6 12 18 24 30 36 42 48 54 60 
5 10 15 20 25 30 35 40 45 50 
4 8 12 16 20 24 28 32 36 40 
3 6 9 12 15 18 21 24 27 30 
2 4 6 8 10 12 14 16 18 20 
1 2 3 4 5 6 7 8 9 10 

*/


