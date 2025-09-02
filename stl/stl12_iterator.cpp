/**
 * 迭代器
 *
 * 非必要请勿使用迭代器，因为不同容器的迭代器类型不同，特性或者功能也可能不同，容易出现 bug.
 * 只用来访问和遍历即可，尽量不要用来增删元素。
 */
#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    // 对于一个 vector，可以用下标对其进行遍历
    vector<int> v = {1, 2, 3, 4, 5};

    // 用下标循环遍历
    for (int i = 0; i < v.size(); ++i)
        cout << "v[i]" << ", ";
    cout << endl;

    // 也可以用迭代器遍历
    for (vector<int>::iterator it = v.begin(); it != v.end(); ++it)
        cout << "*it = " << *it << ", ";
    cout << endl;

    /*
    迭代器重点的针对目标是非线性的数据结构，如树形结构。
    a.begin() 和 a.end() 返回的是迭代器，而不是具体的元素。
    迭代器与指针类似，使用 * 号解引用可以访问其内部元素。
    注意：.end() 和 .rend() 返回的迭代器并不指向容器中的具体元素，而是一个“哨兵”，
    */

    // 除了正向的迭代器，还有反向迭代器（反向头 + 反向尾）
    for (vector<int>::reverse_iterator it = v.rbegin(); it != v.rend(); ++it)
        cout << "*it = " << *it << ", ";
    cout << endl;

    /*
    迭代器+整数 的结果是一个新的迭代器，表示在原迭代器的基础上前进（或后退）了指定的整数个位置。
    迭代器++ 的结果是一个新的迭代器，表示在原迭代器的基础上前进了一个位置。
    */
    vector<int>::iterator it = v.begin();
    cout << *(it + 2) << endl; // 3

    /*
    `迭代器 - 迭代器` 的结果是一个整数，表示两个迭代器之间的距离。
    */

    cout << v.end() - v.begin() << endl;   // 5
    cout << v.rend() - v.rbegin() << endl; // 5

    /*
    通过 .prev(it） 和 .next(it) 可以返回迭代器的前一个或者后一个元素对象
    */
    it = v.begin() + 2;        // 指向 3
    cout << *prev(it) << endl; // 5
    cout << *next(it) << endl; // 2

    return 0;
}