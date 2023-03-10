#include<bits/stdc++.h>

using namespace std;

class Person{
public:
    string name;
    Person *father, *mother;

    Person()
    {
        father = NULL;
        mother = NULL;
    }

    Person(string name, string f_name, string m_name)
    {
        this->name = name;
        father = new Person;
        father->name = f_name;
        mother = new Person;
        mother->name = m_name;
    }

    void print_info()
    {
        cout<<"Name : "<<name<<endl;
        cout<<"Fathers Name : "<<father->name<<endl;
        cout<<"Mothers Name : "<<mother->name<<endl;
    }

    ~Person()
    {
        cout<<"Called "<<endl;
        if(father!=NULL)
        delete father;
        if(mother!=NULL)
        delete mother;
    }
};

int main()
{
    Person p("A", "B", "C");
    p.print_info();
    return 0;
}
