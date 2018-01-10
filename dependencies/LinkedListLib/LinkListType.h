#pragma once
#include "NodeType.h"
#include "LinkedListIterator.h"
#include <assert.h>
#include <iostream>

template<class Type>
class LinkListType
{
protected:
	int count; //variable to store the number of elements in the list
	NodeType<Type> *first; //pointer to the first node of the list
	NodeType<Type> *last; //pointer to the last node of the list
public:
	//Overload the assignment operator
	const LinkListType<Type>& operator=(const LinkListType<Type>& other)
	{
		if (first == other.first)
			CopyList();
		else
			return first;
	}
	//Initilizes the the list to an empty state
	//PostCondition: first = NULL, last = NULL, count = 0
	void InitializeList()
	{
		while(first != NULL)
		{
			DestroyLsit();
		}
	}

	//function to determin where the list is empty
	//PostCondition: returns true if the list is empty otherwise it returns false
	bool IsEmptyList()
	{
		return first == NULL;
	}

	//function to return the number of nodes in the list
	//Postcondition: none
	void const Print()
	{
		NodeType<Type> *temp = first;
		while(temp != NULL)
		{
			std::cout << temp->info << std::endl;
			temp = temp->link;
		}
	}

	//function to return the length of the nodes in the list
	//Postcondition: none
	int Length()
	{
		return count;
	}
	//function to delete all the nodes from the list
	//PostCondition: first = NULL, last = NULL, count = 0
	void DestroyLsit()
	{
		NodeType<Type> *temp;
		while(first != NULL)
		{
			temp = first;
			first = first->link;
			delete temp;
		}
		last = NULL;
		count = 0;
	}

	//function to return the first element of the list
	//Precondition: they must exist and must not be empty
	//Postcondition: if the list is empty, the program terminates; otherwise, the first
	//element of the list is returned
	Type Front()
	{
		assert(first != NULL);
		return first->info;
	}

	//function to return the last element of the list
	//Precondition: the must exist and must not be empty
	//Postcondition: if the list is empty, the program terminates; otherwise, the last
	//element of the list is returned
	Type Back()
	{
		assert(last != NULL);
		return last->info;
	}

	//function to determine whether searchItem is on the list
	//Postcondition: returns true if searchItem is in the list, otherwise the value
	//false is returned
	bool Search(const Type& other) const
	{
		NodeType<Type> *current = new NodeType<Type>;
		while(first != NULL)
		{
			current = first->link;
			if(current->info == other)
			{
				return true;
			}
			return false;
		}
	}

	//function to insert newItem at the begining of the list
	//Postcondition: first points to the new list, newItem is inserted at the beginning
	//of the list
	//last points of the last node in the list, and count in incremented by 1
	void InsertFirst(const Type& other)
	{
		NodeType<Type> *newItem = new NodeType<Type>;

		newItem->info = other;
		newItem->link = first;
		first = newItem;

		if (count == 0)
			last = first;
		count++;
	}

	//function to insert newItem at the end of the list
	//Postcondition: last points to the new list, newItem is inserted at the end
	//of the list
	//last points of the last node in the list, and count in incremented by 1
	void InsertLast(const Type& other)
	{
		NodeType<Type> *newItem = new NodeType<Type>;

		newItem->info = other;
		last->link = newItem;
		last = newItem;
		last->link = NULL;
		if (count == 0)
			first = last;
		count++;
	}

	//function to delete deleteItem from the list
	//Precondition: if found, the node containing deleteItem from the list. First
	// points to the first node, last points to the last node of the updated list,
	//and counts is decremented by 1
	void DeleteNode(const Type& other)
	{
		NodeType<Type> *deleteItem = new NodeType<Type>;
		while (first != NULL)
		{
			first = first->info;
			if (deleteItem->info == other)
			{
				delete deleteItem;
				count--;
			}
		}
	}

	//function to return an iterator at the begining of the linked list
	//Postcondition: returns and iterator such that current is set to first
	LinkListIterator<Type> Begin()
	{
		LinkListIterator<Type> *temp;
		temp->current = first;
		return first;
	}

	//function to return an iterator at the end of the linked list
	//Postcondition: returns and iterator such that current is set to last
	LinkListIterator<Type> End()
	{
		LinkListIterator<Type> *temp;
		temp->current = last;
		return last;
	}

	//Default Constructor
	//Initializes the last to an empty state
	//Postcondition: first = NULL, last = NULL, count = 0
	LinkListType()
	{
		first = NULL;
		last = NULL;
		count = 0;
	}

	//copy constructor
	LinkListType(const LinkListType<Type>& other)
	{
		first = NULL;
		CopyList();
	}

	//destructor
	//deletes all the nodes from the list
	//Postcondition: the list object is destroyed
	~LinkListType()
	{
		delete first;
		delete last;
		count = 0;
	}
private:
	//function to make a copy of otherList
	//Postcondition: a copy of otherList is created and assigned to this list
	void CopyList(const LinkListType<Type>& other)
	{
		NodeType<Type>*newNode;
		NodeType<Type>*current;

		current = other.first;
		newNode = current;
		first = newNode;
		last = newNode;
		InsertFirst(current->info);
		current = current->link;
		while (current != NULL)
		{
			InsertLast(current->info);
			current = current->link;
		}
	}
};