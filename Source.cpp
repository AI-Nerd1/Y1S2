#include<iostream>
#include<fstream>
#include<iomanip>
using namespace std;
struct car
{
	int serial;
	char make[50];
	char model[20];
	int speed, capacity;
	void getdata();		
	void showdata() const;	
	void show_tabular() const;
	int retserial() const;
}; 

void car::getdata()
{
	cout << "\nÂâåäèòå ñåðèéíûé íîìåð àâòîìîáèëÿ:  ";
	cin >> serial;
	cout << "\n\nÂâåäèòå ìàðêó àâòîìîáèëÿ:  ";
	cin.ignore();
	cin.getline(make, 50);
	cout << "\n\nÂâåäèòå ìîäåëü àâòîìîáèëÿ: ";
	cin.ignore();
	cin.getline(model, 20);
	cout << "\nÂâåäèòå ñêîðîñòü àâòîìîáèëÿ(êì/÷): ";
	cin >> speed;
	cout << "\nÂâåäèòå âìåñòèìîñòü àâòîìîáèëÿ : ";
	cin >> capacity;
}

void car::showdata() const
{
	cout << "\nÑåðèéíûé íîìåð àâòîìîáèëÿ : " << serial;
	cout << "\nÌàðêà àâòîìîáèëÿ : " << make;
	cout << "\nÌîäåëü àâòîìîáèëÿ : " << model;
	cout << "\nÑêîðîñòü àâòîìîáèëÿ (êì/÷) : " << speed;
	cout << "\nÂìåñòèìîñòü àâòîìîáèëÿ : " << capacity;
}

void car::show_tabular() const
{
	cout << 
		serial << setfill(' ') << setw(4) << "| " << setfill(' ') << setw(6)<<
		make << setfill(' ') << setw(6) << "| " << setfill(' ') << setw(6) <<
		model << setfill(' ') << setw(6) << "| " << setfill(' ') << setw(6) <<
		speed << setfill(' ') << setw(6) << "| " << setfill(' ') << setw(6) <<
		capacity << setfill(' ') << setw(6) << "| " << endl;
}

int  car::retserial() const
{
	return serial;
}
void write_car();	
void display_all();	
void display_specific(int);	
void modify_car(int);
void car_records();	
void records_page();	
void intro();		
void entry_menu();	

int main()
{
	setlocale(LC_ALL, "Russian");
	char ch;
	cout << setprecision(2);
	intro();
	do
	{
		system("cls");
		cout << "\n\n\n\tÃËÀÂÍÎÅ ÌÅÍÞ ";
		cout << "\n\n\t01. ÑÏÈÑÎÊ ÀÂÒÎÌÎÁÈËÅÉ";
		cout << "\n\n\t02. ÌÅÍÞ ÐÅÄÀÊÒÈÐÎÂÀÍÈß";
		cout << "\n\n\t03. ÂÛÕÎÄ";
		cout << "\n\n\tÂûáåðèòå îïöèþ (1-3) ";
		cin >> ch;
		switch (ch)
		{
		case '1': records_page();
			break;
		case '2': entry_menu();
			break;
		case '3':
			break;
		default:cout << "\a";
		}
	} while (ch != '3');
	return 0;
}
/* void delete_student(int n)
{
	car st;
	ifstream inFile;
	inFile.open("car.dat", ios::binary);
	if (!inFile)
	{
		cout << "File could not be open !! Press any Key...";
		cin.ignore();
		cin.get();
		return;
	}
	ofstream outFile;
	outFile.open("temp.dat", ios::out);
	inFile.seekg(0, ios::beg);
	while (inFile.read(reinterpret_cast<char*> (&st), sizeof(car)))
	{
		if (st.retserial() != n)
		{
			outFile.write(reinterpret_cast<char*> (&st), sizeof(car));
		}
	}
	outFile.close();
	inFile.close();
	remove("car.dat");
	rename("Temp.dat", "student.dat");
	cout << "\n\n\tRecord Deleted ..";
	cin.ignore();
	cin.get();
} */

void write_car()
{
	car st;
	ofstream outFile;
	outFile.open("car.dat", ios::binary | ios::app);
	st.getdata();
	outFile.write(reinterpret_cast<char*> (&st), sizeof(car));
	outFile.close();
	cout << "\n\ Íîâàÿ çàïèñü ñîçäàíà!! ";
	cin.ignore();
	cin.get();
}

void display_all()
{
	car st;
	ifstream inFile;
	inFile.open("car.dat", ios::binary);
	if (!inFile)
	{
		cout << "Îøèáêà îòêðûòèÿ ôàéëà...";
		cin.ignore();
		cin.get();
		return;
	}
	cout << "\n\n\n\t\tÎÒÎÁÐÀÆÅÍÈÅ ÂÑÅÕ ÇÀÏÈÑÅÉ !!!\n\n";
	while (inFile.read(reinterpret_cast<char*> (&st), sizeof(car)))
	{
		st.showdata();
		cout << "\n\n====================================\n";
	}
	inFile.close();
	cin.ignore();
	cin.get();
}

