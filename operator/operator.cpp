// operator.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
using namespace std;

class Ckobe
{
private:
	int feet;
	int inches;
public:
	void setvaluve(int fe,int in);
	void display1();
	//void display2();
	Ckobe operator+(Ckobe & wtf);
};

void Ckobe::setvaluve(int fe,int in)
{
	feet = fe + in / 12;
	inches = in + in % 12;
}

void Ckobe::display1()
{
	cout << feet << "英尺" << inches << "英寸" << endl;
}

Ckobe Ckobe::operator+(Ckobe & wtf)
{
	Ckobe temp;
	temp.setvaluve(feet + wtf.feet, inches + wtf.inches);
	return temp;
}



int main()
{
	Ckobe A, B, C;
	A.setvaluve(5, 10);
	A.display1();
	B.setvaluve(5, 9);
	B.display1();
	C = A + B;
	C.display1();
    return 0;
}

