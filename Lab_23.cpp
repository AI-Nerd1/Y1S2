#include <iostream>
#include <fstream>
#include <locale.h>
#include <stdlib.h>
using namespace std;
struct LIST
{
	int number;
	LIST *next;
};

int source_file_data();
int result_file_data();
//Function for Data reading and entry into list.
LIST* read_list(LIST * lst)
{
	LIST* p;
	int t;

	ifstream f("1.txt");
	if (f)
	{
		f >> t;
		if (!f.eof())
		{
			lst = new LIST;
			p = lst;
			p->number = t;
			f >> t;
			while (!f.eof())
			{
				p->next = new LIST;
				p = p->next;
				p->number = t;
				f >> t;
			}
			p->next = NULL;
		}
		 else
			cout << "File empty\n"; 
	}
	else
	{
		cout << "File is missing\n";
		exit(1);
	}
	return lst;
}

//Function for Data deletion for field number less than n
LIST* del_element(LIST* lst, int n)
{
	LIST* p1 = lst, * p2 = p1->next, * prev = lst;
	while (p1)
	{
		if (p1->number < n)
		{
			delete p1;
			if (p1 == lst)
			{
				lst = p2;
				prev = lst;
				p1 = lst;
			}
			else
			{
				prev->next = p2;
				p1 = prev;
			}
		}
		else
		{
			prev = p1;
		}
		if (p1 != p2)
		{
			p1 = p1->next;
		}
		if (p2)
		{
			p2 = p2->next;
		}
	}
	return lst;
}

//Function for writing elements to file inreverse order
void write_inverse_list(LIST* lst)
{
	ofstream f("2.txt");
	LIST* p1 = lst, * p2, * prev;
	while (p1)
	{
		prev = lst;
		p2 = p1->next;

		while (p2)
		{
			prev = p1;
			p1 = p1->next;
			p2 = p2->next;
		}
		f << p1->number << " ";

		if (p1 == lst)
		{
			lst = NULL;
		}
		else
		{
			prev->next = NULL;
		}
		p1 = lst;
	}
	f.close();
} 
int source_file_data()
{
	int s;
	ifstream f("1.txt", ios::in);
	if (!f)
	{
		cout << "\t\tFile missing\n";
		return 1;
	}
	f.seekg(0, ios_base::beg);
	cout << "\n\t\tÖåëûå ÷èñëà èç èñõîäíîãî ôàéëà: ";

	while (1)
	{
		f >> s;
		if (f.eof())
			break;
		cout << s << " ";
	}
	cout << endl;
	f.close();
}
int result_file_data()
{
	int s;
	ifstream f("2.txt", ios::in);
	if (!f)
	{
		cout << "\t\tFile missing\n";
		return 1;
	}
	f.seekg(0, ios_base::beg);
	cout << "\n\t\tÌàññèâ ðåçóëüòàòîâ: ";

	while (1)
	{
		f >> s;
		if (f.eof())
			break;
		cout << s << " ";
	}
	cout << endl;
	f.close();
}

int main()
{
	LIST* lst = NULL;
	int n; 
	setlocale(LC_CTYPE, "Russian");
	cout << "\n\t\tÂâåäèòå çíà÷åíèå n: ";
	cin >> n;
	lst = read_list(lst);
	lst = del_element(lst, n);
	source_file_data();
	write_inverse_list(lst);
	result_file_data();
}

