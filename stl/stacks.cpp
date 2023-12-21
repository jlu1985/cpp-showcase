// https://en.cppreference.com/w/cpp/container/stack

#include <stack>
#include <iostream>

/*
size=5
4 3 2 1 0
*/
int main()
{
    std::stack<double> myStack;

    for (int i = 0; i < 5; i++)
    {
        myStack.push(i);
    }

    std::cout << "size=" << myStack.size() << std::endl;

    for (int i = 0; i < 5; i++)
    {
        double topValue = myStack.top();
        myStack.pop();
        std::cout << topValue << " ";
    }
    std::cout << std::endl;

    return 0;
}