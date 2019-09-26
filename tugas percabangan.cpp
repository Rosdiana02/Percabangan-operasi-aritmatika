#include <iostream>
using namespace std;

int main(){
	int x, y, hasil;
	string pilihan;
	
	cout<< "===Program Aritmatika==="<< endl;
	cout<< "Inputkan nilai x : ";
	cin>> x;
	cout<< "Inputkan nilai y : ";
	cin>> y;
	
	cout<<endl<<endl;
	
	cout<<"1= Pembagian"<<endl;
	cout<<"2= Perkalian"<<endl;
	cout<<"3= Penjumlahan"<<endl;
	cout<<"4= Pengurangan"<<endl;
	cout<<"================================================"<<endl;
	cout<< "Pilihlah salah satu operasi bilangan diatas : ";
	cin >>pilihan;
	cout<<"================================================"<<endl;
	
	if (pilihan== "3"){
		cout<<"Hasil x + y = "<<x+y<<endl;
	}else if( pilihan== "4" ){
		cout<<"Hasil x - y = "<<x-y<<endl;	
		}else if( pilihan== "1" ){
		cout<<"Hasil x / y = "<<x/y<<endl;	
		}else if( pilihan== "2" ){
		cout<<"Hasil x * y = "<<x*y<<endl;	
		}else {
			cout<< "===ANDA TIDAK MEMILIH SALAH SATU PILIHAN DIATAS===";
		}
		
		cout<<endl<<endl;
		
		cout<<"Program ini adalah Program kalkulator sederhana"<<endl;
		return 0;
}
