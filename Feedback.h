#include <iostream>
#include <cstring>

using namespace std;

class Feedback {
private:
    int feedbackNo;
    string feedback;
public:
    Feedback(int fbNo, string fb_);
    string getFeedback();
    void displayFeedback();
};