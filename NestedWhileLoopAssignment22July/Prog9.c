/*

9)write a program to print following pattern using nested while loop.
1
1 0
1 0 1
1 0 1 0
1 0 1 0 1

*/

#include<stdio.h>
void main(){
	int i = 1;
	while(i<=5){
		int j = 1;
		while(j<=i){

			if(j==2 || j==4)
				printf("0 ");
			else
				printf("1 ");
			j++;
		}
		printf("\n");
		i++;
	}
}


/*

Output-

pradnya@pradnya-Latitude-3480:~/Desktop/NestedWhileLoopAssignment22July$ gedit Prog9.c
pradnya@pradnya-Latitude-3480:~/Desktop/NestedWhileLoopAssignment22July$ cc Prog9.c
pradnya@pradnya-Latitude-3480:~/Desktop/NestedWhileLoopAssignment22July$ ./a.out
1 
1 0 
1 0 1 
1 0 1 0 
1 0 1 0 1


*/

