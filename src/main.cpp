#include "student.hpp"
#include <iostream>
#include <string>
#include <map>
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

    // Create a JSON object from Student object.
    json test = a;

    std::cout << "JSON object created\n";

    std::cout<< test.dump(4) << std::endl; 

    
}