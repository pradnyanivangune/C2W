/*
Program 7. Write a Program To Print Following Pattern. {Note: Take rows input from
user}.
Input: Enter Number of Rows: 5
Output:

				0	
			3	2	5	
		4	6	4	10	4	
	3	6	9	6	15	6	21	
8	4	8	12	8	20	8	28	8

*/

#include<stdio.h>
void main() {


	int row ;
	printf("Enter no of rows : ");
	scanf("%d",&row);

	int i = 0 ;
	while(i<row){
	
		int col = 0 ;
		while(col <= 4 + i) {
		
			if(i + col <= 3){
				printf("\t");
			}else{
				if(col % 2 == 0)
					printf("%d\t",i * 2);
				else
					printf("%d\t",col * i);
			}
			col++;
		}
		printf("\n");
		i++;
	}
	
}

/*

Output-

pradnya@pradnya-Latitude-3480:~/Assignment/Control_Flow-Assignment10Aug$ gedit Prog7.c
pradnya@pradnya-Latitude-3480:~/Assignment/Control_Flow-Assignment10Aug$ cc Prog7.c
pradnya@pradnya-Latitude-3480:~/Assignment/Control_Flow-Assignment10Aug$ ./a.out
Enter no of rows : 5
				0	
			3	2	5	
		4	6	4	10	4	
	3	6	9	6	15	6	21	
8	4	8	12	8	20	8	28	8

*/
