/* 0
   1  1
   2  3  5 
   8  13 21  34

*/

#include<stdio.h>
  void main() {
	  int num1 = 0, num2 = 1, temp;
	  int l;

	  printf("Enter number of rows : ");
	  scanf("%d",&l);

	  int row = 1;
	  while(row <= l) {
		  int col = 1;

		  while(col <= row) {
			  printf("%d\t",num1);
			  temp = num1 + num2;
			  num1 = num2;
			  num2 = temp;
			  col++;
		  }
		  printf("\n");
		  row++;
	  }
  }

/*

Output-

pradnya@pradnya-Latitude-3480:~/Assignment/Control_Flow-Assignment10Aug$ gedit Prog5.c
pradnya@pradnya-Latitude-3480:~/Assignment/Control_Flow-Assignment10Aug$ cc Prog5.c
pradnya@pradnya-Latitude-3480:~/Assignment/Control_Flow-Assignment10Aug$ ./a.out
Enter number of rows : 4
0	
1	1	
2	3	5	
8	13	21	34

*/
 
