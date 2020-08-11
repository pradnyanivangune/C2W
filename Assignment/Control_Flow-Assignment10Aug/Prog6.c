/*
Program 6. Write a Program To Print Following Pattern. {Note: Take rows input from
user}
Input: Enter Number of Rows: 5
Output:
0	1	4	9	16	
	2	6	12	20	
		8	15	24	
			18	28	
				32

*/

#include<stdio.h>
   void main() {
	   int a = 0;
	   int row;

	   printf("Enter number of rows : ");
	   scanf("%d",&row);

	   int i = 0;

	   while(i <= row ) {
		   int temp = a;
		   int k = 0;
		   while(k < i) {
		          printf("\t");
		          k++;
	   }

	   int j = 4;
	   while(j >= i) {
		   printf("%d\t",temp * (i + temp));
		   temp++;
		   j--;
	   }
	   a++;
	   printf("\n");
	   i++;
   }
   }

/*

Output-

pradnya@pradnya-Latitude-3480:~/Assignment/Control_Flow-Assignment10Aug$ gedit Prog6.c
pradnya@pradnya-Latitude-3480:~/Assignment/Control_Flow-Assignment10Aug$ cc Prog6.c
pradnya@pradnya-Latitude-3480:~/Assignment/Control_Flow-Assignment10Aug$ ./a.out
Enter number of rows : 5
0	1	4	9	16	
	2	6	12	20	
		8	15	24	
			18	28	
				32

*/


