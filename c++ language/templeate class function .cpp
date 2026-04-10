#include<iostream>
using namespace std;
int i,j;
template <class T>
class sort{
	public:
		T a[5],temp;
		sort(){
			for(i=0;i<5;i++){
			cout<<"\n enter element of "<<i<<"=";
			cin>>a[i];
		}
	}
void sortarray(){
	for(i=0;i<5;i++){
	for(j=i+1;j<5;j++){
		if (a[i]>a[j]){
		temp=a[i];
		a[i]=a[j];
		a[j]=temp;
	}
	}
}
}
void printarray(){
	for(i=0;i<5;i++){
		cout<<"\n i="<<i<<"="<<a[i];
	}
}
};
main(){
	sort <int>s1;
	s1.sortarray();
	s1.printarray();
	
	sort<char>s2;
	s2.sortarray();
	s2.printarray();
}

