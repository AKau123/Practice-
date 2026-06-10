#include <stdio.h>
void f(int a[], int n, int d, int v){
	for(int i=n;i>d;i--){
		a[i]=a[i-1];
	}
	a[d]=v;
	printf("\nFinal:\n");
	n++;
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
	int d,v;
	printf("Pos: (from 0)\n");
	scanf("%d", &d);
	printf("Val:\n");
	scanf("%d",&v);
	f(a,n,d,v);
}
