#include "DoubleLinkedList.h"
#include <stdio.h>

int DoubleLinkedListAddItemToHead(DoubleLinkedList *list, ListItem *Item){
	Item->next = list->head;
	*(list->head).prev = item;
	list-> head = item;
	item->prev = NULL;
	list->count = count+1;
	return list->count
}

int DoubleLinkedListAddItemToTail(DoubleLinkedList *listPtr, ListItem *ItemPtr){
	itemptr.prev = listPtr->tail;
	*(list->head).next = ItemPtr;
	list-> tail = ItemPtr;
	ItemPtr->next = NULL;
	listPtr->count = count+1;
	return listPtr->count
}	

ListItem* DoubleLinkedListRemoveItemFromHead(DoubleLinkedList *rmvList);{
	ListItem* Item_last;
	
	if(rmvList->head == NULL) 
		return NULL;
	else if(rmvList->head == Item_last->next)
	{
		rmvList->head = NULL;
		rmvList->tail = NULL;
	}
	else
	{
		Item_last->next = NULL;
		Item_last->prev = NULL;
		rmvList->count = rmvList->count-1;
	}
return Item_last;
}	

