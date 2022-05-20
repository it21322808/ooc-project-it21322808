#include <iostream>
#include <cstring>
#include "User.h"
#include "Account.h"
#include "Project.h"
#include "Material.h"
#include "Feedback.h"
#define SIZE 2
using namespace std;

class Employee : public User {
    private:
        string employeeID;
        string role;
        string feedback;
        Account *Acc;     
		Project *project;    
		Material *material[SIZE];
        int noOfMaterials;        
    public:
        Employee(string uname, string eid, string erole, string uadd, string unum, string umail, Account *a, Project *pro);
        void giveFeedbacks(Feedback *f);
        void requestMaterial(Material *mat);
        void displayDetails();
};