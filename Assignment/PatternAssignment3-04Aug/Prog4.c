/*
1	2	3	4
	1	2	3
		1	2
			1

*/

#include<stdio.h>
void main(){

    int n;
    printf("Enter no. of row:\n");
    scanf("%d",&n);
    
	for(int row = 1 ; row <= n ; row ++){
	
	    int num = 1 ;
		for(int space = 1 ; space<row ; space++){

			printf("\t ");
		}

		for(int col = n ; col >= row ; col--){

			printf("%d\t ",num);
			num++ ;
		}
		printf("\n");
	}	

}

/*

Output-

pradnya@pradnya-Latitude-3480:~/Desktop/Assignment/PatternAssignment3-04Aug$ gedit Prog4.c
pradnya@pradnya-Latitude-3480:~/Desktop/Assignment/PatternAssignment3-04Aug$ cc Prog4.c
pradnya@pradnya-Latitude-3480:~/Desktop/Assignment/PatternAssignment3-04Aug$ ./a.out
Enter no. of row:
4
1	 2	 3	 4	 
	 1	 2	 3	 
	 	 1	 2	 
	 	 	 1

*/
