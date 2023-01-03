//Implement a class Complex which represents the Complex Number data type. Implement the 
//following
//1. Constructor (including a default constructor which creates the complex number 0+0i).
//2. Overload operator+ to add two complex numbers.
//3. Overload operator* to multiply two complex numbers.
//4. Overload operators << and >> to print and read Complex Numbers

#include<iostream>
using namespace std;

class complex{
	private:
		double real;       
 		double img;
 	
 	public:
 		complex(){
		 	real = 0;
 			img = 0;
		 }	// default constructor
 		
 		// take input for real and imag numbers
 		void input(){
 			cout<<"Enter real and imaginary part respectively:";
 			cin>>real;
 			cin>>img;
		 }
		 
		 complex operator + (complex c2){
		 	complex temp;
		 	temp.real=real+c2.real;
		 	temp.img=img+c2.img;
		 	return temp;
		 }
		 
		 complex operator * (complex c2){
		 	complex temp;
		 	temp.real=real*c2.real;
		 	temp.img=img*c2.img;
		 	return temp;
		 }
		 
		 void output(){
		 	if(img<0)
		 		cout<<"\nOutput complex number:"<<real<<img<<"i";
		 	else
		 		cout<<"\nOutput complex number :"<<real<<"+"<<img<<"i";
		 }
};

int main(){
	complex c1,c2,result;
	
	cout<<"Enter first complex number:\n";
	c1.input();
	
	cout<<"Enter second complex number:\n";
	c2.input();
	
	result=c1+c2;
	result.output();
	
	result=c1*c2;
	result.output();
		
	return 0;
}
