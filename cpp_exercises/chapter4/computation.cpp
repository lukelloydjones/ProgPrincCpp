#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;

inline void keep_window_open() { char ch; cin>>ch; }


// David Wheeler's program

// calculate and print a table of squares 0–99 
int main()
{
	int i = 0; // start from 0 
	while (i<100) {
	cout << i << '\t' << pow(i, 2) << '\n';
	++i; // increment i (that is, i becomes i+1) 
  }
}

// Switch statements
//  - Can't switch on a string
//  - case labels must be constant expressions 
//  -  cannot use the same value for two case labels.
//  - End each case with a break
// Can be more efficient that if statements
// MUST HAVE A BREAK!

// int main() {
// constexpr double cm_per_inch = 2.54; double length = 1;
// // number of centimeters in // an inch
// // length in inches or
// // centimeters
// char unit = 'a';
// cout<< "Please enter a length followed by a unit (c or i):\n"; cin >> length >> unit;
// switch (unit) {
// case 'i':
// cout << length << "in == " << cm_per_inch*length << "cm\n";
// break; case 'c':
// cout << length << "cm == " << length/cm_per_inch << "in\n";
// break; default:
// cout << "Sorry, I don't know a unit called '" << unit << "'\n";
// break; }
// }

// convert from inches to centimeters or centimeters to inches // a suffix ‘i’ or ‘c’ indicates the unit of the input
// any other suffix is an error
// int main()
// {
// 	const double cm_per_inch = 2.54; 
// 	double length = 1;
// 	char unit = ' ';
// 	cout<< "Please enter a length followed by a unit (c or i):\n"; cin >> length >> unit;
// 	// a space is not a unit

// 	// number of centimeters in // an inch
// 	// length in inches or // centimeters
// 	if (unit == 'i')
// 		cout << length << "in == " << cm_per_inch*length << "cm\n";
// 	else if (unit == 'c')
// 		cout << length << "cm == " << length/cm_per_inch << "in\n";
// 	else
// 		cout << "Sorry, I don't know a unit called '" << unit << "'\n";
	
// }

// Compile with on Mac
// clang++ -std=c++17 cpp_exercises/chapter4/computation.cpp -o cpp_exercises/chapter4/compute

