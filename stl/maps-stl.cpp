#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;


int main() {
    int     i, o, v;
    string  s;
    map<string, int> m;

    for (cin>>i; i--;){
        cin >> o >> s;
        switch(o){
            case 1: cin >> v; m[s] += v; break;
            case 2: m.erase(s);break;
            case 3: cout << m[s] << endl; break;
        }   
    }
    return 0;
}
