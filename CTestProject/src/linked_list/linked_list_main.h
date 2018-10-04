#include <stdio.h>
#include <stdlib.h>

/***********Structure*****************/
struct node
{
	int info;
	struct node *link;
};

/*************Global Variables*********************/
struct node *head;
struct node *temp;

/***************Proto Functions *****************/
void linked_list_main(void);
struct node *create_list(struct node *start);
void print(struct node * start);
struct node *addnodeatbegin(struct node *start, int data);
void addnodeatend(struct node *start, int data);
void addnodeatposition(struct node *start, int pos, int data);
struct node *deletenodeatbegin(struct node *start);
