/*
 * : Farxod Qarshiyev
 * : 23.11.2023
 * : Farxod
 */

#include <iostream>
#include "task_1.h"
#include "task_2.h"
#include "task_3.h"
#include "task_4.h"
#include "task_5.h"
#include "task_6.h"
#include "task_7.h"
#include "task_8.h"
#include "task_9.h"
#include "task_10.h"

int main() {
    std::cout << "Vazifa 1" << std::endl;
    int a, b;

    std::cin >> a;
    std::cin >> b;

    if (a < b) {
        ascendingOrder(a, b);
    } else {
        descendingOrder(a, b);
    }
    std::cout << std::endl;
    std::cout << "_____________________________________" << std::endl;

    std::cout << "Vazifa 2" << std::endl;

    int n2;
    std::cin >> n2;
    bool isPowerOfTwo = secondTask(n2);
    if(isPowerOfTwo){
        std::cout << "HA";
    } else {
        std::cout << "YO'Q";
    }
    std::cout << std::endl;
    std::cout << "________________________________________-" << std::endl;

    std::cout << "Vazifa 3" << std::endl;

    int n3;
    std::cin >> n3;
    int yigindi = sumOfDigits(n3);
    std::cout << yigindi << std::endl;
    std::cout << "________________________________________" << std::endl;

    std::cout << "Vazifa 4" << std::endl;

    int n4;
    std::cin >> n4;
    if(isPrime(n4)){
        std::cout << "HA";
    } else {
        std::cout << "YO'Q";
    }
    std::cout << std::endl;
    std::cout << "________________________________________" << std::endl;

    std::cout << "Vazifa 5" << std::endl;

    std::string s5;
    std::cin >> s5;

    std::cout << isPalindrome(s5, 0, s5.length() - 1) << std::endl;
    std::cout << "________________________________________" << std::endl;

    std::cout << "Vazifa 6" << std::endl;

    int i = 0;
    int sonlar[100];
    while (true) {
        std::cin >> sonlar[i];
        if (sonlar[i] == 0) {
            break;
        }
        i++;
    }
    int ikkinchiEngKattaSon = secondLargest(sonlar, i);
    std::cout << ikkinchiEngKattaSon << std::endl;

    std::cout << "________________________________________" << std::endl;

    std::cout << "Vazifa 7" << std::endl;

    int n7;
    std::cin >> n7;
    int raqamlarSoni = countDigit(n7);

    std::cout << reverseNum(n7, raqamlarSoni - 1) << std::endl;

    std::cout << "________________________________________" << std::endl;

    std::cout << "Vazifa 8" << std::endl;

    std::string son1, son2;

    std::getline(std::cin >> std::ws, son1);
    std::getline(std::cin >> std::ws, son2);

    std::cout << multiply(son1, son2) << std::endl;

    std::cout << "________________________________________" << std::endl;

    std::cout << "Vazifa 9" << std::endl;

    Heap heap;

    heap.insertNumbers(25);
    heap.insertNumbers(17);
    heap.insertNumbers(36);
    heap.insertNumbers(2);
    heap.insertNumbers(8);
    heap.insertNumbers(19);
    heap.insertNumbers(1);

    heap.heapsort();


    heap.printHeapElemnts();

    std::cout << "________________________________________" << std::endl;

    std::cout << "Vazifa 10" << std::endl;

    std::string s10;
    std::cin >> s10;

    std::string afterChanging = sortVowels(s10);

    std::cout << afterChanging << std::endl;
    return 0;
}
