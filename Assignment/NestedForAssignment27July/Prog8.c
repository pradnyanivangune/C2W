/*
Q8) Print the following pattern

	#  =  =  =
	=  #  =  =
	=  =  #  =
	=  =  =  #

*/
#include<stdio.h>
void main(){

	for(int i = 1 ; i <= 4 ; i++){

		for(int j = 1 ; j <= 4 ; j++){
			if(i == j)
				printf("# ");
			else 
				printf("= ");
			
		}

		
		printf("\n");
	}
}

/*

Output:-
pradnya@pradnya-Latitude-3480:~/Desktop/NestedForAssignment27July$ gedit Prog8.c 
pradnya@pradnya-Latitude-3480:~/Desktop/NestedForAssignment27July$ cc Prog8.c
pradnya@pradnya-Latitude-3480:~/Desktop/NestedForAssignment27July$ ./a.out
# = = =                                                                                                                                        
= # = =                                                                                                                                        
= = # =                                                                                                                                        
= = = #


*/
