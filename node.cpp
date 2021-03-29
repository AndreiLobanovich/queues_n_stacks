#include "node.hpp"
#include <iostream>

ListOfNumbers::ListOfNumbers()
{
    number = 0;
	next = NULL;
}

ListOfNumbers::ListOfNumbers(int v)
{
    next = NULL;
    number = v;
}

void ListOfNumbers::SetValue(int v)
{
    number = v;
}

void ListOfNumbers::SetNext(ListOfNumbers *n)
{
    next = n;
}

void ListOfNumbers::PrintItem()
{
    std::cout << number << std::endl;
}

void ListOfNumbers::PrintList()
{
    ListOfNumbers *tmp;
    tmp = this;
    while (tmp->next)
    {
        tmp->PrintItem();
        tmp = tmp -> next;
    }
    tmp->PrintItem();
}

void ListOfNumbers::Add(int v)
{
    ListOfNumbers *tmp;
    tmp = this;
    while (tmp->next)
    {
        tmp = tmp -> next;
    }
    tmp->SetNext(new ListOfNumbers(v));
}

void ListOfNumbers::AddR (int v)
{
    if (this->next)
        this->next->AddR(v);
    else
        this->SetNext(new ListOfNumbers(v));
}

ListOfNumbers * ListOfNumbers::find (int Value)
{
    ListOfNumbers *tmp;
    tmp = this;
    bool found = false;
    while (tmp->next)
    {
        if(tmp -> number == Value)
        {
            found = true;
            break;
        }
        tmp = tmp -> next;
    }
    if(found)
        return tmp;
    else 
        return NULL;
}

ListOfNumbers * ListOfNumbers::findR (int v)
{
    if(this->number == v)
        return this;
    else 
    {
        if(this->next)
            this->next->findR(v);
        else
            return NULL;
    }
}

// ListOfNumbers *ListOfNumbers::Sort()
// {
//     ListOfNumbers *tmp = this;
//     bool sorted = false;
//     while (!sorted)
//     {
//         while ()
//     }
// }

ListOfNumbers * ListOfNumbers::Remove (int v)
{
    ListOfNumbers *tmp;
    ListOfNumbers *head = this;
    tmp = this;
    if(this -> number == v)
    {
        tmp = this -> next;
        this -> next = NULL;
        return tmp;
    }
    bool found = false;
    while (tmp->next)
    {
        if(tmp -> next -> number == v)
        {
            found = true;
            break;
        }
        tmp = tmp -> next;
    }
    if(found)
    {
        tmp -> next = tmp -> next -> next;
       // tmp -> next -> next = NULL;
        return (head);
    }
    else 
        return NULL;
}

ListOfNumbers::~ListOfNumbers()
{
    
}

ListOfNumbers *ListOfNumbers::pop_front()
{
    ListOfNumbers *tmp = this;
    ListOfNumbers *new_head = this->next;
    delete tmp;
    return new_head;
}

int ListOfNumbers::pop()
{
    int buf;
    ListOfNumbers *tmp;
    tmp = this;
    while(tmp->next->next)
    {
        tmp = tmp -> next;
    }
    buf = tmp->next->number;
    delete tmp->next;
    tmp->next=NULL;
    return buf;
}
int ListOfNumbers::size()
{
    int n = 0;
    ListOfNumbers *tmp;
    tmp = this;
    while (tmp->next)
    {
        tmp = tmp -> next;
        n++;
    }
    return n;
}
bool ListOfNumbers::empty()
{
    if((!this->next)&&(this->number == 0))
        return true;
    else 
        return false;
}
// void ListOfNumbers::push()
// {
//     // TODO
// }

int ListOfNumbers::get_value()
{
    return this->number;
}
