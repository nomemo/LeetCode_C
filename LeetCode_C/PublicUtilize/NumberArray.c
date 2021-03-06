//
//  NumberArray.c
//  LeetCode_C
//
//  Created by JUE DUKE on 15/12/8.
//  Copyright © 2015年 JUE DUKE. All rights reserved.
//

#include "NumberArray.h"
#include "stdlib.h"
#include <stdio.h>


int * sortedArray(int size) {
    int *result = (int *)malloc(sizeof(int) * size);
    int lastValue = 0;
    for (int i = 0; i < size; i++) {
        int value = 0;
        do {
            value = arc4random() % ((i+1) * 10);
        }while(value < lastValue);
        result[i] = value;
        lastValue = value;
    }
    
    return result;
}


int * randomArray(int size, int factorLimit) {
    if (factorLimit < 2) {
        factorLimit = 2;
    }
    int * result = (int *)malloc(sizeof(int) * size);
    for(int i=0; i<size; i++) {
        int value = arc4random() % factorLimit;
        result[i] = value;
    }
    return result;
}




void printArray(int *input, int size) {
    putchar('\n');
    for(int i=0;i<size;i++)
        printf("%d ",input[i]);
    
    printf("\n");
}