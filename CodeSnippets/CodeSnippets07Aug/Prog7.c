#include<stdio.h>

void main(){
	
	int x = 5, y = 0 ;
	while(--x > ++y){

		printf("%d",x);
	}

}

/*

Output-

pradnya@pradnya-Latitude-3480:~/CodeSnippets/CodeSnippets07Aug$ gedit Prog7.c
pradnya@pradnya-Latitude-3480:~/CodeSnippets/CodeSnippets07Aug$ cc Prog7.c
pradnya@pradnya-Latitude-3480:~/CodeSnippets/CodeSnippets07Aug$ ./a.out
43

*/

