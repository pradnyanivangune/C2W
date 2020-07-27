/*
Q7) Print the following pattern

     * * * * *
       * * * *
         * * *
           * *
             *

*/

#include<stdio.h>
void main(){

	for(int i = 1 ; i <= 5 ; i++){

		for(int k = 1 ; k < i ; k++){

			printf("  ");
		}

		for(int j = 5 ; j >= i ; j--){

			printf("* ");	
		}
		printf("\n");
	}
}


/*

Output:-

pradnya@pradnya-Latitude-3480:~/Desktop/NestedForAssignment27July$ gedit Prog7.c 
pradnya@pradnya-Latitude-3480:~/Desktop/NestedForAssignment27July$ cc Prog7.c
pradnya@pradnya-Latitude-3480:~/Desktop/NestedForAssignment27July$ ./a.out
* * * * *                                                                                                                                      
  * * * *                                                                                                                                      
    * * *                                                                                                                                      
      * *                                                                                                                                      
        * 
*/
