//Force
#include <iostream>
using namespace std;


int main ()
{
	float d, m1, m2 , force;
	double k = 0.0000000667;
	
	cout <<"Enter the distance:";
	cin >> d;
	cout <<"Enter Mass No.1 :";
	cin >> m1;
	cout <<"Enter Mass No.2 :";
	cin >> m2;
	
	force = k * (m1 * m2) / (d * d);
	
	cout << "The force is:" << force;
	
	



	return 0;
	 
	 
}
