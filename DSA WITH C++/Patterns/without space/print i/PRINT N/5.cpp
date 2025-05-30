#include <iostream>
using namespace std;

int main() {
  
  for (int i = 1; i <= 5; i++){ 
    for (int j = 5; j >= i; j--){
      cout << 5 << " ";
    }
      cout << endl;
  }
  return 0;
}

// 5 5 5 5 5
// 5 5 5 5
// 3 5 5
// 5 5
// 5