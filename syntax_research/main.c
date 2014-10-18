#include<stdio.h>

void test(int z);

int main()
{
    test(87);
    return 0;
}

void test(int z)
{
    int a = 50, b = 80;
    printf("\nvalues : a = %d and b + z = %d\n", a, b+z);
}