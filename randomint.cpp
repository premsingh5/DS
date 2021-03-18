#include <iostream>
#include <random>
#include<chrono>
using namespace std;
int random_generator(int l,int h){
	const int range_from  = 0;
    const int range_to    = 10;
    unsigned seed = chrono::system_clock::now().time_since_epoch().count();
	default_random_engine generator (seed);
    uniform_int_distribution<int>  distr(l, h);
    return distr(generator);
	
}
int main(int, char*[]) {
	const int range_from  = 0;
    const int range_to    = 10;
    unsigned seed = chrono::system_clock::now().time_since_epoch().count();
	default_random_engine generator (seed);
    uniform_int_distribution<int>  distr(range_from, range_to);
    for (int i = 0; i < 10; ++i)
    cout<<distr(generator)<<endl;
}
