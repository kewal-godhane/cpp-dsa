//program to find the greatest word and its length in a sentence
#include<iostream>
using namespace std;
int main()
{
    char a[20];
    cout<<"Enter a sentence\n";
    gets(a);
    int i=0;
    while(a[i]!='\0')
    {
        i++;
    }
    int maxlen=0,start=0,j=0,len,q,w;
    while(j<=i){
    if(a[j]==' ' || a[j]=='\0')
    {
        len=(j-start);
        if(maxlen<=len){
            maxlen=len;
            q=start;
            w=j;
        }
        start=(j+1);
    }
    if(a[j]=='\0'){
    break;}
    j++;
    
    }
    cout<<"greatest word is : ";
    while(q<=w)
    {
        cout<<a[q];
        q++;
    }
    cout<<endl;
    cout<<"and its length is : ";
    cout<<maxlen;
}