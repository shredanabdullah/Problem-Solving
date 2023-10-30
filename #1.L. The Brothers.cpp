#include <iostream>
#include <string>
using namespace std;

int main() {
    string F1, S1, F2, S2;
    
    // Read the first person's names
    cin >> F1 >> S1;

    // Read the second person's names
    cin >> F2 >> S2;
    
    if(S1==S2){
          cout<<"ARE Brothers";
    }
    else cout<<"NOT";
    
    return 0;
}
