Lab Assignment 3
Creating a class which uses the concept of inheritance, displays data and data members and uses the concept of exception handling.

#include<string>
#include<iostream>
using namespace std;
class publication
{
 public:
string title;
float price;
void getdata()
{
cout<<"enter title"<<"\t";
cin>>title;
if(title.length()<=0)
throw title;
cout<<"enter price:"<<"\t";
cin>>price;
           if(price<=0.0)
        throw price;
         
}

};
class book:public publication
{
public:
int page_count;
void getPageCount()
{
try
{
getdata();
cout<<"\nenter page conut";
cin>>page_count;
if(page_count<0)
throw page_count;
else
display();
}
catch(...)
{
cout<<"invalid Data\n";
          setdefault();
display();

}

}
void display()
{
cout<<"Book details\n";
        cout<<"title is:"<<title<<"\t";
        cout<<"price is:"<<price<<"\t";
cout<<"page count="<<page_count<<endl;
}
void setdefault()
    {
      title="0";
price=0;
       page_count=0;
    }

};

class tape:public publication
{
 public:
float play_time;
void getPlayTime()
{
try
{
getdata();
cout<<"enter play time in minute";
cin>>play_time;
if(play_time<0.0)
throw play_time;
else
display();
        }
   catch(...)
{
cout<<"invalid Data\n";
          setdefault();
display();

}

}
void display()
{
cout<<"Audio caset details\n";
        cout<<"title is:"<<title<<"\t";
        cout<<"price is:"<<price<<"\t";
cout<<"play_time="<<play_time<<endl;
}
void setdefault()
    {
      title="0";
price=0;
       play_time=0;
    }

};

int main()
{
book b;
tape t;
b.getPageCount();
        t.getPlayTime();
return 0;
}




