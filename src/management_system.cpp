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

    json second_j;

    example_courses["Math"] = 6;

    second_j["id"] = "A002";
    second_j["name"] = "Jane Doe";
    second_j["courses"] = example_courses;

    std::cout<< second_j.dump(4) << std::endl;

    // Create a Student Object from JSON
    Student b;

    b = second_j;

    b.printProfile();

    return 0;
    
}