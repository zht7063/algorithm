// 集合 set
#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    set<int> st;

    // 使用 insert 插入元素
    st.insert(1);
    st.insert(3);
    st.insert(1); // 重复插入的元素只会记录一次。
    st.insert(0);
    st.insert(2);

    // 查看长度
    cout << ">> Check size of container: \n" << st.size() << endl;

    // 使用 erase 擦除元素
    st.erase(0);

    // 打印元素
    cout << ">> Print all elems: " << endl;
    for (auto &e : st)
        cout << e << ", ";
    cout << endl;

    // 也可以用迭代器进行遍历
    cout << ">> Print all elems by iterator: " << endl;
    for (set<int>::iterator it = st.begin(); it != st.end(); ++it)
        cout << *it << ", ";
    cout << endl;

    // 使用 find 查找元素，会返回一个指向目标元素的迭代器，如果找不到，返回尾迭代器 end()。
    int target = 1;
    if (st.find(target) != st.end()) // 如果找到目标元素，返回 存在性表示。
    {
        cout << ">> Target " << target << " exists. " << endl;
    }

    // 也可以使用 count 查找元素，该函数会返回目标元素在 set 中的数目。
    int target2 = 0;
    if (st.count(target2) > 0)
    {
        cout << ">> Target " << target2 << " exists. " << endl;
    }

    // 清空容器
    st.clear();

    // 判空
    cout << ">> Judge if empty container: " << st.empty() << endl;

    return 0;
}