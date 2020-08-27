
/*
                   ---------------------------------------------
                   |                CUSTOM EXAMPLE             |
                   ---------------------------------------------
                   |         INPUT:                |   OUTPUT: |
                   ---------------------------------------------
                   |       123,4567,1234567        |     123   |
                   |                               |    4567   |
                   |                               | 1234567   |
                   ---------------------------------------------
*/









#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    int i,j,k,coma;
    cin>>s;
    k=0;
    int l=s.length();

    //When ',' comes, print everything between previous ',' and appearing ','
    for(i=0;i<l;i++){
        if(s[i]==','){
            coma=i;
        for(j=k;j<i;j++){
            cout<<s[j];
        }
        k=i+1;
        cout<<endl;
        }
    }

    //String after last ',' -->
    for(i=coma+1;i<l;i++){
        cout<<s[i];
    }
}
