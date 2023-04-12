#include<iostream>

using namespace std;

class A{
	public : 
		int a = 35;
	private : 
		int b = 435;
	protected : 
		int c = 45;
};
class B : public A{
	
	public : 
		void display(){
		cout<<"A : "<<a<<endl;
		//cout<<"B : "<<b<<endl;
		cout<<"C : "<<c<<endl;
	}
};

int main(){
	B obj;
	obj.display();
	return 0;
}
