#include<stdio.h>

void main(){
	int movie = 1;

	switch(movie<<2+movie){
		default: printf("3 Idiots");
		case 4 : printf(" Ghajini");
		case 5 : printf(" Krrish");
		case 8 : printf(" Race");

	}
}


/*

Output-

pradnya@pradnya-Latitude-3480:~/Desktop/Core2Web/CodeSnippets$ gedit Prog4.c
pradnya@pradnya-Latitude-3480:~/Desktop/Core2Web/CodeSnippets$ cc Prog4.c
pradnya@pradnya-Latitude-3480:~/Desktop/Core2Web/CodeSnippets$ ./a.out
 Race
*/
