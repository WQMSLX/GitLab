#include<iostream>
#include<stack>
using namespace std;
class MinStack {

public:
    /** initialize your data structure here. */
    stack<int> m_data;
    stack<int> m_mix;
    MinStack() {    }

    void push(int x) {
        m_data.push(x);
        if (!m_mix.size() || x <= m_mix.top())m_mix.push(x);
    }

    void pop() {
        if (m_data.empty())return;
        m_data.pop();
        if (m_data.top() == m_mix.top()) m_mix.pop();
    }

    int top() {
        return m_data.top();
    }

    int min() {
        return m_mix.top();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(x);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->min();
 */
/*
int main()
{
    MinStack minStack;
    minStack.push(-2);
    minStack.push(0);
    minStack.push(-3);
    cout<<minStack.min()<<endl;

   
	return 0;
}
*/