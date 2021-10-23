#include "Header.h"
string find_m_n(string str) {
	string ptmp;
	bool q = false;
	int a = 0;
	while (str[a] != '\0') {
		if (str[a] == 'm' || str[a] == 'M')q = true;
		if (q)ptmp += str[a];
		if (str[a] == 'n' || str[a] == 'N')q = false;
		a++;
	}
	if (ptmp.size() == 0)return ptmp = "  'm' and 'n' sumbol not finding";
	else if (q) return ptmp += "  'n' symbol not finding";
	else return ptmp;
}
string paranthesis(string str) {
	int cou_op = 0, cou_cl = 0,a=0;
	while (str[a] != '\0') {
		if (str[a] == '(')cou_op++;
		if (str[a] == ')')cou_cl++;
		a++;
	}
	str = {};
	string cl = " closing paranthesis", op = " opening paranthesis";
	if (cou_op > cou_cl)str += "the necessary " + to_string(cou_op - cou_cl) + cl;
	if (cou_op < cou_cl)str += "the necessary " + to_string(cou_cl - cou_op) + op;
	if (cou_op == 0 && cou_cl==0)str += "the closing and opening paranthesis is not found";
	else if (cou_op == cou_cl)str += "the closing and opening paranthesis is equally";
	return str;
}
string find_count_sumb(string str, string temp) {
	int counter = 0, a = 0;
	while (str[a] != '\0') {
		if (str[a] == temp[0])counter++;
		a++;
	}
	str = {};
	if (counter == 0)str += "the finding symbol not found";
	else str += "I find sumbol '"+ temp +"' in string "+ to_string(counter)+ " times";
	return str;
}
void find_count_sumb_cout(string &str, string temp) {
	cout << &str<<endl;
	int counter = 0, a = 0;
	while (str[a] != '\0') {
		if (str[a] == temp[0]) {
			counter++;
			cout <<"index: "<< a << endl;
		}
		a++;
	}
	str = {};
	if (counter == 0)str += "the finding symbol not found";
	else str += "I find sumbol '" + temp + "' in string " + to_string(counter) + " times";
}
void find_count_sumb_last(string& str, string temp) {
	cout << &str << endl;
	int counter = 0, a = 0,tmp;
	while (str[a] != '\0') {
		if (str[a] == temp[0]) {
			counter++;
			tmp = a;
		}
		a++;
	}
			cout  <<tmp << endl;
	str = {};
	if (counter == 0)str += "the finding symbol not found";
	else str += "I find sumbol '" + temp + "' in string " + to_string(counter) + " times";
}
void delete_m_n(string &str) {
	string ptmp;
	bool q = false;
	int a = 0;
	while (str[a] != '\0') {
		if (str[a] == 'm' || str[a] == 'M')q = true;
		if (!q)ptmp += str[a];
		if (str[a] == 'n' || str[a] == 'N')q = false;
		a++;
	}
	if (ptmp.size() == 0)ptmp = "  'm' and 'n' sumbol not finding";
	else if (q) ptmp += "  'n' symbol not finding";
	else ptmp;
	str = ptmp;
}
void delete_one_sym(string& str, int b) {
	string ptmp;
	int a = 0;
	while (str[a] != '\0') {
		if (a != (b - 1))ptmp += str[a];
		a++;
	}
	str = ptmp;
}
void copy_to(string temp, string& str) {
	str = temp;
}
void swap_symb(string& str) {
	string ptmp;
	int a = 0;
	while (str[a] != '\0') {
		if (str[a] == '.')ptmp += '!';
		else if (str[a] == ' ')ptmp += '\t';
		else ptmp += str[a];
		a++;
	}
	str = ptmp;
}
void paste_one_symb(string& str,int b, string q) {
	string ptmp;
	int a = 0,tmp=0;
	while (str[a-tmp] != '\0') {
		if (a == (b - 1)) {
			ptmp += q[0];
			tmp++;
		}
		else ptmp += str[a-tmp];
			a++;
	}
	str = ptmp;
}
void find_sumb_numb(string &str) {
	int a = 0,num_coun= 0,symb_coun=0;
	while (str[a] != '\0') {
		if (isalpha(str[a]) != 0) symb_coun++;
		if (isdigit(str[a]) != 0) num_coun++;
		a++;
	}
	str = {};
	str += "I find " + to_string(symb_coun) + " symbol and " + to_string(num_coun) + " digits in your string";
}
void delete_digit(string& str) {
	int a = 0,count=0;
	string p_str;
	while (str[a] != '\0') {
		if (isdigit(str[a]) == 0)p_str += str[a];
		else count++;
		a++;
	}
	if (count == 0) {
		str = {};
		str += "Not found digits in your string";
	}
	else str = p_str;
}
int count_digit(string& str) {
	int a = 0, count = 0;
	while (str[a] != '\0') {
		if (isdigit(str[a]) != 0)count++;
		a++;
	}
	if (count == 0) {
		cout << "Not found digits in your string ";
		return count;
	}
	else return count;
}
void delete_symbol(string& str) {
	int a = 0, count = 0;
	string p_str;
	while (str[a] != '\0') {
		if (isalpha(str[a]) != 0 || isspace(str[a]) != 0)p_str += str[a];
		a++;
	}
	 str = p_str;
}
bool guess_word(string str, string& temp, bool& end_g) {
	if(temp == "exit")return end_g = true;
	if (temp.size() > str.size()) {
		temp += "  - You word is " + to_string(temp.size() - str.size()) + " letters too much";
		return end_g = false;
	}else if (temp.size() < str.size()) {
		temp += "  - You word is " + to_string(str.size() - temp.size()) + " letters is not enough";
		return end_g = false;
	}
	else if (temp.size() == str.size()) {
		int a = 0, count = 0;
		while (str[a] != '\0') {
			if (str[a] == temp[a])count++;
			a++;
		}
		temp = {};
		if (count == str.size()) {
			temp += "You guess word";
			return end_g = true;
		}
		else if(count<3){
			temp += "You guess " + to_string(count) + " letters in word";
			return end_g = false;
		}
		else if (count >= 3) {
			temp += "You guess " + to_string(count) + " letters in word and you have a small hint: its a name of messenger";
			return end_g = false;
		}
		}
}
int* int_arr(string str) {
	int a = 0, count = 0;
	int* arr = new int[str.size()];
	while (str[a] != '\0') {
		arr[a] = str[a];
		a++;
	}
	return arr;
}	
void find_symbol(string& str) {
	int index, tmp = 0, tmp2 = 0;
	for (int i = 0; i < str.size(); i++)
	{
		for (int j = 0; j < str.size(); j++)
		{
			if (i != j) {
				if (str[i] == str[j]) {
					tmp++;
					if (tmp > tmp2) {
						tmp2 = tmp;
						index = i;
					}
				}
			}

		}
		tmp = 0;
	}
	if (tmp2 > 0){
	str = { str[index] };
	str += " - symbol appeared in the string " + to_string(tmp2+1) + " times";
	}
	else {
		str = {};
		str += "there was no repetition of characters in the string";
	}
}
void find_vow_con_letters(string& str) {
	int a = 0, con = 0,vow = 0;
	while (str[a] != '\0') {
		if (str[a] == 'a' || str[a] == 'e' || str[a] == 'i' || str[a] == 'o' || str[a] == 'u')vow++;
		else if(isalpha(str[a]) != 0)con++;
		a++;
	}
	str = {};
	if(vow == 0&&con == 0)str += "not found vowels and consonants letters";
	else if (vow == con)str += "vowels and consonants is equally";
	else if (vow > con)str += "vowels letters is more from consonanst "+to_string(vow)+" : "+ to_string(con);
	else if (vow < con)str += "consonanst letters is more from vowels "+to_string(con)+" : "+ to_string(vow);
}
/// ///////////////////////////////////////////////////////////////

