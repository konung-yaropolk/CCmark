#include <stdio.h>

int main() {
    int n=1;
    int repeats=100000000;
    long double pi=1;
    while (n<repeats) {
        pi=pi * 2*n/(2*n-1) * 2*n/(2*n+1);
        n++;
    }
    pi=pi*2;
    printf("Pi = %Lf iterations done: %d\n", pi, n);
    return 0;
}
