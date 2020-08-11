/*Write a Program to check Whether the Entered Number is Perfect
Number or Not until User not exit. If User Enters 'N' Then Exit The Loop.*/

#include<stdio.h>
   void main() {
	   int num;
	   char ch = 'N';

         do {

	   printf("Enter number : ");
	   scanf("%d",&num);

	   int cnt = 1;
	   int sum = 0;
	   while(cnt < num) {
		   if(num % cnt == 0) {
			   sum  = sum + cnt;
		   }
		   cnt++;
	   }
	   if(sum == num) {
		   printf("%d is a perfect number\n",num);
	   } else {
		   printf("%d is not a perfect number\n",num);
	   }
	   printf("Do you want to continue y/n : ");
	   scanf(" %c",&ch);

	 } while(ch == 'Y' || ch == 'y');

   }

/*

Output-

pradnya@pradnya-Latitude-3480:~/Assignment/Control_Flow-Assignment10Aug$ gedit Prog10.c
pradnya@pradnya-Latitude-3480:~/Assignment/Control_Flow-Assignment10Aug$ cc Prog10.c
pradnya@pradnya-Latitude-3480:~/Assignment/Control_Flow-Assignment10Aug$ ./a.out
Enter number : 6
6 is a perfect number
Do you want to continue y/n : y
Enter number : 12
12 is not a perfect number
Do you want to continue y/n : y
Enter number : 45
45 is not a perfect number
Do you want to continue y/n : n


*/
