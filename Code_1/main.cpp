#include <iostream>
#include <iomanip>
using namespace std;

template <class T>
T _sort(T* a,T t, int I)
{
    for (int i = 0; i < I; ++i) {
        for (int j = 0; j < I; ++j) {
            if (a[i] > a[j]) {
                t = a[i];
                a[i] = a[j];
                a[j] = t;
            }
        }
    }
    return I;
}
int main()
{
    setlocale(LC_ALL, "Russian");
    int SIZE;
    cout << "������� ���������� �����: ";
    cin >> SIZE;
    double* p = new double[SIZE];
    double t = 0;
    int* P = new int[SIZE];
    int T = 0;
    cout << "������� ����� �����: \n";
    for (int i = 0; i < SIZE; ++i) {
        cin >> p[i];
    }
    cout << "������� ����� �����: \n";
    for (int i = 0; i < SIZE; ++i) {
        cin >> P[i];
    }
    _sort(p, t, SIZE);
    _sort(P, T, SIZE);
    cout << "������ ����� ���� ������������� �� ��������: \n";
    for (int i = 0; i < SIZE; ++i) {
        cout << setw(10) << p[i] << setw(10) << P[i] << endl;;
    }
    delete[]p;
    delete[]P;
    return
        0;
}