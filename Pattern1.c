#include <stdio.h>
void main()
{
    int n, r, c;
    printf("Enter the number: ");
    scanf("%d", &n);

    for (r = 1; r <= n; r++)
    {
        for (c = 1; c <= r; c++)
        {
            printf("%d ",(r+c+1)%2);
        }
        printf("\n");
    }
}
