// C++ 基础：栈
#include <bits/stdc++.h>
// #include <stack>

using namespace std;

int main(void) {
    stack<double> stk; // 创建一个新的栈

    // 通过 push() 向栈顶添加元素
    stk.push(1.0);
    stk.push(1.5);

    // 使用 top() 查看栈顶元素
    cout << ">> Top elem of stk: \n" << stk.top() << endl;

    // 使用 pop() 出栈
    stk.pop();
    cout << ">> Top elem of stk: \n" << stk.top() << endl;

    // 查看长度 和 清空元素
    // 栈每次只能操作栈顶的元素，所以不支持 vector 的一键清空操作。
    int size_stk = stk.size(); // get size
    bool is_empty = stk.empty();
    cout << ">> stk's size, and if empty: \n"
         << size_stk << ", " << is_empty << endl;

    return 0;
}
