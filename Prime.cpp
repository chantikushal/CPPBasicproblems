#include<iostream>
using namespace std;
void prime(int range){
    int i,j;
    for(i=2;i<=range;i++)//range from 2
    {
        int tally=2; //initialising tally as 2 counts if given num is not prime.
        for(j=2;j<=i/2;j++)//we are only checking if a number is divisible with it's possible factors. hence i/2.
        {
            if(i%j==0){//if tally increases above 2 its not a prime number.
                    tally++;
            }
        }
        if(tally==2){
            cout<<i<<endl;
        }
    }
}

int main()
{
    int a;
    cout<<"prime nums ranging from 0 to ";
    cin>>a;
    cout<<a<<":\n";
    prime(a);
    return 0;
}
