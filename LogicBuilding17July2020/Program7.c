//FOR LOOP BASIC #7

#include<stdio.h>

void main(void){

	int n ;
	printf("How many numbers you want to print:");
	scanf("%d",&n);

	for(int i=1 ; i<=n ; i++){

			printf("%d ",i*i);
			
	}
	printf("\n");
}


/*

Output-

pradnya@pradnya-Latitude-3480:~/Desktop/LogicBuilding$ gedit Program7.c
pradnya@pradnya-Latitude-3480:~/Desktop/LogicBuilding$ cc Program7.c
pradnya@pradnya-Latitude-3480:~/Desktop/LogicBuilding$ ./a.out
How many numbers you want to print: 10
1 4 9 16 25 36 49 64 81 100 

*/
