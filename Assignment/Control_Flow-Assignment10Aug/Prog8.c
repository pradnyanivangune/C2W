/*Program 8. Write a Program To Print Following Pattern. {Note: Take rows input from
user}.
Input: Enter Number of Rows: 5
Output:

A	B	C	D	E	F	G	H	I
	=	=	=	=	=	=	=
		E	F	G	H	I
			=	=	=
				I

*/

#include<stdio.h>
void main(){

	int n;
	printf("Enter no. of rows:\n");
	scanf("%d",&n);
	
	int row = n ; 
	while( row >= 1 ){
	
		char ch = 'I'- (row * 2-2) ;

		int space = n-1 ;
		while(space >=row){

			printf("\t ");
			space--;
		}

		int col = row * 2-1 ;
		while(col >=1){

			if(row%2 == 0){
				printf("=\t ");
			}else{
				printf("%c\t ",ch);
				ch++;
			}
			col--;	
		}
		
		row -- ;
		printf("\n");
	}
	
}

/*

Output-

pradnya@pradnya-Latitude-3480:~/Assignment/Control_Flow-Assignment10Aug$ gedit Prog8.c
pradnya@pradnya-Latitude-3480:~/Assignment/Control_Flow-Assignment10Aug$ cc Prog8.c
pradnya@pradnya-Latitude-3480:~/Assignment/Control_Flow-Assignment10Aug$ ./a.out
Enter no. of rows:
5
A	 B	 C	 D	 E	 F	 G	 H	 I	 
	 =	 =	 =	 =	 =	 =	 =	 
	 	 E	 F	 G	 H	 I	 
	 	 	 =	 =	 =	 
	 	 	 	 I

*/


