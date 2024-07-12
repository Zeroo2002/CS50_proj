#include <stdio.h>

int main(void)
{
    int height = 4;

    if (height > 1)
    {
        for (int j = 0; j < height; j++)
        {
            for (int l = height - j; l > 1; l--)
            {
                printf(" ");
            }
            for (int k = 0; k <= j; k++)
            {
                printf("#");
            }
            printf("\n");
        }
    }
    else
    {
        printf("#\n");
    }
}
