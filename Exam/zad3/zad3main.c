#include "zad3.h"

#define COUNT 3

int main()
{
    srand(time(NULL));

    node_t* list = NULL;
    //fill list with random values
    fillList(&list, COUNT);
    printList(list);
    //return max value element
    node_t* max = maxValueElement(list);
    printf("max Value: %lu\n", max->value);
    //print the number of all 1's bits
    onesCount(list);

    freeList(&list);

    return 0;
}