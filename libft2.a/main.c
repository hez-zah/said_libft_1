#include <unistd.h>
#include <stdio.h>

void    test()
{
    printf("wach a said\n");
}

void (*p)();

int main()
{
    p = &test;
    (*p)();
}