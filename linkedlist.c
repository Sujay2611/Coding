//
//  main.c
//  Linkedlist
//
//  Created by sujay2611 on 03/08/20.
//  Copyright © 2020 sujay2611. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct node
{
    int data;
    struct node* next;
}NODE;

typedef struct list
{
    NODE* head;
}LIST;

void print(LIST* a)
{
    NODE* b=a->head;
    while(b!=NULL)
    {
        printf("%d\n",b->data);
        b=b->next;
    }
}

LIST* insert(LIST* a, int d)
{
    NODE* k=(NODE*)malloc(sizeof(NODE));
    k->data=d;
    k->next=NULL;
    if(a->head==NULL)
    {
        a->head=k;
    }
    else
    {
        NODE* l=a->head;
        while(l->next!=NULL)
        {
            l=l->next;
        }
        l->next=k;

    }
    return a;
}

LIST * insertbegin(LIST* a,int d)
{
    NODE* k=(NODE*)malloc(sizeof(NODE));
    k->data=d;
    if(a->head==NULL)
    {
        a->head=k;
        k->next=NULL;
    }
    else
    {
        k->next=a->head;
        a->head=k;
    }
    return a;
}

LIST * insertposition(LIST* a,int d,int pos)
{
    NODE* k=(NODE*)malloc(sizeof(NODE));
    k->data=d;
    int c=0;
    NODE* l=a->head;
    while(c < pos-1)
    {
        l=l->next;
        c+=1;
    }
    k->next=l->next;
    l->next=k;
    return a;
}

LIST* deletebegin(LIST* a)
{
    if (a->head==NULL) {
        return NULL;
    } else {
        a->head=a->head->next;
        return a;
    }
}

LIST* deleteend(LIST* a)
{
    if(a->head==NULL || a->head->next==NULL)
    {
        return NULL;
    }
    else
    {
        NODE* l=a->head;
        while(l->next->next!=NULL)
        {
            l=l->next;
        }
        l->next=NULL;
        return a;
    }
}

void reverse(LIST* a)
{
    NODE* current=a->head;
    NODE* prev=NULL;
    NODE* next=NULL;
    while(current!=NULL)
    {
        next=current->next;
        current->next=prev;
        prev=current;
        current=next;
    }
    a->head=prev;
    
}

void swap(int a,int b)
{
    int temp=a;
    a=b;
    b=temp;
}

void swapadjacent(LIST* a)
{
    NODE* l=a->head;
    while(l!=NULL && l->next!=NULL)
    {
        swap(l->data,l->next->data);
        l=l->next->next;
    }
}


int main(int argc, const char * argv[]) {
    // insert code here...
    LIST* a=(LIST*)malloc(sizeof(LIST));
    a->head=NULL;
    insert(a, 2);
    insert(a, 3);
    insert(a, 4);
    print(a);
    swapadjacent(a);
    print(a);
    printf("Hello, World!\n");
    return 0;
}
