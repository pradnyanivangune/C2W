#include<stdio.h>

void main(){
	int check = 2;

	switch(check){

		case 1 : printf("D.W.Steyn");
		case 2 : printf("M.G.Johnson");
		case 3 : printf("Mohammad Asif");
		default: printf("M.Muralidaran");
	}
}


/*

Output-

pradnya@pradnya-Latitude-3480:~/Desktop/Core2Web/CodeSnippets$ gedit Prog3.c
pradnya@pradnya-Latitude-3480:~/Desktop/Core2Web/CodeSnippets$ cc Prog3.c
pradnya@pradnya-Latitude-3480:~/Desktop/Core2Web/CodeSnippets$ ./a.out
M.G.JohnsonMohammad AsifM.Muralidaran

*/
