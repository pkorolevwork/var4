#include <iostream>

int main() {
    int n;
    std::cout << "Введите число n (1 ≤ n ≤ 999): ";
    std::cin >> n;

    // Перебираем все трехзначные числа
    for (int x = 100; x <= 999; ++x) {
        // Получаем оставшееся двузначное число (без последней цифры)
        int remaining = x / 10;

        // Получаем последнюю цифру числа x
        int lastDigit = x % 10;

        // Переставляем цифры в оставшемся двузначном числе и добавляем к ним последнюю цифру x
        int reconstructed = remaining % 10 * 10 + remaining / 10 * 1 + lastDigit * 100;

        // Если полученное число совпадает с заданным n, выводим результат
        if (reconstructed == n) {
            std::cout << "Число x: " << x << std::endl;
            break; // Выходим из цикла, так как нашли ответ
        }
    }

    return 0;
}
