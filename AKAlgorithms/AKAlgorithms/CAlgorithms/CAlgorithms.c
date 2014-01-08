//
//  File.c
//  AKAlgorithms
//
//  Created by Artem Kislitsyn on 1/6/14.
//  Copyright (c) 2014 Artem Kislitsyn. All rights reserved.
//

#include <stdio.h>
#include "CAlgorithms.h"

void selectionSort(int a[], int array_size)
{
    int i;
    for (i = 0; i < array_size - 1; ++i)
    {
        int j, min, temp;
        min = i;
        for (j = i+1; j < array_size; ++j)
        {
            if (a[j] < a[min])
                min = j;
        }
        
        temp = a[i];
        a[i] = a[min];
        a[min] = temp;
    }
}

void bubbleSort(int a[], int array_size)
{
    int i, j, temp;
    for (i = 0; i < (array_size - 1); ++i)
    {
        for (j = 0; j < array_size - 1 - i; ++j )
        {
            if (a[j] > a[j+1])
            {
                temp = a[j+1];
                a[j+1] = a[j];
                a[j] = temp;
            }
        }
    }
}


void insertionSort(int a[], int array_size)
{
    int i, j, index;
    for (i = 1; i < array_size; ++i)
    {
        index = a[i];
        for (j = i; j > 0 && a[j-1] > index; j--)
            a[j] = a[j-1];
        
        a[j] = index;
    }
}

void downHeap(int a[], int root, int bottom)
{
    int maxchild, temp, child;
    while (root*2 < bottom)
    {
        child = root * 2 + 1;
        if (child == bottom)
        {
            maxchild = child;
        }
        else
        {
            if (a[child] > a[child + 1])
                maxchild = child;
            else
                maxchild = child + 1;
        }
        
        if (a[root] < a[maxchild])
        {
            temp = a[root];
            a[root] = a[maxchild];
            a[maxchild] = temp;
        }
        else return;
        
        root = maxchild;
    }
}


void heapSort(int a[], int array_size)
{
    int i;
    for (i = (array_size/2 -1); i >= 0; --i)
    {
        downHeap(a, i, array_size-1);
    }
    
    for (i = array_size-1; i >= 0; --i)
    {
        int temp;
        temp = a[i];
        a[i] = a[0];
        a[0] = temp;
        downHeap(a, 0, i-1);
    }
}

