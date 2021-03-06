//
// Created by mr on 07.04.19.
//

#ifndef OKNO_2019_ADVANCED_CPP_NOTEQUALEXPRESSION_H
#define OKNO_2019_ADVANCED_CPP_NOTEQUALEXPRESSION_H

#include "BinaryExpression.h"


namespace engine {
namespace expression {

class NotEqualExpression : public BinaryExpression {
public:
    NotEqualExpression(std::unique_ptr<Expression>&& left, std::unique_ptr<Expression>&& right);
    ~NotEqualExpression() override = default;

    Value evaluate(Record const& record) const override;
    void visit(ExpressionVisitor& visitor) const override;
};

} // namespace expression
} // namespace engine


#endif //OKNO_2019_ADVANCED_CPP_NOTEQUALEXPRESSION_H
