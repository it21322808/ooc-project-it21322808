#include <iostream>
#include <cstring>
#include "User.h"
#include "Account.h"
#include "Material.h"
#include "Project.h"
#define SIZE 2
using namespace std;

class Admin : public User {
    private:
        string adminID;
        string position;
        Account *Acc;   
        Project *project[SIZE];
        int noOfProjects;
        Material *material[SIZE];
        int noOfMaterials;
    public:
        Admin(string uname, string aid, string a_pos, string uadd, string unum, string umail, Account *a);
        void manageProject(Project *pro);
        void addMaterial(Material *mat);
        void displayDetails();
};