#include <stdio.h>
int main(){
	int n;
	printf("Enter the rows size of 1st array:\n");
	scanf("%d",&n);
	int m;
	printf("Enter the columns size of 1st array:\n");
	scanf("%d",&m);
	int a[n][m];
	int (*p)[m]=a;
	printf("enter the array elements of 1st array:\n");
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			scanf("%d", (*(p+i)+j));
		}
	}
	printf("1st Array:\n");
	for(int i=0;i<n;i++){
		printf("\n");
		for(int j=0;j<m;j++){
			printf("%d ", *(*(p+i)+j));
		}
	}
	
	int c;
	printf("\nEnter the rows size of 2nd array:\n");
	scanf("%d",&c);
	int d;
	printf("Enter the columns size of 2nd array:\n");
	scanf("%d",&d);
	int b[c][d];
	int (*q)[d]=b;
	printf("enter the array elements of 2nd array:\n");
	for(int i=0;i<c;i++){
		for(int j=0;j<d;j++){
			scanf("%d", (*(q+i)+j));
		}
	}
	printf("2nd Array:\n");
	for(int i=0;i<c;i++){
		printf("\n");
		for(int j=0;j<d;j++){
			printf("%d ", *(*(q+i)+j));
		}
	}
	int s=0,r[n][d];
	if(m!=c){
		printf(" Not possible\n"); 
	}
	printf("\nFinal output:\n")
	else{
		for(int i=0;i<n;i++){
		
			for(int j=0;j<m;j++){
					r[i][j]=0;
				for(int k=0;k<m;k++){
					r[i][j]+= *(*(p+i)+k)**(*(q+k)+j);
				}
			}
		}
		int (*g)[d]=r;
		for(int i=0;i<n;i++){
			printf("\n");
		for(int j=0;j<m;j++){
			printf("%d ",*(*(g+i)+j));
		}
	}
	}
	return 0;
}
