#pragma once
#include <iomanip>
#include <iostream>
#include <string>
#include <stdio.h>
using namespace std;
string find_m_n(string str);
string paranthesis(string str1);
string find_count_sumb(string str,string temp);
void find_count_sumb_cout(string &str,string temp);
void find_count_sumb_last(string &str,string temp);
void delete_m_n(string &str);
void delete_one_sym(string &str, int b);
void copy_to(string temp,string &str);
void swap_symb(string &str);
void paste_one_symb(string &str,int b, string q);
void find_sumb_numb(string &str);
void delete_digit(string &str);
int count_digit(string &str);
void delete_symbol(string &str);
bool guess_word(string str,string &temp,bool &end_g);
int* int_arr(string str);
void find_symbol(string& str);
void find_vow_con_letters(string &str);
int* count_letters(string& str);
int f(string a, char b);
void paste_text(string &str,string temp);	
void n_right(string& str,int n);
void rewers(string& str);
void double_sumb(string& str);
int* char_to_int(string& str);
