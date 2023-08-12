
#include <iostream>
using namespace std;

class Person
{


public:
    int age;
    Person(int intitalAge)
    {
        // cout<<age<<endl;
        // cin >> age;
        if (intitalAge < 0)
        {
            age = 0;
            cout << "Age is not valid, setting age to 0." << endl;
            yearPasses();
        }
        else 
            age = intitalAge;
    }
    void amIOld()
    {
        if (age < 13)
            cout << "You are young." << endl;

        else if (age >= 13 && age < 18)
            cout << "You are a teenager." << endl;

        else
            cout << "You are old." << endl;
    }
    void yearPasses()
    {
        ++age;
        // cout<<age;
    }
};

int main()
{
    int t;
    int age;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> age;
        Person p(age);
        p.amIOld();
        for (int j = 0; j < 3; j++)
        {
            p.yearPasses();
        }
        // cout<<p.age;
        p.amIOld();

        cout << '\n';
    }

    return 0;
}
