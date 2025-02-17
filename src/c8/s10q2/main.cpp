#include <iostream>

int sumTo(int value){
  int sum{};

  for (int i{1}; i <= value; i++){
    sum += i;
  }

  return sum;
}

int main(){
  std::cout << "Sum to of 1 is " << sumTo(1) << "\n";
  std::cout << "Sum to of 5 is " << sumTo(5) << "\n";
  std::cout << "Sum to of 20 is " << sumTo(20) << "\n";
}
