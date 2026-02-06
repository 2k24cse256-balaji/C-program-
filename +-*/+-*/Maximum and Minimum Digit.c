#include <stdio.h>

int main() {

    long long N;

    scanf("%lld", &N);

    if (N < 0) N = -N;

    int max_digit = 0, min_digit = 9;

    if (N == 0) {

        printf("0 0");

        return 0;

    }

    while (N > 0) {

        int digit = N % 10;

        if (digit > max_digit) max_digit = digit;

        if (digit < min_digit) min_digit = digit;

        N /= 10;

    }

    printf("%d %d", max_digit, min_digit);

    return 0;

}
