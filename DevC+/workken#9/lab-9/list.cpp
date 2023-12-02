#include <iostream>
#include "list.h"

List::~List() {
	for(Node *p; !isEmpty(); ){
		p=head->next;
		delete head;
		head=p;
	}
	

}
List::headPush(int time) {
	Node* P = new Node(time);
	if (isEmpty()) {
		head = P;
		tail = P;
		return;
	}
	else {
		P->next = head;
		head = P;
	}
	tail->next = 0;
}
List::tailPush(int time2) {
	Node* P = new Node(time2);
	if (isEmpty()) {
		head = P;
		tail = P;
		return;	
	}
	else {
		P->next = tail;
		tail = P;
	}
	head.next = 0;
}
List::headPop() {
	Node* p = tail;
	while (p->next != head) {
		p = p->next;
	}
	int brav = head->info;
	delete head->info;
	p->next = 0;
	return data;
}
List::tailPop() {
	Node* p = head;
	while (p->next != tail) {
		p = p->next;
	}
	int brav = tail->info;
	delete tail->info;
	tail = p;
	p->next = 0;
	return data;
}
List::deleteNode(int input) {
	Node* p = head;
	while (p->info != input) {
		p = p->next;
	}
	if (p == head) {
		headPop();
	}
	else if (p == tail) {
		tailPop();
	}
	else {
		Node* s = head;
		while (s->next != p) {
			s = s->next;
		}
		s->next = p->next;
		delete p;
	}
}
List::isInList(int ) {
		
}
List::print() {
	Node* p = head;
	while (p != 0) {
		std::cout << p->info << " ";
		p = p->next;
	}
	std::cout << std::endl;
}