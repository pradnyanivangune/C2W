/*
Q1} Print following pattern.
A B C D E
A B C D E
A B C D E
A B C D E
A B C D E

*/

#include<stdio.h>
void main(){

	for(int i = 1 ; i <= 5 ; i++){
		char ch = 'A' ;
		for(int j = 1 ; j <= 5 ; j++){

			printf("%c ",ch);
			ch++;
		}
		printf("\n");
	}
}


/*

Output:-

pradnya@pradnya-Latitude-3480:~/Desktop/NestedForAssignment27July$ gedit Prog1.c 
pradnya@pradnya-Latitude-3480:~/Desktop/NestedForAssignment27July$ cc Prog1.c
pradnya@pradnya-Latitude-3480:~/Desktop/NestedForAssignment27July$ ./a.out
A B C D E                                                                                                                                      
A B C D E                                                                                                                                      
A B C D E                                                                                                                                      
A B C D E                                                                                                                                      
A B C D E 

*/
