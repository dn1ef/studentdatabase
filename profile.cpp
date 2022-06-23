#include <iostream>
#include <map>
#include "profile.hpp" 
#include <string>

Student::Student(std::string new_name, int new_age, std::map<std::string, int> new_grades) {
  name = new_name;
  age = new_age;
  grades = new_grades;
}

std::string Student::viewStudent() { // Displays all information about the student.
  std::string gradeList;
  std::string bio;
  bio = "\nName: " + std::string(name);
  bio += "\nAge: " + std::to_string(age);
  bio += "\nGRADES";
  bio += "\n==========================\n";

  for (auto grade: grades){
    gradeList += "- " + grade.first + ": " + std::to_string(grade.second) + "\n"; 
  }
  
  return bio + gradeList;

} 

/* This function takes in a subject and a new grade,
 * and replaces the old grade for that subject with
 * the new grade.
 */

void Student::updateGrade(std::string subject, int new_grade) {
  for (auto& grade : grades) {
    if (subject == grade.first) {
      grade.second = new_grade;
    }
  }
}

void Student::changeName(std::string new_name) { // Replaces current name with new name.
  name = new_name;
}
