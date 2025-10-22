#include "student.h"
student::student() {

    name = "Muhammad Zohaib";
    age = 20;
    roll_no = "L1F24BSDS0040";
    cgpa = 3.83;
}
student::student(string n, int a, string r, float c) {
    name = n;
    age = a;
    roll_no = r;
    cgpa = c;
}
student::~student() {
    cout << "DESTUCTOR IS CALLED" << endl;
}
void student::set_name(string n) {
    name = n;
} 
void student::set_age(int a) {
    age = a;
}
void student::set_roll_no(string r) {
    roll_no = r;
}
void student::set_cgpa(float c) {
    cgpa = c;
}

void student::get_name() {
    cout << " NAME : " << name << endl;
}
void student::get_age() {
    cout << " AGE : "<<age << endl;
}
void student::get_roll_no() {
    cout << " ROLL_NO : " << roll_no << endl;
}
void student::get_cgpa() {
    cout << " CGPA : " << cgpa << endl;
}

void student::get_value() {
    cout << "_______________________________________________" << endl;
    cout << "Name :" << name << endl;
    cout << "Age :" << age << endl;
    cout << "Roll_no :" << roll_no << endl;
    cout << "CGPA :" << cgpa << endl;
}
void student::get_grade() {
    if (cgpa >= 3.8 && cgpa<=4) {
        cout << "GRADE : A " << endl;
    }else if (cgpa >= 3.5) {
        cout << "GRADE : B+ " << endl;
    }
    else if (cgpa >= 3.3) {
        cout << "GRADE : B " << endl;
    }
    else if (cgpa >= 2.5) {
        cout << "GRADE : C+ " << endl;
    }
    else if (cgpa >= 2.0) {
        cout << "GRADE : C " << endl;
    }
    else if (cgpa >= 1.8) {
        cout << "GRADE : D+ " << endl;
    }
    else if (cgpa >= 0) {
        cout << "GRADE : F " << endl;
    }
}