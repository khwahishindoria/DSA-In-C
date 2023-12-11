
#include<stdio.h>
#include<stdlib.h>
#include <malloc.h>
struct node {
    int data;
    struct node *next;
};


void insert(){
    int A[]={5,4,3,6,7};
    int n = 5, i;
    struct node *p, *first, *last;
    first=(struct node *)malloc(sizeof(struct node));
    first->data=A[0];
    first->next=NULL;
    last=first;
    
    for(i=1;i<n;i++){
        struct node *temp;
        temp=(struct node *)malloc(sizeof(struct node));
        temp->data=A[i];
        temp->next=NULL;
        last->next=temp;
        last=temp;
    }
    
    p=first;
    for(i=0;i<n;i++){
    printf("Linked list is %d %s", p->data, p->next);
    p=p->next;
    }
}

void main(){
    insert();
}
