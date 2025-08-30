// 优先队列 proority queue （等于一个堆）
#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    // 创建一个优先队列，默认是一个大根堆
    priority_queue<int> pque;
    // 创建一个小根堆
    // priority_queue<int, vector<int>, greater<int>> pque; // 小根堆
    pque.push(3);
    pque.push(1);
    pque.push(4);
    pque.push(2);
    pque.push(5);

    // 取队列长度（元素数目）
    cout << ">> Size of p_queue: \n" << pque.size() << endl;

    // 堆顶是堆的最大值。
    cout << ">> Top of p_queue: \n" << pque.top() << endl;

    // 使用 pop 出队列
    pque.pop(); // pop root elem: 5.
    cout << ">> Top of p_queue: \n" << pque.top() << endl;

    return 0;
}