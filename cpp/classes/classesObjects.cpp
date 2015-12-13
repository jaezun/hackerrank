#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cassert>
using namespace std;

class Student{
    public:
        void Input(){
            cin >> a >> b >> c >> d >> e;
            
        }
        int CalculateTotalScore(){
            return (a+b+c+d+e);
        }
    private:
        int a, b, c, d, e;
};

int main() {
   int n;
     cin>>n;
     Student s[n];
     for(int i=0;i<n;i++)
      s[i].Input();
     int count=0;
     int krish_score=s[0].CalculateTotalScore();
     for(int i=1;i<n;i++)
    {
      int total=s[i].CalculateTotalScore();
      if(total>krish_score)
        count++;
    }
     cout<<count;
    return 0;
}
