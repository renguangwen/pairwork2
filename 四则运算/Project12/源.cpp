#include"a.h"
int main()
{
	cout << "������Ҫ�������Ŀ������" << endl;
	cin >> count_numbers;
	cout << "�������������" << endl;
	cin >> max_number;
	cout << "��������Ҫ���е����㣺" << endl;
	cout << "1����+ 2����- 3����* 4����/ �������ִ��������ȡ��" << endl;
	cin >> ope;
	cout << "������1ѡ���������㣬��������2����С�����㣺" << endl;
	cin >> decimal_operation;
	cout << "������1������Ҫ���ţ�����2������Ҫ����" << endl;
	cin >> brackets_operation;
	cout << "������1�����������Ļ��������ļ� ����2������������Ļ�ϣ�" << endl;
	cin >> output_form;
	if (output_form == 1)
	{
		outfile.open("arithmetic.txt");  //���ɵ���ʽд��"arithmetic.txt"�ļ� 
	}
	if (decimal_operation == 1) //�������� 
	{
		srand((unsigned int)time(NULL));
		//rand()����ÿ������������������������ȣ�����srand(unsigned int)����������������ĲŲ�һ��
		for (int i = 0; i < count_numbers; i++)
		{
			integer_count();
		}
	}
	else       //С������ 
	{
		srand((unsigned int)time(NULL));
		for (int i = 0; i < count_numbers; i++)
		{
			decimal_count();
		}
	}
	outfile.close(); //�ر��ļ� 
	return 0;
}

