#pragma once
#include<stdio.h>
#include<stdlib.h> 
#include<iostream>
#include<cstring>
#include<time.h>
#include<cmath>
#include<fstream>
using namespace std;
int max_number;//所取最大数 
int count_numbers;//计算的数量 
int brackets_operation;//括号运算标志 
int decimal_operation;//小数运算标志 
char operation[4] = { '+','-','*','/', }; //运算符 
int ope;   //用1,2,3,4,以及其他数字来决定使用的运算符 
int output_form;  //文件输出还是仅只是屏幕输出 
void integer_count(); //整数四则运算 
void decimal_count(); //小数四则运算 
using namespace std;
ofstream outfile;  //写入文件 
void  integer_count();
void decimal_count();
