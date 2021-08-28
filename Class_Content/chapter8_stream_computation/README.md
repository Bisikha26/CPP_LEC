## Stream is the sequences of bytes or flow of data , which acts as a source from which the input data can be obtained by a program or a destination to which the output data can be sent by the program

## Stream class is the collection of data and the methods necessary to control and maintain flow of data or stream .These stream class are declared in the header file iostream.h 

---

# Console I/O operation
## The input/output operations which involve keyboard as input device and screen as output device are known as Console I/O operations .

---
# File I/O operation
## The input/output operations which involve file as input device and output device are known as File I/O operations
---

# Input Stream
## It is flow of data bytes from a device (e.g Keyboard , disk drive) to main memory

---
# Output Stream
## It is flow of data bytes from main memory (i.e program) to a device

---

# **Heirarchy of Stream classes in iostream.h** 

---

![](https://media.geeksforgeeks.org/wp-content/uploads/20190509103056/Heirarchy-of-Stream-Classess-in-iostream.h-1024x636.jpg)

## 1. ios class is topmost class in the stream classes hierarchy. It is the base class for istream, ostream, and streambuf class.

## 2. istream and ostream serves the base classes for iostream class. The class istream is used for input and ostream for the output. 

## 3. Class ios is indirectly inherited to iostream class using istream and ostream. To avoid the duplicity of data and member functions of ios class, it is declared as virtual base class when inheriting in istream and ostream

## 4. The _withassign classes are provided with extra functionality for the assignment operations that’s why _withassign classes. 

---
---

# Opening and Closing File
### 1. ofstream: Stream class to write on files
### 2. ifstream: Stream class to read from files
### 3. fstream: Stream class to both read and write from/to files.

