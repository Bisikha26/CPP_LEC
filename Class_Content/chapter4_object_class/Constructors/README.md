# What is constructor? 
### A constructor is a member function of a class which initializes objects of a class. In C++, Constructor is automatically called when object(instance of class) create. It is special member function of the class.

---


# How constructors are different from a normal member function?

### A constructor is different from normal functions in following ways: 

1. Constructor has same name as the class itself
2. Constructors don’t have return type
3. A constructor is automatically called when an object is created.

NOTE: If we do not specify a constructor, C++ compiler generates a default constructor for us (expects no parameters and has an empty body).

---

# Type of Constructor

### Let us understand the types of constructors in C++ by taking a real-world example. Suppose you went to a shop to buy a marker. When you want to buy a marker, what are the options? 


1. The first one you go to a shop and say give me a marker. So just saying give me a marker mean that you did not set which brand name and which color, you didn’t mention anything just say you want a marker. So when we said just I want a marker so whatever the frequently sold marker is there in the market or in his shop he will simply hand over that. And this is what a **default constructor** is! 


2. The second method you go to a shop and say I want a marker a red in color and XYZ brand. So you are mentioning this and he will give you that marker. So in this case you have given the parameters. And this is what a **parameterized constructor** is! 


3. Then the third one you go to a shop and say I want a marker like this(a physical marker on your hand). So the shopkeeper will see that marker. Okay, and he will give a new marker for you. So copy of that marker. And that’s what **copy constructor** is!

---

# Default Constructor

Default constructor is the constructor which doesn’t take any argument. It has no parameters.

**NOTE** - Even if we do not define any constructor explicitly, the compiler will automatically provide a default constructor implicitly.

# Parameterized Constructor

A constructor with parameters is known as a parameterized constructor. This is the preferred method to initialize member data.

## Uses of Parameterized constructor: 

It is used to initialize the various data elements of different objects with different values when they are created.
It is used to overload constructors.

---

**Assignment**

1. Research and create an md file on **Constructor Overloading**
    
    Get to know about the way to create an [md file](https://medium.com/@saumya.ranjan/how-to-write-a-readme-md-file-markdown-file-20cb7cbcd6f) here

---

# Copy Constructor

The copy constructor in C++ is used to copy data of one object to another.

### The parameter of copy constructor has the address of an object of the class.We then assign the values of the variables of the first object to the corresponding variables of the second object. This is how the contents of the object are copied.

