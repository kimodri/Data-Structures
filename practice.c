#include<stdio.h>

int main()
{
    printf("This is a C file to practice collaboration.\n");
    printf("1. Try creating a branch from the main.\n");
    printf("2. Make a pull request\n");

    // Added from kim branch
    int x = 0;
    while(x <= 5)
    {
        printf("%d\n", x);
        x++;
    }
}