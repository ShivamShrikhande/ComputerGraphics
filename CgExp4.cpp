Lab Assignment 4
Write a C++ program that creates an output file, writes information 
to it, closes the file and open it again as an input file and read 
the information from the file.


#include <fstream>
#include <iostream>
using namespace std;


int main()
{
char name[30];
float cost;

cout<<"enter item name";
cin>>name;
cout<<"enter item cost";
cin>>cost;

ofstream outf("item");
outf<<"name ="<<name;
outf<<"\ncost ="<<cost;
outf.close();
    ifstream inf("item");
    inf.open("item");
    inf>>name;
    inf>>cost;
    cout<<"Item name is: = " <<name;
    cout<<"Item cost is: = " <<cost;
    inf.close();
    return 0;
}
