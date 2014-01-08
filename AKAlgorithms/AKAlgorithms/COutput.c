//
//  COutput.c
//  AKAlgorithms
//
//  Created by Artem Kislitsyn on 1/6/14.
//  Copyright (c) 2014 Artem Kislitsyn. All rights reserved.
//

#include <stdio.h>
#include "COutput.h"

void printCArray(int a [], int length){
     printf("Start Array ");
    for (int i=0; i<length; ++i) {
        printf(" %i ", a[i]);
    }
    printf("\n");
    
}