/* #include <iostream>
#include <fstream>
#include <locale.h>
#include <stdlib.h>
#include<math.h>
using namespace std;
struct LIST
{
	int number;
	LIST* next;
};
struct NODE
{
	int num;
	NODE* nxt;
};

int source_file_data();
int result_file_data();
void sort(NODE* head);
void positive_list(LIST* lst);
void write_list(NODE* head);

LIST* read_list(LIST* lst)
{
	LIST* p;
	int t;

	ifstream f("source_file.txt");
	if (f)
	{
		f >> t;
		if (!f.eof())
		{
			lst = new LIST;
			p = lst;
			p->number = t;
			f >> t;
			while (!f.eof())
			{
				p->next = new LIST;
				p = p->next;
				p->number = t;
				f >> t;
			}
			p->next = NULL;
		}
		else
			cout << "File empty\n";
	}
	else
	{
		cout << "File is missing\n";
		exit(1);
	}
	return lst;
}
LIST* positive_element(LIST* lst)
{
	LIST* p1 = lst, * p2 = p1->next, * prev = lst;
	while (p1)
	{
		if (p1->number < 0)
		{
			delete p1;
			if (p1 == lst)
			{
				lst = p2;
				prev = lst;
				p1 = lst;
			}
			else
			{
				prev->next = p2;
				p1 = prev;
			}
		}
		else
		{
			prev = p1;
		}
		if (p1 != p2)
		{
			p1 = p1->next;
		}
		if (p2)
		{
			p2 = p2->next;
		}
	}
	return lst;
}
void positive_list(LIST* lst)
{
	ofstream f("positive.txt");
	LIST* p1 = lst, * p2, * prev;
	while (p1)
	{
		prev = lst;
		p2 = p1->next;

		while (p2)
		{
			prev = p1;
			p1 = p1->next;
			p2 = p2->next;
		}
		f << p1->number << ' ';

		if (p1 == lst)
		{
			lst = NULL;
		}
		else
		{
			prev->next = NULL;
		}
		p1 = lst;
	}
	f.close();
}
NODE* read_positive_list(NODE* head)
{
	NODE* current;
	int t;

	ifstream f("positive.txt");
	if (f)
	{
		f >> t;
		if (!f.eof())
		{
			head = new NODE;
			current = head;
			current->num = t;
			f >> t;
			while (!f.eof())
			{
				current->nxt = new NODE;
				current = current->nxt;
				current->num = t;
				f >> t;
			}
			current->nxt = NULL;
		}
		else
			cout << "File empty\n";
	}
	else
	{
		cout << "File is missing\n";
		exit(1);
	}
	return head;
}
void sort(NODE* head)
{
	NODE* a, * b, * p, * h = NULL;
	for (NODE* i = head; i != NULL;)
	{
		a = i;
		i = i->nxt;
		b = h;

		for (p = NULL; (b != NULL) && (a->num > b->num);)
		{
			p = b;
			b = b->nxt;
		}
		if (p == NULL)
		{
			a->nxt = h;
			h = a;
		}
		else
		{
			a->nxt = b;
			p->nxt = a;
		}
	}
	if (h != NULL)
		head = h;
}
void write_list(NODE* head)
{
	ofstream f("result.txt");
	NODE* p1 = head, * p2, * prev;
	while (p1)
	{
		prev = head;
		p2 = p1->nxt;

		while (p2)
		{
			prev = p1;
			p1 = p1->nxt;
			p2 = p2->nxt;
		}
		f << p1->num << ' ';

		if (p1 == head)
		{
			head = NULL;
		}
		else
		{
			prev->nxt = NULL;
		}
		p1 = head;
	}
	f.close();
}

int source_file_data()
{
	int s, p;
	ifstream f_1("source_file.txt", ios::in);
	ifstream f_2("positive.txt", ios::in);
	if (!f_1)
	{
		cout << "\t\tFile missing\n";
		return 1;
	}
	f_1.seekg(0, ios_base::beg);
	cout << "\n\t\tÖåëûå ÷èñëà èç èñõîäíîãî ôàéëà: ";

	while (1)
	{
		f_1 >> s;
		if (f_1.eof())
			break;
		cout << s << " ";
	}
	cout << endl;
	if (!f_2)
	{
		cout << "\t\tFile missing\n";
		return 1;
	}
	f_2.seekg(0, ios_base::beg);
	cout << "\n\t\tÏîçèòèâíûå ýëåìåíòû: ";

	while (1)
	{
		f_2 >> p;
		if (f_2.eof())
			break;
		cout << p << " ";
	}
	cout << endl;
	f_1.close();
	f_2.close();
}
int result_file_data()
{
	int s;
	ifstream f("result.txt", ios::in);
	if (!f)
	{
		cout << "\t\tFile missing\n";
		return 1;
	}
	f.seekg(0, ios_base::beg);
	cout << "\n\t\tÑîðòèðîâêà ïîëîæèòåëüíûõ ýëåìåíòîâ: ";

	while (1)
	{
		f >> s;
		if (f.eof())
			break;
		cout << s << " ";
	}
	cout << endl;
	f.close();
}

int main()
{
	LIST* lst = NULL;
	NODE* head = NULL;
	setlocale(LC_CTYPE, "Russian");
	cout << "\n\t\tÑÎÐÒÈÐÎÂÊÀ ÏÎËÎÆÈÒÅËÜÍÛÕ ÖÅËÛÕ ×ÈÑÅË ÈÇ ÔÀÉËÀ \n ";
	lst = read_list(lst);					//Readng from source file
	lst = positive_element(lst);		//Finding positive elements
	positive_list(lst);						//Writing Positive elements to a new file
	sort(head);								//Sorting positive elements
	source_file_data();					//Displaying source data and positive elemnts
	write_list(head);						//Writing sorted data to new file
	result_file_data();					//Displaying Sorted data
} */



