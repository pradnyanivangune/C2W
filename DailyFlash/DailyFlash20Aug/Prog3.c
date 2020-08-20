/*****************************************************************************

 Write a program to check if a year is leap year or not. 

******************************************************************************/

#include<stdio.h>
    void main() {
	    int year;

	    // take year from user
	    printf("Enter Year : ");
	    scanf("%d",&year);

	    // condition to check whether the year is leap or not 
	    if(year % 4 == 0 ){

			if(year % 400 == 0) {
		   		printf("Year is a Century Year\n");
			}else{
		   		printf("Year is a Leap Year\n");
			}
			

	    } else {
		    printf("Year is not a Leap Year\n");
	    }
    }

/*

Output-

pradnya@pradnya-Latitude-3480:~/DailyFlash/DailyFlash20Aug$ gedit Prog3.c
pradnya@pradnya-Latitude-3480:~/DailyFlash/DailyFlash20Aug$ cc Prog3.c
pradnya@pradnya-Latitude-3480:~/DailyFlash/DailyFlash20Aug$ ./a.out
Enter Year : 2000
Year is a Century Year
pradnya@pradnya-Latitude-3480:~/DailyFlash/DailyFlash20Aug$ ./a.out
Enter Year : 2012
Year is a Leap Year
pradnya@pradnya-Latitude-3480:~/DailyFlash/DailyFlash20Aug$ ./a.out
Enter Year : 2020
Year is a Leap Year
pradnya@pradnya-Latitude-3480:~/DailyFlash/DailyFlash20Aug$ ./a.out
Enter Year : 1998
Year is not a Leap Year

*/
