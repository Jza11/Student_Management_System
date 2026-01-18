#include "student.hpp"
#include <map>
#include <string>

int main(){
    // Create a Student object
    Student s1 = Student("Jane Doe", "A1234");

    // Add courses 
    s1.addCourse("Mathematics", 95.0);
    s1.addCourse("Physics", 88.5);

    s1.printProfile();
}