/*
Write a program to print following pattern

1	4	9	16	25
	216	343	512	729
		100	121	144
			2197	2744
				225

*/

#include<stdio.h>
   void main() {
	   int num = 1;
           
	   // for row
	   for(int row = 1; row <= 5; row++) {
		   
		   // for space
		   for(int space = 1; space < row; space++) {
			   printf("\t ");
		   }

		   // for col
		   for(int col = 5; col >= row; col--) {
			   if(row % 2 == 0) {                                // if true then print cube of num
			      	    printf("%d\t ",num * num * num);       
			   }
			    else {
				    printf("%d\t ", num * num);             // if not then print square of num
			    }
			    num++;                                          // increment num by 1
		   } 
		   printf("\n");
	   }
   }


/*

Output-

pradnya@pradnya-Latitude-3480:~/Desktop/DailyFlash/DailyFlash29July$ gedit Prog4.c
pradnya@pradnya-Latitude-3480:~/Desktop/DailyFlash/DailyFlash29July$ cc Prog4.c
pradnya@pradnya-Latitude-3480:~/Desktop/DailyFlash/DailyFlash29July$ ./a.out
1	 4	 9	 16	 25	 
	 216	 343	 512	 729	 
	 	 100	 121	 144	 
	 	 	 2197	 2744	 
	 	 	 	 225

*/
