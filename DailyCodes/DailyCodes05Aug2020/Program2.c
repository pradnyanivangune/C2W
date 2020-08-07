#include<stdio.h>
void main(){
	int i = 1 ;					//initialization

	do{
		if(i%2==0)				//only even numbers are printed
			printf("%d is even\n",i);
		i++;					//increment

	}while(i<=20);					//condition

	printf("Out of while\n");

}

/*

pradnya@pradnya-Latitude-3480:~/DailyCodes/DailyCodes05Aug2020$ gedit Program2.c
pradnya@pradnya-Latitude-3480:~/DailyCodes/DailyCodes05Aug2020$ cc Program2.c
pradnya@pradnya-Latitude-3480:~/DailyCodes/DailyCodes05Aug2020$ ./a.out
2 is even
4 is even
6 is even
8 is even
10 is even
12 is even
14 is even
16 is even
18 is even
20 is even
Out of while

*/
