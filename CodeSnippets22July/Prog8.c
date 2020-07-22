#include<stdio.h>
void main(){
	char *str="ONE";
	str++;
	switch(str){
		case "ONE":printf("Brazil");
			break;
		case "NE": printf("Toy story");
			break;
		case "N":  printf("His Girl Friday");
			break;
		case "E":  printf("Casino Royale");
	}
}


/*

output-

pradnya@pradnya-Latitude-3480:~/Desktop/Code snippets/CodeSnippets22July$ gedit Prog8.c
pradnya@pradnya-Latitude-3480:~/Desktop/Code snippets/CodeSnippets22July$ cc Prog8.c
Prog8.c: In function ‘main’:
Prog8.c:5:9: error: switch quantity not an integer
  switch(str){
         ^~~
Prog8.c:6:3: error: case label does not reduce to an integer constant
   case "ONE":printf("Brazil");
   ^~~~
Prog8.c:8:3: error: case label does not reduce to an integer constant
   case "NE": printf("Toy story");
   ^~~~
Prog8.c:10:3: error: case label does not reduce to an integer constant
   case "N":  printf("His Girl Friday");
   ^~~~
Prog8.c:12:3: error: case label does not reduce to an integer constant
   case "E":  printf("Casino Royale");
   ^~~~

*/
