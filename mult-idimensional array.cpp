#include<stdio.h>
int main() {
	int row, col;
	printf("Enter no of rows and columns: ");
	scanf("%d%d",&row, &col);
	int stud[row][col];
	
	printf("Enter values: ");
	int i,j;
	for (i=0;i<row;i++) {
		for (j=0;j<col;j++) {
			scanf("%d",&stud[i][j]);
		}
	}
	int Dsum=0;
	for (i=0;i<row;i++)  {
		for (j=0;j<col;j++) {
			printf("%d\t",stud[i][j]);
		    if (i==j) {
		    	Dsum+=stud[i][j];
			}
		}
		printf("\n");
	}
	printf("%d",Dsum);
	return 0;
}
