#include <stdio.h>

int main()
{
    int n, i, j;
    printf("Please Enter any whole number of your choice:-\n");
    scanf("%d", &n);
    printf("\n");
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=i; j++)
        {
            printf("01");
        }
        printf("\n");
    }
    return 0;
}
