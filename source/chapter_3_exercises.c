// C = (F - 32) / 1.8

#include <stdio.h>

int main (void)
{
    int f = 27;

    float c = (f - 32) / 1.8;

    printf ("%i degrees F equals %0.2f degrees C\n", f, c);


    float x = 2.55;

    float a = 3 * (x * x * x) + 5 * (x * x) + 6;

    printf ("a = %f\n", a);
    
    //next multiple = i + j - i % j

    int i1 = 365;
    int j1 = 7;

    int next_multiple = i1 + j1 - i1 % j1;

    printf ("the next largest even multiple of 365 and 7 is %i\n", next_multiple);

    return 0;
} 
