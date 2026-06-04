#ifndef student_HPP
#define student_HPP

#include <map>
#include <string>
#include <iostream>
#include <nlohmann/json.hpp>

using json = nlohmann::json;


/**
    ---- Description ---- 
    Class to define the student object inside the system 

    ---- Author ----
    Username: Jza11
    Email: josemiguelcaceb@gmail.com

*/

class Student {
    private: 
        // Attributes of the class
        std::string name;
        std::string student_id; 
        std::map<std::string, float> courses;

    
    public: 
        // Default constructor of the class 
        Student();

        // Custom constructor of the class
        Student(std::string name, std::string student_id);

        // Accessor methods
        std::string getName() const;

        std::string getStudentID() const;

        std::map<std::string, float> getCourses() const;

        // Mutator methods 
        void set_Name(std::string name);

        void set_student_id(std::string student_id);

        void set_courses(std::map<std::string, float> courses);

        void deleteCourse(std::string course_name);

        void addCourse(std::string course_name, float grade);

        void printProfile() const;
        
};

// Modifications to the nlohmann JSON libraries
void to_json(json& j, const Student& a);

void from_json(const json& j, Student& a);

#endif


