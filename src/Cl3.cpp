#include "Cl3.h"

Cl3::Cl3(Cl2* c) : cl2(c) {
    if (cl2 == nullptr) {
        // Обробка помилки або ініціалізація за замовчуванням
        cl2 = new Cl2(); 
    }
}

Cl3::~Cl3() {
    // В агрегації ми не видаляємо об'єкт, якщо він був переданий ззовні. 
    // Для простоти тут можна залишити так.
    // У композиції, ми б обов'язково видалили 'cl2'.
}

void Cl3::meth1() {
    std::cout << "Class: Cl3, Method: meth1()" << std::endl;
}

void Cl3::meth2() {
    std::cout << "Class: Cl3, Method: meth2()" << std::endl;
}

void Cl3::meth3() {
    std::cout << "Class: Cl3, Method: meth3()" << std::endl;
    // Приклад використання агрегованого об'єкта
    if (cl2) {
        std::cout << "Calling aggregated object method:" << std::endl;
        cl2->meth2();
    }
}