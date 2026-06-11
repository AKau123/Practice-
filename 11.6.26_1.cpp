#include <stdio.h>
int f(int b[], int n){
	int m=b[0],r=0,s=0;
	for(int i=1;i<n;i++){
		m=(b[i]+m>m)?b[i]+m:m;
		r= (r>m)?r:m;
		printf("%d, %d\n", m,r);
	}
	printf("%d\n",r);
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
	printf("Max element:\n");
	f(a,n);
}
