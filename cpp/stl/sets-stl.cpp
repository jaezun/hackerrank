#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    set<int>    myset;
    int         i, a, b;

    for (cin >> i; i--;){
        cin >> a >> b;
        switch(a){
            case 1: myset.insert(b); break;
            case 2: myset.erase(b); break;
            case 3: myset.find(b) != myset.end() ? cout << "Yes\n" : cout << "No\n"; break;
        }
    }
    return 0;
}
