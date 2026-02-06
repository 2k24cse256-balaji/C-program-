#include <stdio.h>

long long power(int digit, int n) {
    long long result = 1;
    for (int i = 0; i < n; i++) {
        result *= digit;
    }
    return result;
}

int main() {
    long long N, temp;
    int digits = 0;

    scanf("%lld", &N);

    temp = N;

    if (N == 0) {
        printf("true");
        return 0;
    }

    while (temp > 0) {
        digits++;
        temp /= 10;
    }

    temp = N;
    long long sum = 0;

    while (temp > 0) {
        int digit = temp % 10;
        sum += power(digit, digits);
        temp /= 10;
    }

    if (sum == N)
        printf("true");
    else
        printf("false");

    return 0;
}
