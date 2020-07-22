#include<stdio.h>
void main(){
	int const X=0;
	switch(5/4/3){
		case X:  printf("Clinton");
			break;
		case X+1:printf("Gandhi");
			break;
		case X+2:printf("Gates");
			break;
		default: printf("Brown");
		
	}
}


/*

output-

pradnya@pradnya-Latitude-3480:~/Desktop/Code snippets/CodeSnippets22July$ gedit Prog6.c
pradnya@pradnya-Latitude-3480:~/Desktop/Code snippets/CodeSnippets22July$ cc Prog6.c
Prog6.c: In function ‘main’:
Prog6.c:5:3: error: case label does not reduce to an integer constant
   case X:  printf("Clinton");
   ^~~~
Prog6.c:7:3: error: case label does not reduce to an integer constant
   case X+1:printf("Gandhi");
   ^~~~
Prog6.c:9:3: error: case label does not reduce to an integer constant
   case X+2:printf("Gates");
   ^~~~


*/
