#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, n;
    int matched = 0;
    int moves = 0;
    cout << "Welcome to the Memory Game" << endl;
    cout << "Введите размер массива (6-15): ";
    cin >> a;

    int arr[a];
    string numbers[a];
    n = (a / 2);

    for (int i = 0; i < a; i += 2) {
        arr[i] = i;
        arr[i + 1] = i;
    }
    for (int i = 0; i < a; i++) {
        numbers[i] = "?";
    }

   

    while (matched == 0) {
        int index1, index2;
        int check = 0;
        cout << "Вот массив: ";
        for (int i = 0; i < a; i++) {
            cout << numbers[i] << " ";
        }
        cout << endl;
        cout << "Введите индексы, чтобы показать: ";
        cin >> index1;
        cout << "Карта по индексу " << index1 << " is: " << arr[index1] << endl;
        cout << "Enter the second index to show: ";
        cin >> index2;
        cout << " Карта по индексу" << index2 << " is: " << arr[index2] << endl;
        moves++;
        for (int i = 0; i < a; i++) {
            if (i == index1 or i == index2) {
                cout << arr[i] << " ";
            }
            else {
                cout << numbers[i] << " ";
            }
        }
        if (arr[index1] == arr[index2]) {
            cout << "\nОтлично, карты совпали. Продолжать..." << endl;
            numbers[index1] = to_string(arr[index1]);
            numbers[index2] = to_string(arr[index2]);
        
       
    }
}
