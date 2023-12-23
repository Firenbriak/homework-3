#include <iostream>

using namespace std;

   int main() {
    double x, tax = 0;
 
      cout<<"enter the salary";
      cin>>x;
 
      if(x<6000000){
	    tax = 0;
     }
	 else if (x>=6000000&&x<8000000){
	    tax = x * 0.05;
	 }
	 else if (x>=8000000&&x<10000000){
	    tax = x * 0.1;
	 }
	 else if (x>=10000000&&x<14000000){
	 	tax = x * 0.15;
	 }
	 else if (x>=14000000&&x<18000000){
	 	tax = x * 0.20;
	 }
	 else if (x>=18000000&&x<25000000){
	 	tax = x * 0.25;
	 }
	 else if  (x>25000000){
	 	tax = x * 0.35;
	 }
	 return 0;
}