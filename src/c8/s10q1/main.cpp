#include <iostream>

int main(){
  for (int x{0}; x <= 20; x++){
    if (x%2 == 0) { // is even
      std::cout << x << std::endl;
    }
  }
  while (true); // keep console open
}
