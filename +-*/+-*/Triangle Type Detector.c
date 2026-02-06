#include <stdio.h>

int main() {

    int a, b, c;

    scanf("%d %d %d", &a, &b, &c);

    if ((a + b > c) && (b + c > a) && (c + a > b)) {

        if (a == b && b == c) {

            printf("Equilateral Triangle");

        }

        else if (a == b || b == c || a == c) {

            printf("Isosceles Triangle");

        }

        else {

            printf("Scalene Triangle");

        }

    } else {

        printf("Not a valid triangle");

    }

    return 0;

}
