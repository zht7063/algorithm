// 使用 map 统计 vector 中的数组。
#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    map<string, int> mp;

    vector<string> words;

    words.push_back("hello");
    words.push_back("hello");
    words.push_back("hello");
    words.push_back("hello");
    words.push_back("world");
    words.push_back("world");
    words.push_back("c++");

    for (int i = 0; i < words.size(); ++i)
        mp[words[i]]++;

    for (map<string, int>::iterator it = mp.begin(); it != mp.end(); ++it)
        cout << it->first << ":" << it->second << "; " << endl;

    return 0;
}