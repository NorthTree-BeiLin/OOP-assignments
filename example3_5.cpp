
//example_3_5.cpp��Բ�������ʽ��Ӧ�þ���
#include"Date1.h"
int main()
{
	Date today,*t;
    today.SetDate(2006,10,17);      		//ͨ��������Բ����ʽ���ʳ�Ա����
    cout<<"One day is:";
    today.Display();               			//������ڵ���Ϣ
    t=&today;
    (*t).SetDate(2007,12,18);       		//ͨ��ָ����Բ����ʽ���ʳ�Ա����
    cout<<"the other day is:";
	cout << today.GetYear() << today.GetMonth() << today.GetDay() << endl;
    (*t).Display();                			//������ڵ���Ϣ
	system("pause");
	   return 0;
}


