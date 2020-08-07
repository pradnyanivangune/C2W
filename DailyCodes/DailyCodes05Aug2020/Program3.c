#include<stdio.h>
void main(){
	int num ;
	char cha = 'y' ;					//initialization

	do{
		printf("Enter number:\n");
		scanf("%d",&num);
		int rem = 0 ;
		int rev = 0 ;

		int var = num ;
		while(num!=0){
		
			rem = num%10 ;
			rev = rev * 10 + rem ;
			num = num/10 ;

		}
		printf("rev of %d is %d \n",var , rev);

		printf("Do you want to continue:\n");
		scanf(" %c",&cha);				
	}while(cha == 'y' || cha == 'Y');					//condition


}

/*

pradnya@pradnya-Latitude-3480:~/DailyCodes/DailyCodes05Aug2020$ gedit Program3.c
pradnya@pradnya-Latitude-3480:~/DailyCodes/DailyCodes05Aug2020$ cc Program3.c
pradnya@pradnya-Latitude-3480:~/DailyCodes/DailyCodes05Aug2020$ ./a.out
Enter number:
143
rev of 143 is 341 
Do you want to continue:
y
Enter number:
547
rev of 547 is 745 
Do you want to continue:
y
Enter number:
4674 
rev of 4674 is 4764 
Do you want to continue:
n


*/
