/*
 * =====================================================================================
 *
 *       Filename:  declareVariables.c
 *
 *    Description:  all declare about type
 *
 *        Version:  1.0
 *        Created:  12/6/2014 22:14:32
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  xuejp (xuejp), xuejp@outlook.com
 *        Company:  simplelive
 *
 * =====================================================================================
 */
#include<stdio.h>
#include<limits.h>
#include "common.h"

#define Test1 10
#define Test2(x,y) x*y
#define Test3(x) printf("%d\n",x)
#define Test4(ch) #ch
#define Test5(x,y) x##y

void main()
{
    int octal=0777; // 八进制以0开头
    int hexadecimal=0xFFF; // 十六进制以0x或0X开头
    unsigned int unsignedInt=1u;
    long int longInt=1000l;
    unsigned long int ulInt=100ul;
    double defDouble=1.1;
    float defFloat=1.1f;
    long double defLDouble=1.1l;
    printf("%d\n",'a');
    printf("%d * 100000000 = %d\n",octal,octal*100000000);
    char *pointer="abcdefghijk";
    printf("%c\n",*(pointer+2));
    struct Node{
        char *Name;
        struct Node *Left;
        struct Node *Right;
    };
    struct Node n1,*n2;
	n1.Name="root";
	n2->Name="child";
    printf("%s\n",n1.Name);
    printf("%s\n",n2->Name);
    enum Week{Sunday,Monday,Tuesday,Wednesday,Thursday,Friday,Saturday};
    enum Week today=Sunday;
    printf("%d\n",today);
    int key, *const pointer1=&key;
    *pointer1=10;
    const int ci,*pointer2=&ci;
    //*pointer2=11;//error
    pointer2=&octal;
	SetStackLength(10);
	SetMaxLength(10);
	printf("%d\n",STACKLENGTH);
	printf("%d\n",MAXLENGTH);
	printf("----------------\n");
	int testArray[Test1];
	printf("%d\n",sizeof(testArray)/sizeof(4));
	printf("%d\n",Test2(2,3));
	Test3(1);
	printf("%d->%s\n",12+123,12+Test4(123));
//	Test5(Test5(1,2),2);//error 在执行第一次替换后为 Test5(1,2)2 因为表达式后面直接跟的是2中间没有空格 则不能匹配
#define DEBUG 1
//#undef Test1
#ifdef DEBUG
	printf("Test1 is defined\n");
#endif
#ifndef DEBUG
	printf("Test1 is undefined\n");
#endif
#if DEBUG
	printf("Debug 1\n");
#else 
	printf("Debug 0\n");
#endif
#if DEBUG==0
	pirntf("Debug 0\n");
#elif DEBUG==1
	printf("Debug 1\n");
#endif
//#error
//#pragma
//#line
    return;
}

