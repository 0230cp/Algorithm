#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    
    int n,m; cin>>n>>m; vector<int> v;
    for(int i = 1; i <= n; i++){ v.push_back(i);}
    while(m--){
        //int start,mid,end;cin>>start>>end>>mid;
        //rotate(v.begin()+(start-1),v.begin()+(mid-1),v.begin()+end);
        int i,j,k; cin>>i>>j>>k;
        rotate(v.begin()+(i-1),v.begin()+(k-1),v.begin()+j);
    }
    for(int a:v){
        cout<<a<<" ";
    }
    cout<<"\n";
    return 0;
}
