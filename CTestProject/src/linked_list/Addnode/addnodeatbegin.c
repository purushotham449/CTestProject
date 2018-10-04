/*
 * addnodeatbegin.c
 *
 *  Created on: 04-Oct-2018
 *      Author: kernel
 */

#include "../linked_list_main.h"

struct node *addnodeatbegin(struct node *start, int data)
{
	struct node *list = NULL;
	list = (struct node *) malloc(sizeof(struct node));
	list->info = data;
	list->link = start;
	start = list;
	return start;
}
