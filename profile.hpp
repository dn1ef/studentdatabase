#include <iostream>
#include <map> 

class Student {
  std::string name;
  std::map<std::string, int> grades;
  int age;

  public:
    Student(std::string new_name, int new_age);

    std::string viewStudent();

    void updateGrade(std::string subject, int new_grade);

    void changeName(std::string new_name);

    void addSubject(std::string subject, int grade=0);

    void removeSubject(std::string subject);

};
