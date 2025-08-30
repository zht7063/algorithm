// 队列 queue
#include <bits/stdc++.h>

using namespace std;

int main(void) {
    queue<int> que;

    // 进队列
    for (int i = 0; i <= 4; ++i) {
        que.push(i);
    }

    // 检查队列长度
    cout << ">> Size of queue: \n" << que.size() << endl;
    cout << ">> Judge if queue is empty: \n" << que.empty() << endl;

    // 检查队首元素
    cout << ">> Front of queue: \n" << que.front() << endl;
    // 检查队尾元素
    cout << ">> Back of queue: \n" << que.back() << endl;

    // 出队列
    que.pop();
    cout << ">> New front elem: \n" << que.front() << endl;

    return 0;
}