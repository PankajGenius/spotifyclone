#include <stdio.h>
int fun(int **p);
int main()
{
    int i=10;

    const int *p = &i; 
    fun(&p);
    return 0;
}

int fun(int **p)
{
    int j = 223;
    int *temp = &j;
    printf("Before changing ptr = %5x\n", *p); 
    const int *p = temp; 
    printf("After changing ptr = %5x\n", *p);
return 0;
}

