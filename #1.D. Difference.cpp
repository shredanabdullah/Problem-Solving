#include <iostream>
using namespace std;
int main(){
    long long int a,b,c,d; //without long long it will give wrong test case, take care
    cin>>a>>b>>c>>d;
    long long int result=(a*b)-(c*d);
    cout<<"Difference = "<<result<<endl;
    return 0;
}
