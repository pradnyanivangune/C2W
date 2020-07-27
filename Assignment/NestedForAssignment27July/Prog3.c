/*
Q3) Take a number from user and print the factorial of each number  from 1 to n
       Input :-  5
       Output :- 1   2    6   24   120 

*/

#include<stdio.h>
void main(){
	
	int num ;
	int mul = 1 ;
	
	printf("Enter number:\n");
	scanf("%d",&num);

	for(int i = 1 ; i <= num ; i++){
		
			mul = mul * i ;
			printf("%d ", mul);
		
	}
}

/*

Output:-

pradnya@pradnya-Latitude-3480:~/Desktop/NestedForAssignment27July$ gedit Prog3.c 
pradnya@pradnya-Latitude-3480:~/Desktop/NestedForAssignment27July$ cc Prog3.c
pradnya@pradnya-Latitude-3480:~/Desktop/NestedForAssignment27July$ ./a.out
Enter number:                                                                                                                                  
10                                                                                                                                             
1 2 6 24 120 720 5040 40320 362880 3628800 


*/
