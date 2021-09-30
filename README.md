# hw_flita_1
## Task (variant 2) 
The user enters a number in the binary number system, it is necessary to print it in the decimal number system. Bonus: provide for the use of negative numbers and the possibility of overflow. Input example: 101 Output example: 5

## The functionality of the written program: 
converting `unsigned` numbers from binary to decimal.

The program is written in the Linux operating system (Centos), in the Visual Studio Code application in the C programming language.
__________

```c
#include "stdio.h" 
#include "stdint.h"

int main() { uint64_t dec = 0; *// from "decision"* 
char buf = getchar(); int k = 0; *//a counter that tracks invalid input*

while ( buf != '\n' )
{
    if ( (buf == '0') || (buf == '1') ) *//the binary code filter is character-by-character
    {
        if ( dec >= ((uint64_t) 1) << 63 ) *//excluding the possibility of variable overflow*
        {
            printf ("Overflow error\n");
        }
        dec = dec << 1;
        dec += buf - '0';  *//if you entered 1, then add dec and buf* 
    }
    else 
    { 
        printf ("Number error\n"); 
        k = 1;
    }
    buf = getchar();
}
    if (k == 0) 
    { 
        printf ("decision: [%lu]\n", dec);
    }
return 0;
}
```


