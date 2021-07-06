# Operator Overloading

## we can make operators to work for user defined classes. This means C++ has the ability to provide the operators with a special meaning for a data type, this ability is known as operator overloading.
---
# Cases

## Member Function [here, calling object is passed implecetly]
1. Unary Operator Overloading  [Single Operand, **No argument** - calling operand will pass implecetly ]
2. Binary Operator Overloading [Two Operands, **One argument** - calling operand will pass implecetly, second operand should be passes during call as an argument]

## Non Member Function [Friend Function, calling object should be specified]

1. Unary Operator Overloading [Single Operand, **One argument**]
2. Binary Operator Overloading [Two Operand, **Two argument**]

---

## Syntax for Operator Overloading

### To overload an operator, we use a special operator function. We define the function inside the class whose objects/variables we want the overloaded operator to work with.

```
class className {
    ... .. ...
    public
       returnType operator symbol (arguments) {
           ... .. ...
       } 
    ... .. ...
};
```

- **returnType** is the return type of the function.
- **operator** is a keyword.
- **symbol** is the operator we want to overload. Like: +, <, -, ++, etc.
- **arguments** is the arguments passed to the function.
    