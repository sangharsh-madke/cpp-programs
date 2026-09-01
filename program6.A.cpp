#include <iostream>
using namespace std;

// base class
class student
{
    protected:
    string name;
    int rollno;

    public:
    void getstudentdetails()
    {
        cout<<"enter student name :";
        cin>>name;

        cout<<"enter roll number :";
        cin>>rollno;

    }
    void displaystudentdetails()
    {
        cout<<"\nstudent name:"<<name <<endl;
        cout<<"roll number :"<<rollno <<endl;

    }
};
// derived class from student
class studentexam : public student
{
    protected:
    float marks1, marks2, marks3;
    public:
    void getmarks()
    {
        cout<<"enter marks of subject 1:";
        cin>>marks1;

        cout<<"enter marks of subject 2:";
        cin>>marks2;

        cout<<"entyer marks of subject 3 :";
        cin>>marks3;
    }

};
// derived class from studentexam
class result : public studentexam
{
    private:
    float total, percentage;
    public:
    void calculateresult()
    {
        total = marks1 + marks2 + marks3;
        percentage = total /3;

    }
    void displayresult()
    {
        displaystudentdetails();
        cout<<"total marks:"<<total<<endl;
        cout<<"percentage:"<<percentage <<"%"<<endl;

    }
};
int main()
{
    result r;

    r.getstudentdetails();
    r.getmarks();
    r.calculateresult();
    r.displayresult();

    return 0;
}