# Destructor

## Destructor is a member function which destructs or deletes an object.

**Syntax:**

~constructor-name();

---

**Properties of Destructor:**

1. Destructor function is automatically invoked when the objects are destroyed.
2. It cannot be declared static or const.
3. The destructor does not have arguments.
4. It has no return type not even void.
5. The programmer cannot access the address of destructor.

---

## When is destructor called? 
A destructor function is called automatically when the object goes out of scope: 
1. the function ends 
2. the program ends 
3. a block containing local variables ends 
4. a delete operator is called  

## How destructors are different from a normal member function? 
1. Destructors have same name as the class preceded by a tilde ~. 
2. Destructors don’t take any argument and don’t return anything