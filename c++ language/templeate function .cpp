#include<iostream>
using namespace std;
template <typename T>
T calc (T a, T b){
	cout<<"\n add="<<a+b;
	cout<<"\n sub="<<a-b;
	cout<<"\n multi="<<a*b;
	cout<<"\n divide="<<a/b;
}
main(){
	cout<<"\n simple calc for int data type";
	calc(12,3);
	cout<<"\n simple calc for float data type";
	calc(12.5,3.2);
}
