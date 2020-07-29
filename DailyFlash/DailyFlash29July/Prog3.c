/*
Print the following pattern.Take no. of rows from user.

1	2	6	24	120
	1	2	6	24
		1	2	6
			1	2	
				1

*/

#include<stdio.h>
   void main() {

           // for row
	   for(int row = 1; row <= 5; row++) {
		   int fact = 1;                                           // initialization
		   int num = 1;                                            // initialization

		   // for space
		   for(int space = 1; space < row; space++) {
			   printf("\t ");
		   }
 
		   // for col
		   for(int col = 5; col >= row; col--) {
			   fact *= num;                                    // logic for factorial
			   printf("%d\t ",fact);
			   num++;                                          // increment num by 1
		   }
		   printf("\n");
	   }


   }


/*

Output-

pradnya@pradnya-Latitude-3480:~/Desktop/DailyFlash/DailyFlash29July$ gedit Prog3.c
pradnya@pradnya-Latitude-3480:~/Desktop/DailyFlash/DailyFlash29July$ cc Prog3.c
pradnya@pradnya-Latitude-3480:~/Desktop/DailyFlash/DailyFlash29July$ ./a.out
1	 2	 6	 24	 120	 
	 1	 2	 6	 24	 
	 	 1	 2	 6	 
	 	 	 1	 2	 
	 	 	 	 1

*/
