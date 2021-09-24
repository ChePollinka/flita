#include "stdio.h"
#include "stdint.h"

int main() {

    uint64_t dec = 0;
    char buf = getchar();
    int k = 0;

    while (buf != '\n') {
        if ((buf == '0') || (buf == '1')) {
            if (dec >= ((uint64_t) 1) << 63) {
                printf("Overflow error\n");
            }
            dec = dec << 1;
            dec += buf - '0';

        } else {
            printf("Number error\n");
            k = 1;
        }

        buf = getchar();
    }
    if (k == 0) {
        printf("decision: [%lu]\n", dec);
    }

    return 0;
}
