
#include<stdio.h>

// tn = n (n +1) / 2

int main (void)
{
    for (int n = 5, tn = 0 ; n <= 50; n += 5) {
        tn = n * (n + 1) / 2;
        printf ("%i\n", tn);
    }

    return 0;
}
