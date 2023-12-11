
#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
struct node {
    int keys;
    int values;
    struct node *next;
}*first=NULL;


void insert(){
    struct node *p, *first, *last;
    int key,value;

    if( first == NULL){
        printf("\nEnter the key:");
        scanf("%d", &key);
        printf("\nEnter the value:");
        scanf("%d", &value);
        first=(struct node *)malloc(sizeof(struct node));
        first->keys=key;
        first->values=value;
        first->next=NULL;
        last=first;
    }
    else{
        struct node *temp;
        printf("\nEnter the key:");
        scanf("%d", &key);
        printf("\nEnter the value:");
        scanf("%d", &value);
        temp=(struct node *)malloc(sizeof(struct node));
        temp->keys=key;
        temp->values=value;
        temp->next=NULL;
        last->next=temp;
        last=temp;
    }
  
}

void search(){
    int key;
    printf("\nEnter the key you want to search");
    scanf("%d", &key);
    struct node *curr;
    curr=first;
    if(curr==NULL){
    printf("Dictionary is empty");
    }
    else{
        while(curr!=NULL){
            if(curr->keys==key){
            printf("\nKey found in dictionary at key:%d and value is:%d", curr->keys, curr->values);
            break;
            }
            curr=curr->next;
            }
        }
    }

int main(){
    int option;
    do {
        printf( "\n MENU \n1.Insert \n2.Search \n3.Delete \n4.Display \n5.Exit");
        printf( "\n Enter your option.");
        scanf( "%d", &option);
        switch(option){
            case 1:
            insert();
            break;
            case 2:
            search();
            break;
            default:
            printf( "\nInvalid choice entry!!!\n" );
            break;
            
        }

    }while(option!=5);
    getch();
    return 0;
}
