/*

Write a program to print following pattern.
           a 
         a b
       a b c
     a b c d
*/



#include <stdio.h>  
  
void main()  
{  
	int m=1;  
	int i=4;
	while(i>=1)  
	{ 
		int j=1;
        	while(j<i)  
        	{  
         		printf("  "); 
			j++; 
        	}  
		int k=1;
		char ch='a';
        	while(k<=m)  
       		{  
            		printf("%c ",ch); 
			ch++;
			k++; 
        	}  
        	printf("\n");  
        	m++;  
		i--;
    	}  
    
}



/*

Output-

pradnya@pradnya-Latitude-3480:~/Desktop/NestedWhileLoopAssignment22July$ gedit Prog5.c
pradnya@pradnya-Latitude-3480:~/Desktop/NestedWhileLoopAssignment22July$ cc Prog5.c
pradnya@pradnya-Latitude-3480:~/Desktop/NestedWhileLoopAssignment22July$ ./a.out
      a 
    a b 
  a b c 
a b c d

*/
