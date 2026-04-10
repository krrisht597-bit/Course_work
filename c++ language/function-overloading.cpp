#include<iostream>
using namespace std;
class maths{
	public:
		void add(int a , int b){
			cout<<"\n adittion of"<<a<<"and"<<b<<"="<<a+b;
		}
void add(float x , float y , float z){
	cout<<"\n adittion of float"<<x+y+z;
}
};
main(){
	maths m1;
		m1.add(100,200);
	m1.add(1.2,2.1, 3.1);
}
