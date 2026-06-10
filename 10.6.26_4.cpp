#include <stdio.h>
#include <stdio.h>

void sb(int a[], int n, int k)
{
    int l=0,r=0, s=0,c=0;

    while(r<n)
    {
        s+=a[r];

        while(s>k)
        {
            s-=a[l];
            l++;
        }

        if(s==k)
        {
            c++;
            printf("[ ");
            for(int i=l;i<=r;i++)
                printf("%d ",a[i]);
            printf("]\n");
        }

        r++;
    }

    printf("Count=%d\n",c);
}
int main(){
	int n,d;
	printf("Size:\n");
	scanf("%d",&n);
	int a[n];
	printf("Ele:\n");
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("Sum Value:\n");
	scanf("%d", &d);
	sb(a,n,d);
}

