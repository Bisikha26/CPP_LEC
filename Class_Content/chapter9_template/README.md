# Template - **function or a class to work with different data types**

## Templates in c++ is defined as a blueprint or formula for creating a generic class or a function. To simply put, you can create a single function or single class to work with different data types using templates. C++ template is also known as generic functions

---

## The concept of templates can be used in two different ways:

## 1. Function Template (function with generic type)
### A single function template can work with different data types at once but, a single normal function can only work with one set of data types.

``` 
template <class T>
T someFunction(T arg)
{
   ... .. ...
}

where, T is a template argument that accepts different data types (int, float)
```
## 2. Class Template
# class templates for generic class operations
### Class implementation that is same for all classes, only the data types used are different

```
template <class T>
class className
{
   ... .. ...
public:
   T var;
   T someOperation(T arg);
   ... .. ...
};
```
## Creating and Object

```
className<dataType> classObject;
e.g
className<int> classObject;
className<float> classObject;
className<string> classObject;