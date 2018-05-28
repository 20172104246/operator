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
	void unplay(int a,double b);
	Ckobe operator+(Ckobe & wtf);
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

void Ckobe::unplay(int a,double b)
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


int main()
{
	Ckobe A, B, C;
	A.setvaluve(5, 10);
	A.display();
	A.unplay(5, 10);
	B.setvaluve(5, 9);
	B.display();
	B.unplay(5, 9);
	C = A + B;
	C.display();
	C.unplay(5, 9);
    return 0;
}

