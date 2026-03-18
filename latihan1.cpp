#include <iostream>

using namespace std;

int main()
{
    int a,b;

    cout<<"Masukkan angka ke-1 : ";cin>>a;
    cout<<"Masukkan angka ke-2 : ";cin>>b;

    if (a%b==0 && a/b >2){
        cout<<"VALID";
    }
    else{
        cout<<"TIDAK";
    }
}