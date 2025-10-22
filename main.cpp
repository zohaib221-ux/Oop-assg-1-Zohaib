#include "student.h"

int main() {
    student s1;
    cout << "-----------TESTING DEFAULT CONSTRUCTOR--------" << endl;
    s1.get_value();
    s1.get_grade();
    cout << "-----TESTING PARAMETERIZED CONSTRUCTOR--------" << endl;

    student s2("Ali Raza", 21, "L1F24BSCS0001", 3.9);
    s2.get_value();
    s2.get_grade();
    cout << "-----------TESTING SETTERS & GETTERS----------" << endl;
    student s3;
    s3.set_name("ZARA KHAN");
    s3.set_age(23);
    s3.set_roll_no("L1F24BSDS0021");
    s3.set_cgpa(3.78);
    s3.get_name();
    s3.get_age();
    s3.get_roll_no();
    s3.get_cgpa();
    s3.get_grade();
    return 0;
}