#include <stdio.h>
int rr(int left, int right){
    int b = 0;
    for (int i = left; i <= right; i++) {
        int temp = i,s=0;   
        while (temp > 0) {
            s+=(temp & 1);
            temp >>= 1;
        }
        if(s==2||s==3||s==5||s==7||s==11||s==13||s==17||s==19)
            b++;
    }
    return b;
}

int main(){
	int a,b,c;
	printf("Enter the lower and higher limit of range:\n");
	scanf("%d, %d",&a,&b);
	c= rr(a,b);
	printf("%d\n",c);
}
