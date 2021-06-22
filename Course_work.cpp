//+-------------------------------------------------------------------------+
// |	             HEADER FILE USED IN PROJECT			          |
//+-------------------------------------------------------------------------+

#include<iostream>
#include<fstream>
#include<iomanip>
#include<stdlib.h>
#include <conio.h>
#include<string.h>
#include <cstring>
#define quant = 25		//Number of Students

using namespace std;
//+-------------------------------------------------------------------------+
// |							Structures								    |
//+-------------------------------------------------------------------------+
float aced = 0, good = 0, pass = 0, fail = 0;
float male_count = 0, female_count = 0;
float scholarship_count = 0, payment_count = 0;
string general_grade;
string pol;
string stipend;


struct student
{
	//  mathematics
	int math_prac;
	int math_ass;
	int math_test;
	int math_exam;
	// programming
	int prog_prac;
	int prog_ass;
	int prog_test;
	int prog_exam;
	// system analysis
	int sys_prac;
	int sys_ass;
	int sys_test;
	int sys_exam;
	// cybernetics;
	int cyb_prac;
	int cyb_ass;
	int cyb_test;
	int cyb_exam;
	//  English
	int eng_prac;
	int eng_ass;
	int eng_test;
	// Economics
	int econs_prac;
	int econs_ass;
	int econs_test;
	// Sociology
	int soc_prac;
	int soc_ass;
	int soc_test;
	int generalGrade;

	//int errors = 0;

	void student_table();
	void math();
	void get_math_data();
	void show_math_data() const;
	void show_math_table();
	void math_calc();
	int math_score;
	string math_grade;
	void programming();
	void get_prog_data();
	void show_prog_data() const;
	void show_prog_table();
	void prog_calc();
	int prog_score;
	string prog_grade;
	void cybernetics();
	void get_cyb_data();
	void show_cyb_data() const;
	void show_cyb_table();
	void cyb_calc();
	int cyb_score;
	string cyb_grade;
	void system();
	void get_sys_data();
	void show_sys_data() const;
	void show_sys_table();
	void sys_calc();
	int sys_score;
	string sys_grade;
	void english();
	void get_eng_data();
	void show_eng_data() const;
	void show_eng_table();
	void eng_calc();
	int eng_score;
	string eng_grade;
	void economics();
	void get_econs_data();
	void show_econs_data() const;
	void show_econs_table();
	void econs_calc();
	int econs_score;
	string econs_grade;

	void sociology();
	void get_soc_data();
	void show_soc_data() const;
	void show_soc_table();
	void soc_calc();
	int soc_score;
	string soc_grade;

	int student_ID;					//A unique number 
	char surname[30];
	char middle_name[30];
	char first_name[30];
	char gender[10];
	char country[15];
	char mode[15];

	void gender_count();
	void acad_stat_table();
	void mode_count();

	void get_data();
	void showdata() const;
	void show_tabular() const;
	void show_plain() const;

	int ret_student_ID() const;
};
//+-------------------------------------------------------------------------+
// |							function prototypes						|
//+-------------------------------------------------------------------------+
void intro();					//Start page
void color_background();
bool password();
void page_select();
void students_names();
void student_page();
void report_card(int);
void kyrator_page();
void add_student();
void delete_student(int);
void specific_student_result(int);
void group_result();
void tabular_group_result();
void teacher_page();
void math_grades_entry(int);
void show_math_grades();
void tabular_math_grades();
void prog_grades_entry(int);
void show_prog_grades();
void tabular_prog_grades();
void cyb_grades_entry(int);
void show_cyb_grades();
void tabular_cyb_grades();
void sys_grades_entry(int);
void show_sys_grades();
void tabular_sys_grades();
void eng_grades_entry(int);
void show_eng_grades();
void tabular_eng_grades();
void econs_grades_entry(int);
void show_econs_grades();
void tabular_econs_grades();
void soc_grades_entry(int);
void show_soc_grades();
void tabular_soc_grades();

void acad_stat();
void gender_stat();
void mode_stat();

//+-------------------------------------------------------------------------+
// |					   Struct functions							    |
//+-------------------------------------------------------------------------+

void student::get_data()
{
	cout << "\n\t\t\tСТРАНИЦА СОЗДАНИЯ СТУДЕНЧЕСКОЙ ЗАПИСИ ";
	cout << "\n\n\tИдентификационный номер студента: ";
	cin >> student_ID;
	cout << "\n\tФамилия студента : ";
	cin >> surname;
	cout << "\n\tОтчество студента : ";
	cin >> middle_name;
	cout << "\n\tИмя студента : ";
	cin >> first_name;
	cout << "\n\tПол студента: ";
	cin >> gender;
	cout << "\n\tСтрана студента : ";
	cin >> country;
	cout << "\n\tСпособ обучения: ";
	cin >> mode;
}
void student::showdata() const
{
	cout << "\n\tID студента: "; cout << setw(8) << setfill(' ') << " " << student_ID;
	cout << "\n\tФамилия студента: "; cout << setw(2) << setfill(' ') << " " << surname;
	cout << "\n\tОтчество студента: "; cout << setw(1) << setfill(' ') << " " << middle_name;
	cout << "\n\tИмя студента: "; cout << setw(6) << setfill(' ') << " " << first_name;
	cout << "\n\tПол студента: "; cout << setw(6) << setfill(' ') << " " << gender;
	cout << "\n\tСтрана студента: "; cout << setw(3) << setfill(' ') << " " << country;
	cout << "\n\tСпособ обучения: "; cout << setw(3) << setfill(' ') << " " << mode;
}
void student::show_tabular() const
{
	cout << "    " << setiosflags(ios::right) << setfill(' ') << setw(2) << "| " <<
		student_ID << "." << setw(12) << setfill(' ') <<
		surname << setw(11) << setfill(' ') <<
		first_name << setw(13) << setfill(' ') << "  |    " << setw(6) << setfill(' ') <<
		math_grade << setw(10) << setfill(' ') << " |    " << setw(8) << setfill(' ') <<
		prog_grade << setw(14) << setfill(' ') << " |    " << setw(6) << setfill(' ') <<
		cyb_grade << setw(11) << setfill(' ') << " |    " << setw(8) << setfill(' ') <<
		sys_grade << setw(11) << setfill(' ') << " |    " << setw(6) << setfill(' ') <<
		eng_grade << setw(12) << setfill(' ') << " |    " << setw(5) << setfill(' ') <<
		econs_grade << setw(10) << setfill(' ') << " |    " << setw(4) << setfill(' ') <<
		soc_grade << setw(5) << setfill(' ') << "|" << setiosflags(ios::showpoint | ios::right) << endl;
	cout << "    =" << setfill('=') << setw(157) << "= \n";

}
int  student::ret_student_ID() const
{
	return student_ID;
}
void student::show_plain() const
{
	cout << "\n\tМатематика: " << setw(8) << setfill(' ') << " " << math_grade;
	cout << "\n\tПрограммирование: " << setw(2) << setfill(' ') << " " << prog_grade;
	cout << "\n\tКибернетика: " << setw(7) << setfill(' ') << " " << cyb_grade;
	cout << "\n\tСистемный Анализ: " << setw(2) << setfill(' ') << " " << sys_grade;
	cout << "\n\tАнглийский Язык: " << setw(3) << setfill(' ') << " " << eng_grade;
	cout << "\n\tЭкономика: " << setw(9) << setfill(' ') << " " << econs_grade;
	cout << "\n\tСоциология: " << setw(8) << setfill(' ') << " " << soc_grade;
}

void student::math()
{
	int num;
	char ch;
	cout << "\n\n\t\t\tСТРАНИЦА ДЛЯ ПРЕПОДАВАТЕЛЕЙ МАТИМАТИКИ";
	cout << "\n\n\t Пожалуйста, Введите Свой Выбор";
	cout << "\n\n\t1. Введите запись студента";
	cout << "\n\n\t2. Просмотр записей всех студентов";
	cout << "\n\n\t3. Просмотр табличных записей всех студентов";
	cout << "\n\n\t4. Возврат к предыдущему меню\n\t";
	cin >> ch;
	switch (ch)
	{
	case '1': cout << "\n\n\tВведите Идентификационный номер студента: "; cin >> num; math_grades_entry(num); break;
	case '2':	show_math_grades(); break;
	case '3':	tabular_math_grades(); break;
	case '4': teacher_page(); break;
	default:	cout << "\a"; math();
	}


}
void student::math_calc()
{
	int total_math_score;
	total_math_score = math_prac + math_ass + math_test + math_exam;
	if (total_math_score <= 100 && total_math_score >= 85)
	{
		math_grade = "ACED";
	}
	else if (total_math_score < 85 && total_math_score >= 75)
	{
		math_grade = "GOOD";
	}
	else if (total_math_score < 75 && total_math_score >= 65)
	{
		math_grade = "PASS";
	}
	else if (total_math_score < 65)
	{
		math_grade = "FAIL";
	}
}
void student::get_math_data()
{
	cout << "\n\t\t" << surname << "  " << first_name << "  " << middle_name << " " << endl;
	cout << "\n\tОценка в практической работе : ";
	cin >> math_prac;
	cout << "\n\tОценки по домашней работе: ";
	cin >> math_ass;
	cout << "\n\tОценки в тесте : ";
	cin >> math_test;
	cout << "\n\tОценки на экзамене : ";
	cin >> math_exam;
}
void student::show_math_data() const
{

	cout << "\n\tПрак. занятия: "; cout << setw(8) << setfill(' ') << math_prac;
	cout << "\n\tДомашние задания: "; cout << setw(5) << setfill(' ') << math_ass;
	cout << "\n\tТест: "; cout << setw(17) << setfill(' ') << math_test;
	cout << "\n\tЭкзамен: "; cout << setw(14) << setfill(' ') << math_exam;
	cout << "\n\tЭкзаменац.отметки:  "; cout << setw(5) << setfill(' ') << math_grade;
}
void student::show_math_table()
{
	cout << "\t| " <<
		student_ID << setw(15) << setfill(' ') <<
		surname << setw(11) << setfill(' ') <<
		first_name << setw(10) << setfill(' ') << "  |    " << setw(7) << setfill(' ') <<
		math_prac << setw(15) << setfill(' ') << " |    " << setw(5) << setfill(' ') <<
		math_ass << setw(14) << setfill(' ') << " |    " << setw(3) << setfill(' ') <<
		math_test << setw(10) << setfill(' ') << " |    " << setw(4) << setfill(' ') <<
		math_exam << setw(12) << setfill(' ') << " |    " << setw(11) << setfill(' ') <<
		math_grade << setw(10) << setfill(' ') << "|" << setiosflags(ios::showpoint | ios::right) << endl;
	cout << "\t=" << setfill('=') << setw(131) << "= \n";
}

