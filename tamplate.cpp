#include<iostream> 
using namespace std;

//Home work #17
//Задача 2.
void diff(int arr[], int length) {
    for (int i = 0; i < length; i++) {
        if (arr[i] < 0)
            arr[i] *= -1;
    }
}
//Задача 3.
void statNum(int N) {
    static int S = 10;
    S *= N;
    cout << "Статичная переменная = " << S << endl;
}

int main() {
    setlocale(LC_ALL, "ru");

    //Задача 2.
    cout << "Задача 2.\nИзначальный массив: \n";
    int arr[9] = { -1,2,-3,4,-5,6,-7,8,-9 };
    for (int i = 0; i < 9; i++)
        cout << arr[i] << ", ";
    cout << "\nИтоговый массив: \n";
    diff(arr, 9);
    for (int i = 0; i < 9; i++)
        cout << arr[i] << ", ";

    //Задача 3
    cout << "\n\nЗадача 3\nВведите число: ";
    int N;
    cin >> N;
    statNum(N);
    cin >> N;
    statNum(N);
    cin >> N;
    statNum(N);

    return 0;
}