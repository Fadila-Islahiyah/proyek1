#include <iostream>
using namespace std;

int main(){
	int pil;
	do{
		system("cls");
		cout<<"1. Tambahkan Data\n";
		cout<<"2. Tampilkan Data\n";
		cout<<"3. Edit Data\n";
		cout<<"4. Hapus Data\n";
	
		cout<<"Pilihan : ";
		cin>>pil;
		switch(pil){
		case 1:
			add();
			break;
		case 2:
			do{
			display();
			cout<<"kembali (y) : ";
			cin>>loop;
		}while(loop !="y");
			break;
		case 3:
			edit();
			break;
		case 4:
			del();
			break;
		case 5:
			cout<<"....."<<endl;
			break;
		default:
			cout<<"pilih 1-4"<<endl;
			break;
		}
	}while(pil !=5);
	cout<<"Program Selesai";
	 
}