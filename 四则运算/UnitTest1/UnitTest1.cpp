#include "pch.h"
#include "CppUnitTest.h"
#include "..\Project12\a.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(TestMethod1)//�����ӷ�����
		{
			int Range = 50; //���ֵ
			int Num = 5;//����
			int  OperatorType = 1;//����������Ŀ���ͣ�0.�ӷ����� 1.�������� 2.�˷����� 3.�������� 4.����������
			int ResultType = 1;//���������ͣ�0.�� 1.ֻ����Ϊ���� 2.��λС���ڱ������
			int format1 = 1; //ÿ�д�ӡ���ٸ���Ŀ
			int format2 = 1;//����ÿ����Ŀ��������1��ÿ����Ŀ֮����Ҫ����ո�
			int PrintType = 1;//�Ƿ�������ļ�0.��ͨ���ļ����  1.ͨ���ļ����
			int a, b;//�����
			int ans[100];
			int i = 0;
			char type = ' ';//�����
			int result[100];//��
			for (i = 1; i <= Num; i++) {

			}
			for (i = 1; i <= Num; i++) {
				Assert::AreEqual(ans[i], result[i]);
			};

		}
		TEST_METHOD(TestMethod2)//С�����������㣨������0��
		{
			int Range = 10; //���ֵ
			int Num = 3;//����
			int  OperatorType = 3;//����������Ŀ���ͣ�0.�ӷ����� 1.�������� 2.�˷����� 3.�������� 4.����������
			int ResultType = 2;//���������ͣ�0.�� 1.ֻ����Ϊ���� 2.��λС���ڱ������
			int format1 = 1; //ÿ�д�ӡ���ٸ���Ŀ
			int format2 = 1;//����ÿ����Ŀ��������1��ÿ����Ŀ֮����Ҫ����ո�
			int PrintType = 1;//�Ƿ�������ļ�0.��ͨ���ļ����  1.ͨ���ļ����
			float a = 18, b = 3;
			float ans = 6.0;
			float result = a / b;




			Assert::AreEqual(ans, result);
		}
		TEST_METHOD(TestMethod3)//С���������㣨����Ϊ0��
		{
			int Range = 50; //���ֵ
			int Num = 4;//����
			int  OperatorType = 3;//����������Ŀ���ͣ�0.�ӷ����� 1.�������� 2.�˷����� 3.�������� 4.����������
			int ResultType = 2;//���������ͣ�0.�� 1.ֻ����Ϊ���� 2.��λС���ڱ������
			int format1 = 1; //ÿ�д�ӡ���ٸ���Ŀ
			int format2 = 1;//����ÿ����Ŀ��������1��ÿ����Ŀ֮����Ҫ����ո�
			int PrintType = 1;//�Ƿ�������ļ�0.��ͨ���ļ����  1.ͨ���ļ����
			float a = 18, b = 0;
			float ans = 0;
			float result = 0;








			Assert::AreEqual(ans, result);
		}
	};
}