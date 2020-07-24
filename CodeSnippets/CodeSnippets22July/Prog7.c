#include<stdio.h>
void main(){
	
	switch(*(1+"AB" "CD"+1)){
		case 'A':  printf("Pulp Fiction");
			break;
		case 'B':printf("12 Angry Man");
			break;
		case 'C':printf("Casabance");
			break;
		case 'D':printf("Blood Diamond");
					
	}
}


/*

output-

pradnya@pradnya-Latitude-3480:~/Desktop/Code snippets/CodeSnippets22July$ gedit Prog7.c
pradnya@pradnya-Latitude-3480:~/Desktop/Code snippets/CodeSnippets22July$ cc Prog7.c
pradnya@pradnya-Latitude-3480:~/Desktop/Code snippets/CodeSnippets22July$ ./a.out
Casabance


*/
