#include<iostream>
using namespace std;

int jumlah(int,int);
int kurang(int,int);
int kali(int,int);
int bagi(int,int);

int main()
{
    int bilangan1,bilangan2;
    int pilih;

    cout<<"1 = PENJUMLAHAN\n"<<endl;
    cout<<"2 = PENGURANGAN\n"<<endl;
    cout<<"3 = PERKALIAN\n"<<endl;
    cout<<"4 = PEMBAGIAN\n"<<endl;
    cout<<"5 = KELUAR\n"<<endl;
    cout<<"Pilihan:";
    cin>>pilih;
    cout<<endl;
    switch(pilih)
    {
    case 1:
        cout<<"1 = PENJUMLAHAN"<<endl;
        cout<<"Masukan bilangan 1"<<endl;
        cin>>bilangan1;
        cout<<"Masukan bilangan 2"<<endl;
        cin>>bilangan2;
        cout<<"Hasil penjumlahannya = "<<jumlah(bilangan1,bilangan2)<<endl;
        break;

    case 2:
        cout<<"2 = PENGURANGAN"<<endl;
        cout<<"Masukan bilangan 1"<<endl;
        cin>>bilangan1;
        cout<<"Masukan bilangan 2"<<endl;
        cin>>bilangan2;
        cout<<"Hasil pengurangannya = "<<kurang(bilangan1,bilangan2)<<endl;
        break;

    case 3:
        cout<<"3 = PERKALIAN"<<endl;
        cout<<"Masukan bilangan 1"<<endl;
        cin>>bilangan1;
        cout<<"Masukan bilangan 2"<<endl;
        cin>>bilangan2;
        cout<<"Hasil perkaliannya = "<<kali(bilangan1,bilangan2)<<endl;
        break;

    case 4:
        cout<<"4 = PEMBAGIAN"<<endl;
        cout<<"Masukan bilangan 1"<<endl;
        cin>>bilangan1;
        cout<<"Masukan bilangan 2"<<endl;
        cin>>bilangan2;
        cout<<"Hasil pembagiannya = "<<bagi(bilangan1,bilangan2)<<endl;
        break;
        default:
        cout<<"Anda tidak memilih dengan benar"<<endl;
    }
}
int jumlah(int a, int b)
{
    int jumlah;
    jumlah = a + b;
    return jumlah; //nilai fungsi yang akan dikembalikan.
}
int kurang(int a,int b)
{
    int kurang;
    kurang = a - b;
    return kurang; //nilai fungsi yang akan dikembalikan.
}
int kali(int a,int b)
{
    int kali;
    kali = a * b;
    return kali; //nilai fungsi yang akan dikembalikan.
}
int bagi(int a,int b)
{
    int bagi;
    bagi = a / b;
    return bagi; //nilai fungsi yang akan dikembalikan.
}
