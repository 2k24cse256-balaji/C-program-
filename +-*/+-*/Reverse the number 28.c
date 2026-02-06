#include <stdio.h>

int main(void) {
	// your code goes here
    int n;
    scanf("%d",&n);
    int reverse=0;
    int last=1;
    while(n > 0){
        last = n % 10;
        reverse = (reverse * 10)+last;
        n /=10;
    }
    printf("%d", reverse);

}
