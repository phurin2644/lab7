#include<iostream>
using namespace std;

int main(){
	int x, y, z;
	string n;
	cout << "Enter your age: ";
	cin >> x;
	if(x <= 20) {
		cout << "Enter your height: ";
		cin >> y;
		if(y < 160) 	n = "UNFRIEND";
		else if (y < 175)   n = "FRIEND";
		else{
			cout << "Enter your property: ";
			cin >> z;
			if(z > 69000000) n= "MARRIED";
			else n = "ONE-NIGHT-STAND";
			
		}
	}else if (x < 30){
		cout << "Enter your property: ";
		cin >> z;
		if(z > 1000000000) n = "BEST FRIEND";
		else n = "UNFRIEND";
	} else n = "UNFRIEND";
	cout << "Your status = " << n;
	return 0;
}