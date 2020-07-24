#include<stdio.h>
#define L 10
void main(){
	auto money=10;
	switch(money,money*2){
	case L:  printf("William");
		break;
	case L*2:printf("Warren");
		break;
	case L*3:printf("Carlos");
		break;
	default: printf("Lawrence");
	case L*4:printf("Inqvar");
		break;
	}
}

/*


pradnya@pradnya-Latitude-3480:~/Desktop/Core2Web/CodeSnippets$ gedit Prog5.c
pradnya@pradnya-Latitude-3480:~/Desktop/Core2Web/CodeSnippets$ cc Prog5.c
pradnya@pradnya-Latitude-3480:~/Desktop/Core2Web/CodeSnippets$ ./a.out
Warren

*/
