/*
Q2) write a program to print following pattern
1  2  3
4  5  6
7  8  9

*/

#include<stdio.h>
void main(){
	int num = 1 ;
	for(int i = 1 ; i <= 3 ; i++){
		
		for(int j = 1 ; j <= 3 ; j++){

			printf("%d ",num);
			num++;
		}
		printf("\n");
	}
}

/*

Output:-

pradnya@pradnya-Latitude-3480:~/Desktop/NestedForAssignment27July$ gedit Prog2.c 
pradnya@pradnya-Latitude-3480:~/Desktop/NestedForAssignment27July$ cc Prog2.c
pradnya@pradnya-Latitude-3480:~/Desktop/NestedForAssignment27July$ ./a.out
1 2 3                                                                                                                                          
4 5 6                                                                                                                                          
7 8 9 

*/