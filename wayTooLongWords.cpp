#include<iostream>
using namespace std;

void solve(){
    int n;
    cin>>n;
    while(n--){
        string txt;
        cin>>txt;
        if(txt.size()>10)
            cout<<txt[0]<<txt.size()-2<<txt[txt.size()-1]<<endl;
        else
            cout<<txt<<endl;
    }
}

int main(){
    solve();
    return 0;
}