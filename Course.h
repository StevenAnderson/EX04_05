
#ifndef __EX04_05__Course__
#define __EX04_05__Course__

#include <iostream> 
using namespace std;

class Course{
private:
    //private data for Course class
    int numberOfStudents;
    string courseName;
    int capacity;
    //pointer to act as array
    string *students;
    
    
    
public:
    /// constructor for a Course
    Course(const string& courseName, int capacity){
        numberOfStudents=0;
        this->capacity=capacity;
        this->courseName=courseName;
        students= new string[capacity];
    }
    
    //deep copy course constructor
    Course(const Course&){
        students= new string(*students);
    }
    //deconstructor
    ~Course();
    
    
    ///functions for the Course class
    string getCourseName() const;
    void addStudent(const string& name);
    void dropStudent(const string& name);
    string * getStudents() const;
    int getNumberOfStudents() const;
    void clear ();
    
};

#endif
