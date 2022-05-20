#include <iostream>
#include <cstring>
#include "Admin.h"
#include "Employee.h"

using namespace std;

class Material{
	private :
		string materialCode;
	    string materialName;
	    Admin *Adm;
	    Employee *Emp;
	public :
		Material(string mCode, string mName, Admin *a, Employee *e);
		void displayMaterial();
		~Material();
};