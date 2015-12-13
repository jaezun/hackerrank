#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n, m;
    vector<int> v;
    
    for (cin >> n;n--;){
        cin >> m;
        v.push_back(m);
    }
    for (cin >> n; n--;){
        cin >> m;
        auto it = lower_bound(begin(v), end(v), m);
        printf(*it == m ? "Yes %d\n" : "No %d\n", distance(begin(v), it)+1);
    }
    return 0;
}

