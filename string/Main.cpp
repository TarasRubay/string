#include "Header.h"
void main() {
	string str;
	string temp;
	int b;
	
	
	str= "(T_1 = task 1) enter any text where will be inside sumbol 'm' and 'n': ";
	cout << str;
	getline(cin,str);
	str = find_m_n(str);
	cout << str;
	//task 2
	str = "\nT_2 enter any text: ";
	cout << str;
	getline(cin,str);
	double price;
	cout << "enter price one sumbol (only didgit): ";
	do {
		cin >> price;
	} while (price<0.00000000001);
	cin.clear();
	cin.ignore(INT_MAX,'\n');
	cout << "price sms is: "<<price * str.size();
	//task 3
	str = "\nT_3 enter any text where will be open paranthesis and close paranthesis: ";
	cout << str;
	getline(cin, str);
	str = paranthesis(str);
	cout << str;
	//task 4
	str = "\nT_4 enter any text: ";
	cout << str;
	getline(cin, str);
	cout << "enter sumbol that you want find (enter only one symbol): ";
	do {
		getline(cin, temp);
		if (temp.size() != 1)cout << "I talk you, enter only one symbol!!!!!!: ";
	} while (temp.size() != 1);
	cout << find_count_sumb(str, temp);
	//task 5
	str = "\nT_5 enter any text: ";
	cout << str;
	getline(cin, str);
	cout << "enter sumbol that you want find (enter only one symbol): ";
	do {
		getline(cin, temp);
		if (temp.size() != 1)cout << "I talk you, enter only one symbol!!!!!!: ";
	} while (temp.size() != 1);
	cout << &str<<endl;
	find_count_sumb_cout(str, temp);
	cout << str;
	//task 6
	str = "\nT_6 enter any text: ";
	cout << str;
	getline(cin, str);
	cout << "enter sumbol that you want find (enter only one symbol): ";
	do {
		getline(cin, temp);
		if (temp.size() != 1)cout << "I talk you, enter only one symbol!!!!!!: ";
	} while (temp.size() != 1);
	cout << &str << endl;
	find_count_sumb_last(str, temp);
	cout << str;
	//task 7
str = "\nT_7 delete 'm' 'n' enter any text where will be inside sumbol 'm' and 'n': ";
cout << str;
getline(cin, str);
delete_m_n(str);
cout << str;
	//task 8
	b;
	str = "\nT_8 enter any text: ";
	cout << str;
	getline(cin, str);
	cout << "enter number symbol in string. min: 1; max: " << str.size()<<"; ";
	do {
		cin >> b;
	} while (b<0&&b>str.size());
	cin.ignore();
	delete_one_sym(str,b);
	cout << str;
	//task 9
	temp = "\nT_9 enter any text: ";
	cout << temp;
	getline(cin, temp);
	copy_to(temp,str);
	cout << str;
	//task 10
	str = "\nT_10 enter any text where will be inside sumbol '.' and 'space': ";
	cout << str;
	getline(cin, str);
	swap_symb(str);
	cout << str;
	//task 11
	str = "\nT_11 enter any text: ";
	cout << str;
	getline(cin, str);
	cout << "enter number in string. min: 1; max: " << str.size() << "; ";
	do {
		cin >> b;
	} while (b<1 && b>str.size());
	cin.ignore();
	cout << "enter symbol (only one):";
	do {
		getline(cin, temp);
		if (temp.size() != 1)cout << "I talk you, enter only one symbol!!!!!!: ";
	} while (temp.size() != 1);
	paste_one_symb(str, b, temp);
	cout << str<<endl;
	cout<<str.size();
	//task 12
str = "\nT_12 enter any text : ";
cout << str;
getline(cin, str);
find_sumb_numb(str);
cout << str;
	//telegram 1
str = "\ntelegram_1 enter any text where will be inside some digit: ";
cout << str;
getline(cin, str);
delete_digit(str);
cout << str;
	//telegram 2
str = "\ntelegram_2 enter any text where will be inside some digit: ";
cout << str;
getline(cin, str);
int sum = count_digit(str);
cout << sum;
	//telegram 3
str = "\ntelegram_3 enter any text where will be inside some digit: ";
cout << str;
getline(cin, str);
delete_symbol(str);
cout << str;
//telegram 4
	str = "\ntelegram_4 The game 'guess the word'. if want exit write'exit': ";
	cout << str;
	str = "telegram";
	bool end_g = false;
	while (!end_g){
	getline(cin, temp);
	end_g = guess_word(str, temp, end_g);
	cout << temp  <<endl;
	}
	//telegram 5
	str = "\ntelegram_5 enter any text, only down register and english letters: ";
	cout << str;
	getline(cin, str);
	int* parr = int_arr(str);
	for (int i = 0; i < str.size(); i++)cout << parr[i]<<endl;
	//telegram 6
	str = "\ntelegram_6 enter any text: ";
	cout << str;
	getline(cin, str);
	find_symbol(str);
	cout << str;
//telegram 7
str = "\ntelegram_7 enter any text in down register: ";
cout << str;
getline(cin, str);
find_vow_con_letters(str);
cout << str;

	
//telegram 8
str = "\ntelegram_8 enter any text in down register: ";
cout << str;
getline(cin, str);
int* arr = count_letters(str);
for (int i = 0; i < str.size(); i++)
{
	cout << setw(3) << str[i];
}
cout << endl;
for (int i = 0; i < str.size(); i++)
{
	cout << setw(3) << arr[i];
}
	
//task 9
str = "\ntelegram 9 enter any text: ";
cout << str;
getline(cin, str);
cout << "enter sumbol after that you want paste text (enter only one symbol): ";
do {
	getline(cin, temp);
	if (temp.size() != 1)cout << "I talk you, enter only one symbol!!!!!!: ";
	else if (f(str, temp[0]) == 0)cout << "not found sumbol in string: ";
} while (temp.size() != 1 || f(str, temp[0])==0);

paste_text(str, temp);
cout << str;
//telegram 10
	str = "\ntelegram_10: ";
	cout << str;
	getline(cin, str);
	cout << "enter number shift right. min: 1; max: " << str.size() << "; ";
	do {
		cin >> b;
	} while (b<1 && b>str.size());
	cin.ignore();
	n_right(str, b);
	cout << "shift right: " << str;
	rewers(str);
	cout << "\nrewers: " << str;
	double_sumb(str);
	cout << "\ndouble letters: " << str;
	cout << endl;
	int* cr_int = char_to_int(str);
	int i = 0;
	while (str[i] != '\0') {
		cout << setw(4) << str[i];
		i++;
	}
	i = 0;
	cout << endl;
	while (str[i] != '\0')
	{
		cout << setw(4) << cr_int[i];
		i++;
	}

}