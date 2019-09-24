#include<iostream>
using namespace std;

class B;//Forward Declaration;
class A
{
private:
	int num1;
public:
	void showRecord( void );
	friend class B;
};
class B
{
private:
	int num2;
public:
	void displayRecord( void );
	friend class A;
};
void A::showRecord( void )
{
	B obj;
	obj.num2 = 10;
	cout<<"Num2	:	"<<obj.num2<<endl;
}
void B::displayRecord( void )
{
	A obj;
	obj.num1 = 20;
	cout<<"Num1	:	"<<obj.num1<<endl;
}
int main( void )
{
	A a;
	a.showRecord();

	B b;
	b.displayRecord();

	return 0;
}
