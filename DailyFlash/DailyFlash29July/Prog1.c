/*
Write a C Program tp print the following program:

1	2	3	4	5
	4	6	8	10
		9	12	15
			16	20
				25

*/

#include<stdio.h>
   void main() {
	   
	   // for row
	   for(int row = 1; row <= 5; row++) {
		   int num = 1;                                         // initialization

		   // for space
		   for(int space = 1; space < row; space++) {
			   printf("\t ");
			   num++;                                      // increment by 1
		   }

		   // for col
		   for(int col = 5 ; col >= row; col--) {
			   printf("%d\t ", row * num);
			   num++;			              // increment by 1
		 }
		   

		   printf("\n");
	   }
   }


/*

Output-

pradnya@pradnya-Latitude-3480:~/Desktop/DailyFlash/DailyFlash29July$ gedit Prog1.c
pradnya@pradnya-Latitude-3480:~/Desktop/DailyFlash/DailyFlash29July$ cc Prog1.c
pradnya@pradnya-Latitude-3480:~/Desktop/DailyFlash/DailyFlash29July$ ./a.out
1	 2	 3	 4	 5	 
	 4	 6	 8	 10	 
	 	 9	 12	 15	 
	 	 	 16	 20	 
	 	 	 	 25

*/

