#include<iostream>
#ifndef LIST
#define LIST

template<class T>
class Node {
public:
	T info; 
	Node<T> *next, *prev;
	Node() { next = prev = 0; }
	Node(T el, Node<T>* n = 0, Node<T>* p = 0) { info = el; next = n; prev = p; }
};
template<class T>
class List {
public:
	List() { head = tail = 0; }
	~List();
	T isEmpty() { return head == 0; }
	void headPush(T); //Add element to front of list
	void tailPush(T); //Add element to tail of list
	T headPop(); //Remove and return element from front of list
	T tailPop(); //Remove and return element from tail of list
	void deleteNode(T); //Delete a particular value
	bool isInList(T); //Check if a particular value is in the list?
	void printList();
private:
	Node<T>* head, * tail;
};



#endif //LIST#pragma once
