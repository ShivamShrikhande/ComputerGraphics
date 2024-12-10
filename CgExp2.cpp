Lab Assignment 2
Personnel information system using constructor, destructor, static member functions, friend class, this pointer, inline code and dynamic memory allocation.

#include <iostream>
using namespace std;
class info
{
    int roll_no;
    public:
    info()
    {
    roll_no=1;
}
    ~info()
    {
    cout<<"\ndestructor called from info class\n";
}
    info(info &i)
    {
this->roll_no=i.roll_no;
}
    friend class student;
};

class student
{
   string name; 
   public:
   student()
   {
       name="Jishu";
   }
   ~student()
    {
    cout<<"\ndestructor called from student class\n";
}
    student(student &s)
    {
this->name=s.name;
}
    void create(info &i)
    {
    cout<<"\nEnter your name";
    cin>>name;
    cout<<"Enter your roll number\n";
    cin>>i.roll_no;
}
    void display(info &i)
    {
    cout<<"\nYour name  "<<name<<endl;
    cout<<"\nYour roll number  "<<i.roll_no<<endl;
}
    static int cnt;
    inline static void objcount()
    {
    cnt++;
}
    inline static void objcountshow()
    {
    cout<<cnt;
}
};
int student::cnt;

int main() 
{
   
    cout<<"\nDefault constructor\n";
    info in1;
    student st1;
    st1.display(in1);
    cout<<"+++++++++++++++++++++++++++++++++++++";
    cout<<"\nCreate database and Display database";
    int n;
    cout<<"\nEnter number of students details\n";
    cin>>n;
    info *i1=new info[n];
    student *s1=new student[n];
    cout<<"\nCreate database\n";
    for(int k=0;k<n;k++)
    {
        s1[k].create(i1[k]);
        student::objcount();
    }
    cout<<"+++++++++++++++++++++++++++++++++++++";
    cout<<"\nTotal number of object created  ";
    student::objcountshow();
    cout<<endl<<"+++++++++++++++++++++++++++++++++++++";
    cout<<"\nDisplay database\n";

    for(int k=0;k<n;k++)
    {
        s1[k].display(i1[k]);
    }
    cout<<"+++++++++++++++++++++++++++++++++++++";
    cout<<"\nCopy constructor\n";
    info in2;
    student st2;
    st2.create(in2);
    student st3(st2);
    info in3(in2);
    cout<<"+++++++++++++++++++++++++++++++++++++";
    cout<<"\nCopy constructor\n";
    st3.display(in3);
    cout<<"+++++++++++++++++++++++++++++++++++++";
    return 0;
}













