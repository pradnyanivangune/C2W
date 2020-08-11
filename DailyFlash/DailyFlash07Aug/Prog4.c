/*
Write a program which shows a menu card of a Burger house and give the customer the choice of veg and non veg and 
each of them consists of 4 different types of burger 
And print the order at last and ask them again for more using do while loop and nested switch

Input:
	Welcome To Burger King Please Select from the following 
	1.Veg
	2.Non Veg

	1
	Veg Blasts
	a.Veggi Tikki Burger
	b.Aloo Tikki Burger
	c.Mushroom Veggie cheese Burger
	d.Peanut Butter Sweet Potato Burger

*/

#include<stdio.h>
void main(){

	char choice = 'y' ;

	do{

		int ch = 0 ; char ch1; char ch2  ;

		printf("@@@@@@@@@@--Welcome To Burger King--@@@@@@@@@@@\n");
		printf("Please Select from the following\n");
		printf("1. Veg\n");
		printf("2.Non Veg\n");
		scanf("%d",&ch);

		switch(ch){

			case 1 : 
				{
				printf("Veg Blasts\n");
				printf("a.Veggi Tikki Burger\n");
				printf("b.Aloo Tikki Burger\n");
				printf("c.Mushroom Veggie cheese Burger\n");
				printf("d.Peanut Butter Sweet Potato Burger\n");
				scanf(" %c",&ch1);

				switch(ch1){

					case 'a' :
						printf("You ordered %d - %c\n",ch,ch1);
						break;
					case 'b' :
						printf("You ordered %d - %c\n",ch,ch1);
						break;
					case 'c' :
						printf("You ordered %d - %c\n",ch,ch1);
						break;
					case 'd' :
						printf("You ordered %d - %c\n",ch,ch1);
						break;
				}
				}
				break ;
			case 2 : 
				{
				printf("Non Veg Blasts\n");
				printf("a.Chicken Burger\n");
				printf("b.Chicken Chilli Cheese Burger\n");
				printf("c.Crispy Chicken Burger\n");
				printf("d.Chicken Tandoor Grill Burger\n");
				scanf(" %c",&ch2);

				switch(ch2){

					case 'a' :
						printf("You ordered %d - %c\n",ch,ch2);
						break;
					case 'b' :
						printf("You ordered %d - %c\n",ch,ch2);
						break;
					case 'c' :
						printf("You ordered %d - %c\n",ch,ch2);
						break;
					case 'd' :
						printf("You ordered %d - %c\n",ch,ch2);
						break;
				}
				}
				break;
			default : 
				printf("Wrong choice\n");
				break ;
		
		}
		printf("Do you want to order more(y/n):");
		scanf(" %c",&choice);

	}while(choice == 'y' || choice == 'Y');
}



/*

Output-

pradnya@pradnya-Latitude-3480:~/DailyFlash/DailyFlash07Aug$ gedit Prog4.c
pradnya@pradnya-Latitude-3480:~/DailyFlash/DailyFlash07Aug$ cc Prog4.c
pradnya@pradnya-Latitude-3480:~/DailyFlash/DailyFlash07Aug$ ./a.out
@@@@@@@@@@--Welcome To Burger King--@@@@@@@@@@@
Please Select from the following
1. Veg
2.Non Veg
1
Veg Blasts
a.Veggi Tikki Burger
b.Aloo Tikki Burger
c.Mushroom Veggie cheese Burger
d.Peanut Butter Sweet Potato Burger
a
You ordered 1 - a
Do you want to order more(y/n):y
@@@@@@@@@@--Welcome To Burger King--@@@@@@@@@@@
Please Select from the following
1. Veg
2.Non Veg
1
Veg Blasts
a.Veggi Tikki Burger
b.Aloo Tikki Burger
c.Mushroom Veggie cheese Burger
d.Peanut Butter Sweet Potato Burger
c
You ordered 1 - c
Do you want to order more(y/n):y
@@@@@@@@@@--Welcome To Burger King--@@@@@@@@@@@
Please Select from the following
1. Veg
2.Non Veg
23
Wrong choice
Do you want to order more(y/n):n 

*/
