//Example 1: Write a C++ to define a structure.
#include<iostream>
#include<string>
using namespace std;

struct Person
{
    string name;
    int citNo;
    float salary;
};

int main()
{
    Person person1;
    person1.name = "Sammaul islam Siam";
    person1.citNo = 1878;
    person1.salary = 2500;
    cout<<"Name: "<< person1.name<<endl;
    cout<<"Citizenship No.: "<< person1.citNo<<endl;
    cout<<"Salary: "<< person1.salary;
    return 0;
}
