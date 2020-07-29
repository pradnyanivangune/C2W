#include<stdio.h>
void main(){

	int n;
	printf("Enter no. of rows:");
	scanf("%d",&n);

	for(int row = 1 ; row <= n ; row ++){
	
		for(int space = n-1 ; space >= row ; space--){
			printf("\t ");
		}
		for(int col = 1 ; col <= row * 2 - 1 ; col++){
			printf("1\t ");

		}
		printf("\n");
	
	}
}

/*

Output-

pradnya@pradnya-Latitude-3480:~/Desktop/DailyCodes/DailyCodes29July2020$ gedit Program1.c
pradnya@pradnya-Latitude-3480:~/Desktop/DailyCodes/DailyCodes29July2020$ cc Program1.c
pradnya@pradnya-Latitude-3480:~/Desktop/DailyCodes/DailyCodes29July2020$ ./a.out
pradnya@pradnya-Latitude-3480:~/Desktop/DailyCodes/DailyCodes29July2020$ gedit Program2.c
pradnya@pradnya-Latitude-3480:~/Desktop/DailyCodes/DailyCodes29July2020$ cc Program2.c
pradnya@pradnya-Latitude-3480:~/Desktop/DailyCodes/DailyCodes29July2020$ ./a.out
Enter no. of rows:4
	 	 	 1	 
	 	 1	 1	 1	 
	 1	 1	 1	 1	 1	 
1	 1	 1	 1	 1	 1	 1

*/
