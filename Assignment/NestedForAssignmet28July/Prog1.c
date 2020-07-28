/*
Q1) Print following pattern. Take no of rows from user

				1
			2	1
		3	2	1
	4	3	2	1
5	4	3	2	1

*/

#include<stdio.h>
void main(){
	
	int n ;
	printf("Enter no. of rows:\n");
	scanf("%d",&n);

	for(int i = 1 ; i <= n ; i++){
		int num = 5 ;
		for(int k = n-1 ; k >= i  ; k--){
			printf("\t ");
			num--;

		}

		for(int j = 1 ; j <= i ; j++){

			printf("%d\t ",num);
			num--;
		}
		printf("\n");
	}
}


/*

Output-

pradnya@pradnya-Latitude-3480:~/Desktop/Assignment/NestedForAssignmet28July$ gedit Prog1.c
pradnya@pradnya-Latitude-3480:~/Desktop/Assignment/NestedForAssignmet28July$ cc Prog1.c
pradnya@pradnya-Latitude-3480:~/Desktop/Assignment/NestedForAssignmet28July$ ./a.out
Enter no. of rows:
5
	 	 	 	 1	 
	 	 	 2	 1	 
	 	 3	 2	 1	 
	 4	 3	 2	 1	 
5	 4	 3	 2	 1

*/


