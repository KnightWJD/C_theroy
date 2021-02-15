
#include <stdio.h>

int main()
{
    int arr[2][3] = {{1,6,3},{7,8,9}};
    int i = 0;
    for(i=0;i<2;i++)
    {
        int a = 0;
        for(a=0;a<3;a++)
        {
            printf("%d ",arr[i][a]);
        }
        printf("\n");
    }
    return 0;
}
