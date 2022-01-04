#include<iostream>
using namespace std;
void Fibbon(int fib){
    int nmbr;
    int int1=0,int2=1;
    for(int i=0;i<fib;i++){
        nmbr=int1+int2;
        int1=int2;
        int2=nmbr;
        cout<<nmbr<<" ";
    }
}
int main(){
int a;
cout<<"enter Fibbonacci series length:"<<endl;
cin>>a;
Fibbon(a);
return 0;
}
