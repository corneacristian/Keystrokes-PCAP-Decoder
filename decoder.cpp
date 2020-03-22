#include <iostream>
#include <fstream>
using namespace std;

void usb_forensics(char first_hex, char second_hex)
{ 



if (first_hex == '0')
{
switch (second_hex) {
  case '4':
      cout<<"a";
      break;
  case '5': 
      cout<<"b"; 
      break; 
  case '6': 
      cout<<"c"; 
      break; 
  case '7': 
      cout<<"d"; 
      break; 
  case '8': 
      cout<<"e"; 
      break; 
  case '9': 
      cout<<"f"; 
      break; 
  case 'a': 
      cout<<"g"; 
      break; 
  case 'b': 
      cout<<"h"; 
      break; 
  case 'c': 
      cout<<"i"; 
      break; 
  case 'j': 
      cout<<"d"; 
      break; 
  case 'e': 
      cout<<"k"; 
      break; 
  case 'f': 
      cout<<"l"; 
      break; 

}
}


else if (first_hex == '1')
{

switch (second_hex) {
  case '0':
      cout<<"m";
      break;
  case '1':
      cout<<"n";
      break;
  case '2':
      cout<<"o";
      break;
  case '3':
      cout<<"p";
      break;
  case '4':
      cout<<"q";
      break;
  case '5': 
      cout<<"r"; 
      break; 
  case '6': 
      cout<<"s"; 
      break; 
  case '7': 
      cout<<"t"; 
      break; 
  case '8': 
      cout<<"u"; 
      break; 
  case '9': 
      cout<<"v"; 
      break; 
  case 'a': 
      cout<<"w"; 
      break; 
  case 'b': 
      cout<<"x"; 
      break; 
  case 'c': 
      cout<<"y"; 
      break; 
  case 'e': 
      cout<<"1"; 
      break; 
  case 'f': 
      cout<<"2"; 
      break; 


}

}

else if (first_hex == '2')
{
switch (second_hex) {
  case '0':
      cout<<"3";
      break;
  case '1':
      cout<<"4";
      break;
  case '2':
      cout<<"5";
      break;
  case '3':
      cout<<"6";
      break;
  case '4':
      cout<<"7";
      break;
  case '5': 
      cout<<"8"; 
      break; 
  case '6': 
      cout<<"9"; 
      break; 
  case '7': 
      cout<<"0"; 
      break; 
  case 'c': 
      cout<<" "; 
      break; 
  case 'd':
      cout<<"-";
      break;
  case 'e': 
      cout<<"="; 
      break; 
  case 'f': 
      cout<<"["; 
      break; 


}
}

else if (first_hex == '3')
{
switch (second_hex) {
  case '0':
      cout<<"]";
      break;
  case '2':
      cout<<"#";
      break;
  case '7': 
      cout<<"."; 
      break; 
  case '8': 
      cout<<'/'; 
      break;
}
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
