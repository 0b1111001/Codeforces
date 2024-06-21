#include<iostream>
using namespace std;

void solve(){
    int n,value(0);
    cin>>n;
    while(n--){
        string txt;
        cin>>txt;
        txt[1]=='+' ? value++ : value--;
    }
    cout<<value<<endl;
}

int main(){
    solve();
    return 0;
}