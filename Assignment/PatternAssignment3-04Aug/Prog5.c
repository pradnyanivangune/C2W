/*

4	3	2	1
    4	    3	    2
	4	3
    	    4
*/

#include<stdio.h>
void main(){

    int n;
    printf("Enter no. of row:\n");
    scanf("%d",&n);
    
	for(int row = 1 ; row <= n ; row ++){
	
	    int num = n ;
		for(int space = 1 ; space<row ; space++){

			printf("   ");
		}

		for(int col = n ; col >= row ; col--){

			printf("  %d  ",num);
			num-- ;
		}
		printf("\n");
	}	

}

/*

Output-

pradnya@pradnya-Latitude-3480:~/Desktop/Assignment/PatternAssignment3-04Aug$ gedit Prog5.c
pradnya@pradnya-Latitude-3480:~/Desktop/Assignment/PatternAssignment3-04Aug$ cc Prog5.c
pradnya@pradnya-Latitude-3480:~/Desktop/Assignment/PatternAssignment3-04Aug$ ./a.out
Enter no. of row:
4
  4    3    2    1  
     4    3    2  
        4    3  
           4 

*/
