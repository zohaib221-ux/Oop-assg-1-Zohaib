#pragma once
#include<iostream>
using namespace std;
class student {
private:
    string name;
    int age;
    string roll_no;
    float cgpa;
public:
    student();                                     //DEFAULT CONSTRUCTOR
    student(string n, int a, string r, float c);   //PARAMETERIZED CONSTRUCTOR
    ~student();                                    //DESTRUCTOR
    void set_name(string n);              //SETTER
    void set_age(int a);                  //SETTER
    void set_roll_no(string r);           //SETTER
    void set_cgpa(float c);               //SETTER
    void get_name();           //GETTER
    void get_age();            //GETTER
    void get_roll_no();        //GETTER
    void get_cgpa();           //GETTER
    void get_grade();
    void get_value();
};