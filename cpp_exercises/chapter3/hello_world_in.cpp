#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;

inline void keep_window_open() { char ch; cin>>ch; }


int main() {
  int number_of_words = 0; 
  string previous = " "; 
  string current;
  while (cin>>current) {
    ++number_of_words; if (previous == current)
    // not a word
    // increase word count
    cout << "word number " << number_of_words << " repeated: " << current << '\n';
    previous = current; 
  }
}

// Starting it with empty space is interesting

// int main() {
//   string previous = " "; 
//   string current;
//   while (cin>>current) {
//     if (previous == current)
//       cout << "repeated word:" << current << '\n';
//     previous = current;
//   }

// }
// previous word; initialized to “not a word” // current word
// read a stream of words
// check if the word is the same as last


// // read and compare names - string comparison is interesting
// int main()
// {
// cout << "Please enter two names\n";
// string first;
// string second;
// cin >> first >> second; // read two strings
// if (first == second) cout << "that's the same name twice\n"; if (first < second)
// cout << first << " is alphabetically before " << second <<'\n'; if (first > second)
// cout << first << " is alphabetically after " << second <<'\n';
// }

// // simple program to exercise operators 
// int main()
// {
//   cout << "Please enter a floating-point value: "; double n;
//   cin >> n;
//   cout << "n == " << n
//   << "\nn+1 == " << n+1
//   << "\nthree times n == " << 3*n
//   << "\nn squared == " << n*n
//   << "\nhalf of n == " << n/2
//   << "\nsquare root of n == " << sqrt(n)
//   << '\n'; // another name for newline (“end of line”) in output
// }

// int main() {
//   cout << "Please enter your first name and age (followed by 'enter'):\n"; 
//   string first_name; // first_name is a variable of type string, definition
//   int age = -1;
//   cin >> first_name >> age; // read characters into first_name
//   cout << "Hello, " << first_name << " (age " << age << ")\n";

//   double agem = age * 12;
//   cout << "Your age in months is, " << agem << "\n";
// }


// Compile with on Mac
// clang++ cpp_exercises/chapter3/hello_world_in.cpp -o cpp_exercises/chapter3/hwin

// Notes

// "=" means assignment not equal to!

// C++ has a large number of types - you can write good programs with the following

// int number_of_steps = 39; // int for integers
// double flying_time = 3.5; // double for floating-point numbers - computer’s approximation to a real number 
// char decimal_point = '.'; // char for individual characters
// string name = "Annemarie"; // string for character strings
// bool tap_on = true; // bool for logical variables

// >> (“get from”) and << are sensitive to type - that's interesting.