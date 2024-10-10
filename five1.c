#include<stdio.h>
#include<stdlib.h>
#include"five1.h"

// Define 'start' here (only once)
struct node *start = NULL;

void create(int data) {
    struct node *temp, *q;
    temp = (struct node *)malloc(sizeof(struct node));
    temp->info = data;
    temp->next = NULL;
    
    if (start == NULL) {
        start = temp;
        printf("\nstart = %d\n", start->info);
    } else {
        q = start;
        while (q->next != NULL) {
            q = q->next;
        }
        q->next = temp;
    }
}

void inserte_at_beg(int data) {
    struct node *temp;
    temp = (struct node *)malloc(sizeof(struct node));
    temp->info = data;
    temp->next = start;
    start = temp;
}

void inserte_at_end(int data) {
    struct node *temp, *q;
    temp = (struct node *)malloc(sizeof(struct node));
    temp->info = data;
    temp->next = NULL;
    
    if (start == NULL) {
        start = temp;
        printf("\nstart = %d\n", start->info);
        return;
    }
    
    q = start;
    while (q->next != NULL) {
        q = q->next;
    }
    q->next = temp;
}

void display() {
    struct node *q;
    if (start == NULL) {
        printf("List is empty!\n");
    } else {
        q = start;
        printf("Linked list: ");
        while (q != NULL) {
            printf(" %d", q->info);
            if (q->next != NULL) {
                printf(" ->");
            }
            q = q->next;
        }
        printf("\n"); 
    }
}

void delete_node(int data) {
    struct node *q;
    q = start;
    
    if (start == NULL) {
        printf("List is empty!\n");
        return;
    } else if (start->info == data) {
        start = start->next;
    } else {
        while (q->next != NULL && q->next->info != data) {
            q = q->next;
        }
        if (q->next == NULL) {
            printf("Node with data %d not found.\n", data);
            return;
        }
        q->next = q->next->next;
    }
}
