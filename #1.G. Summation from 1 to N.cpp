#include <iostream>
using namespace std;

int main() {
    long long N;
    cin >> N;
    
    long long result = (N * (N + 1)) / 2;
    
    cout << result << endl;
    
    return 0;
}
/////////////////////////*   this gives time outttttttttttttttttttttt
/*#include <iostream>
using namespace std;
int main(){
      long long N;
      cin>>N;
      long long result=0;
      for(long long i=1;i<=N;i++){
          result =result+i; 
      }
      cout<<result;
      return 0;
}*/
