#include "Structs.h"
#include "LinkedLists.h"

int main() {
	LinkedLists* lists = new LinkedLists();
	ListNode* head = nullptr;

	lists->MakeNode(&head, 5);
	lists->PrintList(head);

	lists->InsertFirst(&head, 8);
	lists->PrintList(head);

	lists->InsertAfter(head, 40);
	lists->PrintList(head);

	lists->InsertAfter(head->next->next, 52);
	lists->PrintList(head);

	lists->DeleteAfter(head->next);
	lists->PrintList(head);

	lists->GetNode(head, 2);
	lists->GetNode(head, 7);


	lists->Find(head, 40);
	lists->Find(head, 63);

	lists->DeleteAtPosition(head, 2);
	lists->PrintList(head);

	lists->DeleteList(&head);

	lists->InsertFirst(&head, 0);
	for (int i = 0; i < 100; i++) {
		lists->InsertAfter(head, rand() % 100 + 1);
	}

	lists->PrintList(head);
	return 0;
}