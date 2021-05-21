Student 

attribute - name, roll no, address, phonenumber, dob
methods - getName(), admission(), attendClass(time), exam(), getResult()  

Class - generalise -> entity attribute and methods
object - instance of class 

class Student {
    char name, address;
    int rollno, phonenumber, marks;
    date dob;

    getName(name) {
        cin >> name;
    }

    admission( name, address, phonenumber ) {
        cout << name << address << phonenumber;
    }

    exam(marks) {
        calc = mark /total * 100;
        retrun calc;
    }

    getResult(calc) {
        cout<< calc;
    }
}

char abhisek = new Student("Abhisek", "Lokanthali", "9974873");
char amrit = new Student("amrit", "Lokanthali", "9974873");
char pravesh = new Student("pravesh", "Lokanthali", "9974873");
char Rabin = new Student("Rabin", "Lokanthali", "9974873");

abhishek.exam('99');
bisikha.getResult()


*****************************************************************************************************************

class Vehicle {
    char brand, model, milage, no. of wings, color, weight, price, seat_direction;

    performance() {
        cout << "performance is something"
    }

    accelerate () {
        cout << "accelerating in the speed of...'"
    }

    brake() {
        cout<< "break"
    }

    

    passengerComfort(seat_direction) {
        if (seat_direction) > 95degress {
            cout<< "Comfortable enough";
        } else {
            cout << "not so comfortable";
        }
    }
}


char bus = new Vehicle()
char car = new Vehicle()
car.passengerComfort(105);
char bike = new Vehicle()
char truck = new Vehicle()
char train = new Vehicle()
char plane = new Vehicle()
char ship = new Vehicle()

***********************************************************************************************************************


class Calculator {

    attributes - model, color, keys
    sum = 0 
    add() {

    }   

    subract() {

    } 

    calculation_speed () {
        
    }

    sin_function() {

    }
}

char traditional_calculaor = new Calculator("casio", "blue");
char traditional_calculaor = new Calculator("casioooo", "black");
char scientific_calculator = new Calculator();