void student::programming()
{
	int num;
	char ch;
	cout << "\n\n\t\t\tСТРАНИЦА ДЛЯ ПРЕПОДАВАТЕЛЕЙ ПРОГРАММИРОВАНИЯ";
	cout << "\n\n\t Пожалуйста, Введите Свой Выбор";
	cout << "\n\n\t1. Введите запись студента";
	cout << "\n\n\t2. Просмотр записей всех студентов";
	cout << "\n\n\t3. Просмотр табличных записей всех студентов";
	cout << "\n\n\t4. Возврат к предыдущему меню\n\t";
	cin >> ch;
	switch (ch)
	{
	case '1': cout << "\n\n\tВведите Идентификационный номер студента: "; cin >> num; prog_grades_entry(num); break;
	case '2':	show_prog_grades(); break;
	case '3':	tabular_prog_grades(); break;
	case '4': teacher_page(); break;
	default:	cout << "\a"; programming();
	}


}
void student::get_prog_data()
{
	cout << "\n\t\t" << surname << "  " << first_name << "  " << middle_name << " " << endl;
	cout << "\n\tОценка в практической работе : ";
	cin >> prog_prac;
	cout << "\n\tОценки по домашней работе: ";
	cin >> prog_ass;
	cout << "\n\tОценки в тесте : ";
	cin >> prog_test;
	cout << "\n\tОценки на экзамене : ";
	cin >> prog_exam;
}
void student::show_prog_data() const
{

	cout << "\n\tПрак. занятия: "; cout << setw(8) << setfill(' ') << prog_prac;
	cout << "\n\tДомашние задания: "; cout << setw(5) << setfill(' ') << prog_ass;
	cout << "\n\tТест: "; cout << setw(17) << setfill(' ') << prog_test;
	cout << "\n\tЭкзамен: "; cout << setw(14) << setfill(' ') << prog_exam;
	cout << "\n\tЭкзаменац.отметки:  "; cout << setw(4) << setfill(' ') << prog_grade;
}
void student::show_prog_table()
{
	cout << "\t| " <<
		student_ID << setw(15) << setfill(' ') <<
		surname << setw(11) << setfill(' ') <<
		first_name << setw(10) << setfill(' ') << "  |    " << setw(7) << setfill(' ') <<
		prog_prac << setw(15) << setfill(' ') << " |    " << setw(5) << setfill(' ') <<
		prog_ass << setw(14) << setfill(' ') << " |    " << setw(3) << setfill(' ') <<
		prog_test << setw(10) << setfill(' ') << " |    " << setw(4) << setfill(' ') <<
		prog_exam << setw(12) << setfill(' ') << " |    " << setw(11) << setfill(' ') <<
		prog_grade << setw(10) << setfill(' ') << "|" << setiosflags(ios::showpoint | ios::right) << endl;
	cout << "\t=" << setfill('=') << setw(131) << "= \n";
}
void student::prog_calc()
{
	int total_prog_score;
	total_prog_score = prog_prac + prog_ass + prog_test + prog_exam;
	if (total_prog_score <= 100 && total_prog_score >= 85)
	{
		prog_grade = "ACED";
	}
	else if (total_prog_score < 85 && total_prog_score >= 75)
	{
		prog_grade = "GOOD";
	}
	else if (total_prog_score < 75 && total_prog_score >= 65)
	{
		prog_grade = "PASS";
	}
	else if (total_prog_score < 65)
	{
		prog_grade = "FAIL";
	}
}


void student::cybernetics()
{
	int num;
	char ch;
	cout << "\n\n\t\t\tСТРАНИЦА ДЛЯ ПРЕПОДАВАТЕЛЕЙ КИБЕРНЕТИКИ";
	cout << "\n\n\t Пожалуйста, Введите Свой Выбор";
	cout << "\n\n\t1. Введите запись студента";
	cout << "\n\n\t2. Просмотр записей всех студентов";
	cout << "\n\n\t3. Просмотр табличных записей всех студентов";
	cout << "\n\n\t4. Возврат к предыдущему меню\n\t";
	cin >> ch;
	switch (ch)
	{
	case '1': cout << "\n\n\tВведите Идентификационный номер студента: "; cin >> num; cyb_grades_entry(num); break;
	case '2':	show_cyb_grades(); break;
	case '3':	tabular_cyb_grades(); break;
	case '4': teacher_page(); break;
	default:	cout << "\a"; cybernetics();
	}


}
void student::get_cyb_data()
{
	cout << "\n\t\t" << surname << "  " << first_name << "  " << middle_name << " " << endl;
	cout << "\n\tОценка в практической работе : ";
	cin >> cyb_prac;
	cout << "\n\tОценки по домашней работе: ";
	cin >> cyb_ass;
	cout << "\n\tОценки в тесте : ";
	cin >> cyb_test;
	cout << "\n\tОценки на экзамене : ";
	cin >> cyb_exam;
}
void student::show_cyb_data() const
{

	cout << "\n\tПрак. занятия: "; cout << setw(8) << setfill(' ') << cyb_prac;
	cout << "\n\tДомашние задания: "; cout << setw(5) << setfill(' ') << cyb_ass;
	cout << "\n\tТест: "; cout << setw(17) << setfill(' ') << cyb_test;
	cout << "\n\tЭкзамен: "; cout << setw(14) << setfill(' ') << cyb_exam;
	cout << "\n\tЭкзаменац.отметки:  "; cout << setw(4) << setfill(' ') << cyb_grade;
}
void student::show_cyb_table()
{
	cout << "\t| " <<
		student_ID << setw(15) << setfill(' ') <<
		surname << setw(11) << setfill(' ') <<
		first_name << setw(10) << setfill(' ') << "  |    " << setw(7) << setfill(' ') <<
		cyb_prac << setw(15) << setfill(' ') << " |    " << setw(5) << setfill(' ') <<
		cyb_ass << setw(14) << setfill(' ') << " |    " << setw(3) << setfill(' ') <<
		cyb_test << setw(10) << setfill(' ') << " |    " << setw(4) << setfill(' ') <<
		cyb_exam << setw(12) << setfill(' ') << " |    " << setw(11) << setfill(' ') <<
		cyb_grade << setw(10) << setfill(' ') << "|" << setiosflags(ios::showpoint | ios::right) << endl;
	cout << "\t=" << setfill('=') << setw(131) << "= \n";
}
void student::cyb_calc()
{
	int total_cyb_score;
	total_cyb_score = cyb_prac + cyb_ass + cyb_test + cyb_exam;
	if (total_cyb_score <= 100 && total_cyb_score >= 85)
	{
		cyb_grade = "ACED";
	}
	else if (total_cyb_score < 85 && total_cyb_score >= 75)
	{
		cyb_grade = "GOOD";
	}
	else if (total_cyb_score < 75 && total_cyb_score >= 65)
	{
		cyb_grade = "PASS";
	}
	else if (total_cyb_score < 65)
	{
		cyb_grade = "FAIL";
	}
}


void student::system()
{
	int num;
	char ch;
	cout << "\n\n\t\t\tСТРАНИЦА ДЛЯ ПРЕПОДАВАТЕЛЕЙ СИСТЕМНОГО АНАЛИЗА";
	cout << "\n\n\t Пожалуйста, Введите Свой Выбор";
	cout << "\n\n\t1. Введите запись студента";
	cout << "\n\n\t2. Просмотр записей всех студентов";
	cout << "\n\n\t3. Просмотр табличных записей всех студентов";
	cout << "\n\n\t4. Возврат к предыдущему меню\n\t";
	cin >> ch;
	switch (ch)
	{
	case '1': cout << "\n\n\tВведите Идентификационный номер студента: "; cin >> num; sys_grades_entry(num); break;
	case '2':	show_sys_grades(); break;
	case '3':	tabular_sys_grades(); break;
	case '4': teacher_page(); break;
	default:	cout << "\a"; system();
	}


}
void student::get_sys_data()
{
	cout << "\n\t\t" << surname << "  " << first_name << "  " << middle_name << " " << endl;
	cout << "\n\tОценка в практической работе : ";
	cin >> sys_prac;
	cout << "\n\tОценки по домашней работе: ";
	cin >> sys_ass;
	cout << "\n\tОценки в тесте : ";
	cin >> sys_test;
	cout << "\n\tОценки на экзамене : ";
	cin >> sys_exam;
}
void student::show_sys_data() const
{

	cout << "\n\tПрак. занятия: "; cout << setw(8) << setfill(' ') << sys_prac;
	cout << "\n\tДомашние задания: "; cout << setw(5) << setfill(' ') << sys_ass;
	cout << "\n\tТест: "; cout << setw(17) << setfill(' ') << sys_test;
	cout << "\n\tЭкзамен: "; cout << setw(14) << setfill(' ') << sys_exam;
	cout << "\n\tЭкзаменац.отметки:  "; cout << setw(4) << setfill(' ') << sys_grade;
}
void student::show_sys_table()
{
	cout << "\t| " <<
		student_ID << setw(15) << setfill(' ') <<
		surname << setw(11) << setfill(' ') <<
		first_name << setw(10) << setfill(' ') << "  |    " << setw(7) << setfill(' ') <<
		sys_prac << setw(15) << setfill(' ') << " |    " << setw(5) << setfill(' ') <<
		sys_ass << setw(14) << setfill(' ') << " |    " << setw(3) << setfill(' ') <<
		sys_test << setw(10) << setfill(' ') << " |    " << setw(4) << setfill(' ') <<
		sys_exam << setw(12) << setfill(' ') << " |    " << setw(11) << setfill(' ') <<
		sys_grade << setw(10) << setfill(' ') << "|" << setiosflags(ios::showpoint | ios::right) << endl;
	cout << "\t=" << setfill('=') << setw(131) << "= \n";

}
void student::sys_calc()
{
	int total_sys_score;
	total_sys_score = sys_prac + sys_ass + sys_test + sys_exam;
	if (total_sys_score <= 100 && total_sys_score >= 85)
	{
		sys_grade = "ACED";
	}
	else if (total_sys_score < 85 && total_sys_score >= 75)
	{
		sys_grade = "GOOD";
	}
	else if (total_sys_score < 75 && total_sys_score >= 65)
	{
		sys_grade = "PASS";
	}
	else if (total_sys_score < 65)
	{
		sys_grade = "FAIL";
	}
}


void student::english()
{
	int num;
	char ch;
	cout << "\n\n\t\t\tСТРАНИЦА ДЛЯ ПРЕПОДАВАТЕЛЕЙ АНГЛИЙСКОГО ЯЗЫКА";
	cout << "\n\n\t Пожалуйста, Введите Свой Выбор";
	cout << "\n\n\t1. Введите запись студента";
	cout << "\n\n\t2. Просмотр записей всех студентов";
	cout << "\n\n\t3. Просмотр табличных записей всех студентов";
	cout << "\n\n\t4. Возврат к предыдущему меню\n\t";
	cin >> ch;
	switch (ch)
	{
	case '1': cout << "\n\n\tВведите Идентификационный номер студента: "; cin >> num; eng_grades_entry(num); break;
	case '2':	show_eng_grades(); break;
	case '3':	tabular_eng_grades(); break;
	case '4': teacher_page(); break;
	default:	cout << "\a"; english();
	}


}
void student::get_eng_data()
{
	cout << "\n\t\t" << surname << "  " << first_name << "  " << middle_name << " " << endl;
	cout << "\n\tОценка в практической работе : ";
	cin >> eng_prac;
	cout << "\n\tОценки по домашней работе: ";
	cin >> eng_ass;
	cout << "\n\tОценки в тесте : ";
	cin >> eng_test;
}
void student::show_eng_data() const
{

	cout << "\n\tПрак. занятия: "; cout << setw(8) << setfill(' ') << eng_prac;
	cout << "\n\tДомашние задания: "; cout << setw(5) << setfill(' ') << eng_ass;
	cout << "\n\tТест: "; cout << setw(17) << setfill(' ') << eng_test;
	cout << "\n\tЭкзаменац.отметки:  "; cout << setw(4) << setfill(' ') << eng_grade;
}
void student::show_eng_table()
{
	cout << "\t| " <<
		student_ID << setw(15) << setfill(' ') <<
		surname << setw(11) << setfill(' ') <<
		first_name << setw(10) << setfill(' ') << "  |    " << setw(7) << setfill(' ') <<
		eng_prac << setw(15) << setfill(' ') << " |    " << setw(5) << setfill(' ') <<
		eng_ass << setw(14) << setfill(' ') << " |    " << setw(3) << setfill(' ') <<
		eng_test << setw(10) << setfill(' ') << " |    " << setw(11) << setfill(' ') <<
		eng_grade << setw(10) << setfill(' ') << "|" << setiosflags(ios::showpoint | ios::right) << endl;
	cout << "\t=" << setfill('=') << setw(115) << "= \n";
}
void student::eng_calc()
{
	int total_eng_score;
	total_eng_score = eng_prac + eng_ass + eng_test;
	if (total_eng_score <= 40 && total_eng_score >= 20)
	{
		eng_grade = "PASS";
	}
	else if (total_eng_score < 20)
	{
		eng_grade = "FAIL";
	}
}


