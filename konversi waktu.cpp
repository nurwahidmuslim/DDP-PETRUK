#include <iostream>
using namespace std;
int main(){
	//konversi waktu

	int j,m,d;

	cin>>d;

	j=d/3600;
	//1 jam = 3600 detik
	//jika 4000 detik maka 4000/3600=1
	d=d-(3600*j);
	//jika d = 4000, maka 4000-3600=400
	m=d/60;
	//d disini = 400
	//400/60=6
	d=d-(60*m);
	//d disini = 400 & m = 6
	//60*6=360
	//400-360=40

	cout<<j;
	cout<<" "<<m;
	cout<<" "<<d;

	return 0;
}