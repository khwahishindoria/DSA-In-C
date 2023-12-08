#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#define size 7

struct node
{
    int data;
    struct node *next;
};

struct node *chain[size];
void init(){
int i;
for(i = 0; i < size; i++)
chain[i] = NULL;
}

void insert_val()
{   int value;
    printf("\n Enter the value to be inserted:");
    scanf("%d", &value);
    //create a newnode with value
    struct node *newNode = malloc(sizeof(struct node));
    newNode->data = value;
    newNode->next = NULL;

    //calculate hash key
    int key = value % size;

    //check if chain[key] is empty
    if(chain[key] == NULL)
        chain[key] = newNode;
    //collision
    else
    {
        //add the node at the end of chain[key].
        struct node *temp = chain[key];
        while(temp->next)
        {
            temp = temp->next;
        }

        temp->next = newNode;
    }
}


delete_val(){
    printf("Delete value");
}

search_val(){
    printf(" search val");
}
void display()
{
    int i;

    for(i = 0; i < size; i++)
    {
        struct node *temp = chain[i];
        printf("chain[%d]-->",i);
        while(temp)
        {
            printf("%d -->",temp->data);
            temp = temp->next;
        }
        printf("NULL\n");
    }
}

int main()
    {
        init();
        int option;
        do
        {
            printf( "\n MENU \n1.Insert \n2.Search \n3.Delete \n4.Display \n5.Exit");
            printf( "\n Enter your option.");
            scanf( "%d", &option);
            switch (option)
            {
                case 1:
                insert_val();
                break;
                case 2:
                search_val();
                break;
                case 3:
                delete_val();
                break;
                case 4:
                display();
                break;
                default:
                printf( "\nInvalid choice entry!!!\n" );
                break;
            }
        }while (option!=5);

        getch();
        return 0;
    }
