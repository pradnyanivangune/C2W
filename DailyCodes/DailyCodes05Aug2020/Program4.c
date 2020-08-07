#include<stdio.h>
void main(){

	char agree = 'y' ;

	do{

		int ch = 0 ;

		printf("Welcome\n");
		printf("1.Shopping\n");
		printf("2.PVR\n");
		printf("3.Play Station\n");
		printf("4. Food Court\n");

		printf("Enter your choice:\n");
		scanf("%d",&ch);

		switch(ch){

		case 1 : 
			printf("Wrogn,LP\n");
			break ;
		case 2 : 
			printf("Panipat\n");
			break ;
		case 3 : 
			printf("Football\n");
			break ;
		case 4 : 
			printf("Biryani\n");
			break ;
		default : 
			printf("Wrong choice\n");
			break ;
		
		}
		printf("Do you want to continue:\n");
		scanf(" %c",&agree);
	}while(agree == 'y' || agree == 'Y');
}

/*

Output-

pradnya@pradnya-Latitude-3480:~/DailyCodes/DailyCodes05Aug2020$ gedit Program3.c
pradnya@pradnya-Latitude-3480:~/DailyCodes/DailyCodes05Aug2020$ gedit Program4.c
pradnya@pradnya-Latitude-3480:~/DailyCodes/DailyCodes05Aug2020$ cc Program4.c
pradnya@pradnya-Latitude-3480:~/DailyCodes/DailyCodes05Aug2020$ ./a.out
Welcome
1.Shopping
2.PVR
3.Play Station
4. Food Court
Enter your choice:
1
Wrogn,LP
Do you want to continue:
y
Welcome
1.Shopping
2.PVR
3.Play Station
4. Food Court
Enter your choice:
3
Football
Do you want to continue:
n

*/
