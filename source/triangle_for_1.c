
#include<stdio.h>

int main (void)
{
    int number, counter;
    unsigned long long int triangleNumber = 0;

    printf ("Enter a triangle number to calculate ");
    scanf ("%i", &number);

    printf ("Triangle Number Table\n\n");
    printf ("Number    Triangle Number\n");
    printf ("------    --------------\n");

    for ( counter = 0; counter <= number; ++counter)
    {
        triangleNumber += counter;
        printf ("  %2lli          %lli\n", counter, triangleNumber);
    }

    return 0;
}
