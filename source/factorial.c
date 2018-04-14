
#include<stdio.h>

int main (void)
{
    long long int fact = 1;
    
    for (int t = 1, n ; t <= 15 ; ++t) {
        fact = 1;
        
        n = t;
        
        while ( n > 0) {
            fact = fact * n;
            n -= 1;
        }

        printf ("%2i %lli\n", t, fact);
    }

    return 0;
}

