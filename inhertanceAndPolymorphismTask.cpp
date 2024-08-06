#include <iostream>
#include <string>
using namespace std;
/*
Code:

#include <iostream>
#include<algorithm>
using namespace std;

class Student {
public:
    string Name;
    int Age;
    char Gender;

    virtual void study() = 0;// a pure virtual method
};
class ProgrammingStudent : public Student {
    void study() {
        cout << "Pracice programming" << endl;
   }
};

class ArtStudent : public Student {
    void study() {
        cout << "Pracice painting" << endl;
    }
};

class MusicStudent : public Student {
    void study() {
        cout << "Pracice singing and play an instrument" << endl;
    }
};

int main()
{
    // Create an array of pointers to Student
    Student* students[3];

    // Assign new derived class objects to the elements
    students[0] = new ProgrammingStudent();
    students[1] = new ArtStudent();
    students[2] = new MusicStudent();

    // Use the students
    for (int i = 0; i < 3; i++) {
        students[i]->study();  //watch the magic happen
    }

    // When done, delete the dynamically allocated students
    for (int i = 0; i < 3; i++) {
        delete students[i];
    }

    cin.get();
}

*/

/*class Student
{
private:
    string name;
    string department;

public:
    Student(string ne, string dp)
    {
        name = ne;
        department = dp;
    }

    void setName(string Name)
    {
        name = Name;
    }

    string getName()
    {
        return name;
    }

    void setDepartment(string Dp)
    {
        department = Dp;
    }

    string getDepartment()
    {
        return department;
    }

    virtual void printStudentDetails(Student &st) = 0;

    friend ostream &operator<<(ostream &Cout, Student &st);
};

class programmingStudent : public Student
{
public:
    programmingStudent(string ne, string dp) : Student(ne, dp)
    {
    }

    void printStudentDetails(Student &st) override
    {
        cout << st << endl;
        cout << "practicing programming";
    }
};
class musicStudent : public Student
{
public:
    musicStudent(string ne, string dp) : Student(ne, dp)
    {
    }

    void printStudentDetails(Student &st) override
    {
        cout << st << endl;
        cout << "practicing music";
    }
};
class artStudent : public Student
{
public:
    artStudent(string ne, string dp) : Student(ne, dp)
    {
    }

    void printStudentDetails(Student &st) override
    {
        cout << st << endl;
        cout << "practicing paint";
    }
};
ostream &operator<<(ostream &Cout, Student &st)
{
    Cout << "Name: " << st.getName() << endl;
    Cout << "Department: " << st.getDepartment() << endl;

    return Cout;
}

int main()
{
    const Student &students[3];

    return 0;
}*/
class Student
{
public:
    virtual void study() = 0;
};
class ProgramminStudent : public Student
{
public:
    void study()
    {
        cout << "Studying programming now...";
    }
};
class ArtStudent : public Student
{
public:
    void study()
    {
        cout << "Studying paint now...";
    }
};
class MusicStudent : public Student
{
public:
    void study()
    {
        cout << "Studying music now...";
    }
};
int main()
{
    Student *student[3];
    student[0] = new ProgramminStudent();
    student[1] = new ArtStudent();
    student[2] = new MusicStudent();
    for (int i = 0; i < 3; i++)
    {
        student[i]->study();
        cout << endl;
    }
    return 0;
}
