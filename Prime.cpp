#include<iostream>
using namespace std;
//description: A prime num is a whole num that can only be divided by 1 and itself
void prime(int range){
    int flag;
    for(int i=2;i<=range;i++){//we use 2 loops to check num%allnums==0 only 2 times then the condition
        for(int j=1;j<=i;j++){//prime num can only be divided by 1 and itself is true.
            if(i%j==0){
                flag++;
            }
        }
            if(flag==2){
                cout<<i<<endl;
            }
            flag=0;
    }
}
int main(){
    int a;
    cout<<"enter range from 0 to ";
    cin>>a;
    prime(a);
    cout<<"all prime numbers from 0 to "<<a<<".";
    return 0;
}
