#include <stdio.h>

void roww(int i);
int main(void)
{
    int height = 3;

        for (int j = 0; j <= height; j++)
        {
            for (int l = height-1; l>0; l--)
            {
                printf("*");
            }
            for (int k = 0; k <= j; k++)
            {
                printf("#");
            }
            printf("\n");
        }
        printf("\n");
}

void roww(int i)
{
    for (int j = 0; j <= i; j++)
    {
        for (int k = 0; k <= j; k++)
        {
            printf("#");
        }
        printf("\n");
    }
}