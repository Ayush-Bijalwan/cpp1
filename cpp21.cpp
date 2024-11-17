#include <iostream>
#include <string>
using namespace std;

template <typename T>
struct Student {
    T name;
    int age;
    string course;
    string department;

    void display() {
        cout << "Name: " << name << ", Age: " << age << ", Course: " << course << ", Department: " << department << endl;
    }
};

int main() {
    Student<string> student{"Ayush", 20, "B.Tech", "Technology"};
    student.display();
    return 0;
}