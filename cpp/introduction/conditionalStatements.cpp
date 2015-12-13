#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int input;
    cin >> input;
    if (input < 1)
        cout << "Smaller than \"one\"" << endl;
    else if (input > 9)
        cout << "Greater than 9" << endl;
    else
    {
           switch(input)
           {
               case 1: cout << "one\n"; break;
               case 2: cout << "two\n"; break;
               case 3: cout << "three\n"; break;
               case 4: cout << "four\n"; break;
               case 5: cout << "five\n"; break;
               case 6: cout << "six\n"; break;
               case 7: cout << "seven\n"; break;
               case 8: cout << "eight\n"; break;
               case 9: cout << "nine\n"; break;
           }
    }
   return 0;
}
