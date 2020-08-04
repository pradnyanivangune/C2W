/*
			4
		    4       3
		 4	3	2
	      4     3       2      1

*/

#include<stdio.h>
void main(){

    int n;
    printf("Enter no. of row:\n");
    scanf("%d",&n);
    
	for(int row = 1 ; row <= n ; row ++){
	
	    int num = n ;
		for(int space = n-1 ; space>=row ; space--){

			printf("   ");
		}

		for(int col = 1 ; col <= row ; col++){

			printf("  %d  ",num);
			num-- ;
		}
		printf("\n");
	}	

}

/*

Output-

pradnya@pradnya-Latitude-3480:~/Desktop/Assignment/PatternAssignment3-04Aug$ gedit Prog3.c
pradnya@pradnya-Latitude-3480:~/Desktop/Assignment/PatternAssignment3-04Aug$ cc Prog3.c
pradnya@pradnya-Latitude-3480:~/Desktop/Assignment/PatternAssignment3-04Aug$ ./a.out
Enter no. of row:
4
           4  
        4    3  
     4    3    2  
  4    3    2    1 

*/
