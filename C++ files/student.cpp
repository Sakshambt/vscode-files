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
        return;
    }

    student(int a)
    {
        cout << "constructor 2 call:" << endl;
        rollno = a;
    }

    student(int a, int b)
    {
        cout << "constructor 3 call:" << endl;
        rollno = a;
        age = b;
    }

    display()
    {
        cout << age << " " << rollno << endl;
    }
}