#include "iostream"
#include "doctest.h"

using namespace std;

//стек на основі масиву 

class StackOnArray
{
private:
	int stack_size = 0;
	int top_index = -1;
	int* stack_container = new int[stack_size];

public:
	StackOnArray();
	StackOnArray(int size);

	void Push(int a);
	int Pop();
	int Top_Element();
	int Size_Of_Stack();

    bool IsEmpty()
    {
        bool result;
        result = top_index == -1;
        return result;
    }
};

StackOnArray::StackOnArray(int size) {
	stack_size = size;
	int* StackOnArray_container = new int[stack_size];
}

StackOnArray::StackOnArray() {
	stack_size = 0;
	int* StackOnArray_container = new int[stack_size];
}

void StackOnArray::Push(int a) {
	if (top_index<(stack_size-1))
	{
		top_index + 1;
		stack_container[top_index] = a;
	}
	else
	{
		cout << "StackOnArray is full" << endl;
	}
}

int StackOnArray::Pop() {
	int result = 0;
	if (top_index != -1)
	{
		result = stack_container[top_index];
		cout << result << " is deleted from stack";
		top_index--;
	}
	else
	{
		cout << "StackOnArray is empty";
	}
    return result;
}

int StackOnArray::Top_Element() {
	cout << "Top element of stack = ";
	return stack_container[top_index];
}

int StackOnArray::Size_Of_Stack() {
	cout << "Size of stack = ";
	return (top_index + 1);
}

//тести для звичайного стеку

TEST_CASE("testing Stack on array 1") {
    StackOnArray stack(6);
    CHECK(stack.IsEmpty() == true);
    stack.Push(1);
    CHECK(stack.IsEmpty() == false);
    int read_value = stack.Pop();
    CHECK(stack.IsEmpty() == true);
    CHECK(read_value == 1);
}

TEST_CASE("testing Stack on array 2") {
    StackOnArray stack(6);
    stack.Push(11);
    stack.Push(22);
    stack.Push(33);
    CHECK(stack.Pop() == 33);
    CHECK(stack.Pop() == 22);
    CHECK(stack.Pop() == 11);
    CHECK(stack.IsEmpty() == true);
}

TEST_CASE("testing stack 2") {
    StackOnArray stack;
    stack.Push(1);
    CHECK(stack.Top_Element() == 1);
    stack.Push(2);
    CHECK(stack.Top_Element() == 2);
    stack.Push(3);
    CHECK(stack.Top_Element() == 3);
    stack.Pop();
    stack.Pop();
    CHECK(stack.Top_Element() == 1);
}

int main() 
{



	system("pause");
	return 0;
}