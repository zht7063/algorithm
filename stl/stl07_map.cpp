// 映射 map
#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    // map: int -> double
    map<int, double> mp; // 默认大根堆

    mp[1] = 1.2; // new val: 1 -> 2
    mp[2] = 2.3;
    mp[3] = 3.4;
    mp[4] = 4.5;

    // size 查找容器长度
    cout << ">> Size of map: \n" << mp.size() << endl;

    cout << ">> map[1]: \n" << mp[1] << endl;
    // 对于 map 中不存在的元素，将会默认赋值 0.
    cout << ">> map[999]: \n" << mp[999] << endl;

    // 和 set 类似，map 也有查找成员的函数.
    int idx = 1;
    cin >> idx;
    // cout << idx;
    if (mp.find(idx) != mp.end())
        cout << ">> Index " << idx << " found, value: \n" << mp[idx] << endl;
    else
        cout << ">> Index " << idx << " not found. " << endl;

    // 遍历整个 map
    cout << ">> Traverse the map: " << endl;
    for (map<int, double>::iterator it = mp.begin(); it != mp.end(); ++it)
        cout << it->first << ":" << it->second << "; ";
    cout << "\n>> End travel." << endl;

    // 遍历方法2
    cout << ">> Traverse the map: " << endl;
    for (auto &e : mp)
        cout << e.first << ":" << e.second << "; ";
    cout << "\n>> End travel." << endl;

    // 删除 元素
    mp.erase(4);

    // 判断元素是否存在
    int cnt_idx = 1;
    cin >> cnt_idx;
    cout << ">> Count idx " << cnt_idx << " exists: \n" << mp.count(cnt_idx) << endl;

    // 清空 & 判空
    mp.clear(); // 清空 map
    cout << ">> Empty judge output: \n" << mp.empty() << endl;

    return 0;
}