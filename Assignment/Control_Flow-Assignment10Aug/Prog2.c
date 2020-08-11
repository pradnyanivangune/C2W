/* Write a Program that uses Nested Switch Case, Take Real-Time Scenario and write a code around that. */


#include<stdio.h>
   void main() {
	     
		char mood = 'y';

		printf("Lets play PUBG\n");

		do {
			int choice;
			printf("1 : Choose Playing Mode\n");
			printf("2 : Choose Map\n");
	
			printf("Enter Your choice\n");
			scanf("%d",&choice);

			switch(choice) {

				case 1 : {
						 char mode;
	
						 printf("S for Solo\n");
						 printf("D for Duo\n");
						 printf("s for Squad\n");
						 printf("Enter Your Playing Mode : \n");
						 scanf(" %c",&mode);		 

						 switch(mode) {
							 case 'S' :
								 printf("Solo\n");
								 break;
							 case 'D' :
								 printf("Duo\n");
								 break;
							 case 's' :
								 printf("Squad\n");
								 break;
						 }
					 }
					 break;
					 

				case 2 : {
						 char map;
						 printf("B for Battle Royal\n");
						 printf("A for Arcade\n");
						 printf("Enter Map : \n");
						 scanf(" %c",&map);

						 switch(map) {
							 case 'B' :
								 printf("Battle Royal\n");
								 break;
							 case 'A' :
								 printf("Arcade\n");
								 break;
								 
						 }
					 }
					 break;

			        default :
			                printf("Wrong Choice\n");
		                        break;			
			}		

			printf("Do you want to continue y/n : ");
			scanf(" %c",&mood);
		 } while(mood == 'Y' || mood == 'y');
   }	
  

/*

Output-

pradnya@pradnya-Latitude-3480:~/Assignment/Control_Flow-Assignment10Aug$ gedit Prog2.c
pradnya@pradnya-Latitude-3480:~/Assignment/Control_Flow-Assignment10Aug$ cc Prog2.c
pradnya@pradnya-Latitude-3480:~/Assignment/Control_Flow-Assignment10Aug$ ./a.out
Lets play PUBG
1 : Choose Playing Mode
2 : Choose Map
Enter Your choice
1
S for Solo
D for Duo
s for Squad
Enter Your Playing Mode : 
S
Solo
Do you want to continue y/n : y
1 : Choose Playing Mode
2 : Choose Map
Enter Your choice
2
B for Battle Royal
A for Arcade
Enter Map : 
A
Arcade
Do you want to continue y/n : n


*/













						 


    


