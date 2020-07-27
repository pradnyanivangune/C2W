/*
Q.6  Print following pattern.
A 
A B 
A B C 
A B C D 
A B C D E

*/


#include<stdio.h>
void main(){

	for(int i = 1 ; i <= 5 ; i++){
		char ch = 'A' ;
		for(int j = 1 ; j <= i ; j++){

			printf("%c ",ch);
			ch++;
		}
		printf("\n");
	}
}

/*

Output:-

pradnya@pradnya-Latitude-3480:~/Desktop/NestedForAssignment27July$ gedit Prog6.c 
pradnya@pradnya-Latitude-3480:~/Desktop/NestedForAssignment27July$ cc Prog6.c
pradnya@pradnya-Latitude-3480:~/Desktop/NestedForAssignment27July$ ./a.out
A                                                                                                                                              
A B                                                                                                                                            
A B C                                                                                                                                          
A B C D                                                                                                                                        
A B C D E


*/
