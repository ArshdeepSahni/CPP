
/*
                   ---------------------------------------------
                   |                CUSTOM EXAMPLE             |
                   ---------------------------------------------
                   |         INPUT:  |            OUTPUT:      |
                   ---------------------------------------------
                   |          abcd   |  4 2(size of abcd & ef) |
                   |          ef     |      abcdef (abcd+ef)   |
                   |          ef     | ebcd af (swap 1st chars)|
                   ---------------------------------------------
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    string a,b,a1[1];
    cin>>a>>b;
    cout<<a.length()<<" "<<b.length()<<endl<<a+b<<endl;  // size,a+b implemented here
    std::swap(a[0],b[0]);    // swapping implemented here
    cout<<a<<" "<<b;
    return 0;
}
