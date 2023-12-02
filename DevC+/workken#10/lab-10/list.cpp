#include <iostream>
#include "list.h"
void List::printList() {
	Node* p = head;
	while (p != 0) {
		std::cout << p->info << " ";
		p = p->next;
	}
	std::cout << std::endl;
}

List::~List() {
	for (Node* p; !isEmpty(); ) {
		p = head->next;
		delete head;
		head = p;
	}
}
void List::tailPush(int time) {
	Node* P = new Node(time);
	if (isEmpty()) {
		head = P;
		tail = P;
		return;
	}
	else {
		P->next = head;
		head->prev = P;
		head = P;
	}
	tail->next = 0;
	head->prev = 0;
}
void List::headPush(int time) {
	Node* P = new Node(time);
	if (isEmpty()) {
		head = P;
		tail = P;
		return;
	}
	else {
		P->prev = tail;
		tail->next = P;
		tail = P;
	}
	tail->next = 0;
	head->prev = 0;
}
int List::headPop() {
	Node* P = head;
	P = P->next;
	int brav = head->info;
	delete head;
	head = P;
	P->prev = 0;

	return brav;
}
int List::tailPop() {
	Node* P = tail;
	P = P->prev;
	int brav = tail->info;
	delete tail;
	tail = P;
	P->next = 0;

	return brav;
}
void List::deleteNode(int input) {
	Node* p = head;
	while (p->info != input) {
		p = p->next;
	}
	if (input == head->info) {
		headPop();
	}
	else if (input == tail->info) {
		tailPop();
	}
	else {
		/*Node* s = head;
		while (s->next != p) {
			s = s->next;
		}
		s->next = p->next;

		Node* a = tail;
		while (a->prev != p) {
			s = s->prev;
		}
		a->prev = p->prev;*/

		p->prev->next = p->next;
		p->next->prev = p->prev;

		delete p;
	}
}
bool List::isInList(int input) {
	Node* p = head;
	if (input == p->info) {
		return 1;
	}
	while (p->info != input) {
		p = p->next;
		if (input == p->info) {
			return 1;
		}
		if (p==tail) {
			return 0;
		}
	}
}