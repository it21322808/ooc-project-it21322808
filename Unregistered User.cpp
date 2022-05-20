#include <iostream>
#include <cstring>
#include "User.h"

using namespace std;

class Unregistered_User : public User {
    public:
        Unregistered_User(string uname, string uadd, string unum, string umail);
        void registerDetails();
        void displayDetails();
};
