#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include<math.h>
//#define Taget 1000000 

//int YaoQiuN;


int main()
{
    char InputFallBack[10000];//超级大数组○( ＾皿＾)っHiahiahia…
    scanf("%s", InputFallBack);


    char* Began, * End;


    int flag = 1;
    Began = InputFallBack;//指向字符串首地址
    End = InputFallBack + strlen(InputFallBack) - 1;//首地址加总长度，使其指向末尾地址，为了避免’\0‘进入运算，所以-1

    for (; Began <= End;)//一直循环直到他俩碰头或重合
    {
        if (*Began != *End)break;//看看他俩内容一不一样
        Began++;
        End--;
    }

    if (Began <= End)//看看began地址是否小于等于end
    {
        printf("False\n");
        system("pause");
        return 0;
    }
    //如果是回文数，began地址总会大于end
    printf("True\n");
    system("pause");
    return 0;

}




int xianxain(int SB) {

    char* oh,my,god;


    int XX1, XX2, XX3,tmp,VV;

    tmp = SB;
    XX1 = SB % 10;
    XX1 = pow(XX1, 3);
    SB = SB / 10;
    XX2 = SB % 10;
    XX2 = pow(XX2, 3);
    SB = SB / 10;
    XX3 = SB%10;
    XX3 = pow(XX3, 3);
    SB = SB / 10;
    VV = XX1+XX2+XX3;
    SB = 0;
    if (VV == tmp) {      
        return 1;
    }
    else {
        return 0;
    }
}

int main() {
    for (int count=100;count<1000;count++) {
        if (xianxain(count)) {
            printf("%d\n", count);
        }
    }

}





int wobuyao(int NumFallBack)
{
    int CalcA = 0, CalcB = 0, CalcC;

    CalcB = NumFallBack;

    for (; CalcB > 0;)
    {
        CalcC = CalcB % 10; //把B除以10取余数，正好相当于输入数字的末尾数字，C先拿着这个数字

        CalcA = CalcA * 10 + CalcC; //把C的末位数放到A的末位

        // A的作用是存储输入数字反过来的数字

        CalcB = CalcB / 10; //去掉尾部的数,因为c的除法不保留小数,除到最后也就变成0了，循环也结束了
    }

    if (NumFallBack == CalcA) //比较一下是否相等
    {
        return 1;
    }
    else {
        return 0;
    }
}

int made(int cao) {
    int JIJIJI = 0;
    int DIDIDI = 0;
    for (; cao> 0;) {
        JIJIJI = cao % 10;
        DIDIDI = DIDIDI+ JIJIJI;
        cao = cao / 10;
    }

    if (YaoQiuN == DIDIDI) //比较一下是否相等
    {
        return 1;
    }

    else {
        return 0;
    }
    
    DIDIDI = 0;
}

int main()
{    
    printf("请输入一个正整数：\n");
    scanf("%d", &YaoQiuN);
    if (YaoQiuN < 0)printf("你故意找茬是不是？");

    int TMDHuiWenShu, count;
    for (TMDHuiWenShu = 0, count = 0; TMDHuiWenShu < Taget; TMDHuiWenShu++)
    {
        if (wobuyao(TMDHuiWenShu))  //判断是否为回文数
        {            
            if (made(TMDHuiWenShu)) {//判断相加是否为指定数字

                printf("%-8d", TMDHuiWenShu);   //输出符合条件的回文数
                count++;
                if (count % 20 == 0) //每20个换行
                    printf("\n");

            }
            
            
        }
    }
    printf("\n");
    system("pause");

    return 0;
}








int addall(int cao)
{
    int Whole = 0;
    int temp = 0;
    for (;cao >0;)
    {
        temp = cao % 10;
        Whole = Whole + temp;//加数字
        cao = cao / 10;
    }
    if (YaoQiuN == Whole) //比较一下是否相等
    {
        return 1;
    }
    else {
        return 0;
    }
    Whole = 0;

}


int main()
{
    char InputFallBack[10000];//超级大数组○( ＾皿＾)っHiahiahia…
    scanf("%s", InputFallBack);


  char* Began, * End;


    int flag = 1;
    Began = InputFallBack;//指向字符串首地址
    End = InputFallBack + strlen(InputFallBack) - 1;//首地址加总长度，使其指向末尾地址，为了避免’\0‘进入运算，所以-1

    for (; Began <= End;)//一直循环直到他俩碰头或重合
    {
        if (*Began != *End)break;//看看他俩内容一不一样
        Began++;
        End--;
    }

    if (Began <= End)//看看began地址是否小于等于end
    {
        printf("False\n");
        system("pause");
        return 0;
    }
    //如果是回文数，began地址总会大于end
    printf("True\n");
    system("pause");
    return 0;

}
