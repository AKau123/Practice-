#include <stdio.h>
void f(int a[], int n, int d){
	for(int i=d;i<n-1;i++){
		a[i]=a[i+1];
	}
	printf("\nFinal:\n");
	n--;
	for(int i=0;i<n;i++)
		printf("%d ",a[i]);
}
int main(){
	int n;
	printf("Size:\n");
	scanf("%d",&n);
	int a[n];
	printf("Ele:\n");
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int d;
	printf("Pos: (from 0)\n");
	scanf("%d", &d);
	f(a,n,d);
}
