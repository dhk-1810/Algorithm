#include <stdio.h>

int main(void) {
    int n, isprime, count = 0;
    scanf("%d", &n);
    
    for (int i = 1; i <= n; i++){
        int m;
        scanf("%d", &m);
        isprime = 1;
        
        if (m < 2) continue;
        else {
            for (int j = 2; j < m; j++){
                if (m % j == 0){
                    isprime = 0;
                    break;
                }
            }
        if (isprime == 1) count++;
        }
    }
    printf("%d", count);
    return 0;
}