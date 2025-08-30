#include <bits/stdc++.h>

using namespace std;

int main(void) {
    // 2-dim vector.
    // 5 vector objs in 0 dim, and 6 elem with value 10 in 1 dim.
    vector<vector<int>> vec_2(5, vector<int>(6, 10));

    vector<int> vec;
    vec.push_back(1); // use push_back to push elem into vector.
    vec.push_back(3);
    vec.push_back(2);

    cout << ">> Size before pop_back() is: " << vec.size()
         << endl; // get length of vector.

    vec.pop_back(); // pop the last elem from vector.

    cout << ">> Size after pop_back() is: " << vec.size() << endl;

    cout << ">> Output all elems: " << endl;
    for (auto ele : vec) {
        cout << ele << endl;
    }

    // clear vector
    vec.clear();
    cout << ">> Size after clear() is: " << vec.size() << endl;
    cout << ">> Judge if empty vector: " << vec.empty() << endl;

    // change size of vector.
    vec.resize(5, 3); // resize to 5 elem, new elems defaults 0.

    return 0;
}
