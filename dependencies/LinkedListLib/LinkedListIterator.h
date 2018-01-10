#pragma once
#include "NodeType.h"
#include <cstddef>

template<class Type>
class LinkListIterator
{
private:
	//Pointer to point to the current node in the linked list
	NodeType<Type> *current;
public:
	//sets current == NULL
	LinkListIterator()
	{
		current = NULL;
	}
	//sets current = ptr
	LinkListIterator(NodeType<Type> *ptr)
	{
		current = ptr;
	}
	//returns the info contained in the node
	Type *operator*()
	{
		current->info;
	}
	//the iterator is advanced to the next node
	LinkListIterator<Type>operator++()
	{
		current = current->link;
		return *this;
	}
	/*returns true if this iterator is equal to the iterator specified by right
	otherwise it returns false*/
	bool operator==(const LinkListIterator<Type>& right) const
	{
		return current == right->current;
	}
	/*returns true if this iterator is not equal to the iterator specified by right
	otherwise it returns false*/
	bool operator!=(const LinkListIterator<Type>& right) const
	{
		return current != right->current;
	}
};