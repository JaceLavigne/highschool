#include <iostream>
#include <string>
using namespace std;

class Course{
  public:
  Course(string a, string b, string c, string d, string e):courseName(a), instructor(c), roomNumber(b), meetingTimes(d), textbookName(e)
  {
    cout<<"Name: "<<courseName<<endl;
    cout<<"Teacher: "<<instructor<<endl;
    cout<<"Room:"<<roomNumber<<endl;
    cout<<"Meeting Times: "<<meetingTimes<<endl;
    cout<<"Textbook Name: "<<textbookName<<endl;
  }
  string getName(){return courseName;}
  string getInstructor(){return instructor;}
  string getRoom(){return roomNumber;}
  string getTimes(){return meetingTimes;}
  string getTextbook(){return textbookName;}
  private:
  string courseName;
  string instructor;
  string roomNumber;
  string meetingTimes;
  string textbookName;
};

int main(){
  Course Geometry("Geometry 101", "Mr. Ask", "123", "All Day Every Day", "Geometry for Dummies");
}
