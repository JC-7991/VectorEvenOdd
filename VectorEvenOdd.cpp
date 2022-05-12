#include <iostream>
#include <vector>

int main(){

  std::vector <int> num = {2, 4, 3, 6, 1, 9};

  int even_total = 0;
  int odd_total = 0;
  
  for(int i = 0; i < num.size(); i++){
    if(num[i] % 2 == 0){
      even_total += num[i];
    }
  }
  
  for(int i = 0; i < num.size(); i++){
    if(num[i] % 2 != 0){
      odd_total += num[i];
    }
  }

  std::cout << even_total << "\n" << odd_total << "\n";

}