/** 

    Implementation file of the SMS class. 

    ---- Author ----
    Username: Jza11
    Email: josemiguelcaceb@gmail.com

*/

#include "sms.hpp"
#include "student.hpp"
#include <iostream>
#include <vector>
#include <string>
#include <nlohmann/json.hpp>
#include <fstream>

using json = nlohmann::json;

// Default constructor
sms::sms(){
    faculty = "N/A";
    year = 2026;
}

// Custom constructor of the class
sms::sms(std::string faculty, int year, std::vector<Student> current_students){
    this->faculty = faculty;
    this->year = year;
    this->current_students = current_students;
}

// Accessors
std::string sms::getFaculty() const {
    return faculty;
}

int sms::getYear() const {
    return year;
}

std::vector<Student> sms::getStudents() const {
    return current_students;
}

// Mutators 

void sms::changeYear(int new_year){
    year = new_year;
}

void sms::changeFaculty(std::string new_faculty){
    faculty = new_faculty;
}

void sms::changeStudents(std::vector<Student> new_students){
    current_students = new_students;
}

// Custom functions for this class
void sms::saveStudents(){
    
    std::string filename;
    std::cout << "Enter the name for the file without the JSON extension \n";
    std::cin >> filename;

    filename = filename.append(".json");

    // Array pf all students
    json db;
    db["faculty"] = getFaculty();
    db["students"] = json::array();

    for (int i=0; i<current_students.size(); i++){
        json s = current_students.at(i);
        db["students"].push_back(s);
    }

    std::ofstream file(filename);

    if (!file.is_open()){
        std::cerr << "Unable to open file\n";
        return;
    }

    file << db.dump(4);

    file.close();
}


