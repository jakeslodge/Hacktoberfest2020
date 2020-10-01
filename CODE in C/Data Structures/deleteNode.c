#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

void deleteNode(struct Node* target)
{
    target->data=target->next->data;
    struct Node* ptr;
    ptr = target;
    target->next=target->next->next;
    free(ptr);

}
