#pragma once
#include "Cl1.h"
#include "If3.h"
#include "Cl2.h"

class Cl3 : public Cl1, public If3 {
private:
    Cl2* cl2; // Агрегація

public:
    Cl3(Cl2* c);
    ~Cl3();
    void meth1() override;
    void meth2() override;
    void meth3() override;
};