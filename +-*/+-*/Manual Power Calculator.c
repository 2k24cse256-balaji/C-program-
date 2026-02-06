#include <stdio.h>

int main() {

    int base, exponent;

    long long result = 1;

    scanf("%d %d", &base, &exponent);

    for (int i = 1; i <= exponent; i++) {

        result = result * base;

    }

    printf("%lld", result);

    return 0;

}
