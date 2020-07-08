#include "unity.h"

#include "DoubleLinkedList.h"

void setUp(void)
{
}

void tearDown(void)
{
}

/*add item to head
before:
head---->NULL
tail---->NULL
count=0

scenario1:add item to head
head--->item2
		prev--->NULL
tail--->item1
		next--->NULL
*/

void test_DoubleLinkedList_add_item_to_head_given_item2_expext_item2_added_to_head_and_tail_still_points_to_item1_and_item1_next_and_item2_prev_point_to_NULL()
{
	//set up fixture or test enviroment
    ListItem			item1={NULL,NULL,30};
	ListItem 			item2={NULL,NULL,50};
	DoubleLinkedList	list={&item1,&item2,1};				//added item 1 to head
	int count = DoubleLinkedListAddItemToHead(&list,&item2);//add item2 to head
	//Test the double linked list
	TEST_ASSERT_EQUAL_PTR(&item2,list.head);
	TEST_ASSERT_EQUAL_PTR(&item2,item1.prev);
	TEST_ASSERT_EQUAL_PTR(&item1,item2.next);
	TEST_ASSERT_EQUAL_PTR(&item1,list.tail);
	TEST_ASSERT_EQUAL_PTR(NULL,item2.prev);
	TEST_ASSERT_EQUAL_PTR(NULL,item1.next);
	TEST_ASSERT_EQUAL(2,count);
	TEST_ASSERT_EQUAL(30,item1.data);
	TEST_ASSERT_EQUAL(50,item2.data);
}

/*scenario2:add item to tail
head--->item1
		prev--->NULL
tail--->item2
		next--->NULL
*/


void test_DoubleLinkedList_add_item_to_tail_given_item2_expext_item2_added_to_tail_and_head_still_points_to_item1_and_item2_next_and_item1prev_point_to_NULL()
{
	
	ListItem			item1={NULL,NULL,20};
	ListItem 			item2={NULL,NULL,30};
	DoubleLinkedList	list={&item1,&item2,1};				//added item 1 to head
	int count = DoubleLinkedListAddItemToHead(&list,&item2);//add item2 to tail
	//Test the double linked list
	TEST_ASSERT_EQUAL_PTR(&item1,list.head);
	TEST_ASSERT_EQUAL_PTR(&item1,item2.prev);
	TEST_ASSERT_EQUAL_PTR(&item2,item1.next);
	TEST_ASSERT_EQUAL_PTR(&item2,list.tail);
	TEST_ASSERT_EQUAL_PTR(NULL,item1.prev);
	TEST_ASSERT_EQUAL_PTR(NULL,item2.next);
	TEST_ASSERT_EQUAL(2,count);
	TEST_ASSERT_EQUAL(20,item1.data);
	TEST_ASSERT_EQUAL(30,item2.data);
}

/*void test_DoubleLinkedList_remove_item_from_head_given_list_expected_Item_last_to_be_remove_from_head()
{
	ListItem			item1={NULL.NULL,20};
	ListItem 			item2={NULL,NULL,30};
	ListItem			item3=(NULL,NULL,40};
	DoubleLinkedList	list={NULL,NULL,0};	
	ItemisReturn = DoubleLinkedListRemoveItemFromHead(&list);
	//Test the double linked list
	TEST_ASSERT_EQUAL_PTR(NULL,list.head);
	TEST_ASSERT_EQUAL_PTR(NULL,list.tail);
	TEST_ASSERT_EQUAL_PTR(NULL,ItemisReturn);
}
*/


	
	
	
	
	
