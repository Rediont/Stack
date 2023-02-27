#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "iostream"
#include "doctest.h"
#include <math.h>
#include <stack>

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
		top_index ++;
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
		top_index = top_index - 1;
	}
    return result;
}


//тести для звичайного стеку

//TEST_CASE("testing Stack on array 1") {
//    StackOnArray stack(6);
//    CHECK(stack.IsEmpty() == true);
//    stack.Push(1);
//    CHECK(stack.IsEmpty() == false);
//    int read_value = stack.Pop();
//    CHECK(stack.IsEmpty() == true);
//    CHECK(read_value == 1);
//}

//TEST_CASE("testing Stack on array 2") {
//    StackOnArray stack(6);
//    stack.Push(11);
//    stack.Push(22);
//    stack.Push(33);
//    CHECK(stack.Pop() == 33);
//    CHECK(stack.Pop() == 22);
//    CHECK(stack.Pop() == 11);
//    CHECK(stack.IsEmpty() == true);
//}

//TEST_CASE("testing Stack on array 3") {
//    StackOnArray stack(6);
//    stack.Push(31);
//    stack.Push(22);
//    stack.Pop();
//    stack.Pop();
//    stack.Pop();
//    int read_value = stack.Pop();
//    CHECK(read_value == 0);
//}

//стек STL (+тести)

template <class StackSTL, class Container = deque<int> >class stackSTL;

//TEST_CASE("testing Stack STL 1") {
//    stack<int> stack;
//    CHECK(stack.empty() == true);
//    stack.push(1);
//    CHECK(stack.empty() == false);
//    int read_value = stack.top();
//    CHECK(stack.empty() == true);
//    CHECK(read_value == 1);
//}

//TEST_CASE("testing Stack STL 2") {
//    stack<int> stack;
//    stack.push(11);
//    stack.push(22);
//    stack.push(33);
//    CHECK(stack.top() == 33);
//    CHECK(stack.top() == 22);
//    CHECK(stack.top() == 11);
//    CHECK(stack.empty() == true);
//}

