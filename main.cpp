#include<iostream>

using namespace std;

int main(){
    string a,b,result;
    cin>>a>>b;
    result=b;
    for (int i = 0; i < b.size(); i++)
    {
        if (((a[i]-'0')+(b[i]-'0'))==1)
        {
            result[i]='1';
        }
        else
        {
            result[i]='0';
        }
        
    }
    cout<<result<<endl;
}