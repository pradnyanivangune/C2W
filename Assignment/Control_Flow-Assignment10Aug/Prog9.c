/*Write a Program to check Whether the Entered Number is Strong
Number or Not. Until User, not exit. If User Enters 'N' Then Exit The Loop.*/

#include<stdio.h>
   void main() {
	   int num,temp,cnt;                        
	   int rem;
	   int fact;
	   

	   char ch = 'N';

	   do {
	       printf("Enter number: ");           // take any number from user
	       scanf("%d",&num);

	   temp = num;                                 // store that number into temporary variable
	   int sum = 0;

	   while(num) {                                // outer condition
		   rem = num % 10;                     // store remainder in variable 'rem'
		   cnt = 1;                            // initialize cnt
		   fact = 1;                           // initialize fact
		   while(cnt <= rem) {                 // inner condition
			   fact = fact * cnt;          // multiply fact * cnt and store in 'fact'
			   cnt++;                      // inrement count  by 1
		   }
		   sum = sum + fact;                   // store sum
		   num = num / 10;                     // reduce the number by eliminating last digit
	   }
	   if(temp == sum) {                           // if sum is equal to original number then, number is Strong number
		   printf("Is Strong Number\n");
		   
	   }
	   else {
		   printf("Is not a Strong Number\n"); // if not then number is not a Strong number
	   }
		   printf("Do You want to continue y/n : ");
		   scanf(" %c",&ch);
	   
   } while(ch == 'Y' || ch == 'y');
   }


/*

Output-

pradnya@pradnya-Latitude-3480:~/Assignment/Control_Flow-Assignment10Aug$ gedit Prog9.c
pradnya@pradnya-Latitude-3480:~/Assignment/Control_Flow-Assignment10Aug$ cc Prog9.c
pradnya@pradnya-Latitude-3480:~/Assignment/Control_Flow-Assignment10Aug$ ./a.out
Enter number: 123
Is not a Strong Number
Do You want to continue y/n : y
Enter number: 145
Is Strong Number
Do You want to continue y/n : n


*/
