#include <bits/stdc++.h>
 
 
using namespace std;
 
int main(){
    float x,y;
    cin>>x>>y;
    if(x>0 and y>0) cout<<"Q1";
    else if(x<0 and y>0) cout<<"Q2";
    else if(x<0 and y<0) cout<<"Q3";
    else if(x>0 and y<0) cout<<"Q4";
    else if(x==0 and y==0) cout<<"Origem";
    else if(x==0 and y) cout<<"Eixo Y";
    else if(x and y==0) cout<<"Eixo X";
   return 0;
}
