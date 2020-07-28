/*
Q6) Write a program in C to use nested for loop and print the table of 2 .
Take table integer from user

2	4	6 	8 	
	10 	12 	14 	
		16 	18 		
			20

*/

#include<stdio.h>
void main(){

	int n ;
	printf("Enter table integer:\n");
	scanf("%d",&n);

	int num = 1 ;
	int mul = 1 ;
	for(int i = 4 ; i >= 1 ; i--){

		for(int k = 4 ; k > i  ; k--){
			printf("\t ");
			
		}


		for(int j = 1 ; j <= i ; j++){

			mul = n * num ;
			printf("%d\t ",mul);
			num++;
			
		}

		printf("\n");
	}
}


/*

Output-

pradnya@pradnya-Latitude-3480:~/Desktop/Assignment/NestedForAssignmet28July$ gedit Prog6.c
pradnya@pradnya-Latitude-3480:~/Desktop/Assignment/NestedForAssignmet28July$ cc Prog6.c
pradnya@pradnya-Latitude-3480:~/Desktop/Assignment/NestedForAssignmet28July$ ./a.out
Enter table integer:
2
2	 4	 6	 8	 
	 10	 12	 14	 
	 	 16	 18	 
	 	 	 20	

*/
