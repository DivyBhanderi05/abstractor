#include<iostream>

using namespace std;

class#include<iostream>

using namespace std;

class Math{
	public : 
	virtual void calculate () = 0;
};
class Abhi : public Math{
	
	public : 
	int r;
	
	void calculate (){
		
		cout<<"Enter radius of circle : ";
		cin>>r;
		cout<<"Area of circle : "<<3.14*r*r<<endl;
		
	}
	
};

int main(){
	Abhi obj;
	obj.calculate();
	
	return 0;
}
