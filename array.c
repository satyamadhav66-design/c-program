#include <stdio.h>
int main()
{
    int a[4];
    int i, sum = 0;
    printf("Enter 4 numbers: ");
    for(i = 0; i < 4; i++)
    {
        scanf("%d", &a[i]);
    }
    for(i = 0; i < 4; i++)
    {
        sum = sum + a[i];
    }
    printf("Addition = %d", sum);
}