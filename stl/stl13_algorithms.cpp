#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    /*
    swap(): 交换两个变量的值
    */
    cout << ">> swap() function example: " << endl;
    int a = 1, b = 2;
    cout << "a = " << a << ", b = " << b << endl;
    swap(a, b);
    cout << "a = " << a << ", b = " << b << endl;

    // string 也可以进行交换
    string s1 = "hello", s2 = "world";
    cout << "s1 = " << s1 << ", s2 = " << s2 << endl;
    swap(s1, s2);
    cout << "s1 = " << s1 << ", s2 = " << s2 << endl;

    /*
    sort(): 对数组或容器进行排序

    注意，该函数有两个参数，第一个是起始位置，第二个参数是结束位置的后一个位置，属于左闭右开区间。

    通过传递第三个参数 greter<int>() 可以实现降序排序，默认是升序排序。

    也可以自定义排序规则，传递一个函数指针作为第三个参数。这会在第二个例子中展示。（通过绝对值排序）

    */
    cout << ">> sort() function example: " << endl;
    vector<int> vec = {5, 2, 9, 1, 5, 6};
    cout << "before sort: ";
    for (int num : vec)
        cout << num << " ";
    cout << endl;
    sort(vec.begin(), vec.end()); // 升序排序
    // sort(vec.begin(), vec.end(), greater<int>()); // 降序排序
    cout << "after sort: ";
    for (int num : vec)
        cout << num << " ";
    cout << endl;

    // 下面实现一个按照绝对值大小排序的例子
    cout << ">> custom sort example: " << endl;
    vector<int> vec2 = {-3, 1, -4, 2, 0, -2, 5};
    cout << "before custom sort: ";
    for (int num : vec2)
        cout << num << " ";
    cout << endl;
    // 自定义排序规则，按照绝对值大小排序
    sort(vec2.begin(), vec2.end(), [](int x, int y)
         { return abs(x) < abs(y); });
    cout << "after custom sort by absolute value: ";
    for (int num : vec2)
        cout << num << " ";
    cout << endl;

    /*
    二分查找: binary_search(), lower_bound(), upper_bound()

    在已升序排列的元素中，应用二分查找检索指定元素，返回对应元素的迭代器位置，找不到则返回尾迭代器。

    lower_bound(): 返回第一个 >=x 给定值的元素位置（即大于等于该值的第一个位置）
    upper_bound(): 返回第一个  >x 给定值的元素位置（即严格大于该值的第一个位置）

    怎么找 <=x 或者 <x 的位置呢？
    <=x 的位置是 upper_bound(x) - 1
    <x 的位置是 lower_bound(x) - 1

    返回的是迭代器，怎样转换成下标索引？
    下标索引 = 迭代器 - 容器.begin()
    */
    cout << ">> binary search example: " << endl;
    vector<int> vec3 = {1, 2, 4, 4, 5, 6, 8, 9};
    cout << "vector: ";
    for (int num : vec3)
        cout << num << " ";
    cout << endl;
    // 找到第一个 >= x 的位置
    int x = 4;
    auto lb = lower_bound(vec3.begin(), vec3.end(), x);
    if (lb != vec3.end())
        cout << "lower_bound(" << x << ") = index " << (lb - vec3.begin()) << ", value = " << *lb << endl;
    else
        cout << x << " not found in vector." << endl;
    // 找到第一个 > x 的位置
    auto ub = upper_bound(vec3.begin(), vec3.end(), x);
    if (ub != vec3.end())
        cout << "upper_bound(" << x << ") = index " << (ub - vec3.begin()) << ", value = " << *ub << endl;
    else
        cout << x << " not found in vector." << endl;

    /*
    reverse(): 反转数组或容器
    */
    cout << ">> reverse() function example: " << endl;
    vector<int> vec4 = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    cout << "before reverse: ";
    for (int num : vec4)
        cout << num << " ";
    cout << endl;
    reverse(vec4.begin(), vec4.end());
    cout << "after reverse: ";
    for (int num : vec4)
        cout << num << " ";
    cout << endl;

    // 也可以自定义反转范围
    vector<int> vec5 = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    cout << "before partial reverse: ";
    for (int num : vec5)
        cout << num << " ";
    cout << endl;
    reverse(vec5.begin() + 2, vec5.begin() + 7); //
    cout << "after partial reverse (index 2 to 6): ";
    for (int num : vec5)
        cout << num << " ";
    cout << endl;

    /*
    max, min(): 返回两个值中的最大值或最小值
    */
    cout << ">> max() and min() function example: " << endl;
    int m = 10, n = 20;
    cout << "m = " << m << ", n = " << n << endl;
    cout << "max(m, n) = " << max(m, n) << endl;
    cout << "min(m, n) = " << min(m, n) << endl;
    // 在 C++11 之后，可以传递 initializer_list 来比较多个值
    cout << "max of (3, 5, 2, 8, 1) = " << max({3, 5, 2, 8, 1}) << endl;
    cout << "min of (3, 5, 2, 8, 1) = " << min({3, 5, 2, 8, 1}) << endl;
    cout << endl;

    /*
    unique(): 去除相邻重复元素，返回新的逻辑结尾迭代器位置
    注意，unique() 只会去除相邻的重复元素，所以通常需要先排序，再使用 unique() 来去除所有重复元素。
    */
    cout << ">> unique() function example: " << endl;
    vector<int> vec6 = {1, 2, 2, 3, 4, 4, 4, 5, 6, 6};
    cout << "before unique: ";
    for (int num : vec6)
        cout << num << " ";
    cout << endl;
    // 先排序（这里已经是排序好的了）
    sort(vec6.begin(), vec6.end());
    // 使用 unique 去除相邻重复元素
    auto new_end = unique(vec6.begin(), vec6.end());
    // new_end 是新的逻辑结尾位置，实际大小是 new_end - vec6.begin()
    cout << "after unique: ";
    for (auto it = vec6.begin(); it != new_end; ++it)
        cout << *it << " ";
    cout << endl;
    cout << "new size after unique: " << (new_end - vec6.begin()) << endl;
    // 然后擦除旧元素、设定新的尾迭代器
    vec6.erase(new_end, vec6.end());
    vec6.end() = new_end; // 可选，调整容器大小
    cout << "vector size after erase: " << vec6.size() << endl;
    cout << "final vector: ";
    for (int num : vec6)
        cout << num << " ";
    cout << endl;

    /*
    数学函数
    */
    cout << ">> math functions example: " << endl;
    // 绝对值 |x|
    int val = -10;
    cout << "abs(" << val << ") = " << abs(val) << endl;
    // 自然指数 e^x
    double exp_val = 2.0;
    cout << "exp(" << exp_val << ") = " << exp(exp_val) << endl; // e^2
    // ln(x)
    double ln_val = 7.389056;                                  // 约等于 e^2
    cout << "log(" << ln_val << ") = " << log(ln_val) << endl; // 约等于 2
    // 指数 x^y
    double base = 2.0, exponent = 3.0;
    cout << "pow(" << base << ", " << exponent << ") = " << pow(base, exponent) << endl; // 2^3 = 8
    // 开方 sqrt(x)
    double sqrt_val = 16.0;
    cout << "sqrt(" << sqrt_val << ") = " << sqrt(sqrt_val) << endl; // 4
    // 向上取整 ceil(x)
    double ceil_val = 3.14;
    cout << "ceil(" << ceil_val << ") = " << ceil(ceil_val) << endl; // 4
    // 向下取整 floor(x)
    double floor_val = 3.99;
    cout << "floor(" << floor_val << ") = " << floor(floor_val) << endl; // 3
    // 四舍五入 round(x)
    double round_val = 3.5;
    cout << "round(" << round_val << ") = " << round(round_val) << endl; // 4
    cout << endl;

    /*
    gcd(), lcm(): 计算两个数的最大公约数和最小公倍数
    */
    cout << ">> gcd() and lcm() function example: " << endl;
    int num1 = 48, num2 = 180;
    cout << "num1 = " << num1 << ", num2 = " << num2 << endl;
    cout << "gcd(" << num1 << ", " << num2 << ") = " << gcd(num1, num2) << endl; // 12
    cout << "lcm(" << num1 << ", " << num2 << ") = " << lcm(num1, num2) << endl; // 720
    cout << endl;

    return 0;
}