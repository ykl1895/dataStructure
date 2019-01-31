#include <iostream>
using namespace std;




class MinStack {





public:
    int stackMax=1000;
    int*  nums;
    int* minNum;
    int elemTop;
    int minElemTop;
    /** initialize your data structure here. */
    MinStack() {
        nums = new int[stackMax];
        minNum=new int[stackMax];
        elemTop=0;
        minElemTop=0;
    }

    void push(int x) {
        扩容
        if(elemTop==stackMax-1)
        {
            nums=new int[stackMax*2];
            minNum=new int[stackMax*2];
            stackMax *=2;
        }
        元素放入栈顶
        nums[elemTop++]=x;
        //添加最小值到最小值数组中
        if(minElemTop==0||x<=minNum[minElemTop-1])
        {
            minNum[minElemTop++]=x;
        }

    }

    void pop() {
         if(minNum[minElemTop-1]==nums[--elemTop])
         {--minElemTop;}
    }

    int top() {
        return nums[elemTop-1];
    }

    int getMin() {
        return minNum[minElemTop-1];

    }
};


int main() {
    MinStack minStack ;
    minStack.push(-2);
    minStack.push(0);
    minStack.push(-3);
    cout<<minStack.getMin()<<endl;  // --> 返回 -3.
    minStack.pop();
    cout<<minStack.top()<<endl;      //--> 返回 0.
    cout<<minStack.getMin()<<endl;  // --> 返回 -2.
}