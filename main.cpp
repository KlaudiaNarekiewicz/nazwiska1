#include<iostream>
using namespace std;

int main()
{

  cout << "Content-Type:application/json;charset=UTF-8" << (char)13 << (char)10
      << "\n"
      << "[ \n "
          << " { \"title\":\"Jan\", \"subtitle\":\"Kowalski\" }, \n"
          << "  { \"title\":\"Ewa\", \"subtitle\":\"Nowak\" } \n"
          << "]";

 return 0;
}
