#include<iostream>
using namespace std;

void solve(){
    long long int n,m,a;
    cin>>n>>m>>a;
    n%a!=0 ? n=(n/a)+1 : n=n/a;
    m%a!=0 ? m=(m/a)+1 : m=m/a;
    cout<<n*m<<endl;
}

int main(){
    solve();
    return 0;
}