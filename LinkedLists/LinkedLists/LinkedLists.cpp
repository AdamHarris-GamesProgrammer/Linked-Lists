#include "LinkedLists.h"

ListNode* LinkedLists::MakeNode(ListNode** head, int d)
{
	ListNode* newNode = new ListNode;
	ListNode* last = *head;

	newNode->data = d;
	newNode->next = nullptr;

	if (*head == nullptr) {
		*head = newNode;
		return newNode;
	}

	while (last->next != nullptr) {
		last = last->next;
	}
	last->next = newNode;

	return newNode;
}

ListNode* LinkedLists::InsertFirst(ListNode** head, int d)
{
	ListNode* newNode = new ListNode;

	newNode->data = d;
	newNode->next = *head;
	*head = newNode;

	return newNode;
}

void LinkedLists::InsertAfter(ListNode* lastNode, int d)
{
	if (lastNode == nullptr) {
		std::cout << "ERROR: lastNode cannot be nullptr" << std::endl;
	}
	else
	{
		ListNode* newNode = new ListNode;
		newNode->data = d;
		newNode->next = lastNode->next;
		lastNode->next = newNode;
	}
	
}

void LinkedLists::DeleteList(ListNode** node)
{
	ListNode* pTemp = *node;
	ListNode* next;

	while (pTemp != nullptr) {
		next = pTemp->next;
		delete pTemp;
		pTemp = next;
	}
	*node = nullptr;
}

void LinkedLists::DeleteAfter(ListNode* node)
{
	ListNode* pTemp;
	if (node != nullptr && node->next != nullptr) {
		pTemp = node->next;
		node->next = pTemp->next;

		delete pTemp;
	}
}

void LinkedLists::DeleteAtPosition(ListNode* head, int pos)
{
	ListNode* current;
	ListNode* previous = new ListNode;
	current = head;
	for (int i = 1; i < pos; i++) {
		previous = current;
		current = current->next;
	}
	previous->next = current->next;
}

ListNode* LinkedLists::GetNode(ListNode* node, int pos)
{
	int count = 0;

	while (node != nullptr)
	{
		if (count == pos) {
			std::cout << "Data stored at position " << pos << " is: " << node->data << std::endl;
			return node;
		}
		count++;
		node = node->next;
	}

	std::cout << pos << " was not a valid position..." << std::endl;
	return nullptr;
}

ListNode* LinkedLists::Find(ListNode* node, int val)
{
	while (node != nullptr)
	{
		if (node->data == val) {
			std::cout << "Data found " << std::endl;
			return node;
		}
		node = node->next;
	}
	std::cout << "ERROR: Data was not found" << std::endl;
	return nullptr;
}

void LinkedLists::PrintList(ListNode* node)
{
	while (node != nullptr) {
		std::cout << std::setw(5) << "|" << node->data << "|-->";
		node = node->next;
	}

	if (node == nullptr) {
		std::cout << "| NULL |" << std::endl;
	}
	std::cout << std::endl;
}
