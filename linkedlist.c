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

int size(LIST* a)
{
    int c=0;
    NODE* l=a->head;
    while(l!=NULL)
    {
        l=l->next;
        c+=1;
    }
    return c;
}

NODE* mergepoint(LIST* a,LIST* b)
{
    int c=size(a);
    int d=size(b);
    NODE* x=a->head;
    NODE* y=b->head;
    if (c>d) {
        int k=c-d;
        while (k--) {
            x=x->next;
        }
        
    }
    else if (d>c)
    {
        int k=d-c;
        while (k--) {
            y=y->next;
        }
    }
    while (x!=NULL && y!=NULL && x->data!=y->data) {
        x=x->next;
        y=y->next;
    }
    return x;
}

int cycledetection(LIST* a)
{
    NODE* x=a->head;
    NODE* y=a->head;
    while(x!=NULL && y!=NULL && y->next!=NULL)
    {
        x=x->next;
        y=y->next->next;
        if(x==y)
        {
            return 1;
        }
    }
    return 0;
}

NODE* nthnodefromend(LIST* a,int n)
{
    NODE* l=a->head;
    while (n--) {
        l=l->next;
    }
    NODE* m=a->head;
    while(l!=NULL)
    {
        l=l->next;
        m=m->next;
    }
    return m;
}



int main(int argc, const char * argv[]) {
    // insert code here...
    LIST* a=(LIST*)malloc(sizeof(LIST));
    a->head=NULL;
    LIST* b=(LIST*)malloc(sizeof(LIST));
    b->head=NULL;
    insert(a, 2);
    insert(a, 3);
    insert(a, 4);
    insert(a, 5);
    insert(a, 6);
    insert(a, 7);
    printf("%d\n",nthnodefromend(a, 6)->data);
    printf("Hello, World!\n");
    return 0;
}
