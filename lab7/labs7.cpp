// labs7.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

int main()
{
    std::cout << "Hello World!\n";
}

int numericalPairСounter(int amountOfArgument, ...) передает только инт. 3 точки разное кол - во элем.
int current, next; //текущее и следующее
int* ptr = &amountOfArgument; //ptr указатель на первый элемент(кол-во элем)
*(++ptr); //переход на первый элемент
for (; amountOfArgument > 1; amountOfArgument--) //цикл прохода по всем элементам
{
    current = *ptr;
    next = *(++ptr);
    if (current < next) //проверка на то,что предыдущий меньше чем следующий
        result++;
}