#include <stdio.h>

int main() {
    int n;
    printf("Enter size of array:\n");
    scanf("%d", &n);

    int a[n];
    printf("Enter array elements:\n");
    for(int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    int maxLen = 0;
    int start = -1, end = -1;

    for(int i = 0; i < n; i++) {
        int freq[1000] = {0};

        for(int j = i; j < n; j++) {
            freq[a[j]]++;

            int same = 1;
            int firstFreq = 0;

            for(int k = 0; k < 1000; k++) {
                if(freq[k] > 0) {
                    if(firstFreq == 0)
                        firstFreq = freq[k];
                    else if(freq[k] != firstFreq) {
                        same = 0;
                        break;
                    }
                }
            }

            if(same && (j - i + 1) > maxLen) {
                maxLen = j - i + 1;
                start = i;
                end = j;
            }
        }
    }

    printf("Largest Subarray Length = %d\n", maxLen);

    printf("Subarray: ");
    for(int i = start; i <= end; i++)
        printf("%d ", a[i]);

    return 0;
}
