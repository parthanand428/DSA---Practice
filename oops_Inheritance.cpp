#include <iostream>
#include <string>
using namespace std;

class Person{
public:
    string name;
    int age;

    Person(){
        cout << "parent constructor..\n";
    }

    ~Person(){
        cout << "parent destructor..\n";
    }
};

class Student : public Person {
public:
    int rollno;

    Student(){
        cout << "child constructor..\n";
    }

    void getInfo() {
        cout << "name: " << name << endl;
        cout << "age: " << age << endl;
        cout << "rollno: " << rollno << endl;
    }

    ~Student(){
        cout << "child destructor..\n";
    }
};

int main() {
    Student s1;
    s1.name = "Aman Anand";
    s1.age = 21;
    s1.rollno = 56;

    s1.getInfo();
    return 0;
}