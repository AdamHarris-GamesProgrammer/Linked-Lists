#pragma once

#include "Structs.h"
#include <iostream>
#include <iomanip>


class LinkedLists
{
public:
	ListNode* MakeNode(ListNode** head, int d);
	ListNode* InsertFirst(ListNode** head, int d);
	void InsertAfter(ListNode* lastNode, int d);
	void DeleteList(ListNode** node);
	void DeleteAfter(ListNode* node);
	void DeleteAtPosition(ListNode* head, int pos);
	ListNode* GetNode(ListNode* node, int pos);
	ListNode* Find(ListNode* node, int val);
	void PrintList(ListNode* node);

private:
	ListNode* head = nullptr;
};

