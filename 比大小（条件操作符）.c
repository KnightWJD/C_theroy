#include <stdio.h>


int main()
{
    int n1 = 0;
    int n2 = 0;
    int max = 0;
    scanf("%d%d",&n1,&n2);

    max = (n1>n2?n1:n2); // exp1? exp2 : exp3 如果exp1为真则输出exp2，为假输出exp3
    printf("max=%d\n",max);
    return 0;


}
