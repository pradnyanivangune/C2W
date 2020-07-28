//FOR LOOP BASICS #16

/*
Write a program to print following series upto the nth entered number
Series : 9 99 999 9999 99999 999999 .....n

*/

#include<stdio.h>
void main(){

	long num = 9 ;
	int n ;
	printf("Enter number:");
	scanf("%d",&n);

	for(int i = 1 ; i<=n ; i++){

		printf("%ld\t ",num);
		num = num * 10 + 9 ;
	}
	printf("\n");
}

/*

Output-

pradnya@pradnya-Latitude-3480:~/Desktop/LogicBuilding/LogicBuilding23July2020$ gedit Program16.c
pradnya@pradnya-Latitude-3480:~/Desktop/LogicBuilding/LogicBuilding23July2020$ cc Program16.c
pradnya@pradnya-Latitude-3480:~/Desktop/LogicBuilding/LogicBuilding23July2020$ ./a.out
Enter number: 10
9	 99	 999	 9999	 99999	 999999	 9999999	 99999999	 999999999	 9999999999	 

*/
