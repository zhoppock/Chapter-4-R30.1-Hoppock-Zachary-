#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
  srand((int)time(0));
  int i = 0;
  while(i++ < 10) {
    int r = (rand() % 100) + 1;
    cout << r << " ";
  }
  return 0;
}