#include <iostream>
using namespace std;
////not correct
int main() {
    long long x,y,z,h;
    cin >> x>>y>>z>>h;
    
    long long result = x*y*z*h;
    int result1= result%10;
    result=result/10;
    int result2= result%10;
    int result3= result2*10+result1;
    cout << result3 << endl;
    
    return 0;
}

/* //////////////////////////correcttttttttttttttttt
#include <iostream>
using namespace std;

int main() {
    long long A, B, C, D;
    cin >> A >> B >> C >> D;

    // Calculate the product of the four numbers
    long long result = (A % 100) * (B % 100) % 100 * (C % 100) * (D % 100) % 100;

    // Print the last two digits
    cout << (result < 10 ? "0" : "") << result << endl;

    return 0;
}
*/
