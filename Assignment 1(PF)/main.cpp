#include <iostream>

using namespace std;

int main()
{   float power(float n, float p);
    float n, p;
    cout<<"Enter any number>>";
    cin>>n;
    cout<<"Enter another number>>";
    cin>>p;
    power(n, p);
    return 0;
}


float power(float n, float p= 2){

    float store = 1;

    for(int i=0; i<p; i++){
      store*=n;
      //cout<<"current:"<<store;
    }
    cout<<store;
}
