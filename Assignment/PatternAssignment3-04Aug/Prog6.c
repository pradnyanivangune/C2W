/*
		*
		*
	*	*	*
	*	*	*
*	*	*	*	*
*	*	*	*	*


*/


#include<stdio.h>
void main(){

    int n;
    printf("Enter no. of row:\n");
    scanf("%d",&n);
    
	for(int row = 1 ; row <= n/2 ; row ++){

	    for(int i = 1; i <= 2 ; i++){

		for(int space = (n/2)-1 ; space>=row ; space--){

			printf("\t ");
		}

		for(int col = 1 ; col <= row*2-1 ; col++){
		    
			printf("*\t ");
		}
		printf("\n");
	    }
	}	

}

/*

Output-

pradnya@pradnya-Latitude-3480:~/Desktop/Assignment/PatternAssignment3-04Aug$ gedit Prog6.c
pradnya@pradnya-Latitude-3480:~/Desktop/Assignment/PatternAssignment3-04Aug$ cc Prog6.c
pradnya@pradnya-Latitude-3480:~/Desktop/Assignment/PatternAssignment3-04Aug$ ./a.out
Enter no. of row:
6
	 	 *	 
	 	 *	 
	 *	 *	 *	 
	 *	 *	 *	 
*	 *	 *	 *	 *	 
*	 *	 *	 *	 *

*/
