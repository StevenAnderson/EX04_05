#include "Course.h"
int main(){
    //Creates a course
    Course c1("Comp Sci", 5);
    //add three students
    c1.addStudent("John");
    c1.addStudent("David");
    c1.addStudent("Kyle");
    
    //drops a student
    c1.dropStudent("David");
    
    ///displays the names of students in class
    string *students=c1.getStudents();
    for( int i=0; i<=c1.getNumberOfStudents();i++)
        cout<< students[i]<< " ";
    
    
    return 0;
    
}