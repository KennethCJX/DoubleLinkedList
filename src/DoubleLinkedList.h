#ifndef DOUBLELINKEDLIST_H
#define DOUBLELINKEDLIST_H

typedef struct ListItem ListItem;
typedef struct DoubleLinkedList DoubleLinkedList;

struct ListItem{
	ListItem *next;
	ListItem *prev;
	int data;
};

struct DoubleLinkedList{
	ListItem *head;
	ListItem *tail;
	int count;
};

int DoubleLinkedListAddItemToHead(DoubleLinkedList *list, ListItem *Item);
int DoubleLinkedListAddItemToTail(DoubleLinkedList *listPtr, ListItem *ItemPtr);
ListItem* DoubleLinkedListRemoveItemFromHead(DoubleLinkedList *rmvList);
ListItem* DoubleLinkedListRemoveItemFromTail(DoubleLinkedList *rmvList);

#endif // DOUBLELINKEDLIST_H
