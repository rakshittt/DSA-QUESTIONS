#include <bits/stdc++.h>
using namespace std;

int main(){

    // Creation of Map
    unordered_map<string,int> m;

    // insertion 

    //1 
    pair <string, int >p = make_pair("Rakshit",2);
    m.insert(p);

    //2
    pair <string,int> pair2("Jain", 1);
    m.insert(pair2);

    //3

    // First bar creation hoga 
    m["mera"]=1;
    // Second bar updation hoga
    m["mera"]=3;



    return 0;
}