#include <iostream>
using namespace std;

int main() {
  
  for (int i = 1; i <= 5; i++){ 
    for (int j = 5; j >= i; j--){
      cout << 1 << " ";
    }
      cout << endl;
  }
  return 0;
}

// 1 1 1 1 1
// 1 1 1 1
// 1 1 1
// 1 1
// 1