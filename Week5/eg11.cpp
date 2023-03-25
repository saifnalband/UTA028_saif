/*
Hybrid Inheritance in C++:
*/
#include<iostream>
using namespace std;
class World {
  public:
    World() {
      cout << "This is World!\n";
    }
};

// Here is Single Inheritance.
class Continent: public World {
  public: 
    Continent() {
      cout << "This is Continent\n";
    }
};

class Country {
  public:
    Country() {
      cout << "This is the Country\n";
    }
};

// Here is multiple Inheritance.
class India: public Continent, public Country {
  public: 
    India() {
      cout << "This is India!";
    }
};

int main() {
  India myworld;
  return 0;
}
