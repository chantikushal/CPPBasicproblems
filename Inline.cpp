#include<iostream>
using namespace std;
inline int sum(int a, int b){
return(a+b);
}
int main()
{
    int a,b;
    cin>>a>>b;
    cout<<"addition of two nums= "<<sum(a,b);//no control transfer happens here.
    return 0;
}
