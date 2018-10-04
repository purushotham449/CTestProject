/*
 * deletenodeatend.c
 *
 *  Created on: 05-Oct-2018
 *      Author: kernel
 */

#include "../linked_list_main.h"

void deletenodeatend(struct node *start)
{
	if(start->link == NULL)
	{
		head = deletenodeatbegin(start);
	}
	else
	{
		while(start->link->link != NULL)
		{
			start = start->link;
		}
		start->link = start->link->link;
	}
}
