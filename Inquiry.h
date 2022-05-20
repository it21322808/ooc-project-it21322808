#include <iostream>
#include <cstring>

using namespace std;class Inquiry {
    private:
        string inquiryID;
        string inquiry;
    public:
        Inquiry(string i_id, string inq);
        string addInquiry();
        void displayInquiry();
};