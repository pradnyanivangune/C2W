//FOR LOOP BASICS #15

/*
Write a program to print following series:
1	8	27	64	125	216	343	512

*/

#include<stdio.h>
void main(){

	for(int i = 1 ; i<9 ; i++){

		printf("%d\t ",i * i * i);
	}
	printf("\n");
}

/*

Output-

pradnya@pradnya-Latitude-3480:~/Desktop/LogicBuilding/LogicBuilding23July2020$ gedit Program15.c
pradnya@pradnya-Latitude-3480:~/Desktop/LogicBuilding/LogicBuilding23July2020$ cc Program15.c
pradnya@pradnya-Latitude-3480:~/Desktop/LogicBuilding/LogicBuilding23July2020$ ./a.out
1	 8	 27	 64	 125	 216	 343	 512

*/
