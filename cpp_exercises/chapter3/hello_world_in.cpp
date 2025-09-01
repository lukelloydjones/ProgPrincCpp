#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;

inline void keep_window_open() { char ch; cin>>ch; }

int main() {
  cout << "Please enter your first name and age (followed by 'enter'):\n"; 
  string first_name; // first_name is a variable of type string, definition
  int age = -1;
  cin >> first_name >> age; // read characters into first_name
  cout << "Hello, " << first_name << " (age " << age << ")\n";

  double agem = age * 12;
  cout << "Your age in months is, " << agem << "\n";
}

// Compile with on Mac
// clang++ cpp_exercises/chapter3/hello_world_in.cpp -o cpp_exercises/chapter3/hwin

// Notes

// C++ has a large number of types - you can write good programs with the following

// int number_of_steps = 39; // int for integers
// double flying_time = 3.5; // double for floating-point numbers - computer’s approximation to a real number 
// char decimal_point = '.'; // char for individual characters
// string name = "Annemarie"; // string for character strings
// bool tap_on = true; // bool for logical variables

// >> (“get from”) and << are sensitive to type - that's interesting.