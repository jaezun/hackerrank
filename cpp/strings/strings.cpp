#include <iostream>
#include <string>
using namespace std;

int main() {
    int     aSize, bSize;
    string  a, b;
    char aFirstOriginal;
    cin >> a;
    cin >> b;
    aSize = a.size();
    bSize = b.size();
    cout << aSize << " " << bSize << endl;
    cout << (a + b) << endl;
    aFirstOriginal = a[0];
    a[0] = b[0];
    b[0] = aFirstOriginal;
    for (int i = 0; i < aSize; i++)
        cout << a[i];
    cout << " ";
    for (int i = 0; i < bSize; i++)
        cout << b[i];
    cout << endl;
    return 0;
}
