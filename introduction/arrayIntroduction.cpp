#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    vector<int> v;
    int nums;
    cin >> nums;
    while (cin >> nums)
    v.push_back(nums);
    reverse(begin(v), end(v));
    
    for (auto elem : v)
        cout << elem << " ";
    cout << endl;
    
    return 0;
}
