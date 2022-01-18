//Kvahn/shi_pit (c) MIT licence

#include <iostream>
#include <math.h>
#include <sstream>
#include <vector>
using std::cout;
using std::cin; 
using std::string;
using std::vector;
using std::getline;
using std::istringstream;

template <typename T>
double avg(const vector<T>& V)
{
   double sum = 0;
for (double x : V) sum +=x;

  for(double i=0; i < V.size(); i++)
    return sum/V.size();
}
double cube(double x) {
double y = 0.0;
  y = x * x * x;
  return y;
}

double add(double x, double n) {
    double y = 0.0;
    y = x+n;
    return y;
}
double subt(double x, double n) {
    double y = 0.0;
    y = x - n;
    return y;
}

double square(double x) {
double y= 0.0;
y = x*x;
return y; 
}

double mult(double x, double n) {
double y = 0.0;
y = x * n;
return y;
}

double div(double x, double n) {
double y = 0.0;
y = x / n;
return y;
}

int main(int argc, char** argv) {
    string input;
    double cubeinput;
    double addput;
    double addput2;
    double subput;
    double subput2;
    double sq;
    double sqr;
    double dividend;
    double divisor;
    double prod1;
    double prod2;


    
  cout <<"hello and welcome to calculator compiler version one \n";
  cout <<"type '--help' for help or type a func to get started \n";
  getline(cin, input);

  if (input == "--help") {
      cout <<" input -c to cube,\n -a for addition,\n -sq for squaring,\n -sqrt for square roots,\n -s for subtraction,\n -d for division,\n -avg for averages \n and -m for multiplication.\n ";
      cout <<"type a func to get started \n" ;
      getline(cin, input);
  }

 if (input == "-c") {
 cout <<"enter number to cube\n";
 cin >> cubeinput;
 cout << "\n" << cube(cubeinput);
}
 if (input == "-a"){
 cout <<"enter numbers to add\n";
 cin >> addput;
 cin >> addput2;
 cout << "\n" << add(addput, addput2);

}
if (input == "-avg"){
    std::string line;
    double number;
    std::vector<double> numbers;

    cout << "Enter numbers separated by spaces: ";
    getline(cin, line);
    istringstream stream(line);
    while (stream >> number)
        numbers.push_back(number);

    cout << avg(numbers);

}
if (input == "-sq"){
 cout <<"enter number to square\n";
 cin >> sq;
 cout << "\n" << square(sq);

}
if (input == "-sqrt"){
 cout <<"enter number to square root\n";
 cin >> sqr;
 cout << "\n" << sqrt(sqr);

}
if (input == "-s"){
 cout <<"enter numbers to subtract\n";
 cin >> subput;
 cin >> subput2;
 cout << "\n" << subt(subput, subput2);

}

if (input == "-d"){
 cout <<"enter numbers to divide\n";
 cin >> dividend;
 cin >> divisor;
 cout << "\n" << div(dividend, divisor);

}
if (input == "-m"){
 cout <<"enter numbers to multiply\n";
 cin >> prod1;
 cin >> prod2;
 cout << "\n" << mult(prod1, prod2);

}

//dup
    if (input == "--c") {
        cin >> cubeinput;
        cout << "\n" << cube(cubeinput);
    }
    if (input == "--a"){
        cin >> addput;
        cin >> addput2;
        cout << "\n" << add(addput, addput2);

    }
    if (input == "--avg"){
        std::string line;
        double number;
        std::vector<double> numbers;
        getline(cin, line);
        istringstream stream(line);
        while (stream >> number)
            numbers.push_back(number);

        cout << avg(numbers);

    }
    if (input == "--sq"){
        cin >> sq;
        cout << "\n" << square(sq);

    }
    if (input == "--sqrt"){
        cin >> sqr;
        cout << "\n" << sqrt(sqr);

    }
    if (input == "--s"){
        cin >> subput;
        cin >> subput2;
        cout << "\n" << subt(subput, subput2);

    }

    if (input == "--d"){
        cin >> dividend;
        cin >> divisor;
        cout << "\n" << div(dividend, divisor);

    }
    if (input == "--m"){
        cin >> prod1;
        cin >> prod2;
        cout << "\n" << mult(prod1, prod2);

    }


}