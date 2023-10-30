#include<iostream>
using namespace std;
int main(){
      long long x,y,z;
      cin>>x>>y>>z;
      long long min,max;
      min=max=x;
      
      if(y>max){
         max=y;
      }
      if(z>max){
            max=z;
      }
      if(y<min){
           min=y; 
      }
      if(z<min){
            min=z;
      }
      cout<<min<<" "<<max;
      return 0;
}
