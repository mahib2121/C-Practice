#include <iostream>
using namespace std ;


int main (){

int n ;
int z =0;
cout << "Enter N terms "<< endl;
cin >> n;

for (int i=1; i<=n;i++){
    cout << i<<endl;

    z+=i;
}


cout << z<<endl;

return 0;
}