#include "zad3.h"

void fillList(node_t** list, unsigned int num)
{
    for(int i = 0; i < num; ++i)
    {
        push(list, (rand() % (RAND_MAX - 0) + 0));
    }
}

void freeList(node_t** list)
{
    node_t *current = *list, *prev;
    while (current)
    {
        prev = current;
        current = current->next;
        free(prev);
    }
    *list = NULL;
}

void push(node_t** list, const unsigned int value)
{
    node_t* newNode = malloc(sizeof(node_t));
    newNode->value = value;
    newNode->next = *list;
    *list = newNode;
}

void printList(node_t* list)
{
    node_t* current = list;
    while (current)
    {
        printf("%lu ", current->value);
        current = current->next;
    }
    putchar('\n');
}

node_t* maxValueElement(node_t* list)
{
    node_t* maxElem = list;
    node_t* current = list->next;
    while (current)
    {
        if(current->value > maxElem->value)
        {
            maxElem = current;
        }
        current = current->next;
    }
    return maxElem;
}

void onesCount(node_t* list)
{
    unsigned int onesCount = 0;

    node_t* current = list;
    while (current)
    {
        for(unsigned int i = 0; i < 64; ++i)
        {
            if(CHECKBIT(current->value, i))
            {
                onesCount++;
            }
        }
        current = current->next;
    }
    printf("\'1\' bits count: %u\n", onesCount);
}
