#include <stdio.h>

int main()
{
    int line = 0;
    printf("开始学习");

    while(line<20000)
    {
        printf("%d.敲一行代码\n",line);
        line++;
    }
    if(line>=20000)
        printf("英语白富美，走上人生巅峰\n");
    return 0;

}
