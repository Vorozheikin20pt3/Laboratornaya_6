#include <iostream>
#include <iomanip>
using namespace std;
template <class T>
class Rectangle
{
private:
    T length; //�����
    T height; //������
    T S; //�������
public:
    Rectangle() : length(0), height(0), S(0) {}
    Rectangle(T l, T h, T pl) : length(l), height(h), S(pl) {}
    T RectangleLen(T l)
    {
        length = l;
        return l;
    }
    T RectangleHei(T h)
    {
        height = h;
        return h;
    }
    T RectanglePl(T pl)
    {
        pl = length * height;
        S = pl;
        return pl;
    }
    T srawn(T* a, T t, int size)
    {
        for (int i = 0; i < size; ++i) {
            for (int j = 0; j < size; ++j) {
                if (a[i] > a[j]) {
                    cout << i << "-� ������� ������ " <<j<< "-�� \n";
                }
            }
        }
        return *a;
    }
};
template <class T>
T _sort(T* a, T t, int size)
{
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            if (a[i] > a[j]) {
                t = a[i];
                a[i] = a[j];
                a[j] = t;
            }
        }
    }
    return *a;
}
int main()
{
    setlocale(LC_ALL, "Russian");
    Rectangle <int> r;
    cout << "������� ����� �������� ������? \n";
    int kolC;
    cin >> kolC;
    cout << "������� ������� �������� ������? \n";
    int kolD;
    cin >> kolD;
    int* s = new int[kolC];
    for (int i = 0; i < kolC; ++i) {
        int g;
        cout << "������� ����� �����: ";
        cin >> g;
        r.RectangleLen(g);
        cout << "������� ����� ������: ";
        cin >> g;
        r.RectangleHei(g);
        s[i] = r.RectanglePl(1);
        cout << "������������� �������: " << s[i] << endl;
    }
    Rectangle <double> R;
    double* S = new double[kolD];
    for (int i = 0; i < kolD; ++i) {
        double g;
        cout << "������� ������� �����: ";
        cin >> g;
        R.RectangleLen(g);
        cout << "������� ������� ������: ";
        cin >> g;
        R.RectangleHei(g);
        S[i] = R.RectanglePl(1.0);
        cout << "������� �������: " << S[i] << endl;
    }
    int t = 0;
    double T = 0;
    _sort(s, t, kolC);
    _sort(S, T, kolD);
    cout << "������������� ������� ���� ������������� �� ��������: \n";
    for (int i = 0; i < kolC; ++i) {
        cout << s[i] << endl;;
    }
    cout << "��������������� ������� ���� ������������� �� ��������: \n";
    for (int i = 0; i < kolD; ++i) {
        cout << S[i] << endl;;
    }
    delete[]s;
    delete[]S;
    return 0;
}