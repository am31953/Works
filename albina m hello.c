#include <cs50.h>
#include <stdio.h>

int main(void)
{
    string name = get_string("What's your name? "); // deklarojme variablen name te tipit string

    printf("Hello, %s!\n", name);   // %s zevendesohet me variablen name

    return 0;
}
