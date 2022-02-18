#include<iostream>
using namespace std;
bool checkprime(int num){
    bool flag=true;
    for(int i=2;i<=num/2;i++){
        if(num%i==0){
            flag=false;
            break;
        }
    }
    return flag;
}
int main(){
    int a;
    cout<<"number to check= ";
    cin>>a;
    if(checkprime(a)==false)
        cout<<"false, "<<a<<" is not a prime number.";
    else
        cout<<"true, "<<a<<" is a prime number";
    return 0;
}
