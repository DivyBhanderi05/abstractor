#include<iostream>

using namespace std;

class Parent{
	public : 
		virtual void display(){
			
			cout<<"Old"<<endl;
		}
};
class Child : public Parent{
	
	public : 
		void display(){
			
			cout<<"Young"<<endl;
		}
	
};

int main(){
	Parent obj1 , *obj2;
	Child obj3;
	
	obj2 = &obj3;
	obj2->display();
	obj1.display();
	
	return 0;
}
