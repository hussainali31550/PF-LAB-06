#include <iostream>
using namespace std;

string speedinfo(float speed);
main()
{
    float speed;
    string answer;
    cout << "Enter your speed buddy :- ";
    cin >> speed;

    answer = speedinfo(speed);
    cout <<"Your speed is : "<< answer;
}

string speedinfo(float speed)
{
    if (speed <= 10)
    {
        return "Slow";
    }
    if (speed > 10 && speed <= 50)
    {
        return "Average";
    }
    if (speed > 50 && speed <= 150)
    {
        return "Fast";
    }
    if (speed > 150 && speed <= 1000)
    {
        return "Ultra-Fast";
    }
    if (speed > 1000)
    {
        return "Extremely Fast";
    }
}
