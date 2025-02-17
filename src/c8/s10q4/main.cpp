#include <iostream>

void fizzbuzz(int x){
  for (int i = 1; i <= x; i++){
    if (i % 3 == 0){
      std::cout << "fizz";
    }

    if (i % 5 == 0){
      std::cout << "buzz";
    }
    else if (i % 3 != 0){
      std::cout << i;
    }

    std::cout << std::endl;  
  }
}

int main(){
   std::cout << "Fizzbuzz for 30 is: \n";
   fizzbuzz(30);  
}
