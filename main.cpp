#include <iostream>
using namespace std;
int main() {
    int lista[10];

    for(int i=0;i<10;i++){
       cin >> lista[i];
    }
    cout<<endl;
    int a=0;
    cin >> a;

    int b=0;
    for (int i=0;i<10;i++){
        if(lista[i]>a){
        b=lista[i];
        lista[i]=a;
        a=b;}}

    for(int i=0;i<10;i++){
        cout << lista[i] << " ";
    }
    return 0;
}
