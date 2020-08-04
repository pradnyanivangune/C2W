/*

      1         1
	2     2
	   3
	4     4
      5		5
*/

#include<stdio.h>
void main(){

    int n;
    printf("Enter no. of row:\n");
    scanf("%d",&n);
    
	for(int row = 1 ; row <= n ; row ++){

		for(int col = 1 ; col <= n ; col++){

			if(row == col || row + col == n+1)
				printf("%d ",row);
			else   
				printf("  ");
		}
		printf("\n");
	    
	}	

}

/*

Output-

pradnya@pradnya-Latitude-3480:~/Desktop/Assignment/PatternAssignment3-04Aug$ gedit Prog7.c
pradnya@pradnya-Latitude-3480:~/Desktop/Assignment/PatternAssignment3-04Aug$ cc Prog7.c
pradnya@pradnya-Latitude-3480:~/Desktop/Assignment/PatternAssignment3-04Aug$ ./a.out
Enter no. of row:
5
1       1 
  2   2   
    3     
  4   4   
5       5 

*/
