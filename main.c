#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int reverse(int x) {
    long n = abs((long)x);
    int size = (int)log10(n) + 1;
    long answer = 0;
    long power = (long)pow(10, size-1);
    for (long i=1, j=power; i<=power; i*=10, j/=10)
        answer += ((n / j) - ((n / (j * 10)) * 10)) * i;
    if (x < 0) {
        answer *= -1;
        answer = (answer < -2147483648) ? 0 : answer;
    } else {
        answer = (answer > 2147483647) ? 0 : answer;
    }
    return (int) answer;
}

int main()
{
    printf("Haha!\n");
    return 0;
}
