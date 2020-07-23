/*
Q6)  Write a program to print a HOLLOW square of user input size using nested while loop (Perform dry run before running your program) :
	Example : For n = 5
                        * * * * *
			*	*
			*	*
			*	*
                        * * * * *
*/



#include<stdio.h>
void main()  
{  

	int n;  
	printf("Enter the number of rows");  
	scanf("%d",&n); 

	int i=1; 
	while(i<=n)  
  	{  
		int j=1;
        	while(j<=n)  
        	{  
			if(i==1 ||i==n||j==1||j==n)  
			{  
				printf("* ");  
			}  
            		else  
            			printf("  "); 
			j++; 
        	}  
        	printf("\n");  
		i++;
	}  
      
  
} 


/*

Output-

pradnya@pradnya-Latitude-3480:~/Desktop/NestedWhileLoopAssignment22July$ gedit Prog6.c
pradnya@pradnya-Latitude-3480:~/Desktop/NestedWhileLoopAssignment22July$ cc Prog6.c
pradnya@pradnya-Latitude-3480:~/Desktop/NestedWhileLoopAssignment22July$ ./a.out
Enter the number of rows 5
* * * * * 
*       * 
*       * 
*       * 
* * * * * 



