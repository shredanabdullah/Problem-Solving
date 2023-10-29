#include <iostream>
using namespace std;
int main(){
      long long x,y;
      cin>>x>>y;
      char last_d1,last_d2;
      last_d1=x%10;
      last_d2=y%10;
      int result=last_d1+last_d2;
      cout<<result;
      return 0;
}
