/*
Q.5) Print the following pattern using nested for loop Take no of rows from user

E	a 	D 	b
	c	C	d
		B 	e
			f

*/

#include<stdio.h>
void main(){

	int n,k;
	printf("Enter no. of rows:\n");
	scanf("%d",&n);

	char ch1 = 'E' ;
	char ch2 = 'a' ;
	for(int i = 1 ; i <= n ; i++){

		for(int k = 1 ; k < i  ; k++){
			printf("\t ");
			
		}

		for(int j = i ; j <= n ; j++){
			if(j%2 != 0){
				printf("%c\t ",ch1);
				ch1--;
			}else{
				printf("%c\t ",ch2);
				ch2++;
			}
			
		}
		
		printf("\n");
	}
}

/*

pradnya@pradnya-Latitude-3480:~/Desktop/Assignment/NestedForAssignmet28July$ gedit Prog5.c
pradnya@pradnya-Latitude-3480:~/Desktop/Assignment/NestedForAssignmet28July$ cc Prog5.c
pradnya@pradnya-Latitude-3480:~/Desktop/Assignment/NestedForAssignmet28July$ ./a.out
Enter no. of rows:
4
E	 a	 D	 b	 
	 c	 C	 d	 
	 	 B	 e	 
	 	 	 f

*/



