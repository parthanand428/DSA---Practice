#include <iostream>
#include <string>
using namespace std;

class Teacher {
    private:
        double salary;

    public:
        string name;
        string dept;
        string subject;
        //non-parameterized
        Teacher(){
            dept = "Computer Science";
        }

        //parameterized
        Teacher(string name, string dept, string subject, double salary){
            this->name = name;
            this->dept = dept;
            this->subject = subject;
            this->salary = salary;
        }

        //copy constructor
        Teacher(Teacher &orgObj){
            cout << "i am custom copy constructor...\n";
            this->name = orgObj.name;
            this->dept = orgObj.dept;
            this->subject = orgObj.subject;
            this->salary = orgObj.salary;
        }
        
        void changeDept(string newDept){
            dept = newDept;
        }
        //setter
        void setSalary(double s){
            salary = s;
        }
        //getter
        double getSalary(){
            return salary;
        }

        void getInfo(){
            cout << "name: " << name << endl;
            cout << "subject: " << subject << endl;
        }
};

class Account {
private:
    double balance;
    string password; //data hiding

public:
    string AccountId;
    string username;
};

class Student {
public:
    string name;
    double cgpa;

    Student(string name, double cgpa){
        this->name = name;
        this->cgpa = cgpa;
    }

    Student(Student &copy){
        cout << "hi i am a copy constructor\n";
        this->name = copy.name;
        this->cgpa = copy.cgpa;
    }

    void getInfo1(){
        cout << "name: " << name << endl;
        cout << "cgpa: " << cgpa << endl;
    }
};

int main(){
    Student s1("Rahul Kumar", 8.9);
    Student s2(s1);
    s2.getInfo1();
    return 0;
}