#include "iostream"

using namespace std;
// In this file we are learning `enum` and `typedef`

// ENUM
// To define a data type where we can define codes for Days of week
enum day {mon, tue, wed, thu, fri, sat, sun};
//                 2     3     4
enum dept {CSE=1, IT, CIVIL, ECE};
//                     5      
enum days {monday=4, tues, wedness=6};


// TYPE DEF
// It is useful when we are defining multiple vairables with short name
typedef int marks;
typedef double price;


int main ()
{
  
  // here we can use `day` as a data type 
  day d;
  d = tue;
  cout<<d<<endl; // 1

  // here we can use `marks` 
  marks m1, m2, m3;
  price p1, p2, p3;
  return 0;

}
