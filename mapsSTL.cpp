#include<iostream>
#include<map>
#include<string>
using namespace std;
int main(){
    //1. insert
    map<string, int> m;
    m.insert(make_pair("mango", 1000));
    pair<string, int> p;
    p.first = "strawberry";
    p.second = 500;
    m.insert(p);
    m["Banana"] = 50;

    //2.search..
    string s; cin>>s;
    auto it = m.find(s);
    if(it!=m.end()){
        cout<<"The price of "<<s<<" is "<<m[s]<<endl;
    }
    else{
        cout<<"The fruit for which you are searching is not present in the map."<<endl;
    }
    return 0;
}