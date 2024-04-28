#include<bits/stdc++.h>
#include<iostream>
using namespace std;
void int_to_char()
{
    int a=4;
    char ch=a+'0';
    cout<<ch<<endl;
}
void char_to_int()
{
    char ch='4';
    int a=ch-'0';
    cout<<a<<endl;
}
void int_to_string()
{
    int a=345;
    string ss=to_string(a);
    cout<<ss<<endl;
}
void string_to_int()
{
    string ss="1234";
    int a=stoi(ss);
    cout<<a<<endl;
}
int main()
{
    // conversion
    int_to_char();
    char_to_int();
    int_to_string();
    string_to_int();

    // string slicing
    string ss="kewal:godhane";
    int pos=ss.find(":");
    cout<<ss.substr(pos+1);   //substr(start_index , no._of_character)

    // length of the string (without using length() function)
    string s="kewal";
    int i=0;
    while(s[i])
        i++;
    cout<<i;


    // sort a string 
    // sort(ss.begin(),ss.end());

    return 0;
}