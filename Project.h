#include <iostream>
#include <cstring>
#include "Admin.h"
#include "Employee.h"
#include "Material.h"
#define SIZE 2
using namespace std;

class Project {
   private:
   	  string projectID;
	  string projectType;
      Material *mat[SIZE]; // Aggregation Relationship
      int noOfEmployees;
	  Employee *employee[SIZE];
	  Admin *Adm;
   public:
      Project(string projID, string pType, Admin *a);
      void addMaterial(Material *mat1, Material *mat2);
      void addEmployees(Employee *emp);
      void displayProject();
      ~Project();
};