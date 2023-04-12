#include <iostream>
using namespace std;

void findMax(){
    int n;
    cin>>n;

    int max = 0;

    for (int i = 0; i < n; i++){
        int data;
        cin>>data;
        if(data > max){
            max = data;
        }
    }

    cout<<max<<endl;
}
