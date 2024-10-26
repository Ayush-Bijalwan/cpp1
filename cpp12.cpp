#include <iostream>
using namespace std;

class Details;

class Student {
    string name;
    int age;
public:
    Student(string n, int a) : name(n), age(a) {}
    friend void displayDetails(const Student& s, const Details& d);
};

class Details {
    string department, course;
public:
    Details(string dept, string crs) : department(dept), course(crs) {}
    friend void displayDetails(const Student& s, const Details& d);
};

void displayDetails(const Student& s, const Details& d) {
    cout << "Student Name: " << s.name << endl;
    cout << "Age: " << s.age << endl;
    cout << "Department: " << d.department << endl;
    cout << "Course: " << d.course << endl;
}

int main() {
    Student student("Alice", 20);
    Details details("Computer Science", "B.Tech");
    displayDetails(student, details);
    return 0;
}
