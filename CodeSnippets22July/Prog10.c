#include<stdio.h>
void main(){
	switch(5||2|1){
		case 3&2:printf("Anatomy of a Murder");
			break;
		case -~11:printf("Planet of Apes");
			break;
		case 6-3<<2:printf("The conveersation");
			break;
		case 5>=5:printf("Shaun of the Dead");
	}
}


/*

output-

pradnya@pradnya-Latitude-3480:~/Desktop/Code snippets/CodeSnippets22July$ gedit Prog10.c
pradnya@pradnya-Latitude-3480:~/Desktop/Code snippets/CodeSnippets22July$ cc Prog10.c
Prog10.c: In function ‘main’:
Prog10.c:8:3: error: duplicate case value
   case 6-3<<2:printf("The conveersation");
   ^~~~
Prog10.c:6:3: note: previously used here
   case -~11:printf("Planet of Apes");
   ^~~~
*/
