#include <stdio.h>
#include <stdlib.h>
struct singlyLinkedList
{
    int ID;
    char name[100];
    char publication[100];
    char author[100];

    struct singlyLinkedList *next;
};
struct singlyLinkedList *head;
void begininsert();
void lastinsert();
void randominsert();
void begin_delete();
void last_delete();
void random_delete();
void display();
void search();
void main()
{
    int choice = 0;
    while (choice != 9)
    {
        printf("Menu");
        printf("choose option");
        printf("========================================================\n");
        printf("\n 1.Insert book in the begining \n 2.insert book in the last \n 3.insert book at any random location \n 4.delelte book from beginnig \n 5.delete book from last \n 6.delete book after specified location \n 7.search for an book \n 8.show book \n 9.exit");
        printf("Enter your choice");
        scanf("%d,&choice");
        switch (choice)
        {
        case '1':
            begininsert();
            break;
        case '2':
            lastinsert();
            break;
        case '3':
            randominsert();

            break;
        case '4':
            begin_delete();
            break;
        case '5':
            last_delete();
            break;
        case '6':
            random_delete();
            break;
        case '7':
            search();

            break;
        case '8':
            display();
            break;
        case '9':
            exit(0);
            break;
        default:
            printf("please enter valid choice");
        }
    }
}
void begininsert()
{
    struct singlyLinkedList *ptr;
    int book;
    ptr = (struct singlyLinkedList *)malloc(sizeof(struct node *));
    if (ptr == NULL)
    {
        printf("\n OVERFLOW");
    }
    else
    {
        printf("\n enter book details\n");
        printf("\n enter book ID");
        scanf("%d", &ptr->ID);
        printf("\n enter book Name");
        scanf("%d", &ptr->name);
        printf("\n enter book publication ");
        scanf("%d", &ptr->publication);
        printf("\n enter author ");
        scanf("%d", &ptr->author);

        ptr->next = head;
        head = ptr;
        printf("enter book sucessfully");
    }
}

void lastinsert()
{
}

void randominsert()
{
}

void begin_delete()
{
}

void last_delete()
{
}

void random_delete()
{
}

void display()
{
}

void search()
{
}
