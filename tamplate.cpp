#include<iostream> 
using namespace std;

//Home work #17
//������ 2.
void diff(int arr[], int length) {
    for (int i = 0; i < length; i++) {
        if (arr[i] < 0)
            arr[i] *= -1;
    }
}
//������ 3.
void statNum(int N) {
    static int S = 10;
    S *= N;
    cout << "��������� ���������� = " << S << endl;
}

int main() {
    setlocale(LC_ALL, "ru");

    //������ 2.
    cout << "������ 2.\n����������� ������: \n";
    int arr[9] = { -1,2,-3,4,-5,6,-7,8,-9 };
    for (int i = 0; i < 9; i++)
        cout << arr[i] << ", ";
    cout << "\n�������� ������: \n";
    diff(arr, 9);
    for (int i = 0; i < 9; i++)
        cout << arr[i] << ", ";

    //������ 3
    cout << "\n\n������ 3\n������� �����: ";
    int N;
    cin >> N;
    statNum(N);
    cin >> N;
    statNum(N);
    cin >> N;
    statNum(N);

    return 0;
}