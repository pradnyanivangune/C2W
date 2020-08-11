/*
Take an integer from the user and print it,Exit the loop whenever user enters a palindrome number 

*/

#include<stdio.h>
void main(){

	char ch = 'y';
	
	do {
		int num ; 
		int rem = 0 , rev = 0 ;

		printf("Enter a number:\n");
		scanf("%d",&num);

		int temp = num ;

		while(num != 0){
			rem = num % 10;
			rev = rev * 10 + rem;
			num /= 10 ; 
		}

		if(temp == rev){
			printf("You have entered a palindrome number...\n");
			break;
		}else{
			printf("%d\n",rev);
		}
		
		printf("Do you want to continue(y/n):");
		scanf(" %c",&ch);
	}while(ch == 'y' || ch == 'Y');

}

/*

Output-

pradnya@pradnya-Latitude-3480:~/DailyFlash/DailyFlash07Aug$ gedit Prog5.c
pradnya@pradnya-Latitude-3480:~/DailyFlash/DailyFlash07Aug$ cc Prog5.c
pradnya@pradnya-Latitude-3480:~/DailyFlash/DailyFlash07Aug$ ./a.out
Enter a number:
123
321
Do you want to continue(y/n):y
Enter a number:
454
You have entered a palindrome number...

*/
