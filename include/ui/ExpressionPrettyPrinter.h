//
// Created by mr on 07.04.19.
//

#ifndef OKNO_2019_ADVANCED_CPP_EXPRESSIONPRETTYPRINTER_H
#define OKNO_2019_ADVANCED_CPP_EXPRESSIONPRETTYPRINTER_H

#include "engine/expression/ExpressionVisitor.h"

#include <iostream>


namespace ui {

class ExpressionPrettyPrinter : public engine::expression::ExpressionVisitor {
public:
    explicit ExpressionPrettyPrinter(std::ostream& out, unsigned long indent);

    void accept(engine::expression::ConstantExpression const& expression) override;
    void accept(engine::expression::EqualExpression const& expression) override;
    void accept(engine::expression::VariableExpression const& expression) override;

private:
    std::ostream& out_;
    unsigned long indent_;
};

} // namespace ui

#endif //OKNO_2019_ADVANCED_CPP_EXPRESSIONPRETTYPRINTER_H
