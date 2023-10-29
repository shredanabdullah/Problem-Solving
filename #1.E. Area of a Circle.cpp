#include <iostream>
#include<iomanip>

using namespace std;
int main(){
    double pi=3.141592653;
    double x;
    cin>>x;
    double area=pi*x*x;
    cout << fixed << setprecision(9) << area << endl;
    return 0;
}
