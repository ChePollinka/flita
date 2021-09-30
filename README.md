# hw_flita_1
## Task (variant 2) 
The user enters a number in the binary number system, it is necessary to print it in the decimal number system. Bonus: provide for the use of negative numbers and the possibility of overflow. Input example: 101 Output example: 5

## The functionality of the written program: 
converting `unsigned` numbers from binary to decimal.

The program is written in the Linux operating system (Centos), in the Visual Studio Code application in the C programming language.
__________

```c
#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>

#define ONE ((uint64_t) 1)

int main() {

    uint64_t dec = 0; *// from "decision"*
    char buf = getchar();
    bool Overflow = 0;
    bool numb_er = 0; *//a counter that tracks invalid input*

    while ( ( buf != '\n' ) && (Overflow == 0) && (numb_er == 0) )
    {
        if ((buf == '0') || (buf == '1')) *//the binary code filter is character-by-character*
        {
            if ( dec >=  ONE << 63 ) *//excluding the possibility of variable overflow*
            {
                printf ("Overflow error\n"); 
                Overflow = 1;
            }
            dec <<= 1;
            dec += buf - '0';  *//if you entered 1, then add dec and buf*

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
```

## to implement the code
compile it (ctrl+shift+b) and run: command run -> start debugging (F5)
