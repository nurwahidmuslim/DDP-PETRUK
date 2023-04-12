#include <iostream>
#include <cmath>
using namespace std;

double jarak(double x1, double y1, double x2, double y2){
	double hasil = ((x2-x1)*(x2-x1)) + ((y2-y1)*(y2-y1));
	double j = sqrt(hasil);
	return j;
}
