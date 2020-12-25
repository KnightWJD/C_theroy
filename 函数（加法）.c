#include <stdio.h>

int ADD(int x,int y)
{
    int z = x+y;
    return z;
}
int main()
{
    int num1 = 1;
    int num2 = 3;
    int sum = 0;
    sum = ADD(num1,num2);
    printf("num1+num2=%d\n",sum);
    sum = ADD(8,9);
    printf("8+9=%d\n",sum);
    return 0;
}

