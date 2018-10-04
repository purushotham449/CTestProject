/*
 * addnodeatposition.c
 *
 *  Created on: 04-Oct-2018
 *      Author: kernel
 */

#include "../linked_list_main.h"

void addnodeatposition(struct node *start, int pos, int data)
{
	int i;
	struct node *list = NULL;
	list = (struct node *) malloc(sizeof(struct node));
	list->info = data;
	if(pos == 1)
	{
		head = addnodeatbegin(start, data);
	}
	else
	{
		for(i=1;i<pos-1;i++)
			{
				printf("start->info = %d \n", start->info);
				start = start->link;
				printf("i= %d \n", i);
			}
			list->link = start->link;
			start->link = list;
	}
}
