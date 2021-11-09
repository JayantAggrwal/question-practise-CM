#include <bits/stdc++.h>
using namespace std;

int main() {
    string s="what in the world you are tryin to do onichan.yamete yamete mo yamete";
    int k=s.length();
    
    string p;
     for(auto it=s.begin();it<s.end();it++)
      { 
             if(*it==' '){
                 p.push_back('%');
                 p.push_back('2');
                 p.push_back('0');
                 }
             else{p.push_back(*it);}          
      }
cout<<p;
}
