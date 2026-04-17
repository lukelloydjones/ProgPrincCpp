#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>
#include <numeric>
using namespace std;

// inline void keep_window_open() { char ch; cin>>ch; }


// Sieve of Eratosnothenas
int main()
{
  int maxno = 10;
  std::cout << "Enter some integer number " << '\n';
  cin >> maxno; 
  std::cout << "You have entered " << maxno << '\n';

  // Set out the list of primes
  vector<int> v1(maxno, 0);

  // Fixed size with default value
  // vector<vector<int>> v1(3, vector<int>(3, 7));
  std::cout << "Sequence of numbers " << v1.at(0) << " to " << v1.at(maxno -  1) << '\n';

  int init_p = 2;
  int sm = 0;
  int sm_old = 0;
  int sm_dff = 1;

  while (sm_dff > 0) {
    int cnt = init_p + init_p;
    for (int i = 0; i < maxno; ++i)
    {
       v1[cnt-1] = 1;
       cnt += init_p;
    }

    // Sum the vector and check how many were marked
    sm = 0;
    for (int i = 0; i < maxno; ++i)
    {
      sm += v1[i];
    }
    std::cout << "Total summed for " << init_p << " is " << sm << '\n';

    // Did more get marked
    sm_dff = sm - sm_old;
    sm_old =  sm;  
    // Update init p
    init_p += 1;
  }

  // Print the final list
   std::cout << "Primes less than  " << maxno << " are " << '\n'; 
  for (int i = 0; i < maxno; ++i)
  {
    if (v1[i] == 0)
    {
      std::cout << i + 1 << '\n';    
    }
  }
  
}


// // La Drill
// int main() {
//     char inputChar;

//     std::cout << "Enter anykey to start or 'q' to quit):" << std::endl;
//     int i1 = 0;
//     int i2 = 0;
//     // Read characters one by one
//     while (std::cin >> inputChar) {
//         if (inputChar == 'q' || inputChar == 'Q') {
//             std::cout << "Termination character detected. Exiting loop." << std::endl;
//             break; // Exit the while loop
//         }

//         // Process the input character (example: print it)
//         cout << "Please enter two integers:\n"; cin >> i1 >> i2;
//         cout << "Your integers are:" << i1 << " " << i2;
//     }

//     std::cout << "Loop terminated." << std::endl;
//     return 0;
// }


// simple dictionary: list of sorted words 
// int main()
// {
//   vector<string> words; 
//   cout << "Good morning " << '\n';
//   string disliked = "Broccoli";
//   for(string temp; cin>>temp; )
//     // read whitespace-separated words // put into vector
//     words.push_back(temp);
//     cout << "Number of words: " << words.size() << '\n';
//     sort(words.begin(), words.begin()); // sort the words
//     for (int i = 0; i<words.size(); ++i)
//       if (i==0 || words[i-1]!=words[i]) // is this a new word?
//       if (words[i] == disliked)
//       {
//         cout << "BLEEP" << "\n";
//       } 
//       else {
//         cout << words[i] << "\n";
//       }
// }



// // compute mean and median temperatures 
// int main()
// {
//   vector<double> temps;
//   for (double temp; cin>>temp; )
//     temps.push_back(temp);

//   // compute mean temperature:
//   double sum = 0;
//   for (int x : temps) sum += x;
//   cout << "Average temperature: " << sum/temps.size() << '\n';
//   // compute median temperature:
//   std::sort(temps.begin(), temps.end()); // sort temperatures
//   cout << "Median temperature: " << temps[temps.size()/2] << '\n';
// }

// temperatures
// read into temp
// put temp into vector

// Old push back
// int main()
// {
//   vector<int> v = {5, 7, 9, 4, 6, 8}; 
//   for (int x : v) // for each x in v - that is pretty nice - not sure seen that
//   cout << x << '\n';
// }


// 4.6 Vectors


// int square(int val) // take no argument; return no value
// {
//   int sqr = 0;
//   for (int i = 0; i < val; ++i)
//   {
//   	sqr += val;
//   }
//   return(sqr);
//  }

// // calculate and print a table of squares 0–99 
// int main()
// {
//   int i = 0; // start from 0 
//   int maxval = 100;
//   for (int i = 0; i < maxval; ++i)
//   {
//     cout << i << '\t' << square(i) << '\n';
//   }
// }


// This is a weird function reall

// void write_sorry() // take no argument; return no value
// {
//   cout << "Sorry, I love you!\n";
// }

// int main()
// {
// 	write_sorry();
// }

// David Wheeler's program

// calculate and print a table of squares 0–99 
// int main()
// {
// 	int i = 0; // start from 0 
// 	while (i<100) {
// 	cout << i << '\t' << pow(i, 2) << '\n';
// 	++i; // increment i (that is, i becomes i+1) 
//   }
// }

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

