#ifndef PERSON_H
#define PERSON_H

#include <string>
using namespace std;
class person{
    private:
        string lastName;
        string firstName;
        float hoursWorked;
        float payRate;
    public:
        person(string firstN, string LastN, float pay, float hours);
        void setLastName(string lName);
        string getLastName();
        void setFirstName(string fName);
        string getFirstName();
        void setPayRate(float rate);
        float getPayRate();
        void setHoursWorked(float hours);
        float getHoursWorked();
        float totalPay();
        string fullName();
};
#endif // end person.h