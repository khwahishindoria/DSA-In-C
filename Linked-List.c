
#include <stdio.h>
#include<stdlib.h>
struct node{
    int data;
    int next;
};
struct node *first=NULL;

void createLL(int A[], int n){
    int i=0;
    struct node *t, *last;
    first=(struct node *)malloc(sizeof(struct node));
    last=first;
    
    for(i=0; i<n; i++){
        t=(struct node *)malloc(sizeof(struct node));
        t->data=A[i];
        t->next=NULL;
        last->next=t;
        last=t;
        
    }
}

int main()
{
    int A[]={5, 3, 8, 9};
    
}
