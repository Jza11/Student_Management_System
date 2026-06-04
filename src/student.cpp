/** 

    Implementation of the Student class. 

    ---- Author ----
    Username: Jza11
    Email: josemiguelcaceb@gmail.com


*/


#include "student.hpp"
#include <map>
#include <string>
#include <iostream>
#include <nlohmann/json.hpp>


using json = nlohmann::json;

// Default constructor of the class 
Student::Student(){
    name = "John Doe";
    student_id = "000000";
    courses = {};
}

// Custom constructor of the class
Student::Student(std::string name, std::string student_id){
    this->name = name;
    this->student_id = student_id;
    courses = {}; 
}

// Accessor methods
std::string Student::getName() const {
    return name; 
}

std::string Student::getStudentID() const {
    return student_id;
}

std::map<std::string, float> Student::getCourses() const {
    return courses;
}


// Mutator methods
void Student::set_Name(std::string name){
    this->name = name;
}

void Student::set_student_id(std::string student_id){
    this->student_id = student_id;
}

void Student::set_courses(std::map<std::string, float> courses){
    this->courses = courses;
}


void Student::deleteCourse(std::string course_name){
    courses.erase(course_name);
}

void Student::addCourse(std::string course, float grade){
    courses[course] = grade;
}

void Student::printProfile() const {
    std::cout << "Student ID: " << student_id << std::endl;
    std::cout << "Student Name: " << name << std::endl;
    std::cout << "Courses Enrolled: " << std::endl;
    for (const auto& course : courses) {
        std::cout << course.first << ": " << course.second << std::endl; 
    }
}

//Modifications to the from_json and to_json functions from nlohmann
void to_json(json& j, const Student& a){
    j = {
        {"id", a.getStudentID()},
        {"name", a.getName()},
        {"courses", a.getCourses()}
    };
};

void from_json(const json& j, Student& a){
    a.set_student_id(j.at("id").get<std::string>());
    a.set_Name(j.at("name").get<std::string>());
    a.set_courses(j.at("courses").get<std::map<std::string, float>>());    
};