int* count_letters(string& str) {
	int tmp = 0, tmp2 = 0;
	string t;
	for (int i = 0; i < str.size(); i++)
	{
		for (int j = i; j < str.size(); j++)
		{
			if (i != j && f(t,str[j]) == 0&& str[i] == str[j])tmp++;	
		}
		if (f(t, str[i])==0)t += str[i];
		tmp2 += tmp;
		tmp = 0;
	}
	int* ar = new int[t.size()];
	for (int i = 0; i < t.size(); i++)
	{
		for (int j = 0; j < str.size(); j++)
		{
				if (t[i] == str[j])tmp++;	
		}
		ar[i] = tmp;
		tmp = 0;
	}
	str = t;
	return ar;
}
int f(string a, char b) {
	for (int i = 0; i < a.size(); i++)
	{
			if (a[i] == b)return a[i];
	}
	return 0;
}
/////////////////////////////////////////////////////////////////////

void paste_text(string& str, string temp) {
	int a = 0;
	bool b = false;
	string pstr,ent;
	while(str[a] != '\0'){
		if (temp[0] == str[a]&&!b)
		{
			b = str[a];
			cout << "enter text that do you want paste: ";
			 getline(cin,ent);
			 pstr += str[a]+ent;
		}
		else pstr += str[a];
		a++;
	}
	str = pstr;
}
void n_right(string& str,int n) {
	char tmp;
	for (int i = 0; i < n; i++)
	{
		for (int j = str.size()-1; j > 0; j--)
		{
			tmp = str[j];
			str[j] = str[j-1];
			str[j-1] = tmp;
		}
	}
}
void rewers(string& str) {
	string tmp;
	for (int j = str.size() - 1; j >= 0; j--)tmp += str[j];
	str = tmp;
}
void double_sumb(string& str) {
	string pstr;
	int a = 0;
	while (str[a]!='\0') {
		for (int i = 0; i < 2; i++)pstr += str[a];
		a++;
	}
	str = pstr;
}
int* char_to_int(string& str) {
	int* a = new int[str.size()];
	int i = 0;
	while (str[i] != '\0') {
		a[i] = str[i];
		i++;
	}
	return a;
}