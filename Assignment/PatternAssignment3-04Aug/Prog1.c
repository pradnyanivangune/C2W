/*
			1
		1	2
	1	2	3	
1	2	3	4


*/

#include<stdio.h>
void main(){

    int n;
    printf("Enter no. of row:\n");
    scanf("%d",&n);
    
	for(int row = 1 ; row <= n ; row ++){
	
	    int num = 1 ;
		for(int space = n-1 ; space>=row ; space--){

			printf("\t ");
		}

		for(int col = 1 ; col <= row ; col++){
			printf("%d\t ",num);
			num++ ;
		}
		printf("\n");
	}	

}

/*

Output-

pradnya@pradnya-Latitude-3480:~/Desktop/Assignment/PatternAssignment3-04Aug$ gedit Prog1.c
pradnya@pradnya-Latitude-3480:~/Desktop/Assignment/PatternAssignment3-04Aug$ cc Prog1.c
pradnya@pradnya-Latitude-3480:~/Desktop/Assignment/PatternAssignment3-04Aug$ ./a.out
Enter no. of row:
4
	 	 	 1	 
	 	 1	 2	 
	 1	 2	 3	 
1	 2	 3	 4

*/
