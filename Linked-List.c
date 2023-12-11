
#include <stdio.h>
#include<stdlib.h>
#include <malloc.h>
struct node{
    int data;
    int next;
}*first=NULL;


void createLL(int A[], int n){
    int i=0;
    struct node *t, *last;
    first=(struct node *)malloc(sizeof(struct node));
    first->data=A[0];
    first->next=NULL;
    last=first;
    
    for(i=1; i<n; i++){
        t=(struct node *)malloc(sizeof(struct node));
        t->data=A[i];
        t->next=NULL;
        last->next=t;
        last=t;
        
    }
}

void display(struct node *p){
    while(p != NULL){
        printf("%d", p->data);
        p = p->next;
    }
}

int main()
{
    int A[]={5, 3, 8, 9};
    createLL(A, 4);
    display(first);
    
    return 0;
    
}
