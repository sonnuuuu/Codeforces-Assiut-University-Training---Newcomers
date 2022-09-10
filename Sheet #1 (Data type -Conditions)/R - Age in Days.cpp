#include<iostream>
#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int n;
    cin>>n;
    int x = n/365;
    cout<<x<<" years"<<endl;
    int a= n-(365*x);
    int y= a/30;
    cout<<y<<" months"<<endl;
    int b= a-(y*30);
    cout<<b<<" days";
   return 0;
}