#include <iostream>
#include <fstream>
#include <locale.h>
#include <stdlib.h>
#include<math.h>
using namespace std;
struct LIST
{
	int number;
	LIST* next;
};

int source_file_data();
int result_file_data();
void sort(LIST* lst);
void write_list(LIST* lst);

LIST* read_list(LIST* lst)
{
	LIST* p;
	int t;

	ifstream f("source_file.txt");
	if (f)
	{
		f >> t;
		if (!f.eof())
		{
			lst = new LIST;
			p = lst;
			p->number = t;
			f >> t;
			while (!f.eof())
			{
				p->next = new LIST;
				p = p->next;
				p->number = t;
				f >> t;
			}
			p->next = NULL;
		}
		else
			cout << "File empty\n";
	}
	else
	{
		cout << "File is missing\n";
		exit(1);
	}
	return lst;
}

LIST* positive_element(LIST* lst)
{
	LIST* p1 = lst, * p2 = p1->next, * prev = lst;
	while (p1)
	{
		if (p1->number <= 0)
		{
			delete p1;
			if (p1 == lst)
			{
				lst = p2;
				prev = lst;
				p1 = lst;
			}
			else
			{
				prev->next = p2;
				p1 = prev;
			}
		}
		else
		{
			prev = p1;
		}
		if (p1 != p2)
		{
			p1 = p1->next;
		}
		if (p2)
		{
			p2 = p2->next;
		}
	}
	return lst;
}
void sort(LIST* lst)
{
	LIST* a, * b, * p, * h = NULL;
	for (LIST* i = lst; i != NULL;)
	{
		a = i;
		i = i->next;
		b = h;

		for (p = NULL; (b != NULL) && (a->number > b->number);)
		{
			p = b;
			b = b->next;
		}
		if (p == NULL)
		{
			a->next = h;
			h = a;
		}
		else
		{
			a->next = b;
			p->next = a;
		}
	}
	if (h != NULL)
		lst = h;
}

void write_list(LIST* lst)
{
	ofstream f("result.txt");
	LIST* p1 = lst, * p2, * prev;
	while (p1)
	{
		prev = lst;
		p2 = p1->next;

		while (p2)
		{
			prev = p1;
			p1 = p1->next;
			p2 = p2->next;
		}
		f << p1->number << ' ';

		if (p1 == lst)
		{
			lst = NULL;
		}
		else
		{
			prev->next = NULL;
		}
		p1 = lst;
	}
	f.close();
}

int source_file_data()
{
	int s, p;
	ifstream f_1("source_file.txt", ios::in);
	if (!f_1)
	{
		cout << "\t\tFile missing\n";
		return 1;
	}
	f_1.seekg(0, ios_base::beg);
	cout << "\n\t\tÖåëûå ÷èñëà èç èñõîäíîãî ôàéëà: ";

	while (1)
	{
		f_1 >> s;
		if (f_1.eof())
			break;
		cout << s << " ";
	}
	cout << endl;
	f_1.close();
}
int result_file_data()
{
	int s;
	ifstream f("result.txt", ios::in);
	if (!f)
	{
		cout << "\t\tFile missing\n";
		return 1;
	}
	f.seekg(0, ios_base::beg);
	cout << "\n\t\tÑîðòèðîâàííûé ìàññèâ: ";

	while (1)
	{
		f >> s;
		if (f.eof())
			break;
		cout << s << " ";
	}
	cout << endl;
	f.close();
}

int main()
{
	LIST* lst = NULL;
	setlocale(LC_CTYPE, "Russian");
	cout << "\n\t\tÑÎÐÒÈÐÎÂÊÀ ÏÎËÎÆÈÒÅËÜÍÛÕ ÖÅËÛÕ ×ÈÑÅË ÈÇ ÔÀÉËÀ \n ";
	lst = read_list(lst);					//Readng from source file
	lst = positive_element(lst); //Finding positive elements
	sort(lst);									//Sorting positive elements
	source_file_data();				  //Displaying source data 
	write_list(lst);						//Writing sorted data to new file
	result_file_data();			  //Displaying Sorted data
}

