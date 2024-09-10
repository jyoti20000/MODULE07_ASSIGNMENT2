#include<iostream>
using namespace std;
int main()
{
    float PI = 3.14;
    int radius;
    int height;

    cout<<"Enter the radius: ";
    cin >> radius;
    cout<<"Enter the height: ";
    cin >> height;

    float volume_of_cylinder = PI * radius * radius * height;

    cout << "Volume of the Cylinder is: " << volume_of_cylinder;

    return 0;

}