void  integer_count()//������������ 
{
	int numb1, numb2, numb3;       //��������ʽ 
	numb1 = (rand() % max_number) + 1; //rand()�����������ΧΪ0��32767���������%���������������,�ټ�һ 
	numb2 = (rand() % max_number) + 1; //����numb1,numb2,numb3��ΧΪ1-max_number 
	numb3 = (rand() % max_number) + 1;
	int op1, op2;   // op1.op2��0-3���ĸ���ȡֵ���ֱ����+��-��*��/���� 
	op1 = rand() % 4;
	op2 = rand() % 4;
	if (brackets_operation == 1) //���ű�־Ϊ1���������������� 
	{
		switch (ope) //1Ϊ+��2Ϊ-��3Ϊ*��4Ϊ/������Ϊ������� 
		{
		case 1:
			cout << numb1 << "+" << numb2 << "+" << numb3 << "=" << endl;
			outfile << numb1 << "+" << numb2 << "+" << numb3 << "=" << endl;
			break;
		case 2:
			cout << numb1 << "-" << numb2 << "-" << numb3 << "=" << endl;
			outfile << numb1 << "-" << numb2 << "-" << numb3 << "=" << endl;
			break;
		case 3:
			cout << numb1 << "*" << numb2 << "*" << numb3 << "=" << endl;
			outfile << numb1 << "*" << numb2 << "*" << numb3 << "=" << endl;
			break;
		case 4:
			cout << numb1 << "/" << numb2 << "/" << numb3 << "=" << endl;
			outfile << numb1 << "/" << numb2 << "/" << numb3 << "=" << endl;
			break;
		default:
			cout << numb1 << operation[op1] << numb2 << operation[op2] << numb3 << "=" << endl;
			outfile << numb1 << operation[op1] << numb2 << operation[op2] << numb3 << "=" << endl;
		}
	}
	else //���򣬽����������� 
	{
		int temp;     //temp�������ŵ�ǰ�� 
		temp = rand() % 2;//tempȡֵΪ0��1 
		if (temp == 0)   //��ǰ����������ʽ������ 
		{
			switch (ope)
			{
			case 1:
				cout << "(" << numb1 << "+" << numb2 << ")" << "+" << numb3 << "=" << endl;
				outfile << "(" << numb1 << "+" << numb2 << ")" << "+" << numb3 << "=" << endl;
				break;
			case 2:
				cout << "(" << numb1 << "-" << numb2 << ")" << "-" << numb3 << "=" << endl;
				outfile << "(" << numb1 << "-" << numb2 << ")" << "-" << numb3 << "=" << endl;
				break;
			case 3:
				cout << "(" << numb1 << "*" << numb2 << ")" << "*" << numb3 << "=" << endl;
				outfile << "(" << numb1 << "*" << numb2 << ")" << "*" << numb3 << "=" << endl;
				break;
			case 4:
				cout << "(" << numb1 << "/" << numb2 << ")" << "/" << numb3 << "=" << endl;
				outfile << "(" << numb1 << "/" << numb2 << ")" << "/" << numb3 << "=" << endl;
				break;
			default:
				cout << "(" << numb1 << operation[op1] << numb2 << ")" << operation[op2] << numb3 << "=" << endl;
				outfile << "(" << numb1 << operation[op1] << numb2 << ")" << operation[op2] << numb3 << "=" << endl;
			}
		}
		else            //�ں�����������ʽ������ 
		{
			switch (ope) //1Ϊ+��2Ϊ-��3Ϊ*��4Ϊ/������Ϊ������� 
			{
			case 1:
				cout << numb1 << "+" << "(" << numb2 << "+" << numb3 << ")" << "=" << endl;
				outfile << numb1 << "+" << "(" << numb2 << "+" << numb3 << ")" << "=" << endl;
				break;
			case 2:
				cout << numb1 << "-" << "(" << numb2 << "-" << numb3 << ")" << "=" << endl;
				outfile << numb1 << "-" << "(" << numb2 << "-" << numb3 << ")" << "=" << endl;
				break;
			case 3:
				cout << numb1 << "*" << "(" << numb2 << "*" << numb3 << ")" << "=" << endl;
				outfile << numb1 << "*" << "(" << numb2 << "*" << numb3 << ")" << "=" << endl;
				break;
			case 4:
				cout << numb1 << "/" << "(" << numb2 << "/" << numb3 << ")" << "=" << endl;
				outfile << numb1 << "/" << "(" << numb2 << "/" << numb3 << ")" << "=" << endl;
				break;
			default:
				cout << numb1 << operation[op1] << "(" << numb2 << operation[op2] << numb3 << ")" << "=" << endl;
				outfile << numb1 << operation[op1] << "(" << numb2 << operation[op2] << numb3 << ")" << "=" << endl;
			}
		}
	}
}
void decimal_count()           // С���������� 
{
	double numb4, numb5, numb6;   //���帡�������͵���������ʽ 
	numb4 = (double)rand() / RAND_MAX * max_number + 1; //����1.0-max_number�ĸ����� 
	numb5 = (double)rand() / RAND_MAX * max_number + 1;
	numb6 = (double)rand() / RAND_MAX * max_number + 1;
	int op1, op2;                // op1.op2��0-3���ĸ���ȡֵ���ֱ����+��-��*��/���� 
	op1 = rand() % 4;
	op2 = rand() % 4;
	if (brackets_operation == 1)   //���ű�־Ϊ1���������������� 
	{
		switch (ope)
		{
		case 1:
			cout << numb4 << "+" << numb5 << "+" << numb6 << "=" << endl;
			outfile << numb4 << "+" << numb5 << "+" << numb6 << "=" << endl;
			break;
		case 2:
			cout << numb4 << "-" << numb5 << "-" << numb6 << "=" << endl;
			outfile << numb4 << "-" << numb5 << "-" << numb6 << "=" << endl;
			break;
		case 3:
			cout << numb4 << "*" << numb5 << "*" << numb6 << "=" << endl;
			outfile << numb4 << "*" << numb5 << "*" << numb6 << "=" << endl;
			break;
		case 4:
			cout << numb4 << "/" << numb5 << "/" << numb6 << "=" << endl;
			outfile << numb4 << "/" << numb5 << "/" << numb6 << "=" << endl;
			break;
		default:
			cout << numb4 << operation[op1] << numb5 << operation[op2] << numb6 << "=" << endl;
			outfile << numb4 << operation[op1] << numb5 << operation[op2] << numb6 << "=" << endl;
		}
	}
	else//���򣬽����������� 
	{
		int temp;      //temp�������ŵ�ǰ�� 
		temp = rand() % 2; //ȡֵΪ0��1 
		if (temp == 0)    //tempΪ0������ǰ����������ʽ 
		{
			switch (ope)
			{
			case 1:
				cout << "(" << numb4 << "+" << numb5 << ")" << "+" << numb6 << "=" << endl;
				outfile << "(" << numb4 << "+" << numb5 << ")" << "+" << numb6 << "=" << endl;
				break;
			case 2:
				cout << "(" << numb4 << "-" << numb5 << ")" << "-" << numb6 << "=" << endl;
				outfile << "(" << numb4 << "-" << numb5 << ")" << "-" << numb6 << "=" << endl;
				break;
			case 3:
				cout << "(" << numb4 << "*" << numb5 << ")" << "*" << numb6 << "=" << endl;
				outfile << "(" << numb4 << "*" << numb5 << ")" << "*" << numb6 << "=" << endl;
				break;
			case 4:
				cout << "(" << numb4 << "/" << numb5 << ")" << "/" << numb6 << "=" << endl;
				outfile << "(" << numb4 << "/" << numb5 << ")" << "/" << numb6 << "=" << endl;
				break;
			default:
				cout << "(" << numb4 << operation[op1] << numb5 << ")" << operation[op2] << numb6 << "=" << endl;
				outfile << "(" << numb4 << operation[op1] << numb5 << ")" << operation[op2] << numb6 << "=" << endl;
			}
		}
		else    //���������ں�����������ʽ 
		{
			switch (ope)
			{
			case 1:
				cout << numb4 << "+" << "(" << numb5 << "+" << numb6 << ")" << "=" << endl;
				outfile << numb4 << "+" << "(" << numb5 << "+" << numb6 << ")" << "=" << endl;
				break;
			case 2:
				cout << numb4 << "-" << "(" << numb5 << "-" << numb6 << ")" << "=" << endl;
				outfile << numb4 << "-" << "(" << numb5 << "-" << numb6 << ")" << "=" << endl;
				break;
			case 3:
				cout << numb4 << "*" << "(" << numb5 << "*" << numb6 << ")" << "=" << endl;
				outfile << numb4 << "*" << "(" << numb5 << "*" << numb6 << ")" << "=" << endl;
				break;
			case 4:
				cout << numb4 << "/" << "(" << numb5 << "/" << numb6 << ")" << "=" << endl;
				outfile << numb4 << "/" << "(" << numb5 << "/" << numb6 << ")" << "=" << endl;
				break;
			default:
				cout << numb4 << operation[op1] << "(" << numb5 << operation[op2] << numb6 << ")" << "=" << endl;
				outfile << numb4 << operation[op1] << "(" << numb5 << operation[op2] << numb6 << ")" << "=" << endl;
			}
		}
	}
}