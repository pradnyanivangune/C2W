#include<stdio.h>
void main(){

	int n;
	printf("Enter no. of rows:");
	scanf("%d",&n);

	for(int row = 1 ; row <= n ; row ++){
	
		int x = 1;
		for(int space = n-1 ; space >= row ; space--){
			printf("\t ");
		}
		for(int col = 1 ; col <= row * 2 - 1 ; col++){
			printf("%d\t ",x);

			if(col>=row)
				x--;
			else
				x++;
		}
		printf("\n");
	
	}
}

/*

Output-

pradnya@pradnya-Latitude-3480:~/Desktop/DailyCodes/DailyCodes29July2020$ gedit Program3.c
pradnya@pradnya-Latitude-3480:~/Desktop/DailyCodes/DailyCodes29July2020$ cc Program3.c
pradnya@pradnya-Latitude-3480:~/Desktop/DailyCodes/DailyCodes29July2020$ ./a.out
Enter no. of rows: 4
	 	 	 1	 
	 	 1	 2	 1	 
	 1	 2	 3	 2	 1	 
1	 2	 3	 4	 3	 2	 1

*/