void student::economics()
{
	int num;
	char ch;
	cout << "\n\n\t\t\tСТРАНИЦА ДЛЯ ПРЕПОДАВАТЕЛЕЙ ЭКОНОМИКИ";
	cout << "\n\n\t Пожалуйста, Введите Свой Выбор";
	cout << "\n\n\t1. Введите запись студента";
	cout << "\n\n\t2. Просмотр записей всех студентов";
	cout << "\n\n\t3. Просмотр табличных записей всех студентов";
	cout << "\n\n\t4. Возврат к предыдущему меню\n\t";
	cin >> ch;
	switch (ch)
	{
	case '1': cout << "\n\n\tВведите Идентификационный номер студента: "; cin >> num; econs_grades_entry(num); break;
	case '2':	show_econs_grades(); break;
	case '3':	tabular_econs_grades(); break;
	case '4': teacher_page(); break;
	default:	cout << "\a"; economics();
	}


}
void student::get_econs_data()
{
	cout << "\n\t\t" << surname << "  " << first_name << "  " << middle_name << " " << endl;
	cout << "\n\tОценка в практической работе : ";
	cin >> econs_prac;
	cout << "\n\tОценки по домашней работе: ";
	cin >> econs_ass;
	cout << "\n\tОценки в тесте : ";
	cin >> econs_test;
}
void student::show_econs_data() const
{

	cout << "\n\tПрак. занятия: "; cout << setw(8) << setfill(' ') << econs_prac;
	cout << "\n\tДомашние задания: "; cout << setw(5) << setfill(' ') << econs_ass;
	cout << "\n\tТест: "; cout << setw(17) << setfill(' ') << econs_test;
	cout << "\n\tЭкзаменац.отметки:  "; cout << setw(4) << setfill(' ') << econs_grade;
}
void student::show_econs_table()
{
	cout << "\t| " <<
		student_ID << setw(15) << setfill(' ') <<
		surname << setw(11) << setfill(' ') <<
		first_name << setw(10) << setfill(' ') << "  |    " << setw(7) << setfill(' ') <<
		econs_prac << setw(15) << setfill(' ') << " |    " << setw(5) << setfill(' ') <<
		econs_ass << setw(14) << setfill(' ') << " |    " << setw(3) << setfill(' ') <<
		econs_test << setw(10) << setfill(' ') << " |    " << setw(11) << setfill(' ') <<
		econs_grade << setw(10) << setfill(' ') << "|" << setiosflags(ios::showpoint | ios::right) << endl;
	cout << "\t=" << setfill('=') << setw(115) << "= \n";
}
void student::econs_calc()
{
	int total_econs_score;
	total_econs_score = econs_prac + econs_ass + econs_test;
	if (total_econs_score <= 40 && total_econs_score >= 20)
	{
		econs_grade = "PASS";
	}
	else if (total_econs_score < 20)
	{
		econs_grade = "FAIL";
	}
}

void student::sociology()
{
	int num;
	char ch;
	cout << "\n\n\t\t\tСТРАНИЦА ДЛЯ ПРЕПОДАВАТЕЛЕЙ СОЦИОЛОГИИ";
	cout << "\n\n\t Пожалуйста, Введите Свой Выбор";
	cout << "\n\n\t1. Введите запись студента";
	cout << "\n\n\t2. Просмотр записей всех студентов";
	cout << "\n\n\t3. Просмотр табличных записей всех студентов";
	cout << "\n\n\t4. Возврат к предыдущему меню\n\t";
	cin >> ch;
	switch (ch)
	{
	case '1': cout << "\n\n\tВведите Идентификационный номер студента: "; cin >> num; soc_grades_entry(num); break;
	case '2':	show_soc_grades(); break;
	case '3':	tabular_soc_grades(); break;
	case '4': teacher_page(); break;
	default:	cout << "\a"; sociology();
	}


}
void student::get_soc_data()
{
	cout << "\n\t\t" << surname << "  " << first_name << "  " << middle_name << " " << endl;
	cout << "\n\tОценка в практической работе : ";
	cin >> soc_prac;
	cout << "\n\tОценки по домашней работе: ";
	cin >> soc_ass;
	cout << "\n\tОценки в тесте : ";
	cin >> soc_test;
}
void student::show_soc_data() const
{

	cout << "\n\tПрак. занятия: "; cout << setw(8) << setfill(' ') << soc_prac;
	cout << "\n\tДомашние задания: "; cout << setw(5) << setfill(' ') << soc_ass;
	cout << "\n\tТест: "; cout << setw(17) << setfill(' ') << soc_test;
	cout << "\n\tЭкзаменац.отметки:  "; cout << setw(4) << setfill(' ') << soc_grade;
}
void student::show_soc_table()
{
	cout << "\t| " <<
		student_ID << setw(15) << setfill(' ') <<
		surname << setw(11) << setfill(' ') <<
		first_name << setw(10) << setfill(' ') << "  |    " << setw(7) << setfill(' ') <<
		soc_prac << setw(15) << setfill(' ') << " |    " << setw(5) << setfill(' ') <<
		soc_ass << setw(14) << setfill(' ') << " |    " << setw(3) << setfill(' ') <<
		soc_test << setw(10) << setfill(' ') << " |    " << setw(11) << setfill(' ') <<
		soc_grade << setw(10) << setfill(' ') << "|" << setiosflags(ios::showpoint | ios::right) << endl;
	cout << "\t=" << setfill('=') << setw(115) << "= \n";
}
void student::soc_calc()
{
	int total_soc_score;
	total_soc_score = soc_prac + soc_ass + soc_test;
	if (total_soc_score <= 40 && total_soc_score >= 20)
	{
		soc_grade = "PASS";
	}
	else if (total_soc_score < 20)
	{
		soc_grade = "FAIL";
	}
}

