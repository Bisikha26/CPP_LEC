### There is a requirement for a software to perform various task which causes software system to increase in size and complexity which causes different problems to arise such as software failures exhibiting abnormal behaviour of software.

## To address these problems, software must be made fault tolerant

## Software that perfomed well in one input pattern might not perform well in another input pattern. 

# Q. What is **Exception**? 
## - Exception are errors that occur at runtime. They are caused by circumstances as, running out of memory, not being able to open a file, trying to initialize an object with impossible value etc.

### - Exception handling provides a way of transferring a control and information to a function caller that has the willlingness to handle exceptions of the given type when the function itself cannot cope with the problem

### - It can be used to support idea of error handling and fault tolerant computing.

### - This concept allows to build fault tolerant systems


![](https://rkamal.com.np/storage/public/posts/August2019/try_catch_throw_block.png)

# **Rules**

### - The condition for exception is indicated by throwing the exception. The condition of exception is detected by placing the detecting code within the **try** block.

### - The thrown exception is caught and handled by **catch** part of the exception handling construct

### - The try block must be immediately followed by a catch block

### - There can be muliple catch blocks in try-catch construct

### - Each catch block must immediately be followed by previous catch block to handle exceptions of different types

### - If the exception is thrown in the try block, the program control is transferred to the appropriate exception handler that's type matches with the thrown exception.

### - If the thrown exceptions are not handled, the program terminates abnorally. 

---

### **try**: represents a block of code that can throw an exception. ( might or might not throw an exception )
### **throw**: Used to throw an exception. Also used to list the exceptions that a function throws, but doesn’t handle itself.
### **catch**: represents a block of code that is executed when a particular exception is thrown.

```
1. Hit the exception
2. Throw the exception
3. Catch the exception
4. Handle the exception
```

```
try { 
  do something 
  if(not right) 
    throw exception; 
  continue normal processing 
} 
catch (exception) {  
  do something about it; 
}
```

# Why Exception Handling? 

## Following are main advantages of exception handling over traditional error handling.

### 1. **Separation of Error Handling code from Normal Code**: In traditional error handling codes, there are always if else conditions to handle errors. These conditions and the code to handle errors get mixed up with the normal flow. This makes the code less readable and maintainable. With try catch blocks, the code for error handling becomes separate from the normal flow.

### 2. **Functions/Methods can handle any exceptions they choose**: A function can throw many exceptions, but may choose to handle some of them. The other exceptions which are thrown, but not caught can be handled by caller. If the caller chooses not to catch them, then the exceptions are handled by caller of the caller. 
In C++, a function can specify the exceptions that it throws using the throw keyword. The caller of this function must handle the exception in some way (either by specifying it again or catching it)

### 3. **Grouping of Error Types**: In C++, both basic types and objects can be thrown as exception. We can create a hierarchy of exception objects, group exceptions in namespaces or classes, categorize them according to types.

