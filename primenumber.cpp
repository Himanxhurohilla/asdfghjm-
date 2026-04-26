#include<iostream>
using namespace std;
int main(){
            int n;
            cout<<"enter the value of n :"<<endl;
            cin>>n;
            bool isprime=0;

            for(int i=2; i<n; i++){

                if(n%i==0){
                    isprime=1;
                    break;
                }
                
            }
            if(isprime==1){
                cout<<"not a prime number";
            }
            else{
                cout<<"prime number";
            }
               system("pause");
              return 0;
              




} 