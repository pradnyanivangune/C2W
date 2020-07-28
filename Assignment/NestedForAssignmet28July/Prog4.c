/*
Q4)Print the following pattern Take no of rows from user

1    3      5    7     9
     11     13   15    17  
            19   21    23
                 25    27
   		       29

*/

#include<stdio.h>
void main(){

	int n ;
	printf("Enter no. of rows:\n");
	scanf("%d",&n);

	int num = 1 ;
	for(int i = 1 ; i <= n ; i++){

		for(int k = 1 ; k <= i  ; k++){
			printf("  ");
			
		}

		for(int j = n ; j >= i ; j--){

			printf("%d\t ",num);
			num = num + 2 ;
		}
		
		printf("\n");
	}
}

/*

Output-

pradnya@pradnya-Latitude-3480:~/Desktop/Assignment/NestedForAssignmet28July$ gedit Prog4.c
pradnya@pradnya-Latitude-3480:~/Desktop/Assignment/NestedForAssignmet28July$ cc Prog4.c
pradnya@pradnya-Latitude-3480:~/Desktop/Assignment/NestedForAssignmet28July$ ./a.out
Enter no. of rows:
5
  1 3 5 7 9 
    11 13 15 17 
      19 21 23 
        25 27 
          29

*/
