
#include "Course.h"

//returns the class name
string Course::getCourseName() const{
    
    return courseName;
};

//Adds student if theres enough room
//creates an array with twice as much capacity if not
void Course::addStudent(const string& name){
    //adding a student
    if (capacity>numberOfStudents)
    {students[numberOfStudents] = name;
        numberOfStudents++;}
    // creating new array
    else
    {int newsize=capacity*2;
    string *newarray = new string[newsize];
        //copying data over
    for (int i=0; i<capacity;i++)
        newarray[i]=students[i];
        // adding student
        students[capacity]=name;
    
    }

};
//dropping a student
void Course::dropStudent(const string& name){
  //looks for a matching student name
    for (int i=0; i<numberOfStudents;i++)
        if (name==students[i]){
            
            /// while loop shifts values down to prevent overriding exsisting students
            while (i<numberOfStudents){
                students[i]=students[i+1];
                i++;}
            //after shifts last cell is made blank
        students[numberOfStudents]="";
            //students in class is reduced by one
            numberOfStudents--;}
    
};

//returns the pointer students for a course
string * Course::getStudents() const{
    
    
    
    return students;
};

//returns the number of students in a class
int Course::getNumberOfStudents() const{
        return numberOfStudents;
};

//clears all the students in a class
void Course::clear(){
    for (int i=0; i<capacity;i++)
        students[i]="";
    
};

//deconstructor
Course::~Course(){
    delete[] students;

}