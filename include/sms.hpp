#ifndef sms_HPP
#define sms_HPP

#include <iostream>
#include <string>
#include <vector> 
#include "student.hpp"
#include <nlohmann/json.hpp>

using json = nlohmann::json;


class sms {
    private:
    /*
    Each sms (Student Management System) is related to a given faculty, year, and
    the amount of students currently registered. 
    */
        std::string faculty;
        int year; 
        std::vector<Student> current_students;
    
    public:
        // Default constructor of the class. 
        sms();
        // Custom constructor
        sms(std::string faculty, int year, std::vector<Student> current_students); 

        // Accessors of the class 
        int getYear() const;

        std::string getFaculty() const;

        std::vector<Student> getStudents() const; 

        //Mutators of the class 
        void changeYear(int new_year);

        void changeFaculty(std::string new_faculty);

        void changeStudents(std::vector<Student> new_students);

        // Custom functions of the class 
        void saveStudents();

        void editStudentInfo(std::string student_name);

        void deleteStudent(std::string student_name);

}
#endif