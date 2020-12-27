#include <stdio.h>

int Max(int x,int y)
{
    if(x>y)
        return x;
    else
        return y;

}
int main()
{
    int max = 0;
    max = Max(30,40);
    printf("max=%d\n",max);
    return 0;


}
