#include<stdio.h>
void main(){
	char str[] = "LEARNING AND ENJOYING";

	printf("While printing ");
	printf(", the value returned by printf() is :- %d",printf("%s",str));
}

/*

Output-

pradnya@pradnya-Latitude-3480:~/Desktop/CodeSnippets/CodeSnippets29July$ gedit Prog9.c
pradnya@pradnya-Latitude-3480:~/Desktop/CodeSnippets/CodeSnippets29July$ cc Prog9.c
pradnya@pradnya-Latitude-3480:~/Desktop/CodeSnippets/CodeSnippets29July$ ./a.out
While printing LEARNING AND ENJOYING, the value returned by printf() is :- 21

*/
