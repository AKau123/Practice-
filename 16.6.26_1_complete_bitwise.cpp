#include <stdio.h>
int main(){
	/*LSB set/not
	int a=11;
	if(a&(1<<1)) printf("Set");
	else printf("not set");
	*/
	
	/*MSB set/not
	int a=11;
	if(a&(1<<31)) printf("Set");
	else printf("not set");
	*/
	
	/*nth bit get
	int a=20;
	if(a&(1<<1)) printf("1");
	else printf("0");
	*/
	
	/* nth bit set
	int a=-11,s=0,b=0;
	for(int i=31;i>=0;i--){
		s=(a>>i)&1;
		if(s) b=1;
		printf("%d",s);
	}
	if(a&(1<<1)) printf("\nset\n");
	else printf("\nnot\n");
	*/
	
	/*Toggling nth bit
	int a=100,s=0,b=0;
	for(int i=31;i>=0;i--){
		s=(a>>i)&1;
		if(s) b=1;
		printf("%d",s);
	}
	a=(a^(1<<4));
	printf("\n%d\n",a);
	*/
	
	/*Clearing nth bit
	int a=13,s=0,b=0;
	for(int i=31;i>=0;i--){
		s=(a>>i)&1;
		if(s) b=1;
		printf("%d",s);
	}
	a=(a&~(1<<3));
	printf("\n%d\n",a);
	*/
	
	/* get highest set bit of a number
	int a=90,s=0,b=0,c=0;
	for(int i=31;i>=0;i--){
		s=(a>>i)&1;
		if(s) b=1;
		if(b) printf("%d",s);
	}
	while(a>>1){ // counting the no of bits 
		a>>=1;
		c++;
	}
	return c;
	*/
	
	/* Lowest set bit
	int a=15,s=0,b=0,c=0;
	for(int i=31;i>=0;i--){
		s=(a>>i)&1;
		if(s) b=1;
		if(b) printf("%d",s);
	}
	
	int n=(a&(-a)); // Major step to get the lowest set bit --> Can gain the perfect 2^n value
	
	while(n>>1){
		n>>=1;
		c++;
	}
	return c;
	*/
	
	/*No. of leading zeros
	int a=20,s=0,b=0,c=0;
	for(int i=31;i>=0;i--){
		s= ((a>>i)&1);
		if(s) b=1;
		printf("%d",s);
	}
	while(a>>1){
		a>>=1;
		c++;
	}
	printf("\n%d\n",31-c); //as index starts from 0
	*/
	
	/* Trailing Zeros count
	int a=20,s=0,n=0,b=0,c=0;
	for(int i=31;i>=0;i--){
		s= ((a>>i)&1);
		if(s) b=1;
		printf("%d",s);
	}
	n=a&(-a);
	printf("\n%d",n);
	while(n>>1){
		n>>=1;
		c++;
	}
	printf("\n%d\n",c); //as index starts from 0
	*/
	
	/*Flipping all bits
	int a=1,s=0,b=0;
	for(int i=31;i>=0;i--){
		int s= ((a>>i)&1);
	//	if(s) b=1; 
		printf("%d",s);
	}
	printf("\n%d-->%d",a,~a);
	*/
	
	/*Flipping kth bit
	int a=-5,s=0,b=0;
	for(int i=31;i>=0;i--){
		int s= ((a>>i)&1);
		if(s) b=1; 
		printf("%d",s);
	}
	printf("\n");
	int c=(a^(1<<4)),s1=0,b1=0;
	for(int i=31;i>=0;i--){
		int s1= ((c>>i)&1);
		if(s1) b1=1; 
		printf("%d",s1);
	}
	printf("\n%d,%d",a,c);
	*/
	
	/* No. of 1's and 0's
	int a=11,s=0,c=0;
	while(a){
		if(1&a) c++;
		a>>=1;
	}
	printf("1-->%d, 0-->%d",c,32-c);
	*/
	
	
	/* Rotation of bits
	int a=13, k=2;
    k %= 32; //optimisation of rotation
   // int c= (a<<k) | (a>>(32-k)); //left rotation
    int c=(a >> k) | (a << (32 - k)); //right rotation
    int s=0,b=0;
	for(int i=31;i>=0;i--){
		int s= ((a>>i)&1);
		if(s) b=1; 
		printf("%d",s);
	}
	printf("\n");
	int s1=0,b1=0;
	for(int i=31;i>=0;i--){
		int s1= ((c>>i)&1);
		if(s1) b1=1; 
		printf("%d",s1);
	}
	printf("\n%d,%d",a,c);
    */
    
    /*Odd or Even
    int a=30;
    if(a&1) printf("odd");
    else printf("even");
    */
    
    /* Swapping two numbers
    int a=4,b=6;
    a=a^b;
    b=a^b;
    a=a^b;
    printf("%d %d",a,b);
	*/
	
	/* Set 2 bits of number given pos1, pos2 and make the bits in those positions as zero.
	int a=20,s=0,b=0;
	for(int i=31;i>=0;i--){
		s=((a>>i)&1);
		if(s) b=1;
		if(b) printf("%d",s);
	}
	a=(a|(1<<3));
	a=((1<<0)|a);
	printf("\n");
	for(int i=31;i>=0;i--){
		s=((a>>i)&1);
		if(s) b=1;
		if(b) printf("%d",s);
	}
	a=a^(1<<3);
	a=a^(1<<0);
	printf("\n");
	for(int i=31;i>=0;i--){
		s=((a>>i)&1);
		if(s) b=1;
		if(b) printf("%d",s);
	}
	*/
	
	//swap bits of a given number at given positions
	int n=14,p1=0,p2=2;
    int b1 = (n>>p1)&1;
    int b2 = (n>>p2)&1;

    if(b1^b2)
    {
        int m=(1<<p1)|(1<<p2);
        printf("%d\n",m);
        n^=m;
    }

    printf("%d",n);
	
}  

