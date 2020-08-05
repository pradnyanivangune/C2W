

#include<stdio.h>
  void main() {
	  int x = 0;

	  while(+(+x--)==0) {
		  printf("%d ",x);
	  }
  }

/*

Output-

pradnya@pradnya-Latitude-3480:~/Desktop/CodeSnippets/CodeSnippets05Aug$ gedit Prog9.c
pradnya@pradnya-Latitude-3480:~/Desktop/CodeSnippets/CodeSnippets05Aug$ cc Prog9.c
pradnya@pradnya-Latitude-3480:~/Desktop/CodeSnippets/CodeSnippets05Aug$ ./a.out
-1 

*/
