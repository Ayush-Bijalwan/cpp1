#include <iostream>
#include <string>
using namespace std;

template <typename T>
class Student {
    T name;
    int age;
    string course;
    string department;

public:
    Student(T n, int a, string c, string d) : name(n), age(a), course(c), department(d) {}
    void display() {
        cout << "Name: " << name << ", Age: " << age << ", Course: " << course << ", Department: " << department << endl;
    }
};

int main() {
    Student<string> student("Ayush", 20, "B.Tech", "Technology");
    student.display();
    return 0;
}
