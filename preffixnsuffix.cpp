#include<iostream>
#include<string>
using namespace std;
int main(){
string str1;
cin>>str1;
int n=str1.length();
int arr[n];
for(int i=0;i<n;i++){
    arr[i]=str1[i]-'A';
    cout<<arr[i]<<" ";
}
int prsr=0,prefix=0,sufix=0;

for(int i=0;i<n;i++){
    if(arr[i]==arr[i+1]){
        prefix++;
    }
    else if(arr[n-i-1]==arr[n-i]){
        sufix++;
    }
}
cout<<"\n"<<prefix<<" ";
cout<<sufix;
while(prefix==2 && sufix==2){

}
}
