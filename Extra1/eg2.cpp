/*
Assignment 6: Question 4 
*/
#include <iostream>
#include <string>
using namespace std;

class Student {
protected:
    string name;
    int rollNumber;
public:
    Student(string n, int r) {
        name = n;
        rollNumber = r;
    }
    virtual void display() = 0;
};

class Engineering : public Student {
private:
    int mathMarks;
    int physicsMarks;
    int chemistryMarks;
public:
    Engineering(string n, int r, int m, int p, int c) : Student(n, r) {
        mathMarks = m;
        physicsMarks = p;
        chemistryMarks = c;
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
    Medicine(string n, int r, int a, int p, int b) : Student(n, r) {
        anatomyMarks = a;
        physiologyMarks = p;
        biochemistryMarks = b;
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
    Science(string n, int r, int b, int c, int p) : Student(n, r) {
        biologyMarks = b;
        chemistryMarks = c;
        physicsMarks = p;
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
    Student* students[3];
    students[0] = new Engineering("John", 1001, 90, 85, 80);
    students[1] = new Medicine("Mary", 1002, 95, 85, 90);
    students[2] = new Science("Bob", 1003, 80, 90, 95);

    for (int i = 0; i < 3; i++) {
        cout<<"----------------------"<<endl;
        students[i]->display();
        //cout << endl;
        cout<<"----------------------"<<endl;
    }
    return 0;
}
