/*
Program 1. Write a program that print the datatype of variables using if-else Ladder.
Take int, char, and float type variable and gives hardcoded value for those variables.
Take 1 variable, and use if-else ladder and print the datatype of that variable.
Same for other variables.
Input: char a = 'A';
Output: variable is of Char datatype.
Note: don't give direct variable name to if-else ladder or don't compare values inside
if-else ladder condition.
char ch = 'A'
if(ch)
printf(variable is of Char datatype);

*/

#include<stdio.h>
void main(){

	int i = 1 ;
	double d = 10.345 ;
	char ch = 'A' ;

	if(i) {
		if(sizeof(i)==4)
			printf("i = %d is of int datatype\n",i);
	}

	if(d) {
		if(sizeof(d)==8)
			printf("d = %f is of double datatype\n",d);
	}

	if(ch) {
		if(sizeof(ch)==1)
			printf("ch = %c is of character datatype\n",ch);
	}	
}

/*

Output-

pradnya@pradnya-Latitude-3480:~/Assignment/Control_Flow-Assignment10Aug$ gedit Prog1.c
pradnya@pradnya-Latitude-3480:~/Assignment/Control_Flow-Assignment10Aug$ cc Prog1.c
pradnya@pradnya-Latitude-3480:~/Assignment/Control_Flow-Assignment10Aug$ ./a.out
i = 1 is of int datatype
d = 10.345000 is of double datatype
ch = A is of character datatype


*/
