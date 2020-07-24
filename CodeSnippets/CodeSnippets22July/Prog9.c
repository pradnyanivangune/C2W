#include<stdio.h>
void main(){
	int a=3,b=2;
	a=a==b==0;
	switch(1){
		a=a+10;
	}
	sizeof(a++);
	printf("%d",a);
}

/*

output-

pradnya@pradnya-Latitude-3480:~/Desktop/Code snippets/CodeSnippets22July$ gedit Prog8.c
pradnya@pradnya-Latitude-3480:~/Desktop/Code snippets/CodeSnippets22July$ gedit Prog9.c
pradnya@pradnya-Latitude-3480:~/Desktop/Code snippets/CodeSnippets22July$ cc Prog9.c
Prog9.c: In function ‘main’:
Prog9.c:6:4: warning: statement will never be executed [-Wswitch-unreachable]
   a=a+10;
   ~^~~~~
pradnya@pradnya-Latitude-3480:~/Desktop/Code snippets/CodeSnippets22July$ ./a.out
1

*/
