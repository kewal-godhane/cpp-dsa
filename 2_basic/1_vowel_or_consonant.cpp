// Q identify whether a character is vowel or consonant
#include<iostream>
using namespace std;
int main()
{
    char al;
    cin>>al;
    
    bool isuppercasevowel;
    bool islowercasevowel;

    isuppercasevowel=(al=='A' || al=='E' || al=='I' || al=='O' || al=='U' );
    islowercasevowel=(al=='a' || al=='e' || al=='i' || al=='o' || al=='u' );

    if(isuppercasevowel || islowercasevowel)
    {
        cout<<"vowel";
    }
    else
    cout<<"consonant";
    return 0;
}
// make a bool variable , assign it to a true or false value depending on the variable