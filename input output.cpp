#include <iostream>
using namespace std;
int main(){
	string nama,npm,jur;
	int umur,tl;
	
	getline(cin,nama);
	getline(cin,npm);
	getline(cin,jur);
	cin>>tl;
	
	umur=2022-tl;
	
	cout<<"Nama Saya ";
	cout<<'"'<<nama<<'"'<<','<<endl;
	cout<<"umur saya ";
	cout<<'"'<<umur<<" Tahun"<<'"'<<','<<endl;
	cout<<"dengan NPM ";
	cout<<'"'<<npm<<'"'<<','<<endl;
	cout<<"dari Jurusan ";
	cout<<jur;
	
	return 0;
}