#include<iostream>
using namespace std;

void solve(){
    int n,k,pass(0),last(-1);
    cin>>n>>k;
    while(n--){
        int a;
        cin>>a;
        if(k==1) last=a;
        if(k>0 && a!=0) pass++;
        else{
            if(a==last && a!=0) pass++;
            else break;
        }
        k--;
    }
    cout<<pass<<endl;
}

int main(){
    solve();
    return 0;
}