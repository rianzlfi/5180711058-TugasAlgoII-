#include<iostream>
using namespace::std;
int pangkat(int angka,int pangkatt){
if(pangkatt<0)
return 0;
else
return angka*pangkat( angka, pangkatt -1);
}

int bagi(int angka , int kurang){
if(kurang>0)
return 1;
else
return 1/angka*bagi( angka, kurang+1);
}

main(){
int a,b;
cout<<"masukkan jumlah bilangan pertama :";cin>>a;
cout<<"masukan jumlah bilangan kedua :";cin>>b;
cout<<"hasilk ="< cout<<"masukkan jumlah bilangan pertama :";cin>>a;
cout<<"masukkan jumlah bilangan kedua :";cin>>b;}

