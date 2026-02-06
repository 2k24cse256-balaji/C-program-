#include <stdio.h>

int main() {
    int N, i, prime = 1;
    scanf("%d", &N);

    if (N <= 1) {
        prime = 0;
    } else {
        for (i = 2; i * i <= N; i++) {
            if (N % i == 0) {
                prime = 0;
                break;
            }
        }
    }

    if (prime)
        printf("Prime");
    else
        printf("Not Prime");

    return 0;
}
