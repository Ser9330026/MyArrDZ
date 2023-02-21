/*Задача 1
В одномерном массиве размером в 10элементов
найдите среднее арифметическое.Также посчитайте
кол-во элементов, значениекоторых меньше
найденного среднего арифметического.*/


#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    setlocale(LC_ALL, "rus");

    const int SIZE = 10;
    int arr[SIZE];
    int a = 5;
    int b = 25;
    int sum;
    int count;

    srand(time(NULL));
    for (int i = 0; i < SIZE; i++) {
        arr[i] = rand() % (b + 1 - a) + a;
        std::cout << arr[i] << '\t';
    }
    std::cout << '\n';

    sum = 0;
    for (int i = 0; i < SIZE; i++) {
        sum += arr[i];
    }

    std::cout << "Сумма всех элеменов массива: " << sum << '\n';

    count = 0;
    for (int i = 0; i < SIZE; i++) {
        if ((double)sum / 10 >= arr[i]) count++;
    }

    std::cout << "Количество элеменов массива, знач. кторых меньше среднего арифметического: " << count;
    return 0;
}

/*Даны два двумерных массива размерами 5 на 5 элементов.
Требуется сложить их между собой. Выведите в консоль
результаты попарного сложения элементов обоих массивов,
которые располагаются в одинаковых координатах.*/



#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    setlocale(LC_ALL, "rus");

    const int ROWS = 5;
    const int COLS = 5;
    int arr[COLS][ROWS];

    const int ROWS1 = 5;
    const int COLS1 = 5;
    int arr1[COLS1][ROWS1];

    int a = 10;
    int b = 50;
    int sum;

    srand(time(NULL));
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            arr[i][j] = rand() % (b + 1 - a) + a;
            std::cout << arr[i][j] << '\t';
        }
        std::cout << '\n';
    }
    std::cout << '\n';

    for (int i = 0; i < ROWS1; i++) {
        for (int j = 0; j < COLS1; j++) {
            arr1[i][j] = rand() % (b + 1 - a) + a;
            std::cout << arr1[i][j] << '\t';
        }
        std::cout << '\n';
    }

    std::cout << "Сумма элементов двух массивов: " << '\n';

    for (int i = 0; i < ROWS1; i++) {
        for (int j = 0; j < COLS1; j++) {
            sum = arr[i][j] + arr1[i][j];
            std::cout << sum << '\t';
        }
        std::cout << '\n';
    }

    return 0;
}

/*Задача 3
Пользователь вводит шестизначное число.
Если число введено неверно, программа завершает свою работу.
Иначе, программа в цикле помещает все его цифры в
одномерный массив размером в 6 элементов и выводит его на экран.*/

#include <iostream>

int main() {

    setlocale(LC_ALL, "rus");

    const int SIZE = 6;
    int arr[SIZE];

    int N;
    std::cout << "Введите шестизначное число:" << '\t';
    std::cin >> N;

    if (N >= 100000 && N <= 999999) {
        for (int i = 0; i < SIZE; i++) {
            arr[i] = N % 10;
            N /= 10;
            std::cout << arr[i] << '\t';
        }
    }
    return 0;

}