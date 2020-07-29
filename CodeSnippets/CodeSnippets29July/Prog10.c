#include<stdio.h>
void main(){
	int point1,point2,point3,point4,point5;
	int val;
	printf("Points for
point1,point2,point3,point4,point5\n");
	scanf("%d,%d,%d,%d,%d"
"&point1,&point2,&point3,&point4,&point5");
	val = point1+point2+point3+point4+point5;
	printf("%f\n",val);
}


/*

Output-

pradnya@pradnya-Latitude-3480:~/Desktop/CodeSnippets/CodeSnippets29July$ gedit Prog10.c
pradnya@pradnya-Latitude-3480:~/Desktop/CodeSnippets/CodeSnippets29July$ cc Prog10.c
Prog10.c: In function ‘main’:
Prog10.c:5:9: warning: missing terminating " character
  printf("Points for
         ^
Prog10.c:5:9: error: missing terminating " character
  printf("Points for
         ^~~~~~~~~~~
Prog10.c:6:35: error: stray ‘\’ in program
 point1,point2,point3,point4,point5\n");
                                   ^
Prog10.c:6:35: error: expected ‘)’ before ‘n’
 point1,point2,point3,point4,point5\n");
                                   ^~
                                   )
Prog10.c:6:37: warning: missing terminating " character
 point1,point2,point3,point4,point5\n");
                                     ^
Prog10.c:6:37: error: missing terminating " character
 point1,point2,point3,point4,point5\n");
                                     ^~~
Prog10.c:6:1: warning: passing argument 1 of ‘printf’ makes pointer from integer without a cast [-Wint-conversion]
 point1,point2,point3,point4,point5\n");
 ^~~~~~
In file included from Prog10.c:1:
/usr/include/stdio.h:332:43: note: expected ‘const char * restrict’ but argument is of type ‘int’
 extern int printf (const char *__restrict __format, ...);
                    ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~
Prog10.c:10:21: error: expected ‘;’ before ‘}’ token
  printf("%f\n",val);
                     ^
                     ;
 }
 ~   
*/

