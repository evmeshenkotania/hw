#include <iostream>
//Евмещенко Татьяна Юрьевна
/*
 * Вася работает программистом и получает 50$ за каждые
100 строк кода. За каждое третье опоздание на работу Васю
штрафуют на 20$. Реализовать меню:
■ пользователь вводит желаемый доход Васи и количество
опозданий, посчитать, сколько строк кода ему надо написать;
■ пользователь вводит количество строк кода, написанное
Васей и желаемый объем зарплаты. Посчитать, сколько
раз Вася может опоздать
 ■ пользователь вводит количество строк кода и количество
опозданий, определить, сколько денег заплатят Васе и
заплатят ли вообще.
 */
using namespace std;

int main() {
system("chcp 65001");

int choice;
int salary;
int delay;
int code;
double line1 = 0.5;
double salary_line;
int full_delay = 0;
double final_salary;
bool exit = false;
do {

        cout << "Расчет зп Васи" << endl;
        cout << "1. Желаемый доход с учетом опозданий. Сколько кода написать?" << endl;
        cout << "2. Желаемый доход с учетом объма работы. Сколько раз можно опоздать?" << endl;
        cout << "3. Сколько заплатят Васе с учетом всех данных. Заплатят ли?" << endl;
        cout << "4. Выход" << endl;

        cin >> choice;

        if (choice == 1) {
                cout << "Введите желаемую зп Васи - ";
                cin >> salary;
                cout << "Введите количество опозданий - ";
                cin >> delay;
                full_delay = delay / 3 * 20;
                final_salary = salary - full_delay;
                code = final_salary / line1;
                cout << " С учетом введенных условий необходимо написать строк кода - " << code << endl;
            } else if ( choice == 2) {
            cout << "Введите написанное количество строк кода - ";
            cin >> code;
            salary_line = code * line1;
            cout << "Введите желаемую зп Васи - ";
            cin >> salary;

            if (salary_line > salary) {
                delay = (salary_line - salary) / 20 * 3;
                cout << "Можно опоздать " << delay << endl;
            } else if (salary_line == salary) {
                cout << "Опаздывать нельзя!" << endl;
            } else {
                cout << "Ошибка данных!" << endl;
            }
        } else if ( choice == 3) {
            cout << "Введите количество написанных строк кода -";
            cin >> code;
            salary_line = code * line1;
            cout << "Введите количество опозданий -";
            cin >> delay;
            full_delay = delay / 3 * 20;
            final_salary = salary_line - full_delay;
        } else {
        exit = true;
        }
} while (!exit);
    cout << "Выход" << endl;
    return 0;
}
