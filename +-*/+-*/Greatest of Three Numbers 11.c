#include <stdio.h>

int main() {
    int a, b, c;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

    int max = a;
    if (b > max) max = b;
    if (c > max) max = c;

    int count = 0;
    if (a == max) count++;
    if (b == max) count++;
    if (c == max) count++;

    if (count >= 2) {
        printf("There is a tie for the greatest number");
    } else {
        printf("%d is the greatest", max);
    }

    return 0;
}
