//FOR LOOP BASIC #11

#include<stdio.h>

void main(void){

	int cnt = 0 ;
	for(int i=1 ; cnt<5 ; i++){
			
			if(i%5 == 0){
				printf("%d ",i);
				cnt++;
			}	
		
	}

}


/*

Output-

pradnya@pradnya-Latitude-3480:~/Desktop/LogicBuilding$ gedit Program11.c
pradnya@pradnya-Latitude-3480:~/Desktop/LogicBuilding$ cc Program11.c
pradnya@pradnya-Latitude-3480:~/Desktop/LogicBuilding$ ./a.out
5 10 15 20 25
 

*/
