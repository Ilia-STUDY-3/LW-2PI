#pragma once
#include "If2.h"
#include "Cl1.h"

class Cl1; // Попереднє оголошення класу

/**
 * @class If1
 * @brief Інтерфейс, що успадковує If2 та містить метод meth1().
 */
class If1 : public If2 {
public:
    /**
     * @brief Чисто віртуальний метод meth1().
     */
    virtual void meth1() = 0;
};