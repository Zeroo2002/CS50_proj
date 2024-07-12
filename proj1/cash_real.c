#include <stdio.h>

int main(void)
{
    int change = 42;
    int counter = 1;
    int needs;

    while (change != 0)
    {

        if (change >= 1 & change < 5)
        {
            change = change - 1;
            // printf("after deducting 1 cents: %i\n", change);

            needs = counter++;
        }

        else if (change >= 5 & change < 10)
        {
            change = change - 5;
            // printf("after deducting 5 cents: %i\n", change);

            needs = counter++;
        }

        else if (change >= 10 & change < 25)
        {
            change = change - 10;
            // printf("after deducting 10 cents: %i\n", change);

            needs = counter++;
        }

        else
        {
            change = change - 25;
            // printf("after deducting 25 cents: %i\n", change);

            needs = counter++;
        }
    }
    printf("Number of changes needed: %i\n", needs);
}