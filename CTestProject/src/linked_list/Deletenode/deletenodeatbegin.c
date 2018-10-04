/*
 * deletenodeatbegin.c
 *
 *  Created on: 05-Oct-2018
 *      Author: kernel
 */

#include "../linked_list_main.h"

struct node *deletenodeatbegin(struct node *start)
{
	start = start->link;
	return start;
}
