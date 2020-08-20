/******************************************************************************************** 
Write a program to print following pattern
	1  2  3  4
	5  6  7  8
	9  10 11 12
	13 14 15 16
*********************************************************************************************/

#include<stdio.h>
  void main() {
	  int num = 1;

	  // for row
	  for(int row = 1; row <= 4; row++) {

		  // for col
		  for(int col = 1; col <= 4; col++) {
			  printf("%d\t ",num);
			  num++;
		  }
		  printf("\n");
	  }
  }


/*

Output-

pradnya@pradnya-Latitude-3480:~/DailyFlash/DailyFlash20Aug$ gedit Prog4.c
pradnya@pradnya-Latitude-3480:~/DailyFlash/DailyFlash20Aug$ cc Prog4.c
pradnya@pradnya-Latitude-3480:~/DailyFlash/DailyFlash20Aug$ ./a.out
1	 2	 3	 4	 
5	 6	 7	 8	 
9	 10	 11	 12	 
13	 14	 15	 16

*/
