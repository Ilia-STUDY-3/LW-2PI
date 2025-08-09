// main.cpp
#include "Cl3.h"
#include "Cl2.h"
#include <iostream>

int main() {
    // Створюємо об'єкт Cl2, який буде агрегуватися
    Cl2* cl2_obj = new Cl2();

    // Створюємо об'єкт Cl3 і передаємо йому cl2_obj
    // Демонструємо агрегацію
    Cl3 cl3_obj(cl2_obj);

    std::cout << "--- Testing Cl3 methods (inheritance from Cl1 & If3) ---" << std::endl;
    cl3_obj.meth1(); // Метод успадкований від Cl1
    cl3_obj.meth2(); // Метод успадкований від Cl1
    cl3_obj.meth3(); // Метод реалізований в Cl3 (викликає метод агрегованого Cl2)

    std::cout << "\n--- Testing Cl1 methods directly ---" << std::endl;
    Cl1 cl1_obj;
    cl1_obj.meth1();
    cl1_obj.meth2();

    std::cout << "\n--- Testing Cl2 methods directly ---" << std::endl;
    cl2_obj->meth2();

    // Очищення пам'яті
    delete cl2_obj;
    cl2_obj = nullptr;

    return 0;
}