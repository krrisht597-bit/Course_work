#include<iostream>
#include<fstream>
using namespace std;
main(){
	int enroll;
	char name[20];
	ofstream f1;
	f1.open("user.txt",ios::out);
	cout<<"\n enter enroll and name";
	cin>>enroll>>name;
	f1<<enroll<<"\t"<<name;
	f1.close();
	
	ifstream f2;
	f2.open("user.txt",ios::in);
	f2>>enroll>>name;
	cout<<"\n reading from file="<<enroll<<"\t name="<<name;
	f2.close();
}
