#include "iostream"

using namespace std;

class Stack
{
	int stack_size = 0;
	int top_index = -1;
	int* stack_container;

public:
	Stack();
	Stack(int size);

	void push(int a);
	int pop();
	int top();
	int size();
};

Stack::Stack(int size) {
	stack_size = size;
	int* stack_container = new int[stack_size];
}

Stack::Stack() {
	stack_size = 0;
	int* stack_container = new int[stack_size];
}

void Stack::push(int a) {
	if (top_index<(stack_size-1))
	{
		top_index + 1;
		stack_container[top_index] = a;
	}
	else
	{
		cout << "No space" << endl;
	}
}

int Stack::pop() {
	int result = 0;
	if (top_index != -1)
	{

	}
}

int Stack::top() {
	cout << "Top element of stack = ";
	return stack_container[top_index];
}

int Stack::size() {
	cout << "Size of stack = ";
	return (top_index + 1);
}

int main() 
{



	system("pause");
	return 0;
}