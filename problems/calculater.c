#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Promt user for x
    float x = get_user("x: ");

    // Promt user for y
    float y = get_user("y: ");

    // Divide x by y
    float z = x / y;

    // Print out the result
    printf("%f\n", z);

}