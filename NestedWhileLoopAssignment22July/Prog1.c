/*
Write a C program to take a number as input and print Whether that number is a Strong number or not.
*/

#include <stdio.h>

void main()
{
	int i, originalNum, num, lastDigit, sum;
	int fact;

	/* Input a number from user */
	printf("Enter any number to check Strong number: ");
	scanf("%d", &num);

	/* Copy the value of num to a temporary variable */
	originalNum = num;

	sum = 0;

	/* Find sum of factorial of digits */
	while(num > 0)
	{

        	/* Get last digit of num */
        	lastDigit = num % 10;

        	/* Find factorial of last digit */
        	fact = 1;
		i=1;
        	while(i<=lastDigit)
        	{
            		fact = fact * i;
			i++;
        	}

        	/* Add factorial to sum */
        	sum = sum + fact;

        	num = num / 10;
	}
	/* Check Strong number condition */
	if(sum == originalNum)
	{
        printf("%d is STRONG NUMBER\n", originalNum);
	}
	else
	{
        printf("%d is NOT STRONG NUMBER\n", originalNum);
	}

}




/*

Output-

pradnya@pradnya-Latitude-3480:~/Desktop/NestedWhileLoopAssignment22July$ gedit Prog1.c 
pradnya@pradnya-Latitude-3480:~/Desktop/NestedWhileLoopAssignment22July$ cc Prog1.c
pradnya@pradnya-Latitude-3480:~/Desktop/NestedWhileLoopAssignment22July$ ./a.out
Enter any number to check Strong number: 145
145 is STRONG NUMBER
pradnya@pradnya-Latitude-3480:~/Desktop/NestedWhileLoopAssignment22July$ ./a.out
Enter any number to check Strong number: 123
123 is NOT STRONG NUMBER
pradnya@pradnya-Latitude-3480:~/Desktop/NestedWhileLoopAssignment22July$ ./a.out
Enter any number to check Strong number: 1
1 is STRONG NUMBER


*/
