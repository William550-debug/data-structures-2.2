#include <iostream>
#include <cmath>
using namespace std;

class Rectangle{
    private:
       double length;
       double width;

       public:
          Rectangle(double len, double wid){
            length = len;
            width = wid;
          }
          double calculateArea(){
            return length * width;
          }
};
int main(){
    double len, wid;
    cout <<"Enter the length: ";
    cin >> len;
    cout <<"Enter the width: ";
    cin >> wid;

    Rectangle rectangle(len, wid);

    double area = rectangle.calculateArea();
    cout <<"Area: " << area <<endl;
    return 0;
}