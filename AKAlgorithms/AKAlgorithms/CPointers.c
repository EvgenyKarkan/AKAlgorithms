//
//  CPointers.c
//  AKAlgorithms
//
//  Created by Artem Kislitsyn on 1/6/14.
//  Copyright (c) 2014 Artem Kislitsyn. All rights reserved.
//

#include <stdio.h>
#include "CPointers.h"

void testPointers(){
    
    int *ip; /* ip - указатель на int */
    int x = 2;
    int y = 3;
    int z[10] = {10,9,8,7,6,5,4,3,2,1};
    
    ip = &x;    /* теперь ip указывает на x */
    printf("ip %i \n",*ip);
    y = *ip;    /* y теперь равен 1 */
    printf("y %i \n",y);
    *ip = 0;    /* x теперь равен 0 */
    printf("x %i \n",x);
    ip = &z[0]; /* ip теперь указывает на z[0] */
    printf("ip z[0 ]%i",*ip);
}