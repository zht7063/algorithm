// 二元组 pair
#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    // 构造函数
    pair<int, string> p = {1, "hello"};
    cout << p.first << ", " << p.second << endl;

    // 判同函数
    pair<int, int> p1 = {1, 1};
    pair<int, int> p2 = {1, 1};
    if (p1 == p2)
        cout << "equal." << endl;

    return 0;
}