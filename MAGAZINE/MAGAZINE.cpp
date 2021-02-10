/*
    1 Создать 3 магазина
    2 Вызывать магазин в меню: пример:
    - Выбиретие один из 3 магазинов:
    1 Магнит
    2 Лента
    3 Петёрочка
    3 В консоль выводится 10 продуктов на выбор которые можно купить
    4 Пользователь может выбрать только 4 продукта
    5 У каждого продукта есть своя цена
    6 После покупки вывести цену покупи в общем и чек(чек оформить красиво)
    7 Оповестить пользователя на сколько он попал по деньгам и сколько % должен отдать банку кредитом
    8 Все оформить отдельными методами.

    */
#include <iostream>
using namespace std;

void MAGNIT()
{
    setlocale(LC_ALL, "rus");
    cout << "Вас приветствует MAGNIT!\n\n";
    string product[10] = { "Молоко","Хлеб","Селёдка", "Водка", "Конфеты", "Огурцы", "Помидоры", "Сосиски", "Минералка", "Сгущёнка" };
    int price[10] = { 65,25,150,200,120,88,99,120,25,70 };

    int x;
    for (int i = 0; i < 10; i++)
    {
        cout << i << " " << product[i] << " = " << price[i] << " rub." << endl;
    }
    cout << "VIBERETE 4 PRODUCTA: \n";
    string pokypka[4];
    int SUMprice[4];
    double sum = 0;
    for (int i = 0; i < 4; i++)
    {
        cin >> x;
        pokypka[i] = product[x];
        SUMprice[i] = price[x];
        sum = sum + SUMprice[i];



    }
    int procent = sum + (sum * 0.19);
    cout << "  ______________________________" << endl;
    cout << " |         ТОВАРНЫЙ ЧЕК         | " << endl;
    cout << " |                              | " << endl;
    cout << " |                              | " << endl;
    cout << " | " << pokypka[0] << " = " << SUMprice[0] << " руб.\t\t|" << endl;
    cout << " | " << pokypka[1] << " = " << SUMprice[1] << " руб.\t\t|" << endl;
    cout << " | " << pokypka[2] << " = " << SUMprice[2] << " руб.\t\t|" << endl;
    cout << " | " << pokypka[3] << " = " << SUMprice[3] << " руб.\t\t|" << endl;
    cout << " |                              | " << endl;
    cout << " |                              | " << endl;
    cout << " |                              | " << endl;
    cout << " | " << "Ваша сумма покупки: " << sum << " руб.\t|" << endl;
    cout << " | " << "Сумма покупки +19%: " << procent << " руб.\t|" << endl;
    cout << " |                              | " << endl;
    cout << " |______________________________| " << endl;

}
void PYATEROCHKA()
{
    setlocale(LC_ALL, "rus");
    cout << "Вас приветствует PYATEROCHKA!\n\n";
    string product[10] = { "Молоко","Хлеб","Селёдка", "Водка", "Конфеты", "Огурцы", "Помидоры", "Сосиски", "Минералка", "Сгущёнка" };
    int price[10] = { 55,26,152,204,121,89,94,121,21,72 };

    int x;
    for (int i = 0; i < 10; i++)
    {
        cout << i << " " << product[i] << " = " << price[i] << " rub." << endl;
    }
    cout << "VIBERETE 4 PRODUCTA: \n";
    string pokypka[4];
    int SUMprice[4];
    double sum = 0;
    for (int i = 0; i < 4; i++)
    {
        cin >> x;
        pokypka[i] = product[x];
        SUMprice[i] = price[x];
        sum = sum + SUMprice[i];



    }
    int procent = sum + (sum * 0.19);
    cout << "  ______________________________" << endl;
    cout << " |         ТОВАРНЫЙ ЧЕК         | " << endl;
    cout << " |                              | " << endl;
    cout << " |                              | " << endl;
    cout << " | " << pokypka[0] << " = " << SUMprice[0] << " руб.\t\t|" << endl;
    cout << " | " << pokypka[1] << " = " << SUMprice[1] << " руб.\t\t|" << endl;
    cout << " | " << pokypka[2] << " = " << SUMprice[2] << " руб.\t\t|" << endl;
    cout << " | " << pokypka[3] << " = " << SUMprice[3] << " руб.\t\t|" << endl;
    cout << " |                              | " << endl;
    cout << " |                              | " << endl;
    cout << " |                              | " << endl;
    cout << " | " << "Ваша сумма покупки: " << sum << " руб.\t|" << endl;
    cout << " | " << "Сумма покупки +19%: " << procent << " руб.\t|" << endl;
    cout << " |                              | " << endl;
    cout << " |______________________________| " << endl;

}
void LENTA()
{
    setlocale(LC_ALL, "rus");
    cout << "Вас приветствует LENTA!\n\n";
    string product[10] = { "Молоко","Хлеб","Селёдка", "Водка", "Конфеты", "Огурцы", "Помидоры", "Сосиски", "Минералка", "Сгущёнка" };
    int price[10] = { 64,22,154,202,124,86,94,122,24,71 };

    int x;
    for (int i = 0; i < 10; i++)
    {
        cout << i << " " << product[i] << " = " << price[i] << " rub." << endl;
    }
    cout << "VIBERETE 4 PRODUCTA: \n";
    string pokypka[4];
    int SUMprice[4];
    double sum = 0;
    for (int i = 0; i < 4; i++)
    {
        cin >> x;
        pokypka[i] = product[x];
        SUMprice[i] = price[x];
        sum = sum + SUMprice[i];



    }
    int procent = sum + (sum * 0.19);
    cout << "  ______________________________" << endl;
    cout << " |         ТОВАРНЫЙ ЧЕК         | " << endl;
    cout << " |                              | " << endl;
    cout << " |                              | " << endl;
    cout << " | " << pokypka[0] << " = " << SUMprice[0] << " руб.\t\t|" << endl;
    cout << " | " << pokypka[1] << " = " << SUMprice[1] << " руб.\t\t|" << endl;
    cout << " | " << pokypka[2] << " = " << SUMprice[2] << " руб.\t\t|" << endl;
    cout << " | " << pokypka[3] << " = " << SUMprice[3] << " руб.\t\t|" << endl;
    cout << " |                              | " << endl;
    cout << " |                              | " << endl;
    cout << " |                              | " << endl;
    cout << " | " << "Ваша сумма покупки: " << sum << " руб.\t|" << endl;
    cout << " | " << "Сумма покупки +19%: " << procent << " руб.\t|" << endl;
    cout << " |                              | " << endl;
    cout << " |______________________________| " << endl;

}
int main()
{
    int num;
    setlocale(LC_ALL, "rus");
    cout << "Добро Пожаловать!\n";
    cout << "Выберете магазин: \n";
    cout << "1.МАГНИТ\n";
    cout << "2.ПЯТЁРОЧКА\n";
    cout << "3.ЛЕНТА\n";
    cin >> num;
    switch (num)
    {
    case 1:
        MAGNIT();
        break;
    case 2:
        PYATEROCHKA();
        break;
    case 3:
        LENTA();
        break;
    default:
        cout << "Неверный ввод! Повторите попытку!" << endl;
        main();

    }
}
