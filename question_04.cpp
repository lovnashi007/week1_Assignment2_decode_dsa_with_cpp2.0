/*WAP for finding the volume of the cylinder by taking radius and height as input.*/

#include<iostream>

using namespace std;

int main()
{
    float radius ,height;
    cout<<"Enter the Radius and height of the cylinder : "<<endl;
    cin>>radius>>height;

    float volume = 3.14*radius*radius*height;

    cout<<"volume of the cylinder is : "<<volume;
    return 0;
}