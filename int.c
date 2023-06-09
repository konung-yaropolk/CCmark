#include <stdio.h>

int main() {
    size_t n=0;
    while (n<1000000000) {
        n++;
    }
    printf("Counted to %lu\n", n);
    return 0;
}
