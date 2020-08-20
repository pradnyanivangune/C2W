/***********************************************************************************************

Write a program to calculate simple interest.
*************************************************************************************************/


#include<stdio.h>
void main()
{
	int principle, rate , time ,int_amt;
	printf("Enter principle amount :\n"); 
	scanf("%d",&principle);

	printf("Enter Rate of interest:\n"); 
	scanf("%d",&rate);

	printf("Enter Time in years:\n");
	scanf("%d",&time);

	int_amt=(principle*rate*time)/100;

	printf("Simple interest = %d\n",int_amt);
	
}

/*

Output-

pradnya@pradnya-Latitude-3480:~/DailyFlash/DailyFlash20Aug$ gedit Prog2.c
pradnya@pradnya-Latitude-3480:~/DailyFlash/DailyFlash20Aug$ cc Prog2.c
pradnya@pradnya-Latitude-3480:~/DailyFlash/DailyFlash20Aug$ ./a.out
Enter principle amount :
10000
Enter Rate of interest:
10
Enter Time in years:
12
Simple interest = 12000



*/


