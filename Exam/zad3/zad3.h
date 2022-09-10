#ifndef ZAD3_H
#define ZAD3_H

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdint.h>

#define CHECKBIT(mask, bit) !!((mask) & (1ull << (bit)))

typedef struct node {
    uint64_t value;
    struct node* next;
} node_t;

void freeList(node_t**);
void push(node_t**, const unsigned int);
void printList(node_t*);
node_t* maxValueElement(node_t*);
void onesCount(node_t*);
void fillList(node_t**, unsigned int);




#endif //ZAD3_H