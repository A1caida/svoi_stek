#pragma once
using namespace std;

template<class T>
class strucstack
{
private:
	//T aa = 0; T bb = 0;
	struct Node
	{
		Node() :elem(0), next(0)
		{}
		Node* next;
		T elem;
	};
	Node* head;
	Node* tail;
	void pop();

public:
	strucstack();
	~strucstack();
	void push(T);
	int top();
	
	void print();
};
template<typename T>
strucstack<T>::strucstack() :tail(NULL), head(NULL)
{
}
template<typename T>
strucstack<T>::~strucstack()
{
	while (head)
	{
		tail = head->next;
		delete head;
		head = tail;
	}
}
template<typename T>
void strucstack<T>::push(T val)
{
	Node* Temp;
	Temp = new Node;
	Temp->elem = val;
	if (tail == NULL)
	{
		tail = Temp;
	}
	else
	{
		Temp->next = tail;
		tail = Temp;
	}
}

template<typename T>
int strucstack<T>::top()
{
	if (tail == NULL)
	{
		cout << "Стек пустой." << endl;
		return 1;
	}
	cout << tail->elem;
	pop();
	return 0;
}

template<typename T>
void strucstack<T>::pop()
{
	if (tail == NULL)
	{
		cout << "Стек пустой." << endl;
	}
	Node* delptr = tail;
	tail = tail->next;
	delete delptr;
}

template<typename T>
void strucstack<T>::print()
{
	if (tail == NULL)
	{
		cout << "Стек пустой." << endl;
	}
	for (Node* ptr = tail; ptr != 0; ptr = ptr->next)
	{
		cout << ptr->elem << '\t';
	}
	cout << endl;
	
}