/* Write a Program That Prints Palindrome Series From Entered Range Using Nested While Loop. */


#include<stdio.h>
   void main() {
	   int start_num,end_num;
           int temp,rev,rem;

	   printf("Enter Start : ");
	   scanf("%d",&start_num);

	   printf("Enter End : ");
	   scanf("%d",&end_num);
    
	   int num = start_num;
	   while(num <= end_num) {
		   temp = num;
		   rev = 0;	   
		   
		   while(temp) {
			   rem = temp % 10;
			   temp = temp / 10;
			   rev = rev * 10 + rem;
			   
		   }
	
		   if(num == rev)
			   printf("%d\n",num);
	         	   num++;
	   }
		   
	   

   }

/*

Output-

pradnya@pradnya-Latitude-3480:~/Assignment/Control_Flow-Assignment10Aug$ gedit Prog4.c
pradnya@pradnya-Latitude-3480:~/Assignment/Control_Flow-Assignment10Aug$ cc Prog4.c
pradnya@pradnya-Latitude-3480:~/Assignment/Control_Flow-Assignment10Aug$ ./a.out
Enter Start : 234
Enter End : 456
242
252
262
272
282
292
303
313
323
333
343
353
363
373
383
393
404
414
424
434
444
454



*/
