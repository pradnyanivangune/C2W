/*
Q3. Print the following pattern Take no of rows from user

       4 4 4 4
         3 3 3
           2 2
             1
*/

#include<stdio.h>
void main(){

	int n ;
	printf("Enter no. of rows:\n");
	scanf("%d",&n);

	int num = 4 ;
	for(int i = 1 ; i <= n ; i++){

		for(int k = 1 ; k <= i  ; k++){
			printf("  ");
			
		}

		for(int j = n ; j >= i ; j--){

			printf("%d ",num);
			
		}
		num--;
		printf("\n");
	}
}


/*

Output-

pradnya@pradnya-Latitude-3480:~/Desktop/Assignment/NestedForAssignmet28July$ gedit Prog3.c
pradnya@pradnya-Latitude-3480:~/Desktop/Assignment/NestedForAssignmet28July$ cc Prog3.c
pradnya@pradnya-Latitude-3480:~/Desktop/Assignment/NestedForAssignmet28July$ ./a.out
Enter no. of rows:
4
  4 4 4 4 
    3 3 3 
      2 2 
        1 

*/
