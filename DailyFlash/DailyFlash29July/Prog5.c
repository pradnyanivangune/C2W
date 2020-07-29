/*
Print the following pattern

0	1	1	2	3
	5	8	13	21
		34	55	89
			144	233
				377

*/

#include<stdio.h>
   void main() {
	   int num1 = 0;
	   int num2 = 1;
	   int num3; 

	   // for row
	   for(int row = 1; row <= 5; row++) {

		   // for space
		   for(int space = 1; space < row; space++) {
			   printf("\t ");
		   }

		   // for col
		   for(int col = 5; col >= row; col--) {
			   printf("%d\t ",num1);
			   num3 = num1 + num2;                       // fibonacci series logic
			   num1 = num2;
			   num2 = num3;

		   }
		   printf("\n");
	   }

   }


/*

Output-

pradnya@pradnya-Latitude-3480:~/Desktop/DailyFlash/DailyFlash29July$ gedit Prog5.c
pradnya@pradnya-Latitude-3480:~/Desktop/DailyFlash/DailyFlash29July$ cc Prog5.c
pradnya@pradnya-Latitude-3480:~/Desktop/DailyFlash/DailyFlash29July$ ./a.out
0	 1	 1	 2	 3	 
	 5	 8	 13	 21	 
	 	 34	 55	 89	 
	 	 	 144	 233	 
	 	 	 	 377

*/


