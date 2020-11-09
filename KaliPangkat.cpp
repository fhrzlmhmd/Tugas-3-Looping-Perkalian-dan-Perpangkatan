//Program rata-rata nilai dan status kelulusan, dicompile dengan Dev-C++ (tidak diketahui apa bisa dicompile dengan Borland C++ dan Geany)
#include <iostream>
using namespace std;

int main ()
{
    string username,password;
    int menu,a,b,num=1,i;

    {
        cout << "Masukkan nama pengguna Anda: ";
        cin >> username;
        cout << "Masukkan kata sandi Anda: ";
        cin >> password;

       if (username == "Bruh")
{
if (password == "180618")
{
printf ("\nSelamat datang di program ini!");
menu:
printf ("\n\n====================================================");
printf ("\n          Program Perpangkatan dan Perkalian						 ");
printf ("\n====================================================");
printf ("\n(1) Perpangkatan	");
printf ("\n(2) Perkalian");
printf ("\n");
printf ("\nMasukkan pilihan Anda: ");
cin>>menu;
switch(menu)
{
	case 1:
		printf ("\nMasukkan bilangan A: ");
		cin>>a;
		printf ("Masukkan bilangan B: ");
		cin>>b;
		for (i = 1; i <=b; i++) 
        num=num*a;
	    cout <<a<<" ^ "<<b<<" = "<<num<<endl ;
	    break;
    case 2:
		printf ("\nMasukkan bilangan A: ");
		cin>>a;
		printf ("Masukkan bilangan B: ");
		cin>>b;
		for (i = 1; i <=b; i++)
        num=(num+a);
        num=num-1;
	    cout <<a<<" x "<<b<<" = "<<num<<endl ;
	    break;
}
}
else printf ("Kata sandi Anda salah!");
}
else if (password == "180618")
{
printf ("Nama pengguna Anda salah!");
}
else printf ("Nama pengguna dan kata sandi Anda salah!");
    }
}
