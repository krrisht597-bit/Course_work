#include<iostream>
using namespace std;
class parent{
	public:
		void dispaly(){
			cout<<"\n parent class display method called:";
		}
};
class child : public parent{
	public:
		void display(){
			cout<<"\n child class dispaly method called :";
		}
};
main(){
	child c1;
	c1.dispaly();
}
