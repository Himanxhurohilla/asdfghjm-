#include<iostream>
using namespace std;
int main(){
         
        int n;
        cin>>n;
        int a=0;
        int b=1;
        int c;
        int sum;
        for(a=0,b=1;a<=n&&b<=n;a++,b++){
            c=a+b;
            sum=c+b;
            cout<<sum<<endl;
        }

        
         system("pause");
    return 0;




}