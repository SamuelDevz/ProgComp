#include <iostream>
using namespace std;

int main()
{
	float torque[10] { 2.5, 8.1, 3.4, 9.2, 5.7, 9.6, 6.3, 8.0, 5.4, 4.9 };
	float * ptr = torque;

	cout << "Torques: ";
	cout << torque[0] << ", "
         << torque[1] << ", "
         << torque[2] << ", "
         << torque[3] << ", "
         << torque[4] << ", "
         << torque[5] << ", "
         << torque[6] << ", "
         << torque[7] << ", "
         << torque[8] << ", "
         << torque[9] << endl;

	cout << "Primeiro: " << *ptr;
	ptr = &torque[9];
	cout << "Ultimo: " << *ptr;

    return 0;
}