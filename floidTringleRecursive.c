#include <stdio.h>
void print_floyd(int, int, int);
int main()
{
    int n;
    printf("Input number of rows of Floyd's triangle to print\n");
    scanf("%d", &n);
    print_floyd(1, n, 1);
    return 0;
}
void print_floyd(int cr, int nr, int np)
{
    int c;
    if (cr > nr) // Base case
        return;
    for (c = 1; c <= cr; c++)
        printf("%d ", np++);
    printf("\n");
    print_floyd(++cr, nr, np);
}