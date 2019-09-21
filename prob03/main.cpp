//Random rectangle

#include <iostream>
#include <string>
#include <cstdlib>

int main ()
{
  //Sets the values to the length and height of the rectangle
  const int HEIGHT = 3;
  int MAX = 40;

  //Randomizes the amount of hashtags for the recangle.
  unsigned seed = time(0);
  srand(seed);
  int length = rand();
  length = rand() % MAX + 1;


  //Actually displays the rectangle
  std::string rectangle;
  rectangle.assign(length,'#');

  std::cout << rectangle << std::endl;
  std::cout << rectangle << std::endl;
  std::cout << rectangle << std::endl;





return 0;
}
