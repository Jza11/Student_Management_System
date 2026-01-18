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


void Student::deleteCourse(std::string course_name){
    courses.erase(course_name);
}

void Student::addCourse(std::string course, float grade){
    courses[course] = grade;
}

void Student::printProfile() const {
    std::cout << "Student Name: " << name << std::endl;
    std::cout << "Student ID: " << student_id << std::endl;
    std::cout << "Courses Enrolled: " << std::endl;
    for (const auto& course : courses) {
        std::cout << course.first << ": " << course.second << std::endl; 
    }
}