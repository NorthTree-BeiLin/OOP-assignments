//example2_05.cpp���ֲ����������涨�弰����������ʾ����
#include <iostream>
#include <iomanip>
using namespace std;             //ʹ��C++�ı�׼���ֿռ�
int main()
{   
	
	int arr[3]={0},i=123;        //�����һ���ֲ�����i,�����򲻺��ڶ���i������ 
	cout<<"i="<<i<<endl;        //�����һ��i��ֵΪ123

                             
	int i;
		for (  i=0;i<2;i++)      //����ڶ����ֲ�����i������������ڸ�����
           arr[i]=(i+5)*10+3;
        cout<<"i="<<i<<endl;     //����ڶ����ֲ�����i��ֵ2,��һ��i��������
		arr[2]++;
		cout<<"i="<<i<<endl;    //����ڶ����ֲ�����i��ֵ2,��һ��i��������	
                             

	cout<<"i="<<i<<endl;        //�����Ϊ��һ��i��ֵ123
	int sum = 0;                //����ֲ�����sum,�����涨��
    for (i=0;i<3; i++)            //��һ��i��������
        sum+=arr[i];
    cout<<"i="<<i<<endl;        //�����Ϊ��һ��i��ֵ3
    for (i=0;i<3 ;i++)       	   //��һ��i��Ϊѭ�����Ʊ���
        cout<<setw(4)<<arr[i];   //setw���Ƹ�ʽ,���水ÿ��Ԫ��ռ4�����
    cout<<endl;
    cout<<"i="<<i<<",sum="<<sum<<endl;     //�����һ��i��ֵ3�Լ�sum��ֵ117  
	system("pause");
	return 0;
}