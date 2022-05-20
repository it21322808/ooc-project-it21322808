#include <iostream>
#include <cstring>
using namespace std;

class Account {
	private:
	    string username;
	    string password;
	public:
	    Account(string u_name, string pswd);
	    void displayAccount();
};