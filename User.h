#include <iostream>
#include <cstring>
using namespace std;

class User {
    protected:
        string name;
        string address;
        string number;
        string mail;
    public:
        User(string uname, string uadd, string unum, string umail);
        virtual void displayDetails();
};