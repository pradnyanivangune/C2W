/*
Take an integer from the user and print it, Exit the loop whenever user enters a prime number

*/

#include <stdio.h>
void main(){

	char ch = 'y' ;

	do{

	int n , flag = 0 ;
       	printf("Enter number:\n");
       	scanf("%d",&n);

        int i=2;
        while( i<=n/2)
        {
       	     // check for non prime number
		if(n%i==0)
		{
          		flag = 1 ;
			break;
		}
		i++;
        
	}
        if (flag==1){

		printf("Number = %d\n",n);
        }else{
		printf("You have entered a prime number..\n");
		break;     
	}

	printf("Do you want to continue(y/n): ");
	scanf(" %c",&ch);
        
	}while(ch == 'y' || ch == 'Y');
}

/*

Output-

pradnya@pradnya-Latitude-3480:~/DailyFlash/DailyFlash07Aug$ gedit Prog2.c
pradnya@pradnya-Latitude-3480:~/DailyFlash/DailyFlash07Aug$ cc Prog2.c
pradnya@pradnya-Latitude-3480:~/DailyFlash/DailyFlash07Aug$ ./a.out
Enter number:
4
Number = 4
Do you want to continue(y/n): y
Enter number:
78
Number = 78
Do you want to continue(y/n): y   
Enter number:
5
You have entered a prime number..


*/     
