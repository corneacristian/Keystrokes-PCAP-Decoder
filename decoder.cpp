#include <iostream>
#include <fstream>
using namespace std;

void usb_forensics(char first_hex, char second_hex)
{



if (first_hex == '0')
{
if(second_hex =='4') cout<<"a";
if(second_hex =='5') cout<<"b";
if(second_hex =='6') cout<<"c";
if(second_hex =='7') cout<<"d";
if(second_hex =='8') cout<<"e";
if(second_hex =='9') cout<<"f";
if(second_hex =='a') cout<<"g";
if(second_hex =='b') cout<<"h";
if(second_hex =='c') cout<<"i";
if(second_hex =='d') cout<<"j";
if(second_hex =='e') cout<<"k";
if(second_hex =='f') cout<<"l";
}


else if (first_hex == '1')
{
if(second_hex =='0') cout<<"m";
if(second_hex =='1') cout<<"n";
if(second_hex =='2') cout<<"o";
if(second_hex =='3') cout<<"p";
if(second_hex =='4') cout<<"q";
if(second_hex =='5') cout<<"r";
if(second_hex =='6') cout<<"s";
if(second_hex =='7') cout<<"t";
if(second_hex =='8') cout<<"u";
if(second_hex =='9') cout<<"v";
if(second_hex =='a') cout<<"w";
if(second_hex =='b') cout<<"x";
if(second_hex =='c') cout<<"y";
if(second_hex =='d') cout<<"z";
if(second_hex =='e') cout<<"1";
if(second_hex =='f') cout<<"2";
}

else if (first_hex == '2')
{
if(second_hex =='0') cout<<"3";
if(second_hex =='1') cout<<"4";
if(second_hex =='2') cout<<"5";
if(second_hex =='3') cout<<"6";
if(second_hex =='4') cout<<"7";
if(second_hex =='5') cout<<"8";
if(second_hex =='6') cout<<"9";
if(second_hex =='7') cout<<"0";
if(second_hex =='c') cout<<" ";
if(second_hex =='d') cout<<"-";
if(second_hex =='e') cout<<"=";
if(second_hex =='f') cout<<"[";
}

else if (first_hex == '3')
{
if(second_hex =='0') cout<<"]";
if(second_hex =='2') cout<<"#";
if(second_hex =='7') cout<<".";
if(second_hex =='8') cout<<'/';
}

else if (first_hex == '4') cout<<">";
else if (first_hex == '5') cout<<"<";

}




int main()
{
ifstream input("input.txt");

char v[16][15];
for(int i=0;i<15;i++)
{ 
for(int j=0;j<16;j++)
{
input>>v[j][i]; 

}
usb_forensics(v[4][i], v[5][i]); //We take only the bits that indicate keyboard values
}
cout<<endl;
}
