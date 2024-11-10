package com.craftinginterpreters.lox;

class RpnPrinter implements Expr.Visitor<String> {
    String print(Expr expr) {
      return expr.accept(this);
    }

    @Override
    public String visitBinaryExpr(Expr.Binary expr) {
      return stringify(expr.operator.lexeme, expr.left, expr.right);
    }

    @Override
    public String visitGroupingExpr(Expr.Grouping expr) {
      return expr.expression.accept(this);
    }

    @Override
    public String visitLiteralExpr(Expr.Literal expr){
      if (expr.value == null) return "nil";
      return expr.value.toString();
    }

    @Override
    public String visitUnaryExpr(Expr.Unary expr){
      return stringify(expr.operator.lexeme, expr.right);
    }

    private String stringify(String me, Expr... exprs){
      StringBuilder builder = new StringBuilder();

      for (Expr expr: exprs) {
        builder.append(expr.accept(this));
        builder.append(" ");
      }
      builder.append(me);

      return builder.toString();
    }
}
