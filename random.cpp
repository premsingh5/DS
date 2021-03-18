#include <iostream>
#include <chrono>
#include <random>
using namespace std;


int main()
{
	int n=100;
	double arr[n];
  // construct a trivial random generator engine from a time-based seed:
  unsigned seed = chrono::system_clock::now().time_since_epoch().count();
  default_random_engine generator (seed);

  uniform_real_distribution<double> distribution (0.0,1.0);

  cout << "some random numbers between 0.0 and 1.0: " << endl;
  for (int i=0; i<1000; ++i)
  arr[i]=distribution(generator);
  
  return 0;
}
