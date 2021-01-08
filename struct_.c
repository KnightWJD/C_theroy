#include <stdio.h>

struct BOOK
{
    char name[20];
    short price;
};

int main()
{
    //利用结构体类型-创建一个该类型的结构体变量
    struct BOOK b1 = {"C语言：从入门到入狱",99};
    struct BOOK* p = &b1;

    //利用p带出我的书名和价格
    //第一种方式
    printf("%s\n",(*p).name);
    printf("%d\n",(*p).price);
    //第二种方式
    printf("%s\n",p->name);//结构体指针->成员
    printf("%d\n",p->price);


    printf("书名: %s\n",b1.name);//结构体变量.成员
    printf("价格: %d\n",b1.price);
    b1.price = 15;
    printf("价格: %d\n",b1.price);
    return 0;
}

