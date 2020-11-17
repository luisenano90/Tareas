#include <iostream>
#include "constant.h"

int h = 0;

using namespace std;

int formula(int a,int time)
{

   return a -(gravity*(time*time)/2);
   
}


int main()
{
	
	cout<<"Ingrese la altura en metros..."<<endl;
	cin>>h;
	
	cout <<formula(h,0)<<endl;
	cout <<formula(h,1)<<endl;
	cout <<formula(h,2)<<endl;
	cout <<formula(h,3)<<endl;
	cout <<formula(h,4)<<endl;
	cout <<formula(h,5)<<endl;	
	return 0;	
}	


