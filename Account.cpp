#include "Account.h"

Account::Account(string u_name, string pswd) {
	username = u_name;
	password = pswd;
}

void Account::displayAccount() {
	cout << "Username : " << username << endl
		 << "Password : " << password << endl;
}