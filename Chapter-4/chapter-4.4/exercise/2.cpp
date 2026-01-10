#include <bits/stdc++.h>
using namespace std;

class Person {
    string name;
    string phone;

    public:

   void setInformation( const string &name, const string &phone) {
       this->name = name;
       this->phone = phone;
   }

    void display() {

    cout<<"Name: "<<name<<endl;
    cout<<"Phone: "<<phone<<endl;

   }

};

int main() {

    Person *p1 = new Person;

 Person *p2 = new Person;
    Person *p3 = new Person;

   p1->setInformation("Rohim", "0193423425");
    p2->setInformation("Korim", "01773423425");
    p3->setInformation("Jorim", "01883423425");

    p1->display();
    p2->display();
    p3->display();

    delete p1;
    delete p2;
    delete p3;
    return 0;


}
