//
//  CPointers.c
//  AKAlgorithms
//
//  Created by Artem Kislitsyn on 1/6/14.
//  Copyright (c) 2014 Artem Kislitsyn. All rights reserved.
//

#include <stdio.h>
#include "CPointers.h"

#include <ctype.h>
void swap(int *px, int *py) /* перестановка *px и *py */
{
    int temp;
    temp = *px;
    *px = *py;
    *py = temp;
}

//int getint(int *pn)
//{
//    int с =0, sign;
//    
//  //  while (isspace(с = getch()))
//        ; /* пропуск символов-разделителей */
//    
//    if(!isdigit(с) && с != EOF && с != '+' && с != '-') {
//       // ungetch (с); /* не число */
//        return 0;
//    }
//    sign =(с =='-') ? -1 : 1;
//    if (с == '+' || с == '-')
//      //  с = getch();
//    for (*pn = 0; isdigit(с); с = getch())
//        *pn = 10 * *pn + (с -'0');
//    *pn *= sign;
//    if (с != EOF)
//    //    ungetch(с);
//    return с;
//}


void testPointers(){
    
    int *ip,*iq; /* ip - указатель на int */
    int x = 2;
    int y = 3;
    int z[10] = {10,9,8,7,6,5,4,3,2,1};
    double *dp, atof (char *);
    
    
    ip = &x;    /* теперь ip указывает на x */
    printf("ip %i \n",*ip);
    y = *ip;    /* y теперь равен 1 */
    printf("y %i \n",y);
    *ip = 0;    /* x теперь равен 0 */
    printf("x %i \n",x);
    ip = &z[0]; /* ip теперь указывает на z[0] */
    printf("ip z[0 ]%i",*ip);
    int a=3,b=4;
    printf("adress a %i",(unsigned int)&a);
    printf("adress b %i",(unsigned int)&b);
    swap(&a, &b);
    printf("adress a %i",(unsigned int)&a);
    printf("adress b %i",(unsigned int)&b);
    printf("curent ip %i",*ip);
    *ip = *ip + 10;
    printf("curent ip %i",*ip);
    y = *ip + 1;
    printf("curent y %i",y);
    *ip += 1;
    printf("curent ip %i",*ip);
    ++*ip;
    printf("curent ip %i",*ip);
    (*ip)++;
    printf("curent ip %i",*ip);
    iq = ip;//copy
}


