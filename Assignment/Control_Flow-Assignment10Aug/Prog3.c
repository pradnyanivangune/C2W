/* Write a Program That Take Input Integer From User, And Print First And Last Digit From That Entered Number Using While Loop. */


#include<stdio.h>
  void main() {
	  int num,temp;
	  int rem = 0;

	  printf("Enter the number : ");
	  scanf("%d",&num);
	  temp = num;

	  while(num > 10) {
		  num = num / 10;
	  }
	          rem = temp % 10;
	  printf("First Number : %d\n",num);
	  printf("Last Number : %d\n",rem);

  }

/*

Output-

pradnya@pradnya-Latitude-3480:~/Assignment/Control_Flow-Assignment10Aug$ gedit Prog3.c
pradnya@pradnya-Latitude-3480:~/Assignment/Control_Flow-Assignment10Aug$ cc Prog3.c
pradnya@pradnya-Latitude-3480:~/Assignment/Control_Flow-Assignment10Aug$ ./a.out
Enter the number : 5
First Number : 5
Last Number : 5
pradnya@pradnya-Latitude-3480:~/Assignment/Control_Flow-Assignment10Aug$ ./a.out
Enter the number : 345
First Number : 3
Last Number : 5
pradnya@pradnya-Latitude-3480:~/Assignment/Control_Flow-Assignment10Aug$ ./a.out
Enter the number : 32342 
First Number : 3
Last Number : 2


*/
