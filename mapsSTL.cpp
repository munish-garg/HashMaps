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

    //3. Erase.....
    m.erase("Banana");

    //If the particular key is present, then the function will return 1 else 0 
    if(m.count("Banana")){
        cout<<"The Banana fruit is present having the price "<<m["Banana"]<<"."<<endl;
    }
    else{
        cout<<"The fruit is not present."<<endl;
    }

    //Iterate over all the key-value pairs
    m["Litchi"] = 110;
    m["Guava"] = 120;
    m["Mango"] = 150;
    for(auto x:m){
        cout<<x.first<<" "<<x.second<<endl;
    }
    return 0;
    //Map stores only one occurence of the key, i.e., unique key.... 
}