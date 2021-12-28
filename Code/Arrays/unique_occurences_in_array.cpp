#include<iostream>
#include<unordered_map>
#include<string>
using namespace std;

int main(void){
    unordered_map<string, int> m;

    //1st way of adding data
    pair<string,int> p("A",1);
    m.insert(p);

    //2nd way
    m["B"] = 2;

    cout << m["A"] << endl;
    cout << m.at("A") << endl;
    cout << m["B"] << endl;
    //m["A"] = 3;
    //m.erase("A");
    m["C"]++;
    //cout << m.size() << endl;

    //Check if element is present
    // if( m.count("A") > 0){
    //     cout << "present" << endl;
    // }

    for(auto i=m.begin();i!= m.end();i++){
           cout << i->first << " " << i->second << endl;        
    }
    
    return 0;
}