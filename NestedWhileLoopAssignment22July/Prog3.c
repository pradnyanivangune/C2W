/*
write a program to print following pattern using nested while loop.
	5 4 3 2 1
	  8 6 4 2
	    9 6 3
	      8 4 
	        5
*/

#include<stdio.h>
void main(){

	int outer=1;
	while(outer<=5)
	{
		int inner=5;
		while(inner >= 1)
		{
			if(outer+inner <=10 && outer+inner >= 7){
				printf(" ");
			}else{
				printf("%d",outer*inner);
			}
			
			inner--;
		}
		printf("\n");
		outer++;
	}

}

/*

Output-

pradnya@pradnya-Latitude-3480:~/Desktop/NestedWhileLoopAssignment22July$ gedit Prog3.c
pradnya@pradnya-Latitude-3480:~/Desktop/NestedWhileLoopAssignment22July$ cc Prog3.c
pradnya@pradnya-Latitude-3480:~/Desktop/NestedWhileLoopAssignment22July$ ./a.out
54321
 8642
  963
   84
    5


*/

