#include <stdio.h>
#include <string.h>

int main() {
    char str[100];

    printf("Enter string:\n");
    scanf("%s", str);

    int count = 0;
    int n = strlen(str);

    for(int i = 0; i <= n - 3; i++) {

        if(str[i] != str[i+1] &&
           str[i] != str[i+2] &&
           str[i+1] != str[i+2]) {
            count++;
        }
    }

    printf("Count of Good Substrings = %d", count);

    return 0;
}
