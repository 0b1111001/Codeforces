#include<iostream>
using namespace std;

void solve(){
    int n;
    cin>>n;
    cout<<((n%2==0 && n!=2) ? "YES" : "NO")<<endl;
}

int main(){
    solve();
    return 0;
}