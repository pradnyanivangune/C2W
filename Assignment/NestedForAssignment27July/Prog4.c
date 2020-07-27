/*
Q 4)  write a program to print following pattern

	1 2 3 4
	2 3 4 5
	3 4 5 6
	4 5 6 7

*/

#include<stdio.h>
void main(){
	
	for(int i = 1 ; i <= 4 ; i++){
		int num = i;
		for(int j = 1 ; j <= 4 ; j++){

			printf("%d ",num);
			num++;
		}
		printf("\n");
	}
}

/*

Output:-

pradnya@pradnya-Latitude-3480:~/Desktop/NestedForAssignment27July$ gedit Prog4.c 
pradnya@pradnya-Latitude-3480:~/Desktop/NestedForAssignment27July$ cc Prog4.c
pradnya@pradnya-Latitude-3480:~/Desktop/NestedForAssignment27July$ ./a.out
1 2 3 4                                                                                                                                        
2 3 4 5                                                                                                                                        
3 4 5 6                                                                                                                                        
4 5 6 7                                                                                                                                        


*/