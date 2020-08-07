#include<stdio.h>
void main(){

	char agree = 'y' ;
	printf("\n*******************************Welcome***************************\n");
	do{

		int ch ,ch1 , ch2 , ch3 , ch4 ;


		printf("1.Shopping\n");
		printf("2.Movie\n");
		printf("3.Play Station\n");
		printf("4. Food Court\n");

		printf("Enter your choice:\n");
		scanf("%d",&ch);

		switch(ch){

			case 1 : 

				printf("Which section you want to go for shopping:\n");
				printf("1. Clothing\n");
				printf("2. Accesories\n");
				printf("3. Electronics\n");
				printf("4. Groccery\n");
				printf("Enter your choice:\n");
				scanf("%d",&ch1);				

				switch(ch1){

					case 1 : 
						printf("Clothing shopping done\n");
						break ;
					case 2 : 
						printf("Accesories shopping done\n");
						break ;
					case 3 : 
						printf("Electronics shopping done\n");
						break ;
					case 4 : 
						printf("Groccery shopping done\n");
						break ;
					default : 
						printf("Wrong choice\n");
						break ;
		
					}
					break ;
			case 2 : 

				printf("Which movie you want to watch:\n");
				printf("1. Dil Bechara\n");
				printf("2. Shakuntala Devi\n");
				printf("3. Gulabo Sitabo\n");
				printf("4. Yaara\n");
				printf("Enter your choice:\n");
				scanf("%d",&ch2);				

				switch(ch2){

					case 1 : 
						printf("Watched Dil Bechara\n");
						break ;
					case 2 : 
						printf("Watched Shakuntala Devi\n");
						break ;
					case 3 : 
						printf("Watched Gulabo Sitabo\n");
						break ;
					case 4 : 
						printf("Watched Yaara\n");
						break ;
					default : 
						printf("Wrong choice\n");
						break ;
		
					}
					break ;
		case 3 : 

				printf("Which game you want to play:\n");
				printf("1. Subway Surf\n");
				printf("2. Bowling\n");
				printf("3. Snooker\n");
				printf("4. Kid zone\n");
				printf("Enter your choice:\n");
				scanf("%d",&ch3);				

				switch(ch3){

					case 1 : 
						printf("Played Subway Surf\n");
						break ;
					case 2 : 
						printf("Played Bowling\n");
						break ;
					case 3 : 
						printf("Played Snooker\n");
						break ;
					case 4 : 
						printf("Played in Kid zone\n");
						break ;
					default : 
						printf("Wrong choice\n");
						break ;
		
					}
					break ;
		case 4 : 

				printf("What you want to eat/drink:\n");
				printf("1. Cold Coffee\n");
				printf("2. Momos\n");
				printf("3. Pizza\n");
				printf("4. Burger\n");
				printf("Enter your choice:\n");
				scanf("%d",&ch4);				

				switch(ch4){

					case 1 : 
						printf("You selected Cold Coffee\n");
						break ;
					case 2 : 
						printf("You selected Momos\n");
						break ;
					case 3 : 
						printf("You selected Pizza\n");
						break ;
					case 4 : 
						printf("You selected Burger\n");
						break ;
					default : 
						printf("Wrong choice\n");
						break ;
		
					}
					break ;
		default : 
			printf("Wrong choice\n");
			break ;
		
		}
		printf("Do you want to continue:\n");
		scanf(" %c",&agree);
	}while(agree == 'y' || agree == 'Y');

	printf("\nThank you Visit Again..!!\n");
}

/*

Output-

pradnya@pradnya-Latitude-3480:~/DailyCodes/DailyCodes05Aug2020$ cc HW.c
pradnya@pradnya-Latitude-3480:~/DailyCodes/DailyCodes05Aug2020$ ./a.out

*******************************Welcome***************************
1.Shopping
2.Movie
3.Play Station
4. Food Court
Enter your choice:
2
Which movie you want to watch:
1. Dil Bechara
2. Shakuntala Devi
3. Gulabo Sitabo
4. Yaara
Enter your choice:
4
Watched Yaara
Do you want to continue:
y
1.Shopping
2.Movie
3.Play Station
4. Food Court
Enter your choice:
4
What you want to eat/drink:
1. Cold Coffee
2. Momos
3. Pizza
4. Burger
Enter your choice:
3
You selected Pizza
Do you want to continue:
y
1.Shopping
2.Movie
3.Play Station
4. Food Court
Enter your choice:
1
Which section you want to go for shopping:
1. Clothing
2. Accesories
3. Electronics
4. Groccery
Enter your choice:
1
Clothing shopping done
Do you want to continue:
n

Thank you Visit Again..!!

*/
