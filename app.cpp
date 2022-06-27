#include <iostream>
#include <map>
#include "profile.hpp"

int main() {
  std::string input;

  Student hubertdingle("Hubert Dingle", 16);
  Student benhurberhane("Benhur Berhane", 14);
  Student ronaldduck("Ronald Duck", 17);

  std::cout << "Welcome to the Student Database! What would you like to do?\n";
  std::cout << "1. Update a grade\n";
  std::cout << "2. Add a student\n";
  std::cout << "3. Modify a subject\n";
  std::cout << "4. Change a student's name \n";
  std::cout << "5. View profile\n";
  std::cin >> input;

  void chooseAStudent() {

  }

  void addAStudent(student) {
    std::string name;
    int age;

    std::cout << "What is the student's full name?\n";
    std::cin >> name; 
    std::cout << "How old is the student?\n";
    std::cin >> age;

    

  }

  void updateAGrade() {
    std::string subject;
    int grade;

    std::cout << "Subject: \n";
    std::cin >> subject;
    std::cout << "Grade: \n";
    std::cin >> grade;

  }

  void modifySubject() {

  }

  void changeStudentName() {

  }

  switch(input) {
    case 1:
      break;
    case 2:
      break;
    case 3:
      break;
    case 4:
      break;
    default:
      std::cout << "Please type in one of the four numbers.\n";
      break;
  }
}
