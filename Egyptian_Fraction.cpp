#include <bits/stdc++.h>
using namespace std;

int main(){
    double n,d;
    cin>>n>>d;
    while(n!=0){
        double val = ceil(d/n);
        cout<<"1/"<<val<<" + ";
        n = val*n-d;
        d = d*val;
    }
}
