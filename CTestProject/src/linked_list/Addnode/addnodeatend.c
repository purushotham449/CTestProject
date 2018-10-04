/*
 * addnodeatend.c
 *
 *  Created on: 04-Oct-2018
 *      Author: kernel
 */

#include "../linked_list_main.h"

void addnodeatend(struct node *start, int data)
{
	struct node *list = NULL;
	list = (struct node *) malloc(sizeof(struct node));
	list->info = data;
	while(start->link != NULL)
	{
		start = start->link;
	}
	list->link = start->link;
	start->link = list;
//	printf("addnodeatend = %d\n", start->link->info);
}
