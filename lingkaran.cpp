#include <iostream>
using namespace std;
int main (){
    //menghitung luas & keliling lingkaran
    
    int r;
    float phi=3.14,luas,keliling;
    
    cin>>r;
    
    luas=phi*r*r;
    keliling=2*phi*r;
    
    cout<<luas<<endl;
    cout<<keliling;
    
    return 0;
}