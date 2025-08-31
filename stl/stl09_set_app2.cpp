// 对 map 访问不存在的值的时候，会返回一个初值。
#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    map<int, int> mp;
    mp[0]; // 访问一个不存在的 key.

    cout << mp.count(0) << endl; // 统计 key=0 的键值对数目。

    return 0;
}