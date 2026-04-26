#include<iostream>
#include<math.h>
using namespace std;
int main(){
  int n;
  cin>>n;
  int answer=0;
  while(n!=0){
    if(answer>INT32_MAX/10||answer<INT32_MIN/10){
        return 0;
    }
      int digits=n%10;
      answer=(answer*10+digits);
      n=n/10;
  }
  cout<<"reverse of a number is :"<<answer;
  system("pause");
              return 0;

}