// #include <iostream>
// using namespace std;

// class Person
// {
//     int age;

// public:
//     Person()
//     {
//         cin >> age;
//         if (age<0){
//             age=0;
//             cout<<"Age is not valid, setting age to 0."<<endl;
//             yearPasses();
//         }
//     }
//     void amIOld(){
//         if(age<13)
//             cout<<"You are young."<<endl;

//         else if(age>=13 && age<18)
//             cout<<"You are a teenager."<<endl;

//         else
//             cout<<"You are old.";
//     }
//     void yearPasses(){
//         age = age+3;
//         amIOld();
//     }

// };

// int main(){
//     int T;
//     cin>>T;
//     while(T>0){
//         Person p;
//         p.amIOld();
//         p.yearPasses();

//     }
// }

#include <iostream>
using namespace std;

class Person
{

    int age;

public:
    Person(int age)
    {
        // cin >> age;
        if (age < 0)
        {
            age = 0;
            cout << "Age is not valid, setting age to 0." << endl;
            yearPasses();
        }
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
        age = age + 1;
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
        p.amIOld();

        cout << '\n';
    }

    return 0;
}