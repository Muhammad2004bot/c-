#include <iostream>
using namespace std;

struct Student {
    string name;
    int age;
};

int main() {
    Student s[3];
    for(int i=0; i<3; i++) {
        cout << "Student " << i+1 << " nomi: ";
        cin >> s[i].name;
        cout << "Yoshi: ";
        cin >> s[i].age;
    }

    cout << "\nStudentlar ro'yxati:\n";
    for(int i=0; i<3; i++)
        cout << s[i].name << " - " << s[i].age << " yosh\n";

    return 0;
}
