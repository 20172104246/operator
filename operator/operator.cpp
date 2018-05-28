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
	void display();
	void unplay(int a,int b);
	Ckobe operator+(Ckobe & wtf);
	Ckobe operator-(Ckobe & xx);
    Ckobe play(Ckobe & xx);
};

void Ckobe::setvaluve(int fe,int in)
{
	feet = fe + in / 12;
	inches = in % 12;
}

void Ckobe::display()
{
	cout << feet << "英尺" << inches << "英寸" << endl;
}

Ckobe Ckobe::operator+(Ckobe & wtf)
{
	Ckobe temp;
	temp.setvaluve(feet + wtf.feet, inches + wtf.inches);
	return temp;
}

void Ckobe::unplay(int a,int b)
{
	feet = feet + a;
	if (inches + b > 12)
	{
		feet = feet + 1;
		inches = (inches + b) - 12;
		cout << feet << "英尺" << inches << "英寸" << endl;
		float q, x, y;
		for (y = 1.5f; y>-1.5f; y -= 0.1f)
		{
			for (x = -1.5f; x<1.5f; x += 0.05f)
			{
				q = x*x + y*y - 1;
				//这里的@符号即为打印出的心形图案符号，可更改  
				char ch = q*q*q - x*x*y*y*y <= 0.0f ? '@' : ' ';
				putchar(ch);
				//cout<<"或者putchar(q*q*q-x*x*y*y*y<=0.0f?'*':' ')";  
			}
			cout << "\n" << endl; //printf("\n");
		}

	}
}

Ckobe Ckobe::operator-(Ckobe & wtf)
{
	Ckobe temp;
	temp.setvaluve(feet - wtf.feet, inches - wtf.inches);
	return temp;
}

int main()
{
	Ckobe A, B, C;
	int k1;
	int k2;
	int k3;
	int k4;
	cin >> k1 >> k2 >> k3 >> k4;
	A.setvaluve(k1, k2);
	A.display();
	A.unplay(k1,k2);
	B.setvaluve(k3, k4);
	B.display();
	B.unplay(k3, k4);
	C = A + B;
	C.display();
	C = A - B;
	C.display();
    return 0;
}

