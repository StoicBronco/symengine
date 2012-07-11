#ifndef CSYMPY_SYMBOL_H
#define CSYMPY_SYMBOL_H

#include <string>

#include "basic.h"

namespace CSymPy {

class Symbol : public Basic {
private:
    std::string name;

public:
    Symbol(const std::string &name);
    virtual std::size_t __hash__() const;
    virtual bool __eq__(const Basic &o) const;
};

} // CSymPy

#endif
