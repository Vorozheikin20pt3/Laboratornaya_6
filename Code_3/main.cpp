#include <iostream>
#include <iomanip>
using namespace std;

template <class T>
class DoubleBox
{
private:
    T first;
    T second;
public:
DoubleBox() : first(0), second(0) {} // ������������ �� �������
void setFunkc(T p,T v)
{
    first = p;
    second = v;
}
void getFunck()
{
    cout<<"�� ����� "<<first<<" � "<<second<<endl;
}
DoubleBox(const T* s) //����������� �������������
{
    cout<<s<<endl;
    
}
};
int main()
{
    setlocale(LC_ALL, "Russian");
    DoubleBox <double> znachenie;
    cout<<"������� ���������� � ����� �����: "<<endl;
    double n;
    int g;
    cin>>n;
    cin>>g;
    znachenie.setFunkc(n, g);
    znachenie.getFunck();
}