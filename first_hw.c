#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>

#define ONE ((uint64_t) 1)

int main() {

    uint64_t dec = 0;
    char buf = getchar();
    bool Overflow = 0;
    bool numb_er = 0;

    while ( ( buf != '\n' ) && (Overflow == 0) && (numb_er == 0) )
    {
        if ((buf == '0') || (buf == '1')) 
        {
            if ( dec >=  ONE << 63 )
            {
                printf ("Overflow error\n"); 
                Overflow = 1;
            }
            dec = dec << 1;
            dec += buf - '0';  

        }
        else 
        { 
            printf ("Number error\n"); 
            numb_er = 1;
        }

        buf = getchar();
    }
    if ((Overflow == 0) && (numb_er == 0)) { 
        printf ("decision: [%lu]\n", dec);
    }

    return 0;
}
