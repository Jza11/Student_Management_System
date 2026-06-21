#include "student.hpp"
#include "sms.hpp"
#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <nlohmann/json.hpp>

using json = nlohmann::json; 

int main(){
    Student a; 
    a.set_Name("John Doe");
    a.set_student_id("A0001");

    std::map<std::string, float> example_courses;

    example_courses["Modern Art"] = 10; 
    example_courses["History"] = 7;
    example_courses["Math"] = 8; 

    a.set_courses(example_courses);

   Student b; 
   b.set_Name("Jane Doe");
   b.set_student_id("A0002");

   example_courses["Math"] = 7;
   example_courses["History"] = 10;
   example_courses["Modern Art"] = 6;

   b.set_courses(example_courses);

   std::string example_faculty = "HumanStudies";
   int year = 2026;

   std::vector<Student> current_students;
   current_students.push_back(a);
   current_students.push_back(b);

   sms test(example_faculty, year, current_students);

   test.saveStudents();


    return 0;
    
}