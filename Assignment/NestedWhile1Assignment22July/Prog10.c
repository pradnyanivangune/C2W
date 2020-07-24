/*
10) write a program to print series of prime numbers from entered range. ( Take a start and end number from user )
*/


#include <stdio.h>
 
void main()
{
	int a,b,i, Number = 1, count; 
  

	printf("Enter starting number: "); 
	scanf("%d", &a); 
  
    
	printf("\nEnter ending number: "); 
	scanf("%d", &b); 

	printf(" Series= "); 
	while(Number <= b)
	{
		count = 0;
		i = 2;
		while(i <= Number/2)
		{
			if(Number%i == 0)
			{
				count++;
				break;
			}
			i++;	
		}	
		if(count == 0 && Number != 1 )
		{
			printf(" %d ", Number);
		}
		Number++; 


	}
 
}



/*

Output-

pradnya@pradnya-Latitude-3480:~/Desktop/NestedWhileLoopAssignment22July$ gedit Prog10.c
pradnya@pradnya-Latitude-3480:~/Desktop/NestedWhileLoopAssignment22July$ cc Prog10.c
pradnya@pradnya-Latitude-3480:~/Desktop/NestedWhileLoopAssignment22July$ ./a.out
Enter starting number: 1

Enter ending number: 100
 Series= 2  3  5  7  11  13  17  19  23  29  31  37  41  43  47  53  59  61  67  71  73  79  83  89  97 

*/
