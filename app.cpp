#include <iostream>
#include <map>
#include "profile.hpp"

int main() {
  std::string name = "Danny Nguyen";
  std::map<std::string, int> dannygrade = {{"Math", 75}, {"Science", 42}, {"English", 68}};
  Student dannynguyen(name, 16, dannygrade); 

  std::cout << dannynguyen.viewStudent(); 
  dannynguyen.updateGrade("Science", 99);
  std::cout << dannynguyen.viewStudent();
  std::string new_name = "Hubert Dingle";
  dannynguyen.changeName(new_name);
  std::cout << dannynguyen.viewStudent(); 
}
