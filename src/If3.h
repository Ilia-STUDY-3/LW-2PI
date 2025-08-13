#pragma once
#include "If1.h"


/**
 * @class If3
 * @brief Інтерфейс, що успадковує If1 та містить метод meth3().
 */
class If3 : public If1 {
public:
    /**
     * @brief Чисто віртуальний метод meth3().
     */
    virtual void meth3() = 0;
};