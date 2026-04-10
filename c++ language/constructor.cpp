#include<iostream>
using namespace std;
class parent{
public:
	parent(){
		cout<<"\n parent class con.called";
	}
	parent (int r){
		cout<<"\n area of circle="<<(3.14*r*r);
	}
};
class child:public parent{
	public:
		child(){
			cout<<"\n child class con.called";
		}
		child(int l , int b , int r):parent(r){
			cout<<"\n area of rect="<<(l*b);
		}
};
main(){
	child c1;
	child c2(12,34,15);
}
