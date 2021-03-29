#ifndef NODE_HPP
#define NODE_HPP
class ListOfNumbers {
private:
	int number;
	ListOfNumbers *next;
public:
	ListOfNumbers();
	ListOfNumbers(int v);
    
    void Add(int v);
	void SetValue(int v);
	void SetNext(ListOfNumbers *n);

	// Prints a single item’s number
	void PrintItem();

	// Prints the whole list
	void PrintList();		

	// Recursive add
	void AddR(int v);

	ListOfNumbers *find (int Value);
	ListOfNumbers *findR (int Value);
	
	//Sorting
	ListOfNumbers *Sort();

	//Destructor
	~ListOfNumbers();

	ListOfNumbers *Remove (int v);
	int pop();
	ListOfNumbers *pop_front();
	int size();
	int get_value();
	bool empty();


};
#endif