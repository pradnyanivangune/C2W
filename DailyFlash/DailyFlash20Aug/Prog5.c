/***************************************************************************************************

 Take marks of five sub and calculate percentage and grade. 

****************************************************************************************************/

#include<stdio.h>
void main() {
	    int Phy,Chem,Bio,Math,Comp;
	    int percentage;

	    // take marks of five sub
	    printf("Enter Marks of Five Subjects :\n");
	    scanf("%d %d %d %d %d",&Phy,&Chem,&Bio,&Math,&Comp);

	    // calculate percantage
	    percentage = (Phy + Chem + Bio + Math + Comp) / 5;
	    printf("Percentage = %d\n ",percentage);

	   
		if(percentage >= 90){
			   printf("Grade A\n");
		}

		else if(percentage >= 80){
			   printf("Grade B\n");
		}

		else if(percentage >= 70){
			   printf("Grade C\n");
		}

		else if(percentage >= 60){
			   printf("Grade D\n");
		}

		else if(percentage >= 40){
			   printf("Grade E\n");
		}

		else{
			   printf("F\n");
		}
 
}



/*

Output-

pradnya@pradnya-Latitude-3480:~/DailyFlash/DailyFlash20Aug$ gedit Prog5.c
pradnya@pradnya-Latitude-3480:~/DailyFlash/DailyFlash20Aug$ cc Prog5.c
pradnya@pradnya-Latitude-3480:~/DailyFlash/DailyFlash20Aug$ ./a.out
Enter Marks of Five Subjects :
45
78
76
90
78
Percentage = 73
 Grade C
pradnya@pradnya-Latitude-3480:~/DailyFlash/DailyFlash20Aug$ ./a.out
Enter Marks of Five Subjects :
43
56
87
55
64
Percentage = 61
 Grade D

*/
