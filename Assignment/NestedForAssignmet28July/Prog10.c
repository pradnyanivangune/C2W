/*
Q10. Write a program to print following pattern.  Take no of rows from user


	$

	$	$	$

	$	$	$	$	$

	$	$	$	$	$	$	$

	$	$	$	$	$	$	$	$	$

*/

#include<stdio.h>
void main(){
	
	int n ;
	printf("Enter no. of rows:\n");
	scanf("%d",&n);


	for(int i = 1 ; i <= n ; i++){

		for(int j = 1 ; j <= (2*i)-1 ; j++){

			printf("$\t ");
			
		}
		printf("\n");
	}
}

/*

Output-

pradnya@pradnya-Latitude-3480:~/Desktop/Assignment/NestedForAssignmet28July$ gedit Prog10.c
pradnya@pradnya-Latitude-3480:~/Desktop/Assignment/NestedForAssignmet28July$ cc Prog10.c
pradnya@pradnya-Latitude-3480:~/Desktop/Assignment/NestedForAssignmet28July$ ./a.out
Enter no. of rows:
5
$	 
$	 $	 $	 
$	 $	 $	 $	 $	 
$	 $	 $	 $	 $	 $	 $	 
$	 $	 $	 $	 $	 $	 $	 $	 $


*/
