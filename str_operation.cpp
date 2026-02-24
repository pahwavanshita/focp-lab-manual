#include<iostream>
using namespace std;
#include<string>
int main(){
    string st = "Vanshita";
    cout<<st.size()<<" "<< st.length() << endl;
    cout<< st[0] << st. at(1) << endl;
    cout<< st.front() << st.back() << endl;
    st += "Pahwa";            //append
    st.append(" :) ");        // another way
    cout<<st;
    st.insert(6, " K.");    // insert at index 6
    cout<<st;
    st.erase(6,3);
    cout<<st;      // remove 3 characters starting at 6
    st.clear();
    cout<<st;          //remove all content
    st= "Vanshita Pahwa";
    cout<< st.find("Pahwa")<< endl;     //index 7
    cout<< st.rfind("a")<< endl;        //last occurrence
    string sub = st.substr(0,8);  //Vanshita
    string a = "Apple";
    string b = "Banana";
    if (a == b)cout<<"Equal";
    if (a != b)cout<<"Not equal";
    if (a < b)cout<<"Apple comes before Banana";
    return 0;
}