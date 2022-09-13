#include <iostream>
using namespace std;
int main(){
    //menghitung luas & volume kerucut
    
    float phi=3.14,r,s,t,luas,volume;
    
    cin>>r; cin>>s; cin>>t;
    
    luas=phi*r*t;
    volume=phi*r*r*t/3;
    
    cout<<volume<<endl;
    cout<<luas;
    
	return 0;
}