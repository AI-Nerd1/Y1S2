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
	cout << "\n������� �������� ����� ����������:  ";
	cin >> serial;
	cout << "\n\n������� ����� ����������:  ";
	cin.ignore();
	cin.getline(make, 50);
	cout << "\n\n������� ������ ����������: ";
	cin.ignore();
	cin.getline(model, 20);
	cout << "\n������� �������� ����������(��/�): ";
	cin >> speed;
	cout << "\n������� ����������� ���������� : ";
	cin >> capacity;
}

void car::showdata() const
{
	cout << "\n�������� ����� ���������� : " << serial;
	cout << "\n����� ���������� : " << make;
	cout << "\n������ ���������� : " << model;
	cout << "\n�������� ���������� (��/�) : " << speed;
	cout << "\n����������� ���������� : " << capacity;
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
		cout << "\n\n\n\t������� ���� ";
		cout << "\n\n\t01. ������ �����������";
		cout << "\n\n\t02. ���� ��������������";
		cout << "\n\n\t03. �����";
		cout << "\n\n\t�������� ����� (1-3) ";
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
	cout << "\n\ ����� ������ �������!! ";
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
		cout << "������ �������� �����...";
		cin.ignore();
		cin.get();
		return;
	}
	cout << "\n\n\n\t\t����������� ���� ������� !!!\n\n";
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
		cout << "������ �������� �����...";
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
		cout << "\n\n������ �� ����������";
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
		cout << "������ �������� �����...";
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
			cout << "\n\n������� ����� ������ ����������" << endl;
			st.getdata();
			int pos = (-1) * static_cast<int>(sizeof(st));
			File.seekp(pos, ios::cur);
			File.write(reinterpret_cast<char*> (&st), sizeof(car));
			cout << "\n\n\t ��������� ������";
			found = true;
		}
	}
	File.close();
	if (found == false)
		cout << "\n\n ������ �� ������� ";
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
		cout << "������ �������� �����...";
		cin.ignore();
		cin.get();
		return;
	}
	cout << "\n\n\t\t��������� ������ \n\n";
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
	cout << "\n\n\n\ ���� ������";
	cout << "\n\n\n\t1. ��� ����������";
	cout << "\n\n\t2. ���������� ����������";
	cout << "\n\n\t3. ��������� � ������� ����";
	cout << "\n\n\n\t������� ����� (1/2/3)? ";
	cin >> ch;
	system("cls");
	switch (ch)
	{
	case '1':	car_records(); break;
	case '2':	cout << "\n\n\t������� �������� ����� ���������� : "; cin >> rno;
		display_specific(rno); break;
	case '3':	break;
	default:	cout << "\a";
	}
}

void intro()
{
	cout << "\n\n\n\t\t  ������ �����������";
	cin.get();
}

void entry_menu()
{
	char ch;
	int num;
	system("cls");
	cout << "\n\n\n\t���� �����";
	cout << "\n\n\t1.�������� ����� ������ ����������";
	cout << "\n\n\t2.����������� ���� ������� ����������";
	cout << "\n\n\t3.����� ������ ����������";
	cout << "\n\n\t4.�������� ������ ����������";
	cout << "\n\n\t5.��������� � ������� ����";
	cout << "\n\n\t������� ����� (1-5) ";
	cin >> ch;
	system("cls");
	switch (ch)
	{
	case '1':	write_car(); break;
	case '2':	display_all(); break;
	case '3':	cout << "\n\n\t������� �������� ����� ���������� "; cin >> num;
		display_specific(num); break;
	case '4':	cout << "\n\n\t������� �������� ����� ���������� "; cin >> num;
		modify_car(num); break;
	case '5':	break;
	//case '6': cin >> num; delete_student(num);
	default:	cout << "\a"; entry_menu();
	}
}


