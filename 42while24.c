#include <stdio.h>
int main(void)
{
    int sum=0;
    int k=0;

    while (k<5)
    {
        sum=sum+k;
        k++;
        printf ("%d sum- %2d\n", k, sum);
    }

    for (k=10; k>0; k--) {
    printf ("%2d\n", k);
    }
    printf ("Blastoff!");
}

