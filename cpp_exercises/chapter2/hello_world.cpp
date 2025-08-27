#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
inline void keep_window_open() { char ch; cin>>ch; }

int main() // C++ programs start by executing the function main 
{
  cout << "Hello, World!\n"; // output “Hello, World!” keep_window_open(); // wait for a character to be entered return 0;
}

// Compile with
// clang++ cpp_exercises/chapter2/hello_world.cpp -o cpp_exercises/chapter2/hw

// Anything written after the token // (that’s the character /, called “slash,” twice) on a line is a comment.
// Comments are ignored by the compiler and written for the benefit of programmers who read the code
// Compile-time errors Errors found by the compiler are called compile-time errors, errors found by the linker are called link-time errors, and errors not found until the program is run are called run-time errors or logic errors.
// cout:= The name cout refers to a standard output stream. Characters “put into cout” using the output operator << will appear on the screen. 
// executable:=called source code or program text, and what the computer executes is called executable, object code, or machine code.
// #include:=is an “#include directive.” It instructs the computer to make available (“to include”) facilities from a file called std_lib_facilities.h.
// linker:=The program that links such parts together is (unsurprisingly) called a 
// object code:= object code output from a compiler intended as input for a linker (for the linker to produce executable code).