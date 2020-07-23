/*
Q.8) Write a program using nested while loop to Print following Pattern.
0

1	0

1	1	0	

1	1	1	0
*/

#include<stdio.h>
void main(){
	int i = 1;
	while(i<=4){
		int j = 1;
		while(j<=i){

			if(j!=i)
				printf("1 ");
			else
				printf("0 ");
			j++;
		}
		printf("\n");
		i++;
	}
}


/*

Output-

pradnya@pradnya-Latitude-3480:~/Desktop/NestedWhileLoopAssignment22July$ gedit Prog8.c
pradnya@pradnya-Latitude-3480:~/Desktop/NestedWhileLoopAssignment22July$ cc Prog8.c
pradnya@pradnya-Latitude-3480:~/Desktop/NestedWhileLoopAssignment22July$ ./a.out
0 
1 0 
1 1 0 
1 1 1 0 

*/
