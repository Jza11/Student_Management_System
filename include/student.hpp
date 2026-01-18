#ifndef student_HPP
#define stdudent_HPP

#include <string>
#include <map>

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

        void deleteCourse(std::string course_name);

        void addCourse(std::string course_name, float grade);


        void printProfile() const;
        
};
#endif


