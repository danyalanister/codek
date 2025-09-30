#include <iostream>
using namespace std;

int main() {
    int mark1, mark2, mark3, mark4, mark5;
    double average;

    // Ввод оценок
    cout << "Введите 5 оценок студента: ";
    cin >> mark1 >> mark2 >> mark3 >> mark4 >> mark5;

    // Вычисление среднего балла
    average = (mark1 + mark2 + mark3 + mark4 + mark5) / 5.0;

    // Определение целой части среднего балла для switch
    int avg_int = (int)average;

    // Проверка допуска с помощью switch
    switch (avg_int) {
    case 5:
        cout << "Студент допущен к экзамену. Средний балл: " << average << endl;
        break;
    case 4:
        cout << "Студент допущен к экзамену. Средний балл: " << average << endl;
        break;
    default:
        cout << "Студент НЕ допущен к экзамену. Средний балл: " << average << endl;
        break;
    }

    return 0;
}


// задание 2
#include <iostream>
using namespace std;

int main() {
    int number;

    // Ввод числа
    cout << "Введите число: ";
    cin >> number;

    // Определение четности с помощью switch
    switch (number % 2) {
    case 0: 
        cout << "Число четное. Результат: " << number * 3 << endl;
        break;
    case 1: 
        cout << "Число нечетное. Результат: " << number / 2.0 << endl;
        break;
    }

    return 0;
}