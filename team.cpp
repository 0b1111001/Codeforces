#include<iostream>
using namespace std;

void solve(){
    int n,slv(0);
    cin>>n;
    while(n--){
        int total(0),temp(0);
        for(int i=0;i<3;i++){cin>>temp; total+=temp;}
        if(total>=2) slv++;
    }
    cout<<slv<<endl;
}

int main(){
    solve();
    return 0;
}