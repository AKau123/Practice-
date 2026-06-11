#include <stdio.h>

int main() {
    int r, c,fl;
    printf("Enter rows: ");
    scanf("%d", &r);
    printf("Enter columns: ");
    scanf("%d", &c);
    int m[r][c];
    printf("Enter elements:\n");
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            scanf("%d", &m[i][j]);
        }
    }
    printf("Common elements in all rows are:\n");
    for(int j = 0; j < c; j++) {
        int ct = m[0][j];
        int f= 1;
        /* Avoid duplicate checking from first row */
        int d = 0;
        for(int k = 0; k < j; k++) {
            if(m[0][k] == ct) {
                d= 1;
                break;
            }
        }
        if(d)
            continue;
        /* Check current element in all remaining rows */
        for(int i = 1; i < r; i++) {
            int f = 0;
            for(int k = 0; k < c; k++) {
                if(m[i][k] == ct) {
                    f = 1;
                    break;
                }
            }
            if(!f) {
                fl = 0;
                break;
            }
        }
        if(fl) {
            printf("%d ", ct);
        }
    }
    return 0;
}
