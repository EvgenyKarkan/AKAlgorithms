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
#include <pthread.h>
#include <time.h>


void mergeSortAlgorithm(){
    clock_t begin, end;
    double time_spent;
    int e [10]  = {10,9,8,7,6,5,4,3,2,1};
    printf("Start Merge Sort Algorithms \n");
    begin = clock();
    partition(e,0,9);
    
    end = clock();
    time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
    printf("time spent %f \n",time_spent);
    
    printCArray(e,10);
}

void heapSortAlgorithm(){
    clock_t begin, end;
    double time_spent;
    
    int d [10]  = {10,9,8,7,6,5,4,3,2,1};
    printf("Start heap Algorithms \n");
    
    begin = clock();
    heapSort(d,10);
    end = clock();
    time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
    printf("time spent %f \n",time_spent);
    
    printCArray(d,10);
    
}

void insertAlgorithm(){
    
    clock_t begin, end;
    double time_spent;
    printf("Start insertion Algorithms \n");
    int b [10]  = {10,9,8,7,6,5,4,3,2,1};
    begin = clock();
    
    insertionSort(b,10);
    
    end = clock();
    time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
    printf("time spent %f \n",time_spent);
    printCArray(b,10);
}

void startCAlgorithms(){
    printf("Start C Algorithms \n");
    int a [10]  = {10,9,8,7,6,5,4,3,2,1};
    
    printf("Start Selection Algorithms \n");
    clock_t begin, end;
    double time_spent;
    
    begin = clock();
    
    selectionSort(a,10);
   
    end = clock();
    time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
    printf("time spent %f \n",time_spent);
    printCArray(a,10);
    
    printf("Start insertion Algorithms \n");
    int b [10]  = {10,9,8,7,6,5,4,3,2,1};
    begin = clock();
    
    insertionSort(b,10);

    end = clock();
    time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
    printf("time spent %f \n",time_spent);

    printCArray(b,10);
    
    printf("Start buble Algorithms \n");
    int c [10]  = {10,9,8,7,6,5,4,3,2,1};
    
    begin = clock();
    bubbleSort(c,10);
    end = clock();
    time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
    printf("time spent %f \n",time_spent);
    
    printCArray(c,10);
    
    testPointers();
}


int main(int argc, const char * argv[])
{
    @autoreleasepool {
        
     // AKCSortAlgorithms * sortAlgorithms = [AKCSortAlgorithms new];
     // int a [10]  = {1,2,3,4,5,6,7,8,9,0};
        startCAlgorithms();
    }
    return 0;
}



