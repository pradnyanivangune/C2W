/*

write a program to print following pattern using nested while loop.
1
1 2
2 3 4
4 5 6 7
7 8 9 10 11

*/


#include<stdio.h>
void main(){
	int cnt=1;
	int i=1;
	while(i<=5){
		
		int j=1;
		while(j<=i){
		
		printf("%d ",cnt);
	
		cnt++;
		j++;			
		}
		cnt--;
		printf("\n");
		i++;
	}
}


/*

Output-

pradnya@pradnya-Latitude-3480:~/Desktop/NestedWhileLoopAssignment22July$ gedit Prog2.c 
pradnya@pradnya-Latitude-3480:~/Desktop/NestedWhileLoopAssignment22July$ cc Prog2.c
pradnya@pradnya-Latitude-3480:~/Desktop/NestedWhileLoopAssignment22July$ ./a.out
1 
1 2 
2 3 4 
4 5 6 7 
7 8 9 10 11 

*/
