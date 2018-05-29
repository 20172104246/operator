// operator.cpp : �������̨Ӧ�ó������ڵ㡣
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
	cout << feet << "Ӣ��" << inches << "Ӣ��" << endl;
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
	cout << feet << "Ӣ��" << inches << "Ӣ��" << endl;
	if (inches + b > 12)
	{
		feet = feet + 1;
		inches = (inches + b) - 12;
		cout << feet << "Ӣ��" << inches << "Ӣ��" << endl;
    	float q, x, y;
		for (y = 1.5f; y>-1.5f; y -= 0.1f)
		{
			for (x = -1.5f; x<1.5f; x += 0.05f)
			{
				q = x*x + y*y - 1;
				//�����@���ż�Ϊ��ӡ��������ͼ�����ţ��ɸ���  
				char ch = q*q*q - x*x*y*y*y <= 0.0f ? '@' : ' ';
				putchar(ch);
				//cout<<"����putchar(q*q*q-x*x*y*y*y<=0.0f?'*':' ')";  
			}
			cout << "\n" << endl; //printf("\n");
		}

	}
}

Ckobe Ckobe::operator-(Ckobe & wtf)
{
	Ckobe temp;
	temp.setvaluve(feet - wtf.feet, inches - wtf.inches);
	cout << "feet=" << temp.feet<<"    "<< "wtf.feet=" << wtf.feet << endl;
	cout << "inches=" << temp.inches << "    " << "wtf.inches=" << wtf.inches << endl;
	return temp;
}

int main()
{
	Ckobe A, B, C,D;
	int k1;
	int k2;
	int k3;
	int k4;
	cin >> k1 >> k2 >> k3 >> k4;
	A.setvaluve(k1, k2);
	A.display();
	A.unplay(k1,k2);
	B.setvaluve(k3, k4);
	cout << "B    "; 
	B.display();
	B.unplay(k3, k4);
	C = A + B;
	cout << "C    ";
	C.display();
	cout << "A    ";
	A.display();
	cout << "B    ";
	B.display();
	/*D.setvaluve(0,0);
	cout << "d    ";
	D.display();*/
	C = A - B;
	cout << "C    ";
	C.display();
    return 0;
}

