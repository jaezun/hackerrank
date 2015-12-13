#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int num;
    int numbers;
    vector<int> v;
    
    cin >> num;
    while (cin >> numbers){
        v.push_back(numbers);
    }
    sort(begin(v), end(v));
    for (auto elem : v)
        cout << elem << " ";
    cout << endl;
    return 0;
}
