#include <iostream>
#include "list.h"
template<class T>
void List<T>::printList() {
	Node<T>* p = head;
	while (p != 0) {
		std::cout << p->info << " ";
		p = p->next;
	}
	std::cout << std::endl;
}
template<class T>
List<T>::~List() {
	for (Node<T>* p; !isEmpty(); ) {
		p = head->next;
		delete head;
		head = p;
	}
}
template<class T>
void List<T>::tailPush(T time) {
	Node<T>* P = new Node<T>(time);
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
template<class T>
void List<T>::headPush(T time) {
	Node<T>* P = new Node<T>(time);
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
template<class T>
T List<T>::headPop() {
	Node<T>* P = head;
	P = P->next;
	T brav = head->info;
	delete head;
	head = P;
	P->prev = 0;

	return brav;
}
template<class T>
T List<T>::tailPop() {
	Node<T>* P = tail;
	P = P->prev;
	T brav = tail->info;
	delete tail;
	tail = P;
	P->next = 0;

	return brav;
}
template<class T>
void List<T>::deleteNode(T input) {
	Node<T>* p = head;
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
template<class T>
bool List<T>::isInList(T input) {
	Node<T>* p = head;
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
