/*
O2. Print the following pattern.Take no of rows from user

				1
			1	2
		1	2	6
	1	2	6	24
1	2	6	24	120

*/

#include<stdio.h>
void main(){

	int n ;
	printf("Enter no. of rows:\n");
	scanf("%d",&n);

	for(int i = 1 ; i <= n ; i++){

		int mul=1;

		for(int k = n-1 ; k >= i  ; k--){
			printf("\t ");
			
		}

		for(int j = 1 ; j <= i ; j++){

			mul = mul * j ;
			printf("%d\t ",mul);
			
		}
		printf("\n");
	}
}



/*

Output-

pradnya@pradnya-Latitude-3480:~/Desktop/Assignment/NestedForAssignmet28July$ gedit Prog2.c
pradnya@pradnya-Latitude-3480:~/Desktop/Assignment/NestedForAssignmet28July$ cc Prog2.c
pradnya@pradnya-Latitude-3480:~/Desktop/Assignment/NestedForAssignmet28July$ ./a.out
Enter no. of rows:
5
	 	 	 	 1	 
	 	 	 1	 2	 
	 	 1	 2	 6	 
	 1	 2	 6	 24	 
1	 2	 6	 24	 120

*/



