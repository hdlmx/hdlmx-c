//
//  main.c
//  hdlmx-c
//
//  Created by hdlmx on 2023/10/15.
//

#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;

    /* data */
};

int main(int argc, const char *argv[])
{

    struct Node head = {0, NULL};

    struct Node *point = &head;

    for (int i = 1; i < 3; i++)
    {
        struct Node *node = malloc(sizeof(struct Node));
        node->data = i;
        point->next = node;
        point = point->next;
    }

    struct Node *index = &head;

    while (index->next != NULL)
    {
        printf("%d", index->data);
        index = index->next;
    }

    printf("Hello, hdlmx!\n");
    return 0;
}
