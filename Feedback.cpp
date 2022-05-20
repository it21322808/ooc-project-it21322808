#include "Feedback.h"

Feedback::Feedback(int fbNo, string fb_) {
    feedbackNo = fbNo;
    feedback = fb_ ;
}

string Feedback::getFeedback() {
    return feedback;
}

void Feedback::displayFeedback() {

}