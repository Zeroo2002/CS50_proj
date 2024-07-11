#include <stdio.h>

int main(void)
{
    int height = 5;

    for (int j = 0; j < height; j++)
    {

        for (int k = 0; k <= j; k++)
        {
            printf("#");
        }
        printf("\n");
    }
}