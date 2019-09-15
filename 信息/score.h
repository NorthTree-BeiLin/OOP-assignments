/*************************************************
* Head File   : SCORE.h
* File Usage  : ѧ������ϵͳͷ�ļ�
/**************************************************/

#ifndef __SCORE_H__
#define __SCORE_H__
#include <stdio.h>
/*----------------------------------*
	Function Declaration
*-----------------------------------*/

typedef struct student
{
	char number[11];  //ѧ��
	char name[5];    //����
	float dailyScore;   //ƽʱ�ɼ�
	float finalScore;   //��ĩ�ɼ�
	float testScore;    //ʵ��ɼ�
	float generalScore; //�����ɼ�

}SS;


/*---------------��������-------------------*/

//1.��ȡѧ����������
void readData(SS stu[], int N);
SS* readDataFromFile(int *N);

//2.����N��ѧ�������ܳɼ�
void calcuScore(SS stu[], int N);


//3.���������ɼ�����
void sortScore(SS stu[], int N);


//4.����һ���ĸ�ʽ���N��ѧ����������Ϣ
void printOut(SS stu[], int N);


//5.��ѯѧ����Ϣ
void findOut(SS stu[], int N);
//6.����ƽ���ɼ�������
void analysis(SS stu[], int N);
#endif#pragma once #pragma once