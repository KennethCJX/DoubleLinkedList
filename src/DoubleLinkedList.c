#include "DoubleLinkedList.h"
#include <stdio.h>

int DoubleLinkedListAddItemToHead(DoubleLinkedList *list, ListItem *Item){
	Item->next = list->head;
	(list->head)->prev = Item;
	list-> head = Item;
	Item->prev = NULL;
	list->count = list->count+1;
	return list->count;
}

int DoubleLinkedListAddItemToTail(DoubleLinkedList *listPtr, ListItem *ItemPtr){
	ItemPtr->prev = listPtr->tail;
	(listPtr->head)->next = ItemPtr;
	listPtr-> tail = ItemPtr;
	ItemPtr->next = NULL;
	listPtr->count = listPtr->count+1;
	return listPtr->count;
}	

ListItem* DoubleLinkedListRemoveItemFromHead(DoubleLinkedList *rmvList){
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

