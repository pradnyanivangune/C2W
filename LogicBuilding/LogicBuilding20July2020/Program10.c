//FOR LOOP BASIC #10

#include<stdio.h>

void main(void){

	for(int i=1 ; i<=10 ; i++){
			
			if(i%2 != 0)
				printf("Odd: %d\n",i);
			else
				printf("Even: %d\n",i);	
		
	}

}


/*

Output-

pradnya@pradnya-Latitude-3480:~/Desktop/LogicBuilding$ gedit Program10.c
pradnya@pradnya-Latitude-3480:~/Desktop/LogicBuilding$ cc Program10.c
pradnya@pradnya-Latitude-3480:~/Desktop/LogicBuilding$ ./a.out
Odd: 1
Even: 2
Odd: 3
Even: 4
Odd: 5
Even: 6
Odd: 7
Even: 8
Odd: 9
Even: 10
 

*/
