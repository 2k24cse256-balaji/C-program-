#include <stdio.h>

int main() {

    int cost1, qty1, cost2, qty2, cost3, qty3;

    int budget;

    scanf("%d %d", &cost1, &qty1);

    scanf("%d %d", &cost2, &qty2);

    scanf("%d %d", &cost3, &qty3);

    scanf("%d", &budget);

    double totalBeforeTax = (cost1 * qty1) + (cost2 * qty2) + (cost3 * qty3);

    double totalAfterTax = totalBeforeTax + (totalBeforeTax * 0.10);

    printf("Total (Before Tax): %.2lf\n", totalBeforeTax);

    printf("Total (After Tax): %.2lf\n", totalAfterTax);

    if (totalAfterTax <= budget)

        printf("Within Budget\n");

    else

        printf("Over Budget\n");

    return 0;

}
