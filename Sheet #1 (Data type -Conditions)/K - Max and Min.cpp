#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    int maxiMum,miniMum;
    maxiMum = max(a,b);
    maxiMum = max(maxiMum,c);
    miniMum = min(a,b);
    miniMum = min(miniMum,c);
    cout<<miniMum<<" "<<maxiMum;
    
    return 0;
}
