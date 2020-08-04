/*

5
4	4
3	3	3
2	2
1	

*/



#include<stdio.h>
void main(){
    
	int num = 5 ;
	for(int row = 1 ; row <= 3 ; row ++){
	   
	
		for(int col = 1 ; col <= row ; col++){
		    
			printf("%d\t ",num);
		
		}
		num-- ;
		
		printf("\n");
	  
	}

	for(int row = 2 ; row>=1 ; row--){

		for(int col = 1 ; col <=row ; col++){

	        	printf("%d\t ",num);
		}
		num-- ;
	    	printf("\n");
	}

}

/*

Output-

pradnya@pradnya-Latitude-3480:~/Desktop/Assignment/PatternAssignment3-04Aug$ gedit Prog9.c
pradnya@pradnya-Latitude-3480:~/Desktop/Assignment/PatternAssignment3-04Aug$ cc Prog9.c
pradnya@pradnya-Latitude-3480:~/Desktop/Assignment/PatternAssignment3-04Aug$ ./a.out
5	 
4	 4	 
3	 3	 3	 
2	 2	 
1

*/


