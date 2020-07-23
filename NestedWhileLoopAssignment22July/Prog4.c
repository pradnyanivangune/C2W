/*
Write a program in C to make such a pattern like a pyramid with numbers increased by 1. Use nested while loop.

     1 
   2 3 
  4 5 6 
7 8 9 10

*/

#include<stdio.h>
void main(){
	
	int i=1;
	int cnt=1;
	while(i<=5){

		int j=5;
		while(j>=1){
			if(j>=i){
				printf(" ");
			}else{
				printf("%d ",cnt);
	
				cnt++;
			}
		j--;			
		}

		printf("\n");
		i++;
	}
}


/*

Output-

pradnya@pradnya-Latitude-3480:~/Desktop/NestedWhileLoopAssignment22July$ gedit Prog4.c
pradnya@pradnya-Latitude-3480:~/Desktop/NestedWhileLoopAssignment22July$ cc Prog4.c
pradnya@pradnya-Latitude-3480:~/Desktop/NestedWhileLoopAssignment22July$ ./a.out
     
    1 
   2 3 
  4 5 6 
 7 8 9 10 

*/
