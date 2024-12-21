#include <stdio.h>

int main(void)
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    int x;
    
    if (num > 5)
    {
        x = 5;
    }
    else
    {
        x = 0;
    }

    printf("x = %d\n", x);
}