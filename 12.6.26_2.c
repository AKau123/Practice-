#include <stdio.h>
#include <string.h>

int isVowel(char ch) {
    return ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u';
}

int main() {
    char str[100];

    printf("Enter string:\n");
    scanf("%s", str);

    int n = strlen(str);
    int count = 0;

    for(int i=0;i<n;i++) {
        int freq[5]={0};

        for(int j=i;j<n;j++) {

            if(!isVowel(str[j]))
                break;

            if(str[j]=='a') freq[0]=1;
            if(str[j]=='e') freq[1]=1;
            if(str[j]=='i') freq[2]=1;
            if(str[j]=='o') freq[3]=1;
            if(str[j]=='u') freq[4]=1;

            if(freq[0]&&freq[1]&&freq[2]&&freq[3]&&freq[4])
                count++;
        }
    }

    printf("Count = %d", count);

    return 0;
}
