#include<stdio.h>
void main(){

	char tempstr[] = "THE WATER HAS NO COLOR";
	printf("\nThe value returned by printf() for tempstr is : %d",printf("%s",tempstr));
}


/*

Output-

pradnya@pradnya-Latitude-3480:~/Desktop/CodeSnippets/CodeSnippets29July$ gedit Prog6.c
pradnya@pradnya-Latitude-3480:~/Desktop/CodeSnippets/CodeSnippets29July$ cc Prog6.c
pradnya@pradnya-Latitude-3480:~/Desktop/CodeSnippets/CodeSnippets29July$ ./a.out
THE WATER HAS NO COLOR
The value returned by printf() for tempstr is : 22

*/
