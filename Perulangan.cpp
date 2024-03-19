#include <iostream>
using namespace std;

int main ()
{
int i;
string nama [5];

for (i = 0 ; i < 7; i++)
{
    cout << i << "." << "Haikal" << endl;
}

for(i=0;i < 5; i++)
{
    cout <<"Masukan nama =";
    cin >> nama[i];
}
for (i=0; i < 5;i++)
    cout << endl ;
    cout << "==============" << endl;
    cout << "KUMPULAN NAMA-NAMA" << endl;

for (i=0; i < 5;i++){

    cout << "Namanya adalah" << nama[i] << endl;
}
}