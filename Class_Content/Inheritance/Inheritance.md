## Inheritance 

### 1. Inheritance is a process in which one object acquires all the properties and behaviors of its parent object automatically.

### 2. Concept that allows to inherit attributes and methods from one class to another.

### 3. Inheritance is one of the key features of Object-oriented programming that allows to create a new class (derived class) from an existing class (base class).The derived class inherits the features from the base class and can have additional features of its own. 

---

1. **Derived class (child)** - the class that inherits from another class
2. **Base class (parent)** - the class being inherited from

---
## **Note** - To inherit from a class, use the **:** symbol.

---

## Advantage of C++ Inheritance
### 1. **Code reusability** : You can reuse the members of your parent class. So, there is no need to define the member again. So less code is required in the class.

---

## **Syntax of Derived Class**
```
class derived_class_name :: visibility-mode base_class_name  
{  
    // body of the derived class.  
}  
```

### Where,

### **derived_class_name**: It is the name of the derived class.

### **visibility mode**: The visibility mode specifies whether the features of the base class are publicly inherited or privately inherited. It can be public or private.

### **base_class_name**: It is the name of the base class.
```
1. When the base class is privately inherited by the derived class, public members of the base class becomes the private members of the derived class. Therefore, the public members of the base class are not accessible by the objects of the derived class only by the member functions of the derived class.

[derived class lay privately inherit garda, base class ko pubic member as private member aauchha derived class ma so object lay access garna mildaina, only member function of derived class lay access garna sakchhan inherit member lai]

2. When the base class is publicly inherited by the derived class, public members of the base class also become the public members of the derived class. Therefore, the public members of the base class are accessible by the objects of the derived class as well as by the member functions of the base class.

[publicly inherit garda, as public member nai aauchha derived ma]

```
---
## **Note** The private members of the base class are never inherited.

