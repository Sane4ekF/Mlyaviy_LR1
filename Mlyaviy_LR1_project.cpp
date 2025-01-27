#include <iostream>
#include <string>
using namespace std;

// Объявление функций
void task1();
void task2();
void task3();
void task4();

int main() {
    int choice; // Переменная для выбора пользователем пункта меню

    while (true) {
        // Выводим меню
        cout << "Menu:" << endl;
        cout << "Task 1: Ввести первый символ ch1" << endl;
        cout << "Task 2: Ввести второй символ ch2" << endl;
        cout << "Task 3: Вывести каждый символ и его код ASCII" << endl;
        cout << "Task 4: Вывести сумму кодов ASCII символов ch1 и ch2" << endl;
        cout << "Enter 0 to close the app" << endl;

        // Ввод выбора
        cout << "Choose an option: ";
        cin >> choice;

        // Выбор действия с помощью оператора switch
        switch (choice) {
            case 1:
                task1();
                break;
            case 2:
                task2();
                break;
            case 3:
                task3();
                break;
            case 4:
                task4();
                break;
            case 0:
                cout << "Closing the app..." << endl;
                return 0; // Закрыть приложение
            default:
                cout << "Invalid choice! Please try again." << endl;
        }
    }

    return 0;
}

// Реализация функции для Task 1
void task1() {
    // Функция разрабатывается dev1
    // Здесь нужно ввести первый символ ch1
    char ch1;
    cout << "Enter the first character (ch1): ";
    cin >> ch1;
    // Здесь сохраняем введенный символ и выводим его
    cout << "You entered the character: " << ch1 << endl;
}

// Реализация функции для Task 2
void task2() {
    // Функция разрабатывается dev2
    // Здесь нужно ввести второй символ ch2
    char ch2;
    cout << "Enter the second character (ch2): ";
    cin >> ch2;
    // Здесь сохраняем введенный символ и выводим его
    cout << "You entered the character: " << ch2 << endl;
}

// Реализация функции для Task 3
void task3() {
    // Функция разрабатывается dev3
    // Здесь нужно вывести символы и их коды ASCII
    char ch1, ch2;
    
    // Запрашиваем два символа
    cout << "Enter the first character (ch1): ";
    cin >> ch1;
    cout << "Enter the second character (ch2): ";
    cin >> ch2;
    
    // Выводим символы и их ASCII коды
    cout << "Character " << ch1 << " has ASCII code " << int(ch1) << endl;
    cout << "Character " << ch2 << " has ASCII code " << int(ch2) << endl;
}

// Реализация функции для Task 4
void task4() {
    // Функция разрабатывается dev4
    // Здесь нужно вывести сумму кодов ASCII символов ch1 и ch2
    char ch1, ch2;
    
    // Запрашиваем два символа
    cout << "Enter the first character (ch1): ";
    cin >> ch1;
    cout << "Enter the second character (ch2): ";
    cin >> ch2;
    
    // Вычисляем и выводим сумму ASCII кодов
    int sum = int(ch1) + int(ch2);
    cout << "The sum of ASCII codes of '" << ch1 << "' and '" << ch2 << "' is: " << sum << endl;
}
