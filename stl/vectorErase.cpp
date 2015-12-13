#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <sstream>
using namespace std;


int main() {
    vector<int> v;
    int         num;
    int         numbers;
    int         eraseOne;
    int         eraseRangeInc;
    int         eraseRangeEx;
    
    cin >>  num;
    
    for (int i = 0; i < num; i++){
        cin >> numbers;
        v.push_back(numbers);
    } 
    cin >> eraseOne;
    cin >> eraseRangeInc;
    cin >> eraseRangeEx;
    v.erase(begin(v)+(eraseOne-1));
    v.erase(begin(v)+(eraseRangeInc - 1), begin(v)+(eraseRangeEx - 1));
    cout << v.size() << endl;
    for (auto elem : v)
        cout << elem << " ";
    cout << endl;
        
    
    return 0;
}
