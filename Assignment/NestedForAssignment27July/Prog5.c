/*
Q5) Print the following pattern
        * - * - *
        * - * - *
        * - * - *

*/

#include<stdio.h>
void main(){
	
	for(int i = 1 ; i <= 3 ; i++){
		
		for(int j = 1 ; j <= 5 ; j++){

			if(j % 2 == 0)
				printf("_ ");
			else
				printf("* ");
			
		}
		printf("\n");
	}
}

/*

Output:-

pradnya@pradnya-Latitude-3480:~/Desktop/NestedForAssignment27July$ gedit Prog5.c 
pradnya@pradnya-Latitude-3480:~/Desktop/NestedForAssignment27July$ cc Prog5.c
pradnya@pradnya-Latitude-3480:~/Desktop/NestedForAssignment27July$ ./a.out
* _ * _ *                                                                                                                                      
* _ * _ *                                                                                                                                      
* _ * _ *

*/
