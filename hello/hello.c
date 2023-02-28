#include <stdio.h>
#include <cs50.h>
int main(void)
{
    string first = get_string("what is your firt name?\n"); // ask user for name
    printf("hello, %s\n", first); // print hello, name of the user
}