#include <stdio.h>
#include <string.h>
void s(char s[], int n,char a,char b){
	int m=0;
	for(int i=0;i<n;i++){
		if(s[i]==a){
			s[i]=b;
			m=1;
		}
	}
	printf("%s",s);
}
int main(){
	char a[100];
	printf("Enter:\n");
    scanf("%[^\n]",a);
	int n=strlen(a),m=0;
	char b,f;
	printf("Character to check:\n");
	scanf(" %c",&b);
	for(int i=0;i<n;i++){
		if(a[i]==b){
			m=1;
		}
	}
	if(m==1){
		printf("Replacable Character:\n");
		scanf(" %c",&f);
		s(a,n,b,f);
	}
	else printf("Not Possible\n");
	return 0;
}
