#include <iostream>
using namespace std;

string title(float age, string gender);
main()
{
    float age;
    string gender;
    string lakab;

    cout << "Write your age :- ";
    cin >> age;
    cout << "Write your gender ( m or f ) :- ";
    cin >> gender;

   lakab= title(age, gender);
   cout<<"Hello! "<<lakab;
}

string title(float age, string gender)
{
    if (age < 16 && gender == "m")
    {
          return "Master";
    }

    if (age >= 16 && gender == "m")
    {
        return "Mr.";
    }

    if (age < 16 && gender == "f")
    {
        return "Miss";
    }

    if (age >= 16 && gender == "f")
    {
        return "Ms.";
    }
}