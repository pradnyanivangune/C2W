/*
Q8. Write a program to print following pattern.  Take no of rows from user

			1
		2	3
	4	5	6
7	8	9	10

*/

#include<stdio.h>
void main(){
	
	int n ;
	printf("Enter no. of rows:\n");
	scanf("%d",&n);

	int num = 1 ;
	for(int i = 1 ; i <= n ; i++){

		for(int k = n-1 ; k >= i  ; k--){

			printf("\t ");
			

		}

		for(int j = 1 ; j <= i ; j++){

			printf("%d\t ",num);
			num++;
		}
		printf("\n");
	}
}


/*

Output-

pradnya@pradnya-Latitude-3480:~/Desktop/Assignment/NestedForAssignmet28July$ gedit Prog8.c
pradnya@pradnya-Latitude-3480:~/Desktop/Assignment/NestedForAssignmet28July$ cc Prog8.c
pradnya@pradnya-Latitude-3480:~/Desktop/Assignment/NestedForAssignmet28July$ ./a.out
Enter no. of rows:
4
	 	 	 1	 
	 	 2	 3	 
	 4	 5	 6	 
7	 8	 9	 10

*/

