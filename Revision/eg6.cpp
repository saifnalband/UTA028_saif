/*
An Exerise of 
    -   inheritence
    -   pure virtual function
    -   Assignment 6: Question 4 
*/
#include <iostream>
#include <string>
using namespace std;

class Student {
protected:
    string name;
    int rollNumber;
public:
    /*
    1. Create a Student paramterized contructors 
    initize name and rollNumber
    */
    
    // 2. create/declare a pure virtaul function 'display'
    
};

class Engineering : public Student {
private:
    int mathMarks;
    int physicsMarks;
    int chemistryMarks;
public:
    /*
    3. Contructors for Engineering  
    subjcts marks for mathMarks, physicsMarks, chemistryMarks
    call base class contructor pasing name & rollNo
    */
    Engineering(){

    }

    void display() {
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Maths Marks: " << mathMarks << endl;
        cout << "Physics Marks: " << physicsMarks << endl;
        cout << "Chemistry Marks: " << chemistryMarks << endl;
    }
};

class Medicine : public Student {
private:
    int anatomyMarks;
    int physiologyMarks;
    int biochemistryMarks;
public:
    /*
    4. Contructors for Medicine 
    subjects marks for biochemistryMarks, anatomyMarks, physiologyMarks
    call base class contructor pasing name & rollNo
    */
    Medicine(){

    }
    void display() {
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Anatomy Marks: " << anatomyMarks << endl;
        cout << "Physiology Marks: " << physiologyMarks << endl;
        cout << "Biochemistry Marks: " << biochemistryMarks << endl;
    }
};

class Science : public Student {
private:
    int biologyMarks;
    int chemistryMarks;
    int physicsMarks;
public:
    /*
    5. Contructors for Science 
    subjects marks for biolodyMarks, chemistryMarks, physicsMarks
    call base class contructor pasing name & rollNo
    */
    Science(){

    }
    void display() {
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Biology Marks: " << biologyMarks << endl;
        cout << "Chemistry Marks: " << chemistryMarks << endl;
        cout << "Physics Marks: " << physicsMarks << endl;
    }
};

int main() {
    // array pointer of objects static/ dynamic initilzation for Student size 3
    Student* students[3];
    // 6. call Engineering, Medicince and Scince parametried contructors
    

    // 7. loop using pointers to display the marks of each student 
    
    return 0;
}
