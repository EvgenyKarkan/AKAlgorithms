//
//  main.m
//  AKAlgorithms
//
//  Created by Artem Kislitsyn on 1/5/14.
//  Copyright (c) 2014 Artem Kislitsyn. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "AKSortAlgorithms.h"
#include "CAlgorithms.h"
#include "CPointers.h"
#include "COutput.h"

void startCAlgorithms(){
    printf("Start C Algorithms \n");
    int a [10]  = {10,9,8,7,6,5,4,3,2,1};
    
    //
    selectionSort(a,10);
    printCArray(a,10);
    
    insertionSort(a,10);
    printCArray(a,10);
    
    bubbleSort(a,10);
    printCArray(a,10);
    
    heapSort(a,10);
    printCArray(a,10);
    
    testPointers();
    
}

int main(int argc, const char * argv[])
{

    @autoreleasepool {
        
     //   AKCSortAlgorithms * sortAlgorithms = [AKCSortAlgorithms new];
       // int a [10]  = {1,2,3,4,5,6,7,8,9,0};
        startCAlgorithms();
        
        
    }
    return 0;
}



