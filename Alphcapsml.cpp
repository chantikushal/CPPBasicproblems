#include<bits/stdc++.h>
using namespace std;
int main(){
    string str1,str2;
    cin>>str1>>str2;
    string r=str1+str2;
    int n=r.length();
    int arr[n];
    for(int i=0;i<n;i++){
        arr[i]=r[i]-'A';
        cout<<arr[i]<<" ";
    }
    for(int i=0;i<n;i++){
        if(arr[i]<=25 && arr[i]>=0){
            cout<<"\nyes";
            break;
        }
        else{
        cout<<"no";
        }
    }
    return 0;
}
