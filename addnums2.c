#include<stdio.h>
#include"addnums.h"

void add(int a, int b, void(*f)(int))
{
    int c = a + b;
    f(c);
}
