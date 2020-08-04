/*
                                 A                                                                                                             
                         C       C       C                                                                                                     
                 E       E       E       E       E                                                                                             
         G       G       G       G       G       G       G                                                                                     
I        I       I       I       I       I       I       I       I 

*/


#include<stdio.h>
void main(){

    int n;
    printf("Enter no. of row:\n");
    scanf("%d",&n);
    char ch = 'A' ;

	for(int row = 1 ; row <= n ; row ++){
	   
		for(int space = n-1 ; space>=row ; space--){

			printf("\t ");
		}

		for(int col = 1 ; col <= row*2-1 ; col++){
		    
			printf("%c\t ",ch);
		
		}
		ch = ch + 2 ;
		printf("\n");
	  
	}	
}

/*

Output-

pradnya@pradnya-Latitude-3480:~/Desktop/Assignment/PatternAssignment3-04Aug$ gedit Prog8.c
pradnya@pradnya-Latitude-3480:~/Desktop/Assignment/PatternAssignment3-04Aug$ cc Prog8.c
pradnya@pradnya-Latitude-3480:~/Desktop/Assignment/PatternAssignment3-04Aug$ ./a.out
Enter no. of row:
5
	 	 	 	 A	 
	 	 	 C	 C	 C	 
	 	 E	 E	 E	 E	 E	 
	 G	 G	 G	 G	 G	 G	 G	 
I	 I	 I	 I	 I	 I	 I	 I	 I

*/
