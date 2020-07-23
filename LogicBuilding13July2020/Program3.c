//FOR LOOP BASIC #3

#include<stdio.h>

void main(void){

	int cnt=0 ;

	for(int i=1 ; cnt<10 ; i++){

		if(i%2 == 0){

			printf("%d ",i);
			cnt = cnt + 1;

		}
	}
	printf("\n");
}


/*

Output-

pradnya@pradnya-Latitude-3480:~/Desktop/LogicBuilding$ gedit Program3.c
pradnya@pradnya-Latitude-3480:~/Desktop/LogicBuilding$ cc Program3.c
pradnya@pradnya-Latitude-3480:~/Desktop/LogicBuilding$ ./a.out
2 4 6 8 10 12 14 16 18 20

*/
