## Polymorphism [Poly - Many and Morphism - Forms]

1. The word polymorphism means having many forms.
2. The term Polymorphism means the ability to take many forms. It occurs if there is a hierarchy of classes which are all related to each other by inheritance.
3. C++ polymorphism means that a call to a member function will cause a different function to be executed depending on the type of object that invokes the function.

## Compile Time Polymorphism

### Also called **Early Binding** , **Static Polymorphism**

> Note: In early binding,the function call is fixed before the program is executed as the function is set during the compilation of the program

 ### 1. Achieved during Compile Time
 ### 2. Method Overloading

## Run Time Polymorphism

### Also called **Late Binding** , **Dynamic Polymorphism** 

 ### 1. Achieved during Runtime
 ### 2. Method Overriding

## Virtual Function
### A virtual function is a function in a base class that is declared using the keyword virtual. Defining in a base class a virtual function, with another version in a derived class, signals to the compiler that we don't want static linkage for this function.

### What we do want is the selection of the function to be called at any given point in the program to be based on the kind of object for which it is called. This sort of operation is referred to as dynamic linkage, or late binding.

---

## Pure Virtual Functions
### A pure virtual function is a function that must be overridden in a derived class and need not be defined. A virtual function is declared to be “pure” using the curious =0 syntax

### When we add a pure virtual function to our class, we are effectively saying, “it is up to the derived classes to implement this function”.

---

## Abstract Class

### Sometimes implementation of all function cannot be provided in a base class because we don’t know the implementation. Such a class is called abstract class. example: Animal class doesn’t have implementation of move() (assuming that all animals move), but all animals must know how to move.
 
### A pure virtual function (or abstract function) in C++ is a virtual function for which we can have implementation, But we must override that function in the derived class

Syntax 

```
// An abstract class
class Base
{  
public:
    // Pure Virtual Function
    virtual void show() = 0;
   
   /* Other members */
};
```