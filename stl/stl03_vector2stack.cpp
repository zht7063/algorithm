// 用 vector 实现一个简单的栈
#include <bits/stdc++.h>

using namespace std;

int main(void) {
    // 用 vecotr 模拟一个栈。
    vector<double> vec;
    vec.push_back(1.0);
    vec.push_back(1.2);
    // 访问尾部元素以模拟栈顶。
    cout << ">> Top of vector_stack: \n" << vec.back() << endl;
    // 用 pop_back 进行出栈
    vec.pop_back();

    return 0;
}