void student::student_table()
{
	student ps;
	math_calc();
	prog_calc();
	cyb_calc();
	sys_calc();
	eng_calc();
	econs_calc();
	soc_calc();
	cout << "\n\n\t\t\t\t\t\t\t\t\tЗАЧЁТНАЯ КНИЖКА" << endl;
	cout << "\n\t\t" << "ФИО Студента: " << surname << "  " << first_name << "  " << middle_name << " " << endl;
	cout << "=" << setfill('=') << setw(169) << "= \n";
	cout << "\n\t\t\t\t\t\t\tТЕОРЕТИЧЕСКИЙ КУРС" << endl;
	cout << "\t|=" << setfill('=') << setw(123) << "=| \n";
	cout <<
		"\t|     " << setfill(' ') << setw(5) <<
		"Дисциплина" << setfill(' ') << setw(6) << "|" << setfill(' ') << setw(8) <<
		"   Прак. занятия" << setfill(' ') << setw(5) << "| " << setfill(' ') << setw(8) <<
		"     Д. задание " << setfill(' ') << setw(8) << "| " << setfill(' ') << setw(6) <<
		"   Тесты" << setfill(' ') << setw(8) << "| " << setfill(' ') << setw(8) <<
		"  Экзамены" << setfill(' ') << setw(8) << "| " << setfill(' ') << setw(6) <<
		"   Итоговая оценка" << setfill(' ') << setw(5) << "| " << endl;
	cout << "\t|=" << setfill('=') << setw(123) << "==| \n";
	cout << "\t|   " << "Математика       |" << setw(11) << setfill(' ') << math_prac << setw(9) << setfill(' ') << "|" << setw(12) << setfill(' ') << math_ass << setw(12) << setfill(' ') << "|" << setw(9) << setfill(' ') << math_test << setw(7) << setfill(' ') << "|" << setw(9) << setfill(' ') << math_exam << setw(9) << setfill(' ') << "|" << setw(13) << setfill(' ') << math_grade << setw(10) << setfill(' ') << "|" << endl;
	cout << "\t|=" << setfill('=') << setw(123) << "=| \n";
	cout << "\t|   " << "Программирование |" << setw(11) << setfill(' ') << prog_prac << setw(9) << setfill(' ') << "|" << setw(12) << setfill(' ') << prog_ass << setw(12) << setfill(' ') << "|" << setw(9) << setfill(' ') << prog_test << setw(7) << setfill(' ') << "|" << setw(9) << setfill(' ') << prog_exam << setw(9) << setfill(' ') << "|" << setw(13) << setfill(' ') << prog_grade << setw(10) << setfill(' ') << "|" << endl;
	cout << "\t|=" << setfill('=') << setw(123) << "=| \n";
	cout << "\t|   " << "Кибернетика      |" << setw(11) << setfill(' ') << cyb_prac << setw(9) << setfill(' ') << "|" << setw(12) << setfill(' ') << cyb_ass << setw(12) << setfill(' ') << "|" << setw(9) << setfill(' ') << cyb_test << setw(7) << setfill(' ') << "|" << setw(9) << setfill(' ') << cyb_exam << setw(9) << setfill(' ') << "|" << setw(13) << setfill(' ') << cyb_grade << setw(10) << setfill(' ') << "|" << endl;
	cout << "\t|=" << setfill('=') << setw(123) << "=| \n";
	cout << "\t|   " << "Системный Анализ |" << setw(11) << setfill(' ') << sys_prac << setw(9) << setfill(' ') << "|" << setw(12) << setfill(' ') << sys_ass << setw(12) << setfill(' ') << "|" << setw(9) << setfill(' ') << sys_test << setw(7) << setfill(' ') << "|" << setw(9) << setfill(' ') << sys_exam << setw(9) << setfill(' ') << "|" << setw(13) << setfill(' ') << sys_grade << setw(10) << setfill(' ') << "|" << endl;
	cout << "\t|=" << setfill('=') << setw(123) << "=| \n";

	cout << "\n\n\t\t\t\t\t\t\tПРАКТИЧЕСКИЙ  КУРС" << endl;
	cout << "\t|=" << setfill('=') << setw(101) << " \n";
	cout <<
		"\t|" << setfill(' ') << setw(5) <<
		"     Дисциплина" << setfill(' ') << setw(5) << "|" << setfill(' ') << setw(8) <<
		"    Прак. занятия" << setfill(' ') << setw(5) << "| " << setfill(' ') << setw(8) <<
		"     Д. задание " << setfill(' ') << setw(8) << "| " << setfill(' ') << setw(6) <<
		"  Тесты" << setfill(' ') << setw(6) << "| " << setfill(' ') << setw(8) <<
		"   Итоговая оценка" << setfill(' ') << setw(4) << "| " << endl;
	cout << "\t|=" << setfill('=') << setw(101) << " \n";
	cout << "\t|   " << "Английский Язык |" << setw(12) << setfill(' ') << eng_prac << setw(9) << setfill(' ') << "|" << setw(12) << setfill(' ') << eng_ass << setw(12) << setfill(' ') << "|" << setw(7) << setfill(' ') << eng_test << setw(6) << setfill(' ') << "|" << setw(12) << setfill(' ') << eng_grade << setw(10) << setfill(' ') << " |" << endl;
	cout << "\t|=" << setfill('=') << setw(101) << "=| \n";
	cout << "\t|   " << "Экономика       |" << setw(12) << setfill(' ') << econs_prac << setw(9) << setfill(' ') << "|" << setw(12) << setfill(' ') << econs_ass << setw(12) << setfill(' ') << "|" << setw(7) << setfill(' ') << econs_test << setw(6) << setfill(' ') << "|" << setw(12) << setfill(' ') << econs_grade << setw(10) << setfill(' ') << " |" << endl;
	cout << "\t|=" << setfill('=') << setw(101) << "=| \n";
	cout << "\t|   " << "Социология      |" << setw(12) << setfill(' ') << soc_prac << setw(9) << setfill(' ') << "|" << setw(12) << setfill(' ') << soc_ass << setw(12) << setfill(' ') << "|" << setw(7) << setfill(' ') << soc_test << setw(6) << setfill(' ') << "|" << setw(12) << setfill(' ') << soc_grade << setw(10) << setfill(' ') << " |" << endl;
	cout << "\t|=" << setfill('=') << setw(104) << "  \n\n\n";
	//cout << "\t|=" << setfill('=') << setw(124) << "= \n";
	cin.ignore();
	cin.get();
	student_page();
}
void student::acad_stat_table()
{
	int total_math_score, total_prog_score, total_cyb_score, total_sys_score, total_eng_score, total_econs_score, total_soc_score, general_score;
	total_math_score = math_prac + math_ass + math_test + math_exam;
	total_prog_score = prog_prac + prog_ass + prog_test + prog_exam;
	total_cyb_score = cyb_prac + cyb_ass + cyb_test + cyb_exam;
	total_sys_score = sys_prac + sys_ass + sys_test + sys_exam;
	total_eng_score = eng_prac + eng_ass + eng_test;
	total_econs_score = econs_prac + econs_ass + econs_test;
	total_soc_score = soc_prac + soc_ass + soc_test;
	generalGrade = total_math_score + total_prog_score + total_cyb_score + total_sys_score + total_eng_score + total_econs_score + total_soc_score;
	if (generalGrade <= 500 && generalGrade >= 400)
	{
		general_grade = "      Отлично       |";
	}
	else if (generalGrade < 400 && generalGrade >= 360)
	{
		general_grade = "       Хорошо       |";
	}
	else if (generalGrade < 360 && generalGrade >= 320)
	{
		general_grade = "Удовлетверительно   |";
	}
	else if (generalGrade < 320)
	{
		general_grade = "Неудовлетверительно |";
	}

	cout << "\t\t| " <<
		student_ID << setw(15) << setfill(' ') <<
		surname << setw(11) << setfill(' ') <<
		first_name << setw(10) << setfill(' ') << "  |    " << setw(5) << setfill(' ') <<
		generalGrade << setw(10) << setfill(' ') << "    |    " << setw(7) << setfill(' ') <<
		general_grade << endl;
	cout << "    \t\t=" << setfill('=') << setw(76) << "= \n";

	/* int 	all_rate = aced + good + pass + fail;
	cout << "\n\n\t\tОтлично = " << (aced / all_rate) * 100 << "%" << endl;
	cout << "\n\t\tХорошо = " << (good / all_rate) * 100 << "%" << endl;
	cout << "\n\t\tУдовлетверительно = " << (pass / all_rate) * 100 << "%" << endl;
	cout << "\n\t\tНеудовлетверительно = " << (fail / all_rate) * 100 << "%" << endl; */

}
void student::gender_count()
{
	//int male_count = 0;
	//int female_count = 0;

	if (strlen(gender) == 4)
	{
		pol = "Мужской";
	}

	if (strlen(gender) == 6)
	{
		pol = "Женский";
	}
	//cout << "Male students = " << male_count << endl;
	//cout << "Female students = " << female_count << endl;

	cout << "\t\t\t| " <<
		student_ID << setw(15) << setfill(' ') <<
		surname << setw(11) << setfill(' ') <<
		first_name << setw(10) << setfill(' ') << "  |    " << setw(5) << setfill(' ') << "       " <<
		pol << setw(24) << setfill(' ') << "|    " << endl;
	cout << "    \t\t\t=" << setfill('=') << setw(74) << "= \n";
}
void student::mode_count()
{

	if (strlen(mode) == 11)
	{
		stipend = "Бесплатно		|";
	}

	if (strlen(mode) == 7)
	{
		stipend = "Платно	        |";
	}

	cout << "\t\t\t| " <<
		student_ID << setw(15) << setfill(' ') <<
		surname << setw(11) << setfill(' ') <<
		first_name << setw(10) << setfill(' ') << "  |    " << setw(5) << setfill(' ') << "       " <<
		stipend << setw(24) << setfill(' ') << "   " << endl;
	cout << "    \t\t\t=" << setfill('=') << setw(66) << "= \n";
}


