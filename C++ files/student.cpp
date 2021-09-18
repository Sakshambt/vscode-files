class student
{
public:
    int rollno;

private:
    int age;

public:
    student()
    {
        cout << "constructor 1 call:" << endl;
    }

    student(int rollno)
    {
        cout << "constructor 2 call:" << endl;
        rollno = rollno;
    }

    student(int a, int b)
    {
        cout << "constructor 3 call:" << endl;
        rollno = a;
        age = b;
    }

    void display()
    {
        cout << age << " " << rollno << endl;
    }
};