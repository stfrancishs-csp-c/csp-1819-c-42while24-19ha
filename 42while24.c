#include <stdio.h>
int main(void)
{
    int sum=0;
    int k=0;

    while (k<5)
    {
        sum=sum+k;
        k++;
    }
    printf ("%d\n", sum);

    for (k=4; k>-1; k=k-1)
    printf ("%d\n", k);

}

