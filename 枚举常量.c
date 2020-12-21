#include <stdio.h>

//枚举常量
//枚举：一一列举
//性别：男，女，保密
//星期：1 2 3 4 5 6 7

//枚举关键：enum
enum Sex
{
    MALE,
    FEMALE,
    SECRET
};
//MALE FEMALEECRET - 枚举常量

int main()
{
    enum Sex xingbie = MALE;
    printf("%d\n",MALE);//0
    printf("%d\n",FEMALE);//1
    printf("%d\n",SECRET);//2
    printf("%d\n",xingbie); //0
    return 0;
}
