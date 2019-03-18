#include <stdio.h>
    
/*wow, I can comment, yaay! the extra 'm' in summ is there for a reason!*/
int summ ( int x, int y)
    {
        return(x+y);
    }

int main ()
    {
        int a = 13, b = 666, c;
        c = summ(a, b);
        printf("The sum is %d", c);
    }
/*we were not supposed to catch a&b from an outer space, yes?*/