//+-------------------------------------------------------------------------+
// |						Background Color						    |
//+-------------------------------------------------------------------------+
void color_background()
{
	system("color 70");
}
//+-------------------------------------------------------------------------+
// |						Start page									    |
//+-------------------------------------------------------------------------+
void intro()
{
	system("cls");
	cout << "\n\n\n\t\t\t\t  БЕЛГОРОДСКИЙ ГОСУДАРСТВЕННЫЙ";
	cout << "\n\n\t\t\t НАЦИОНАЛЬНЫЙ ИССЛЕДОВАТЕЛЬСКИЙ УНИВЕРСИТЕТ";
	cout << "\n\n\t\t\t\t\t(НИУ «БелГУ»)";
	cout << "\n\n\n\n\t\t \tОПРЕДЕЛЕНИЕ СТАТИСТИЧЕСКИХ ДАННЫХ ОБ УСПЕВАЕМОСТИ";
	cout << "\n\n\n\n\n\n\tАВТОР ПРОЕКТА: ЧИНДА АДЕЛЕ";
	cout << "\n\tВведите Пароль: ";  password();
}
//+-------------------------------------------------------------------------+
// |						 Password function						    |
//+-------------------------------------------------------------------------+
bool password()
{
	char key;
	string password = "1234";
	string PWD;
	while ((key = _getch()) != 13)
	{
		PWD += key;
		cout << "*";
	}
	cout << endl;

	if (PWD != password)
	{
		cout << "\n\tНеправильный пароль!!" << endl;
		intro();
	}
	return 0;
}
//+-------------------------------------------------------------------------+
// |						 Students Names							    |
//+-------------------------------------------------------------------------+
void students_names()
{
	student ps;
	cout << "Имена и уникальный код всех студентов";
	cout << ps.student_ID << ".  " << ps.surname << "  " << ps.middle_name << "  " << ps.first_name;
}
//+-------------------------------------------------------------------------+
// |						Page select function						    |
//+-------------------------------------------------------------------------+
void page_select()
{
	char ch;
	system("cls");
	cout << "\n\n\t\tПожалуйста, Введите Свой Выбор";
	cout << "\n\n\n\tВы Студент, Куратор или Преподаватель?";
	cout << "\n\n\t1.Вход для Студентов";
	cout << "\n\n\t2.Вход для Кураторов";
	cout << "\n\n\t3.Вход для Преподавателей";
	cout << "\n\n\t4.Выход из программы\n\t";

	cin >> ch;
	switch (ch)
	{
	case '1':	student_page(); break;
	case '2':	kyrator_page(); break;
	case '3':	teacher_page(); break;
	case '4': exit(0); break;
	default:	cout << "\a"; page_select();
	}
}
//+-------------------------------------------------------------------------+
// |				Student page function							    |
//+-------------------------------------------------------------------------+
void student_page()
{
	char ch;
	int num;
	system("cls");
	cout << "\t\t\tСТРАНИЦА СТУДЕНТОВ";
	cout << "\n\n\t Пожалуйста, Введите Свой Выбор";
	cout << "\n\n\t1. Зачётная Книжка";
	cout << "\n\n\t2. Возврат к предыдущему меню\n\t";
	cin >> ch;
	system("cls");
	switch (ch)
	{
	case '1': cout << "\n\n\tВведите ID: "; cin >> num;  system("cls"); report_card(num); break;
	case '2':	page_select(); break;
	default:	cout << "\a"; student_page();
	}
}
//+-------------------------------------------------------------------------+
// |					Student Report Card							    |
//+-------------------------------------------------------------------------+
void report_card(int n)
{
	student ps;
	ifstream inFile;
	inFile.open("cw1.dat", ios::binary);
	if (!inFile)
	{
		cout << "Файл не открывается !! Нажмите любую клавишу...";
		cin.ignore();
		cin.get();
		student_page();
		return;
	}
	bool flag = false;
	while (inFile.read(reinterpret_cast<char*> (&ps), sizeof(student)))
	{
		if (ps.ret_student_ID() == n)
		{
			ps.student_table();
			flag = true;
		}
	}
	inFile.close();
	if (flag == false)
		cout << "\n\nЗапись не существует";
	cin.ignore();
	cin.get();
	student_page();
}
//+-------------------------------------------------------------------------+
// |				Kyrator page function							    |
//+-------------------------------------------------------------------------+
void kyrator_page()
{
	char ch;
	int num;
	system("cls");
	cout << "\t\t\tСТРАНИЦА КУРАТОРОВ";
	cout << "\n\n\t Пожалуйста, Введите Свой Выбор";
	cout << "\n\n\t1. Добавить новый студент";
	//cout << "\n\n\t2. Удалить запись студента";
	cout << "\n\n\t2. Результат конкретного студента";
	cout << "\n\n\t3. Результат группы";
	cout << "\n\n\t4. Результат группы на таблице";
	cout << "\n\n\t5. Академическая статистика";
	cout << "\n\n\t6. Статистика по полу";
	cout << "\n\n\t7. Статистика по способу обучения";
	cout << "\n\n\t8. Возврат к предыдущему меню\n\t";
	cin >> ch;
	system("cls");
	switch (ch)
	{
	case '1': add_student(); break;
		/* case '2': cout << "\t\t\tСТРАНИЦА УДАЛЕНИЯ";
			cout << "\n\n\tВведите Идентификационный номер студента: ";
			cin >> num; delete_student(num); break; */
	case '2':cout << "\t\t\tСТРАНИЦА РЕЗУЛЬТАТОВ";
		cout << "\n\n\tВведите Идентификационный номер студента: ";
		cin >> num; specific_student_result(num); break;
	case '3': group_result(); break;
	case '4': tabular_group_result(); break;
	case '5':	acad_stat(); break;
	case '6': gender_stat(); break;
	case '7': mode_stat(); break;
	case '8': page_select(); break;
	default:	cout << "\a"; kyrator_page();
	}
}
//+-------------------------------------------------------------------------+
// |				Teacher page function							    |
//+-------------------------------------------------------------------------+
void teacher_page()
{
	student ps;
	char ch;
	system("cls");
	cout << "\t\t\tСТРАНИЦА ПРЕПОДАВАТЕЛЕЙ";
	cout << "\n\n\t Пожалуйста, Введите Свой Выбор";
	cout << "\n\n\n\tКакой предмет вы преподаете???";
	cout << "\n\n\t1.Высшая Математика";
	cout << "\n\n\t2.Программирование";
	cout << "\n\n\t3.Кибернетика ";
	cout << "\n\n\t4.Системный Анализ";
	cout << "\n\n\t5.Английский Язык";
	cout << "\n\n\t6.Экономика";
	cout << "\n\n\t7.Социология";
	cout << "\n\n\t8.Возврат к предыдущему меню\n\t";
	cin >> ch;

	switch (ch)
	{
	case '1': 	system("cls");  ps.math(); break;
	case '2':		system("cls");  ps.programming(); break;
	case '3':		system("cls"); ps.cybernetics(); break;
	case '4':		system("cls");  ps.system(); break;
	case '5':		system("cls");  ps.english(); break;
	case '6':		system("cls");  ps.economics(); break;
	case '7':		system("cls");  ps.sociology(); break;
	case '8':	page_select(); break;
	default:	cout << "\a"; teacher_page();
	}
}
//+-------------------------------------------------------------------------+
// |				Add student function							    |
//+-------------------------------------------------------------------------+
void add_student()
{
	student ps;
	ofstream outFile;
	outFile.open("cw1.dat", ios::binary | ios::app);
	ps.get_data();
	outFile.write(reinterpret_cast<char*> (&ps), sizeof(student));
	outFile.close();
	cout << "\n\n\tЗапись Создана!! ";
	cin.ignore();
	cin.get();
	kyrator_page();
}
//+-------------------------------------------------------------------------+
// |			Delete student function							    |
//+-------------------------------------------------------------------------+
void delete_student(int n)
{
	student ps;
	ifstream inFile;
	inFile.open("cw1.dat", ios::binary);
	if (!inFile)
	{
		cout << "Файл не открывается !!";
		cin.ignore();
		cin.get();
		kyrator_page();
		return;
	}
	ofstream outFile;
	outFile.open("Temp.dat", ios::out);
	inFile.seekg(0, ios::beg);
	while (inFile.read(reinterpret_cast<char*> (&ps), sizeof(student)))
	{
		if (ps.ret_student_ID() != n)
		{
			outFile.write(reinterpret_cast<char*> (&ps), sizeof(student));
		}
	}
	outFile.close();
	inFile.close();
	remove("cw1.dat");
	rename("Temp.dat", "cw1.dat");
	cout << "\n\n\tЗапись успешно удалена ..";
	cin.ignore();
	cin.get();
	kyrator_page();
}
//+-------------------------------------------------------------------------+
// |			 Display specific student grade					    |
//+-------------------------------------------------------------------------+
void specific_student_result(int n)
{
	student ps;
	ifstream inFile;
	inFile.open("cw1.dat", ios::binary);
	if (!inFile)
	{
		cout << "Файл не открывается !! Нажмите любую клавишу...";
		cin.ignore();
		cin.get();
		kyrator_page();
		return;
	}
	bool flag = false;
	while (inFile.read(reinterpret_cast<char*> (&ps), sizeof(student)))
	{
		if (ps.ret_student_ID() == n)
		{
			ps.math_calc();
			ps.prog_calc();
			ps.cyb_calc();
			ps.sys_calc();
			ps.eng_calc();
			ps.econs_calc();
			ps.soc_calc();
			ps.showdata();
			ps.show_plain();
			flag = true;
		}
	}
	inFile.close();
	if (flag == false)
		cout << "\n\n\tЗапись не существует";
	cin.ignore();
	cin.get();
	kyrator_page();
}
//+-------------------------------------------------------------------------+
// |			 Display all student grade							    |
//+-------------------------------------------------------------------------+
void group_result()
{
	student ps;
	ifstream inFile;
	inFile.open("cw1.dat", ios::binary);
	if (!inFile)
	{
		cout << "Файл не открывается !! Нажмите любую клавишу...";
		cin.ignore();
		cin.get();
		kyrator_page();
		return;
	}
	cout << "\n\t\tСТРАНИЦА КУРАТОРОВ";
	cout << "\n\n\n\tДАННЫЕ ВСЕХ СТУДЕНТОВ!!!\n\n";
	while (inFile.read(reinterpret_cast<char*> (&ps), sizeof(student)))
	{
		ps.math_calc();
		ps.prog_calc();
		ps.cyb_calc();
		ps.sys_calc();
		ps.eng_calc();
		ps.econs_calc();
		ps.soc_calc();
		ps.showdata();
		ps.show_plain();
		cout << "\n\n===============================================================\n";
	}
	inFile.close();
	cin.ignore();
	cin.get();
	kyrator_page();
}
//+-------------------------------------------------------------------------+
// |	    Display all student grade(Tabular)					    |
//+-------------------------------------------------------------------------+
void tabular_group_result()
{
	student ps;
	ifstream inFile;
	inFile.open("cw1.dat", ios::binary);
	if (!inFile)
	{
		cout << "Файл не открывается !! Нажмите любую клавишу...";
		cin.ignore();
		cin.get();
		kyrator_page();
		return;
	}
	cout << "\n\t\t\t\t\t\t\t\t\tСТРАНИЦА КУРАТОРОВ";
	cout << "\n\n\t\t\t\t\t\t\t\t\tТАБЛИЧНАЯ ЗАПИСЬ \n\n";
	cout << "    =" << setfill('=') << setw(157) << "= \n";
	cout <<
		"    |" << setfill(' ') << setw(3) <<
		"ID" << setfill(' ') << setw(3) << " " << setfill(' ') << setw(8) <<
		"   Фамилия" << setfill(' ') << setw(5) << "| " << setfill(' ') << setw(7) <<
		"Имя" << setfill(' ') << setw(8) << "| " << setfill(' ') << setw(5) <<
		"Математика" << setfill(' ') << setw(6) << "| " << setfill(' ') << setw(6) <<
		"Программирование" << setfill(' ') << setw(6) << "| " << setfill(' ') << setw(6) <<
		"Кибернетика" << setfill(' ') << setw(6) << "| " << setfill(' ') << setw(6) <<
		"Системный Анализ" << setfill(' ') << setw(3) << "| " << setfill(' ') << setw(6) <<
		"Английский Язык" << setfill(' ') << setw(3) << "| " << setfill(' ') << setw(6) <<
		"Экономика" << setfill(' ') << setw(6) << "| " << setfill(' ') << setw(6) <<
		"Социология" << setfill(' ') << setw(3) << "| " << setfill(' ') << setw(6);
	cout << "\n    =" << setfill('=') << setw(157) << "= \n";
	while (inFile.read(reinterpret_cast<char*> (&ps), sizeof(student)))
	{
		ps.math_calc();
		ps.prog_calc();
		ps.cyb_calc();
		ps.sys_calc();
		ps.eng_calc();
		ps.econs_calc();
		ps.soc_calc();
		ps.show_tabular();
	}

	inFile.close();
	cin.ignore();
	cin.get();
	kyrator_page();
}
//+-------------------------------------------------------------------------+
// |						 Math grades entry						    |
//+-------------------------------------------------------------------------+
void math_grades_entry(int n)
{
	bool found = false;
	student ps;
	fstream File;
	File.open("cw1.dat", ios::binary | ios::in | ios::out);
	if (!File)
	{
		cout << "Ошибка открытия файла...";
		cin.ignore();
		cin.get();
		system("cls");
		ps.math();
		return;
	}
	system("cls");
	cout << "\n\t\t\tСТРАНИЦА СОЗДАНИЯ СТУДЕНЧЕСКОЙ ЗАПИСИ ";

	while (!File.eof() && found == false)
	{
		File.read(reinterpret_cast<char*> (&ps), sizeof(student));
		if (ps.ret_student_ID() == n)
		{
			cout << "\n\n\tВведите оценки студента" << endl;
			ps.get_math_data();
			int pos = (-1) * static_cast<int>(sizeof(ps));
			File.seekp(pos, ios::cur);
			File.write(reinterpret_cast<char*> (&ps), sizeof(student));
			cout << "\n\n\t Запись Создана";
			found = true;
		}
	}
	File.close();
	if (found == false)
		cout << "\n\n Запись Не Создана ";
	cin.ignore();
	cin.get();
	system("cls");
	ps.math();
}
//+-------------------------------------------------------------------------+
// |						 Math grades								    |
//+-------------------------------------------------------------------------+
void show_math_grades()
{
	student ps;
	ifstream inFile;
	inFile.open("cw1.dat", ios::binary);
	if (!inFile)
	{
		cout << "Файл не открывается !! Нажмите любую клавишу...";
		cin.ignore();
		cin.get();
		system("cls");
		ps.math();
		return;
	}
	system("cls");
	cout << "\n\n\t\tМАТИМАТИКА \n";
	cout << "\n\n\n\tДАННЫЕ ВСЕХ СТУДЕНТОВ!!!\n\n";
	while (inFile.read(reinterpret_cast<char*> (&ps), sizeof(student)))
	{
		ps.math_calc();
		ps.showdata();
		ps.show_math_data();
		cout << "\n\n====================================\n";
	}
	inFile.close();
	cin.ignore();
	cin.get();
	system("cls");
	ps.math();
}
//+-------------------------------------------------------------------------+
// |				 Tabular math grades							    |
//+-------------------------------------------------------------------------+
void tabular_math_grades()
{
	student ps;
	ifstream inFile;
	inFile.open("cw1.dat", ios::binary);
	if (!inFile)
	{
		cout << "Файл не открывается !! Нажмите любую клавишу...";
		cin.ignore();
		cin.get();
		system("cls");
		ps.math();
		return;
	}
	system("cls");
	cout << "\n\n\t\t\t\t\t\t\t\t\tМАТИМАТИКА \n";
	cout << "\n\n\t\t\t\t\t\t\t\t\tТАБЛИЧНАЯ ЗАПИСЬ \n\n";
	cout << "\t=" << setfill('=') << setw(131) << "= \n";
	cout <<
		"\t|" << setfill(' ') << setw(3) <<
		"ID" << setfill(' ') << setw(3) << "| " << setfill(' ') << setw(8) <<
		"  Фамилия" << setfill(' ') << setw(6) << "| " << setfill(' ') << setw(8) <<
		"   Имя" << setfill(' ') << setw(6) << "| " << setfill(' ') << setw(6) <<
		"   Прак. занятия" << setfill(' ') << setw(6) << "| " << setfill(' ') << setw(6) <<
		"   Д. задания" << setfill(' ') << setw(6) << "| " << setfill(' ') << setw(6) <<
		"   Тест" << setfill(' ') << setw(6) << "| " << setfill(' ') << setw(6) <<
		"   Экзамен" << setfill(' ') << setw(6) << "| " << setfill(' ') << setw(6) <<
		"   Экзаменац.отметки   |" << endl;
	cout << "\t=" << setfill('=') << setw(131) << "= \n";

	while (inFile.read(reinterpret_cast<char*> (&ps), sizeof(student)))
	{
		ps.math_calc();
		ps.show_math_table();
	}
	inFile.close();
	cin.ignore();
	cin.get();
	system("cls");
	ps.math();
}
//+-------------------------------------------------------------------------+
// |				Programming grades entry					    |
//+-------------------------------------------------------------------------+
void prog_grades_entry(int n)
{
	bool found = false;
	student ps;
	fstream File;
	File.open("cw1.dat", ios::binary | ios::in | ios::out);
	if (!File)
	{
		cout << "Ошибка открытия файла...";
		cin.ignore();
		cin.get();
		system("cls");
		ps.programming();
		return;
	}
	system("cls");
	cout << "\n\t\t\tСТРАНИЦА СОЗДАНИЯ СТУДЕНЧЕСКОЙ ЗАПИСИ ";

	while (!File.eof() && found == false)
	{
		File.read(reinterpret_cast<char*> (&ps), sizeof(student));
		if (ps.ret_student_ID() == n)
		{
			cout << "\n\n\tВведите оценки студента" << endl;
			ps.get_prog_data();
			int pos = (-1) * static_cast<int>(sizeof(ps));
			File.seekp(pos, ios::cur);
			File.write(reinterpret_cast<char*> (&ps), sizeof(student));
			cout << "\n\n\t Запись Создана";
			found = true;
		}
	}
	File.close();
	if (found == false)
		cout << "\n\n Запись Не Создана ";
	cin.ignore();
	cin.get();
	system("cls");
	ps.programming();
}
//+-------------------------------------------------------------------------+
// |				Programming grades							    |
//+-------------------------------------------------------------------------+
void show_prog_grades()
{

	student ps;
	ifstream inFile;
	inFile.open("cw1.dat", ios::binary);
	if (!inFile)
	{
		cout << "Файл не открывается !! Нажмите любую клавишу...";
		cin.ignore();
		cin.get();
		system("cls");
		ps.programming();
		return;
	}
	system("cls");
	cout << "\n\n\t\tПРОГРАММИРОВАНИЕ \n";
	cout << "\n\n\n\tДАННЫЕ ВСЕХ СТУДЕНТОВ!!!\n\n";
	while (inFile.read(reinterpret_cast<char*> (&ps), sizeof(student)))
	{
		ps.prog_calc();
		ps.showdata();
		ps.show_prog_data();
		cout << "\n\n====================================\n";
	}
	inFile.close();
	cin.ignore();
	cin.get();
	system("cls");
	ps.programming();
}
//+-------------------------------------------------------------------------+
// |			Tabular Programming grades						    |
//+-------------------------------------------------------------------------+
void tabular_prog_grades()
{

	student ps;
	ifstream inFile;
	inFile.open("cw1.dat", ios::binary);
	if (!inFile)
	{
		cout << "Файл не открывается !! Нажмите любую клавишу...";
		cin.ignore();
		cin.get();
		system("cls");
		ps.programming();
		return;
	}
	system("cls");
	cout << "\n\n\t\t\t\t\t\t\t\t\tПРОГРАММИРОВАНИЕ \n";
	cout << "\n\n\t\t\t\t\t\t\t\t\tТАБЛИЧНАЯ ЗАПИСЬ \n\n";
	cout << "\t=" << setfill('=') << setw(131) << "= \n";
	cout <<
		"\t|" << setfill(' ') << setw(3) <<
		"ID" << setfill(' ') << setw(3) << "| " << setfill(' ') << setw(8) <<
		"  Фамилия" << setfill(' ') << setw(6) << "| " << setfill(' ') << setw(8) <<
		"   Имя" << setfill(' ') << setw(6) << "| " << setfill(' ') << setw(6) <<
		"   Прак. занятия" << setfill(' ') << setw(6) << "| " << setfill(' ') << setw(6) <<
		"   Д. задания" << setfill(' ') << setw(6) << "| " << setfill(' ') << setw(6) <<
		"   Тест" << setfill(' ') << setw(6) << "| " << setfill(' ') << setw(6) <<
		"   Экзамен" << setfill(' ') << setw(6) << "| " << setfill(' ') << setw(6) <<
		"   Экзаменац.отметки   |" << endl;
	cout << "\t=" << setfill('=') << setw(131) << "= \n";
	while (inFile.read(reinterpret_cast<char*> (&ps), sizeof(student)))
	{
		ps.prog_calc();
		ps.show_prog_table();
	}
	inFile.close();
	cin.ignore();
	cin.get();
	system("cls");
	ps.programming();
}
//+-------------------------------------------------------------------------+
// |				Cybernetics grades entry						    |
//+-------------------------------------------------------------------------+
void cyb_grades_entry(int n)
{
	bool found = false;
	student ps;

	fstream File;
	File.open("cw1.dat", ios::binary | ios::in | ios::out);
	if (!File)
	{
		cout << "Ошибка открытия файла...";
		cin.ignore();
		cin.get();
		system("cls");
		ps.cybernetics();
		return;
	}
	system("cls");
	cout << "\n\t\t\tСТРАНИЦА СОЗДАНИЯ СТУДЕНЧЕСКОЙ ЗАПИСИ ";

	while (!File.eof() && found == false)
	{
		File.read(reinterpret_cast<char*> (&ps), sizeof(student));
		if (ps.ret_student_ID() == n)
		{
			cout << "\n\n\tВведите оценки студента" << endl;
			ps.get_cyb_data();
			int pos = (-1) * static_cast<int>(sizeof(ps));
			File.seekp(pos, ios::cur);
			File.write(reinterpret_cast<char*> (&ps), sizeof(student));
			cout << "\n\n\t Запись Создана";
			found = true;
		}
	}
	File.close();
	if (found == false)
		cout << "\n\n Запись Не Создана ";
	cin.ignore();
	cin.get();
	system("cls");
	ps.cybernetics();
}
//+-------------------------------------------------------------------------+
// |				Cybernetics grades								    |
//+-------------------------------------------------------------------------+
void show_cyb_grades()
{

	student ps;
	ifstream inFile;
	inFile.open("cw1.dat", ios::binary);
	if (!inFile)
	{
		cout << "Файл не открывается !! Нажмите любую клавишу...";
		cin.ignore();
		cin.get();
		system("cls");
		ps.cybernetics();
		return;
	}
	system("cls");
	cout << "\n\n\t\tКИБЕРНЕТИКА \n";
	cout << "\n\n\n\tДАННЫЕ ВСЕХ СТУДЕНТОВ!!!\n\n";
	while (inFile.read(reinterpret_cast<char*> (&ps), sizeof(student)))
	{
		ps.cyb_calc();
		ps.showdata();
		ps.show_cyb_data();
		cout << "\n\n====================================\n";
	}
	inFile.close();
	cin.ignore();
	cin.get();
	system("cls");
	ps.cybernetics();
}
//+-------------------------------------------------------------------------+
// |			Tabular Cybernetics grades						    |
//+-------------------------------------------------------------------------+
void tabular_cyb_grades()
{

	student ps;
	ifstream inFile;
	inFile.open("cw1.dat", ios::binary);
	if (!inFile)
	{
		cout << "Файл не открывается !! Нажмите любую клавишу...";
		cin.ignore();
		cin.get();
		system("cls");
		ps.cybernetics();
		return;
	}
	system("cls");
	cout << "\n\n\t\t\t\t\t\t\t\t\tКИБЕРНЕТИКА \n";
	cout << "\n\n\t\t\t\t\t\t\t\t\tТАБЛИЧНАЯ ЗАПИСЬ \n\n";
	cout << "\t=" << setfill('=') << setw(131) << "= \n";
	cout <<
		"\t|" << setfill(' ') << setw(3) <<
		"ID" << setfill(' ') << setw(3) << "| " << setfill(' ') << setw(8) <<
		"  Фамилия" << setfill(' ') << setw(6) << "| " << setfill(' ') << setw(8) <<
		"   Имя" << setfill(' ') << setw(6) << "| " << setfill(' ') << setw(6) <<
		"   Прак. занятия" << setfill(' ') << setw(6) << "| " << setfill(' ') << setw(6) <<
		"   Д. задания" << setfill(' ') << setw(6) << "| " << setfill(' ') << setw(6) <<
		"   Тест" << setfill(' ') << setw(6) << "| " << setfill(' ') << setw(6) <<
		"   Экзамен" << setfill(' ') << setw(6) << "| " << setfill(' ') << setw(6) <<
		"   Экзаменац.отметки   |" << endl;
	cout << "\t=" << setfill('=') << setw(131) << "= \n";
	while (inFile.read(reinterpret_cast<char*> (&ps), sizeof(student)))
	{
		ps.cyb_calc();
		ps.show_cyb_table();
	}
	inFile.close();
	cin.ignore();
	cin.get();
	system("cls");
	ps.cybernetics();
}
//+-------------------------------------------------------------------------+
// |		System Analysis grades entry						    |
//+-------------------------------------------------------------------------+
void sys_grades_entry(int n)
{
	bool found = false;
	student ps;

	fstream File;
	File.open("cw1.dat", ios::binary | ios::in | ios::out);
	if (!File)
	{
		cout << "Ошибка открытия файла...";
		cin.ignore();
		cin.get();
		system("cls");
		ps.system();
		return;
	}
	system("cls");
	cout << "\n\t\t\tСТРАНИЦА СОЗДАНИЯ СТУДЕНЧЕСКОЙ ЗАПИСИ ";

	while (!File.eof() && found == false)
	{
		File.read(reinterpret_cast<char*> (&ps), sizeof(student));
		if (ps.ret_student_ID() == n)
		{
			cout << "\n\n\tВведите оценки студента" << endl;
			ps.get_sys_data();
			int pos = (-1) * static_cast<int>(sizeof(ps));
			File.seekp(pos, ios::cur);
			File.write(reinterpret_cast<char*> (&ps), sizeof(student));
			cout << "\n\n\t Запись Создана";
			found = true;
		}
	}
	File.close();
	if (found == false)
		cout << "\n\n Запись Не Создана ";
	cin.ignore();
	cin.get();
	system("cls");
	ps.system();
}
//+-------------------------------------------------------------------------+
// |		System Analysis grades								    |
//+-------------------------------------------------------------------------+
void show_sys_grades()
{

	student ps;
	ifstream inFile;
	inFile.open("cw1.dat", ios::binary);
	if (!inFile)
	{
		cout << "Файл не открывается !! Нажмите любую клавишу...";
		cin.ignore();
		cin.get();
		system("cls");
		ps.system();
		return;
	}
	system("cls");
	cout << "\n\n\t\tСИСТЕМНЫЙ АНАЛИЗ \n";
	cout << "\n\n\n\tАННЫЕ ВСЕХ СТУДЕНТОВ!!!\n\n";
	while (inFile.read(reinterpret_cast<char*> (&ps), sizeof(student)))
	{
		ps.sys_calc();
		ps.showdata();
		ps.show_sys_data();
		cout << "\n\n====================================\n";
	}
	inFile.close();
	cin.ignore();
	cin.get();
	system("cls");
	ps.system();
}
//+-------------------------------------------------------------------------+
// |			Tabular System Analysis grades					    |
//+-------------------------------------------------------------------------+
void tabular_sys_grades()
{

	student ps;
	ifstream inFile;
	inFile.open("cw1.dat", ios::binary);
	if (!inFile)
	{
		cout << "Файл не открывается !! Нажмите любую клавишу...";
		cin.ignore();
		cin.get();
		system("cls");
		ps.system();
		return;
	}
	system("cls");
	cout << "\n\n\t\t\t\t\t\t\t\t\tСИСТЕМНЫЙ АНАЛИЗ \n";
	cout << "\n\n\t\t\t\t\t\t\t\t\tТАБЛИЧНАЯ ЗАПИСЬ \n\n";
	cout << "\t=" << setfill('=') << setw(131) << "= \n";
	cout <<
		"\t|" << setfill(' ') << setw(3) <<
		"ID" << setfill(' ') << setw(3) << "| " << setfill(' ') << setw(8) <<
		"  Фамилия" << setfill(' ') << setw(6) << "| " << setfill(' ') << setw(8) <<
		"   Имя" << setfill(' ') << setw(6) << "| " << setfill(' ') << setw(6) <<
		"   Прак. занятия" << setfill(' ') << setw(6) << "| " << setfill(' ') << setw(6) <<
		"   Д. задания" << setfill(' ') << setw(6) << "| " << setfill(' ') << setw(6) <<
		"   Тест" << setfill(' ') << setw(6) << "| " << setfill(' ') << setw(6) <<
		"   Экзамен" << setfill(' ') << setw(6) << "| " << setfill(' ') << setw(6) <<
		"   Экзаменац.отметки   |" << endl;
	cout << "\t=" << setfill('=') << setw(131) << "= \n";
	while (inFile.read(reinterpret_cast<char*> (&ps), sizeof(student)))
	{
		ps.sys_calc();
		ps.show_sys_table();
	}
	inFile.close();
	cin.ignore();
	cin.get();
	system("cls");
	ps.system();
}
//+-------------------------------------------------------------------------+
// |					English grades entry						    |
//+-------------------------------------------------------------------------+
void eng_grades_entry(int n)
{
	bool found = false;
	student ps;

	fstream File;
	File.open("cw1.dat", ios::binary | ios::in | ios::out);
	if (!File)
	{
		cout << "Ошибка открытия файла...";
		cin.ignore();
		cin.get();
		system("cls");
		ps.english();
		return;
	}
	system("cls");
	cout << "\n\t\t\tСТРАНИЦА СОЗДАНИЯ СТУДЕНЧЕСКОЙ ЗАПИСИ ";

	while (!File.eof() && found == false)
	{
		File.read(reinterpret_cast<char*> (&ps), sizeof(student));
		if (ps.ret_student_ID() == n)
		{
			cout << "\n\n\tВведите оценки студента" << endl;
			ps.get_eng_data();
			int pos = (-1) * static_cast<int>(sizeof(ps));
			File.seekp(pos, ios::cur);
			File.write(reinterpret_cast<char*> (&ps), sizeof(student));
			cout << "\n\n\t Запись Создана";
			found = true;
		}
	}
	File.close();
	if (found == false)
		cout << "\n\n Запись Не Создана ";
	cin.ignore();
	cin.get();
	system("cls");
	ps.english();
}
//+-------------------------------------------------------------------------+
// |					English grades								    |
//+-------------------------------------------------------------------------+
void show_eng_grades()
{

	student ps;
	ifstream inFile;
	inFile.open("cw1.dat", ios::binary);
	if (!inFile)
	{
		cout << "Файл не открывается !! Нажмите любую клавишу...";
		cin.ignore();
		cin.get();
		system("cls");
		ps.english();
		return;
	}
	system("cls");
	cout << "\n\n\t\tАНГЛИЙСКИЙ ЯЗЫК \n";
	cout << "\n\n\n\tДАННЫЕ ВСЕХ СТУДЕНТОВ!!!\n\n";
	while (inFile.read(reinterpret_cast<char*> (&ps), sizeof(student)))
	{
		ps.eng_calc();
		ps.showdata();
		ps.show_eng_data();
		cout << "\n\n====================================\n";
	}
	inFile.close();
	cin.ignore();
	cin.get();
	system("cls");
	ps.english();
}
//+-------------------------------------------------------------------------+
// |					Tabular English grades						    |
//+-------------------------------------------------------------------------+
void tabular_eng_grades()
{

	student ps;
	ifstream inFile;
	inFile.open("cw1.dat", ios::binary);
	if (!inFile)
	{
		cout << "Файл не открывается !! Нажмите любую клавишу...";
		cin.ignore();
		cin.get();
		system("cls");
		ps.english();
		return;
	}
	system("cls");
	cout << "\n\n\t\t\t\t\t\t\t\t\tАНГЛИЙСКИЙ ЯЗЫК \n";
	cout << "\n\n\t\t\t\t\t\t\t\t\tТАБЛИЧНАЯ ЗАПИСЬ \n\n";
	cout << "\t=" << setfill('=') << setw(115) << "= \n";
	cout <<
		"\t|" << setfill(' ') << setw(3) <<
		"ID" << setfill(' ') << setw(3) << "| " << setfill(' ') << setw(8) <<
		"  Фамилия" << setfill(' ') << setw(6) << "| " << setfill(' ') << setw(8) <<
		"   Имя" << setfill(' ') << setw(6) << "| " << setfill(' ') << setw(6) <<
		"   Прак. занятия" << setfill(' ') << setw(6) << "| " << setfill(' ') << setw(6) <<
		"   Д. задания" << setfill(' ') << setw(6) << "| " << setfill(' ') << setw(6) <<
		"   Тест" << setfill(' ') << setw(6) << "| " << setfill(' ') << setw(6) <<
		"   Экзаменац.отметки   |" << endl;
	cout << "\t=" << setfill('=') << setw(115) << "= \n";
	while (inFile.read(reinterpret_cast<char*> (&ps), sizeof(student)))
	{
		ps.eng_calc();
		ps.show_eng_table();
	}
	inFile.close();
	cin.ignore();
	cin.get();
	system("cls");
	ps.english();
}
//+-------------------------------------------------------------------------+
// |				Economics grades entry						    |
//+-------------------------------------------------------------------------+
void econs_grades_entry(int n)
{
	bool found = false;
	student ps;

	fstream File;
	File.open("cw1.dat", ios::binary | ios::in | ios::out);
	if (!File)
	{
		cout << "Ошибка открытия файла...";
		cin.ignore();
		cin.get();
		system("cls");
		ps.economics();
		return;
	}
	system("cls");
	cout << "\n\t\t\tСТРАНИЦА СОЗДАНИЯ СТУДЕНЧЕСКОЙ ЗАПИСИ ";

	while (!File.eof() && found == false)
	{
		File.read(reinterpret_cast<char*> (&ps), sizeof(student));
		if (ps.ret_student_ID() == n)
		{
			cout << "\n\n\tВведите оценки студента" << endl;
			ps.get_econs_data();
			int pos = (-1) * static_cast<int>(sizeof(ps));
			File.seekp(pos, ios::cur);
			File.write(reinterpret_cast<char*> (&ps), sizeof(student));
			cout << "\n\n\t Запись Создана";
			found = true;
		}
	}
	File.close();
	if (found == false)
		cout << "\n\n Запись Не Создана ";
	cin.ignore();
	cin.get();
	system("cls");
	ps.economics();
}
//+-------------------------------------------------------------------------+
// |				Economics grades								    |
//+-------------------------------------------------------------------------+
void show_econs_grades()
{

	student ps;
	ifstream inFile;
	inFile.open("cw1.dat", ios::binary);
	if (!inFile)
	{
		cout << "Файл не открывается !! Нажмите любую клавишу...";
		cin.ignore();
		cin.get();
		system("cls");
		ps.economics();
		return;
	}
	system("cls");
	cout << "\n\n\t\tЭКОНОМИКА \n";
	cout << "\n\n\n\tДАННЫЕ ВСЕХ СТУДЕНТОВ!!!\n\n";
	while (inFile.read(reinterpret_cast<char*> (&ps), sizeof(student)))
	{
		ps.econs_calc();
		ps.showdata();
		ps.show_econs_data();
		cout << "\n\n====================================\n";
	}
	inFile.close();
	cin.ignore();
	cin.get();
	system("cls");
	ps.economics();
}
//+-------------------------------------------------------------------------+
// |				Tabular Economics grades					    |
//+-------------------------------------------------------------------------+
void tabular_econs_grades()
{

	student ps;
	ifstream inFile;
	inFile.open("cw1.dat", ios::binary);
	if (!inFile)
	{
		cout << "Файл не открывается !! Нажмите любую клавишу...";
		cin.ignore();
		cin.get();
		system("cls");
		ps.economics();
		return;
	}
	system("cls");
	cout << "\n\n\t\t\t\t\t\t\t\t\tЭКОНОМИКА \n";
	cout << "\n\n\t\t\t\t\t\t\t\t\tТАБЛИЧНАЯ ЗАПИСЬ \n\n";
	cout << "\t=" << setfill('=') << setw(115) << "= \n";
	cout <<
		"\t|" << setfill(' ') << setw(3) <<
		"ID" << setfill(' ') << setw(3) << "| " << setfill(' ') << setw(8) <<
		"  Фамилия" << setfill(' ') << setw(6) << "| " << setfill(' ') << setw(8) <<
		"   Имя" << setfill(' ') << setw(6) << "| " << setfill(' ') << setw(6) <<
		"   Прак. занятия" << setfill(' ') << setw(6) << "| " << setfill(' ') << setw(6) <<
		"   Д. задания" << setfill(' ') << setw(6) << "| " << setfill(' ') << setw(6) <<
		"   Тест" << setfill(' ') << setw(6) << "| " << setfill(' ') << setw(6) <<
		"   Экзаменац.отметки   |" << endl;
	cout << "\t=" << setfill('=') << setw(115) << "= \n";
	while (inFile.read(reinterpret_cast<char*> (&ps), sizeof(student)))
	{
		ps.econs_calc();
		ps.show_econs_table();
	}
	inFile.close();
	cin.ignore();
	cin.get();
	system("cls");
	ps.economics();
}
//+-------------------------------------------------------------------------+
// |					Sociology grades entry						    |
//+-------------------------------------------------------------------------+
void soc_grades_entry(int n)
{
	bool found = false;
	student ps;

	fstream File;
	File.open("cw1.dat", ios::binary | ios::in | ios::out);
	if (!File)
	{
		cout << "Ошибка открытия файла...";
		cin.ignore();
		cin.get();
		system("cls");
		ps.sociology();
		return;
	}
	system("cls");
	cout << "\n\t\t\tСТРАНИЦА СОЗДАНИЯ СТУДЕНЧЕСКОЙ ЗАПИСИ ";

	while (!File.eof() && found == false)
	{
		File.read(reinterpret_cast<char*> (&ps), sizeof(student));
		if (ps.ret_student_ID() == n)
		{
			cout << "\n\n\tВведите оценки студента" << endl;
			ps.get_soc_data();
			int pos = (-1) * static_cast<int>(sizeof(ps));
			File.seekp(pos, ios::cur);
			File.write(reinterpret_cast<char*> (&ps), sizeof(student));
			cout << "\n\n\t Запись Создана";
			found = true;
		}
	}
	File.close();
	if (found == false)
		cout << "\n\n Запись Не Создана ";
	cin.ignore();
	cin.get();
	system("cls");
	ps.sociology();
}
//+-------------------------------------------------------------------------+
// |					Sociology grades								    |
//+-------------------------------------------------------------------------+
void show_soc_grades()
{

	student ps;
	ifstream inFile;
	inFile.open("cw1.dat", ios::binary);
	if (!inFile)
	{
		cout << "Файл не открывается !! Нажмите любую клавишу...";
		cin.ignore();
		cin.get();
		system("cls");
		ps.sociology();
		return;
	}
	system("cls");
	cout << "\n\n\t\tСОЦИОЛОГИЯ \n";
	cout << "\n\n\n\tДАННЫЕ ВСЕХ СТУДЕНТОВ!!!\n\n";
	while (inFile.read(reinterpret_cast<char*> (&ps), sizeof(student)))
	{
		ps.soc_calc();
		ps.showdata();
		ps.show_soc_data();
		cout << "\n\n====================================\n";
	}
	inFile.close();
	cin.ignore();
	cin.get();
	system("cls");
	ps.sociology();
}
//+-------------------------------------------------------------------------+
// |					Tabular Sociology grades					    |
//+-------------------------------------------------------------------------+
void tabular_soc_grades()
{

	student ps;
	ifstream inFile;
	inFile.open("cw1.dat", ios::binary);
	if (!inFile)
	{
		cout << "Файл не открывается !! Нажмите любую клавишу...";
		cin.ignore();
		cin.get();
		system("cls");
		ps.sociology();
		return;
	}
	system("cls");
	cout << "\n\n\t\t\t\t\t\t\t\t\tСОЦИОЛОГИЯ \n";
	cout << "\n\n\t\t\t\t\t\t\t\t\tТАБЛИЧНАЯ ЗАПИСЬ \n\n";
	cout << "\t=" << setfill('=') << setw(115) << "= \n";
	cout <<
		"\t|" << setfill(' ') << setw(3) <<
		"ID" << setfill(' ') << setw(3) << "| " << setfill(' ') << setw(8) <<
		"  Фамилия" << setfill(' ') << setw(6) << "| " << setfill(' ') << setw(8) <<
		"   Имя" << setfill(' ') << setw(6) << "| " << setfill(' ') << setw(6) <<
		"   Прак. занятия" << setfill(' ') << setw(6) << "| " << setfill(' ') << setw(6) <<
		"   Д. задания" << setfill(' ') << setw(6) << "| " << setfill(' ') << setw(6) <<
		"   Тест" << setfill(' ') << setw(6) << "| " << setfill(' ') << setw(6) <<
		"   Экзаменац.отметки   |" << endl;
	cout << "\t=" << setfill('=') << setw(115) << "= \n";
	while (inFile.read(reinterpret_cast<char*> (&ps), sizeof(student)))
	{
		ps.soc_calc();
		ps.show_soc_table();
	}
	inFile.close();
	cin.ignore();
	cin.get();
	system("cls");
	ps.sociology();
}
//+-------------------------------------------------------------------------+
// |						Gender Stat									    |
//+-------------------------------------------------------------------------+
void gender_stat()
{

	student ps;
	ifstream inFile;
	inFile.open("cw1.dat", ios::binary);
	if (!inFile)
	{
		cout << "Файл не открывается !! Нажмите любую клавишу...";
		cin.ignore();
		cin.get();
		kyrator_page();
		return;
	}
	cout << "\n\t\t\t\t\t\tСТРАНИЦА СТАТИСТИКА ПО ПОЛУ";
	cout << "\n\n\t\t\t\t\t\t\tТАБЛИЧНАЯ ЗАПИСЬ \n\n";
	cout << "\t\t\t=" << setfill('=') << setw(74) << "= \n";
	cout <<
		"\t\t\t|" << setfill(' ') << setw(3) <<
		"ID" << setfill(' ') << setw(3) << "| " << setfill(' ') << setw(8) <<
		"  Фамилия" << setfill(' ') << setw(6) << "| " << setfill(' ') << setw(8) <<
		"   Имя" << setfill(' ') << setw(6) << "| " << setfill(' ') << setw(4) <<
		"		Пол" << setfill(' ') << setw(22) << "|" << endl;
	cout << "\t\t\t=" << setfill('=') << setw(74) << "= \n";
	while (inFile.read(reinterpret_cast<char*> (&ps), sizeof(student)))
	{
		ps.gender_count();
		if (strlen(ps.gender) == 4)
		{
			male_count++;
		}
		if (strlen(ps.gender) == 6)
		{
			female_count++;
		}
	}
	//cout << "Male students = " << male_count << endl;
	//cout << "Female students = " << female_count << endl;
	cout << std::fixed << std::setprecision(1);
	int all_gender = male_count + female_count;
	cout << "\n\t\t\tСтатистика по полу";
	cout << "\n\n\t\t\tМужской  = " << (male_count / all_gender) * 100 << "%" << endl;
	cout << "\n\t\t\tЖенский  = " << (female_count / all_gender) * 100 << "%" << endl;

	inFile.close();
	cin.ignore();
	cin.get();
	kyrator_page();
}
//+-------------------------------------------------------------------------+
// |						Mode Stat									    |
//+-------------------------------------------------------------------------+
void mode_stat()
{

	student ps;
	ifstream inFile;
	inFile.open("cw1.dat", ios::binary);
	if (!inFile)
	{
		cout << "Файл не открывается !! Нажмите любую клавишу...";
		cin.ignore();
		cin.get();
		kyrator_page();
		return;
	}
	cout << "\n\t\t\t\t\t\tСТРАНИЦА СТАТИСТИКА ПО СПОСОБУ ОБУЧЕНИЯ";
	cout << "\n\n\t\t\t\t\t\t\tТАБЛИЧНАЯ ЗАПИСЬ \n\n";
	cout << "\t\t\t=" << setfill('=') << setw(66) << "= \n";
	cout <<
		"\t\t\t|" << setfill(' ') << setw(3) <<
		"ID" << setfill(' ') << setw(3) << "| " << setfill(' ') << setw(8) <<
		"  Фамилия" << setfill(' ') << setw(6) << "| " << setfill(' ') << setw(8) <<
		"   Имя" << setfill(' ') << setw(6) << "| " << setfill(' ') << setw(4) <<
		"      Способ обучения" << setfill(' ') << setw(8) << " |" << endl;
	cout << "\t\t\t=" << setfill('=') << setw(66) << "= \n";
	while (inFile.read(reinterpret_cast<char*> (&ps), sizeof(student)))
	{
		ps.mode_count();
		if (strlen(ps.mode) == 11)
		{
			scholarship_count++;
		}
		if (strlen(ps.mode) == 7)
		{
			payment_count++;
		}
	}
	//cout << "Male students = " << male_count << endl;
	//cout << "Female students = " << female_count << endl;
	cout << std::fixed << std::setprecision(1);
	int all_mode = scholarship_count + payment_count;
	cout << "\n\t\t\tСтатистика по способу обучения";
	cout << "\n\n\t\t\tБесплатное Образование  = " << (scholarship_count / all_mode) * 100 << "%" << endl;
	cout << "\n\t\t\tПлатное Образование  = " << (payment_count / all_mode) * 100 << "%" << endl;

	inFile.close();
	cin.ignore();
	cin.get();
	kyrator_page();
}
//+-------------------------------------------------------------------------+
// |						Academic Stat								    |
//+-------------------------------------------------------------------------+
void acad_stat()
{
	student ps;
	int total_math_score, total_prog_score, total_cyb_score, total_sys_score, total_eng_score, total_econs_score, total_soc_score, general_score;
	total_math_score = ps.math_prac + ps.math_ass + ps.math_test + ps.math_exam;
	total_prog_score = ps.prog_prac + ps.prog_ass + ps.prog_test + ps.prog_exam;
	total_cyb_score = ps.cyb_prac + ps.cyb_ass + ps.cyb_test + ps.cyb_exam;
	total_sys_score = ps.sys_prac + ps.sys_ass + ps.sys_test + ps.sys_exam;
	total_eng_score = ps.eng_prac + ps.eng_ass + ps.eng_test;
	total_econs_score = ps.econs_prac + ps.econs_ass + ps.econs_test;
	total_soc_score = ps.soc_prac + ps.soc_ass + ps.soc_test;
	general_score = total_math_score + total_prog_score + total_cyb_score + total_sys_score + total_eng_score + total_econs_score + total_soc_score;

	ifstream inFile;
	/* inFile.open("cw1.dat", ios::binary);
	if (!inFile)
	{
		cout << "Файл не открывается !! Нажмите любую клавишу...";
		cin.ignore();
		cin.get();
		kyrator_page();
		return;
	}
	while (inFile.read(reinterpret_cast<char*> (&ps), sizeof(student)))
	{
		if (general_score <= 500 && general_score >= 400)
		{
			aced++;
		}
		else if (general_score < 400 && general_score >= 360)
		{
			good++;
		}
		else if (general_score < 360 && general_score >= 320)
		{
			pass++;
		}
		else if (general_score < 320)
		{
			fail++;
		}


		/* if (general_grade == "Отлично")
		{
			aced++;
		}
		else if (general_grade == "Хорошо")
		{
			good++;
		}
		else if (general_grade == "Удовлетверительно")
		{
			pass++;
		}
		else if (general_grade == "Неудовлетверительно")
		{
			fail++;
		}
	}
	/*int 	all_rate = aced + good + pass + fail;
	cout << all_rate << aced << good << pass << fail << ps.generalGrade;
	cout <<"\n\n\t\tОтлично = " <<(aced/all_rate)*100 <<"%" <<  endl;
	cout << "\n\t\tХорошо = " << (good / all_rate) * 100 << "%" << endl;
	cout << "\n\t\tУдовлетверительно = " << (pass / all_rate) * 100 << "%" << endl;
	cout << "\n\t\tНеудовлетверительно = " << (fail / all_rate) * 100 << "%" << endl;
	inFile.close(); */


	inFile.open("cw1.dat", ios::binary);
	if (!inFile)
	{
		cout << "Файл не открывается !! Нажмите любую клавишу...";
		cin.ignore();
		cin.get();
		kyrator_page();
		return;
	}

	cout << "\n\t\t\t\t\tСТРАНИЦА АКАДЕМИЧЕСКОЙ СТАТИСТИКИ";
	cout << "\n\n\t\t\t\t\t\t\tТАБЛИЧНАЯ ЗАПИСЬ \n\n";
	cout << "\t\t=" << setfill('=') << setw(76) << "= \n";
	cout <<
		"\t\t|" << setfill(' ') << setw(3) <<
		"ID" << setfill(' ') << setw(3) << "| " << setfill(' ') << setw(8) <<
		"  Фамилия" << setfill(' ') << setw(6) << "| " << setfill(' ') << setw(8) <<
		"   Имя" << setfill(' ') << setw(6) << "| " << setfill(' ') << setw(4) <<
		" Общий Балл " << setfill(' ') << setw(3) << "| " <<
		"       Замечание" << setfill(' ') << setw(8) << " |" << endl;
	cout << "\t\t=" << setfill('=') << setw(76) << "= \n";
	while (inFile.read(reinterpret_cast<char*> (&ps), sizeof(student)))
	{
		ps.acad_stat_table();
		if (ps.generalGrade <= 500 && ps.generalGrade >= 400)
		{
			aced++;
		}
		if (ps.generalGrade < 400 && ps.generalGrade >= 360)
		{
			good++;
		}
		if (ps.generalGrade < 360 && ps.generalGrade >= 320)
		{
			pass++;
		}
		if (ps.generalGrade < 320 && ps.generalGrade >= 0)
		{
			fail++;
		}
	}
	cout << std::fixed << std::setprecision(1);
	int all_rate = aced + good + pass + fail;
	cout << "\n\t\tСтатистика успеваемости студентов";
	cout << "\n\n\t\tОтлично = " << (aced / all_rate) * 100 << "%" << endl;
	cout << "\n\t\tХорошо = " << (good / all_rate) * 100 << "%" << endl;
	cout << "\n\t\tУдовлетверительно = " << (pass / all_rate) * 100 << "%" << endl;
	cout << "\n\t\tНеудовлетверительно = " << (fail / all_rate) * 100 << "%" << endl;
	inFile.close();
	cin.ignore();
	cin.get();
	kyrator_page();
}

//+-------------------------------------------------------------------------+
// |						 Main function							    |
//+-------------------------------------------------------------------------+
int main()
{
	color_background();
	setlocale(LC_ALL, "Russian");
	intro();
	page_select();
	return 0;
}

