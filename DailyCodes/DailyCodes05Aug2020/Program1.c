#include<stdio.h>
void main(){
	int i = 10 ;				//initialization

	do{
	
		printf("In do while body\n");
		i++;				//increment

	}while(i>=20);				//Condition

	printf("Out of while\n");

}

/*

pradnya@pradnya-Latitude-3480:~/DailyCodes/DailyCodes05Aug2020$ gedit Program1.c
pradnya@pradnya-Latitude-3480:~/DailyCodes/DailyCodes05Aug2020$ cc Program1.c
pradnya@pradnya-Latitude-3480:~/DailyCodes/DailyCodes05Aug2020$ ./a.out
In do while body
Out of while

*/
