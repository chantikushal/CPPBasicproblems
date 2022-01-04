#include<bits/stdc++.h>

using namespace std;

int main(){
    string str,str1,fnl;//initializing strings
    cin>>str>>str1;
    fnl=str+str1;//cancatenating
    int n=fnl.length();//length of whole cancatenated string
    char ch[n];
    for(int i=0;i<n;i++){
        ch[i]=fnl[i];//converting string values into char values
    }
    int y=0;
    int arr[n];
    for(int i=0;i<n;i++){
         arr[i]=ch[i];//converting char values into ascii values through typecasting
         }
         for(int i=0;i<n;i++){

            if(arr[i]<=97 && arr[i]>=65 && n==26){//all constriants
                y=1;
            }
        else{
                y=0;
        }
    }
    if(y==1){
        cout<<"yes"<<endl;
    }
    else{
        cout<<"no"<<endl;
    }
    return 0;
}
