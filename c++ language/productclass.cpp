#include<iostream>
using namespace std;
class product{
	private:
		int pid,price;
		char pname[20];
		// member function
		public:
			void getproduct(){
				cout<<"\n enter pid";
				cin>>pid;
				cout<<"\n enter pname";
				cin>>pname;
				cout<<"\n enter price";
				cin>>price;
			}
			void showproduct(){
				cout<<"\n pid="<<pid;
				cout<<"\n pname="<<pname;
				cout<<"\n price="<<price;
		}
};
main(){
	product p1;
	p1.getproduct();
	p1.showproduct();
}

