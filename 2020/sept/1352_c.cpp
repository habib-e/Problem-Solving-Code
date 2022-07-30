#include <bits/stdc++.h>
using namespace std;
class CPP{
    int a,b;
public:
    CPP(int x,int y)
    {
        a=x;
        b=y;
    }
    void show()
    {
        cout<<a<<" "<<b;
    }
};
int main()
{
    CPP ob(1,2);
    ob.show();

    return 0;
}
