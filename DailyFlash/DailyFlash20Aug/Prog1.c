/***********************************************************************************************

Write a program that takes all three sides of a triangle from user and check whether that triangle satisfies the Pythogorean Theorem.

*************************************************************************************************/


#include <stdio.h>

void main()
{
	int a,b,c ;

	printf("Side 1:\n");
	scanf("%d",&a);
	printf("Side 2:\n");
	scanf("%d",&b);
	printf("Hypotenuse:\n");
	scanf("%d",&c);

	int ans = a*a + b*b ;

	if(c*c == ans) {

		printf("Triangle satisfies the Pythogorean Theorem\n");
	}else {

		printf("Triangle does not satisfy the Pythogorean Theorem\n");
	}
}


/*

Output-

pradnya@pradnya-Latitude-3480:~/DailyFlash/DailyFlash20Aug$ gedit Prog1.c
pradnya@pradnya-Latitude-3480:~/DailyFlash/DailyFlash20Aug$ cc Prog1.c
pradnya@pradnya-Latitude-3480:~/DailyFlash/DailyFlash20Aug$ ./a.out
Side 1:
3
Side 2:
4
Hypotenuse:
5
Triangle satisfies the Pythogorean Theorem
pradnya@pradnya-Latitude-3480:~/DailyFlash/DailyFlash20Aug$ ./a.out
Side 1:
4
Side 2:
3
Hypotenuse:
5
Triangle satisfies the Pythogorean Theorem
pradnya@pradnya-Latitude-3480:~/DailyFlash/DailyFlash20Aug$ ./a.out
Side 1:
5
Side 2:
4
Hypotenuse:
3
Triangle does not satisfy the Pythogorean Theorem

*/


