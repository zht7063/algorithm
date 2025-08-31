// stl10: 字符串
// 注意：字符串的头文件是 string，不是 cstring
// #include<string>
#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    // --- 构造函数 ---
    string s1;

    cin >> s1;
    cout << s1 << endl;

    // --- 第二种构造：赋初值 ---
    string s2(10, '0'); // 长度100，每个字符都是'0'.
    cout << s2 << endl;

    // --- 为字符串赋值 ---
    s2 = "hello world!";
    cout << s2 << endl;

    // --- 判断字符串是否相等。 ---
    string str1 = "abcde";
    string str2 = "bbcde";
    if (str1 == str2)
        cout << "Equal String." << endl;
    else
        cout << "Not equal." << endl;

    // --- 加法运算符 ---
    cout << str1 + str2 << endl;

    // --- += 运算符 ---
    str1 += 'z'; // 在 str1 后面补充一个字符 z
    cout << str1 + str2 << endl;

    // --- 取子串 ---
    string complete_str = "He who desires but acts not, breeds pestilence.";
    cout << complete_str.substr(3) << endl;    // 第一个参数表示子串的起点
    cout << complete_str.substr(3, 4) << endl; // 第二个参数表示字串的长度

    // --- 寻找子串 ---
    // find 函数返回子串起始点的下标；string::npos 是找不到子串的时候返回的特殊值（是一个数）
    if (complete_str.find("act") != string::npos)
        cout << "yes!" << endl;

    // --- 数据类型转换函数 ---
    string num_str = "123456";
    int x = stoi(num_str); // string to int, stot(): str->float;
    cout << ">> stoi output: " << x << endl;

    // --- 其他数据类型转换为 string ---
    int n = 114514;
    string s_n = to_string(n);
    cout << ">> int->string: " << s_n << endl;

    return 0;
}