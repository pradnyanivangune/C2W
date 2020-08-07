#include<stdio.h>

void main(){
	
	int x = 0 ;
	while(++x--==0){

		printf("%d",x);
	}

}

/*

Output-

pradnya@pradnya-Latitude-3480:~/CodeSnippets/CodeSnippets07Aug$ gedit Prog10.c
pradnya@pradnya-Latitude-3480:~/CodeSnippets/CodeSnippets07Aug$ cc Prog10.c
Prog10.c: In function ‘main’:
Prog10.c:6:8: error: lvalue required as increment operand
  while(++x--==0){
 
*/

