#pragma once
#include "Cl1.h"
#include "If3.h"
#include "Cl2.h"

/**
 * @class Cl3
 * @brief Клас, що успадковує від Cl1 та реалізує If3.
 */
class Cl3 : public Cl1, public If3 {
private:
    /**
     * @brief Агрегований об'єкт класу Cl2.
     */
    Cl2* cl2; 

public:
    /**
     * @brief Конструктор класу Cl3.
     * @param c Вказівник на об'єкт Cl2.
     */
    Cl3(Cl2* c);
    
    /**
     * @brief Деструктор класу Cl3.
     */
    ~Cl3();

    /**
     * @brief Реалізація методу meth1().
     */
    void meth1() override;
    
    /**
     * @brief Реалізація методу meth2().
     */
    void meth2() override;
    
    /**
     * @brief Реалізація методу meth3().
     */
    void meth3() override;
};