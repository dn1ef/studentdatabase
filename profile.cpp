#include <iostream>
#include <map>
#include "profile.hpp" 
#include <string>

Student::Student(std::string new_name, int new_age) {
  name = new_name;
  age = new_age;
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

void Student::addSubject(std::string subject, int grade) { // Adds a subject with a default grade of 0 to the student.
  std::map<std::string, int> &refgrades = grades;
  refgrades.insert({subject, grade});
}

void Student::removeSubject(std::string subject) { 
  std::map<std::string, int> &refgrades = grades;
  refgrades.erase(subject);
}

