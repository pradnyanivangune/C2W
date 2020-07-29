/*
Print the following pattern

1	2	3	4	5
	3	4	5	6
		5	6	7
			7	8
				9

*/

#include<stdio.h>
   void main() { 
	   int num = 0;

	   // for row
	   for(int row = 1; row <= 5; row++) {

		   // for space
		   for(int space = 1; space < row; space++) {
			   printf("\t ");
			   num = row;
			   num--;
		   }

		   // for col
		   for(int col = 5; col >= row; col--) {
		   printf("%d\t ",row + num);
			   num++;
			   
		   }
		 
		   printf("\n");
	   }

   }

/*

Output-

pradnya@pradnya-Latitude-3480:~/Desktop/DailyFlash/DailyFlash29July$ gedit Prog2.c
pradnya@pradnya-Latitude-3480:~/Desktop/DailyFlash/DailyFlash29July$ cc Prog2.c
pradnya@pradnya-Latitude-3480:~/Desktop/DailyFlash/DailyFlash29July$ ./a.out
1	 2	 3	 4	 5	 
	 3	 4	 5	 6	 
	 	 5	 6	 7	 
	 	 	 7	 8	 
	 	 	 	 9

*/
