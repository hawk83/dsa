#ifndef SINGLY_LINKED_LIST_H
#define SINGLY_LINKED_LIST_H

#include<stdio.h>
#include<stdlib.h>

struct node {
    int info;
    struct node *next;
};

extern struct node *start;

void create(int data);
void delete_node(int data);
void inserte_at_beg(int data);
void inserte_at_end(int data);
void display();

#endif
