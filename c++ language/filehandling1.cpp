#include<iostream>
#include<fstream>
using namespace std;
main(){
	char data[20];
	ofstream f1;
	f1.open("helllo.txt",ios::out);
	f1<<"hello world";
	f1.close();
	
	ifstream f2;
	f2.open("hello world",ios::in);
	f2.getline(data,20);
	cout<<"\n reading data from file="<<data;
	f2.close();
}
