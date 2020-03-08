//剑指第21题
//定义栈的数据结构，请在该类型中实现一个能够得到栈中所含最小元素的min函数（时间复杂度应为O（1））。
//注意：保证测试中不会当栈为空的时候，对栈调用pop()或者min()或者top()方法。

#include <iostream>
#include <stack>
#include <vector>

using namespace std;

class Solution {
public:
    void push(int value) {
        data.push(value);
        if(minnum.size()==0||value<minnum.top())
            minnum.push(value);

    }
    void pop() {
        if(data.top()==minnum.top())
            minnum.pop();
        data.pop();
    }
    int top() {
        return data.top();

    }
    int min() {
        return minnum.top();

    }

private:
    stack<int> data;
    stack<int> minnum;
};

//调试成功！