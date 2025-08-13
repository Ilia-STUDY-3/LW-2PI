#pragma once
#include "If1.h"

/**
 * @class Cl1
 * @brief Клас, що реалізує інтерфейс If1.
 */
class Cl1 : public If1 {
public:
     /**
     * @brief Реалізація методу meth1() з If1.
     */
    void meth1() override;

    /**
     * @brief Реалізація методу meth2() з If2 через наслідування If1.
     */
    void meth2() override;
};