#include <iostream>
#include<stack>
using  namespace std;

class MyQueue {

public:
    stack<int> stack1 ;
    stack<int> s;
    /** Initialize your data structure here. */
    MyQueue() {

    }

    /** Push element x to the back of queue. */
    void push(int x) {
        stack1.push(x);

    }

    /** Removes the element from in front of queue and returns that element. */
    int pop() {

        while(!stack1.empty())
        {
            s.push(stack1.top());
            stack1.pop();
        }
        int a=s.top();
        s.pop();
        while(!s.empty())
        {
            stack1.push(s.top());
            s.pop();
        }
        return a;
    }

    /** Get the front element. */
    int peek() {


        while(!stack1.empty())
        {
            s.push(stack1.top());
            stack1.pop();
        }

        int a=s.top();
        while(!s.empty())
        {
            stack1.push(s.top());
            s.pop();
            cout<<stack1.top()<<endl;
        }

        return a;


    }

    /** Returns whether the queue is empty. */
    bool empty() {
        return stack1.empty();
    }
};

int main()
{
    MyQueue obj ;
    obj.push(1);
    obj.push(2);
    obj.peek();
    cout<<obj.pop()<<endl;
    cout<<obj.empty()<<endl;

}