void display_specific(int n)
{
	car st;
	ifstream inFile;
	inFile.open("car.dat", ios::binary);
	if (!inFile)
	{
		cout << "Îøèáêà îòêðûòèÿ ôàéëà...";
		cin.ignore();
		cin.get();
		return;
	}
	bool flag = false;
	while (inFile.read(reinterpret_cast<char*> (&st), sizeof(car)))
	{
		if (st.retserial() == n)
		{
			st.showdata();
			flag = true;
		}
	}
	inFile.close();
	if (flag == false)
		cout << "\n\nçàïèñü íå ñóùåñòâóåò";
	cin.ignore();
	cin.get();
}

void modify_car(int n)
{
	bool found = false;
	car st;
	fstream File;
	File.open("car.dat", ios::binary | ios::in | ios::out);
	if (!File)
	{
		cout << "Îøèáêà îòêðûòèÿ ôàéëà...";
		cin.ignore();
		cin.get();
		return;
	}
	while (!File.eof() && found == false)
	{

		File.read(reinterpret_cast<char*> (&st), sizeof(car));
		if (st.retserial() == n)
		{
			st.showdata();
			cout << "\n\nÂâåäèòå Íîâûå äàííûå àâòîìîáèëÿ" << endl;
			st.getdata();
			int pos = (-1) * static_cast<int>(sizeof(st));
			File.seekp(pos, ios::cur);
			File.write(reinterpret_cast<char*> (&st), sizeof(car));
			cout << "\n\n\t Îáíîâëåíà çàïèñü";
			found = true;
		}
	}
	File.close();
	if (found == false)
		cout << "\n\n Çàïèñü Íå Íàéäåíà ";
	cin.ignore();
	cin.get();
}

void car_records()
{
	car st;
	ifstream inFile;
	inFile.open("car.dat", ios::binary);
	if (!inFile)
	{
		cout << "Îøèáêà îòêðûòèÿ ôàéëà...";
		cin.ignore();
		cin.get();
		return;
	}
	cout << "\n\n\t\tÒÀÁËÈ×ÍÀß ÇÀÏÈÑÜ \n\n";
	cout << "==========================================================\n";
	cout <<
		"S/N" << setfill(' ') << setw(4) << " " << setfill(' ') << setw(4) <<
		"Make" << setfill(' ') << setw(6) << " " << setfill(' ') << setw(6) <<
		"Model" << setfill(' ') << setw(6) << " " << setfill(' ') << setw(6) <<
		"Speed" << setfill(' ') << setw(6) << " " << setfill(' ') << setw(6) <<
		"Capacity" << endl;
	cout << "==========================================================\n";
	while (inFile.read(reinterpret_cast<char*> (&st), sizeof(car)))
	{
		st.show_tabular();
	}
	cin.ignore();
	cin.get();
	inFile.close();
}

void records_page()
{
	char ch;
	int rno;
	system("cls");
	cout << "\n\n\n\ ÌÅÍÞ ÇÀÏÈÑÈ";
	cout << "\n\n\n\t1. Âñå Àâòîìîáèëè";
	cout << "\n\n\t2. Êîíêðåòíûé àâòîìîáèëü";
	cout << "\n\n\t3. Âåðíóòüñÿ â Ãëàâíîå ìåíþ";
	cout << "\n\n\n\tÂâåäèòå Âûáîð (1/2/3)? ";
	cin >> ch;
	system("cls");
	switch (ch)
	{
	case '1':	car_records(); break;
	case '2':	cout << "\n\n\tÂâåäèòå Ñåðèéíûé Íîìåð Àâòîìîáèëÿ : "; cin >> rno;
		display_specific(rno); break;
	case '3':	break;
	default:	cout << "\a";
	}
}

void intro()
{
	cout << "\n\n\n\t\t  ÐÅÊÎÐÄ ÀÂÒÎÌÎÁÈËÅÉ";
	cin.get();
}

void entry_menu()
{
	char ch;
	int num;
	system("cls");
	cout << "\n\n\n\tÌÅÍÞ ÂÂÎÄÀ";
	cout << "\n\n\t1.ÑÎÇÄÀÉÒÅ ÍÎÂÓÞ ÇÀÏÈÑÜ ÀÂÒÎÌÎÁÈËß";
	cout << "\n\n\t2.ÎÒÎÁÐÀÆÅÍÈÅ ÂÑÅÕ ÇÀÏÈÑÅÉ ÀÂÒÎÌÎÁÈËß";
	cout << "\n\n\t3.ÏÎÈÑÊ ÇÀÏÈÑÈ ÀÂÒÎÌÎÁÈËß";
	cout << "\n\n\t4.ÈÇÌÅÍÈÒÜ ÇÀÏÈÑÜ ÀÂÒÎÌÎÁÈËß";
	cout << "\n\n\t5.Âåðíóòüñÿ â Ãëàâíîå ìåíþ";
	cout << "\n\n\tÂâåäèòå Âûáîð (1-5) ";
	cin >> ch;
	system("cls");
	switch (ch)
	{
	case '1':	write_car(); break;
	case '2':	display_all(); break;
	case '3':	cout << "\n\n\tÂâåäèòå Ñåðèéíûé Íîìåð Àâòîìîáèëÿ "; cin >> num;
		display_specific(num); break;
	case '4':	cout << "\n\n\tÂâåäèòå Ñåðèéíûé Íîìåð Àâòîìîáèëÿ "; cin >> num;
		modify_car(num); break;
	case '5':	break;
	//case '6': cin >> num; delete_student(num);
	default:	cout << "\a"; entry_menu();
	}
}


