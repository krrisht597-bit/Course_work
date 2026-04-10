#include<iostream>
using namespace std;
class area{
	public:
		int r;//data member
		 
		 // member function
		 
		void getradius () {
			cout<<"\n enter radius";
			cin>>r;
		}
		void areacircle(){
			cout<<"\n area of circle="<<(3.14*r*r);
		}
};
main(){
	area a1,a2;
	
	a1.getradius();
	a1.areacircle();
	
	a2.getradius();
	a2.areacircle();
}
