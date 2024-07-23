#ifndef STUDENT_H_INCLUDED
#define STUDENT_H_INCLUDED
using namespace std;
#include <fstream>

class Student
{
    private:
        string name;
        string id;
        double gpa;
    public:
        Student(string, string, double);
        void setName(string Name);
        void setID(string ID);
        void setGPA(double GPA);
        string getName();
        string getID();
        double getGPA();
        bool operator < (Student&);
        void print();
};
Student::Student(string Name = " ", string ID = " ", double GPA = 0)
{
    setName(Name);
    setID(ID);
    setGPA(GPA);
}
void Student::setName(string Name)
{
    name = Name;
}
void Student::setID(string ID = " ")
{
    id = ID;
}
void Student::setGPA(double GPA = 0)
{
    gpa = GPA;
}
string Student::getName()
{
    return name;
}
string Student::getID()
{
    return id;
}
double Student::getGPA()
{
    return gpa;
}
void Student::print()
{
    cout << "Name: " << getName() << endl;
    cout << "ID: " << getID() << endl;
    cout << "GPA: " << getGPA() << endl;
}

bool Student::operator < (Student &studentObject)
{
    return (this -> name < studentObject.name);
}

#endif // STUDENT_H_INCLUDED
