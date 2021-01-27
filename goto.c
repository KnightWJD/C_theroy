//goto语句
#include <stdio.h>

int main()
{
    goto a;
    printf("111");
a:
    printf("222");
    return 0;
}

// 建议应用场景(一次性跳出几个循环，不用一个一个break)：
//for(...)
//    for(...)
//    {
//        for(...)
//        {
//            for(...)
//            {
//                if(disaster)
//                {
//                    goto erro;
//                }
//            }
//        }
//    }
//
//erro:
//    if(disaster)
//    {
//        ...
//    }
