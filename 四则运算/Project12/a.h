#pragma once
#include<stdio.h>
#include<stdlib.h> 
#include<iostream>
#include<cstring>
#include<time.h>
#include<cmath>
#include<fstream>
using namespace std;
int max_number;//��ȡ����� 
int count_numbers;//��������� 
int brackets_operation;//���������־ 
int decimal_operation;//С�������־ 
char operation[4] = { '+','-','*','/', }; //����� 
int ope;   //��1,2,3,4,�Լ���������������ʹ�õ������ 
int output_form;  //�ļ�������ǽ�ֻ����Ļ��� 
void integer_count(); //������������ 
void decimal_count(); //С���������� 
using namespace std;
ofstream outfile;  //д���ļ� 
void  integer_count();
void decimal_count();
