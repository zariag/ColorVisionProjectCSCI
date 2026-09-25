#include <iostream>
using namespace std;
#include <string>
//---------------------------------
int intro(){

//intro
string usrName;
cout << "Please enter your name: \n";
getline (cin, usrName);
cout << "Hello, " << usrName << "! Welcome to my Color Vision Project."<< endl;

//Asks if they would like to skip background info
char skipIntro;
cout << "Would you like to read the background information on my project? (y/n): ";
cin >> skipIntro;
while(skipIntro != 'Y' && skipIntro !=  'y' && skipIntro !=  'N' && skipIntro !=  'n'){

    cout << "Invalid. Please try again: ";
    cin >> skipIntro;
}

if(skipIntro == 'Y' || skipIntro == 'y'){
    cout << "--------------------------------------------------------------"
    "\nThe two types of color blindnesses that my project will cover are Tritanopia and Deuteranopia. Tritanopia is a blue-yellow color vision deficiancy."
     " People with this color blindness tend to confuse blue from green, purple from red, and yellow from pink. Deuteranopia is a red-green color vision deficiency. They tend to confuse green and red, blue and purple, orange and yellow-green, green and brown or tan, pink and gray." 
     "\nIn my code I will help those with Tritanopia or Deuteranopia color blindnesses know if the colors they pick from a provided list can be percieved.\n\nKeep in mind that I am very new to coding so my program might have a few mistakes (if it says it does not work once in the output, go with that answer). If you'd like to give me advice, please feel free to do so."
            "\n--------------------------------------------------------------";
}
else if (skipIntro == 'N' || skipIntro == 'n'){

}
    return 0;
}
//--------------------------
//color pick

int colorsPick(){

int color1;
int color2;

cout << "\nPick 2 colors from the list. Please do not pick the same color twice. (Correct Example: First: 2  Second: 9)(Incorrect Example: First: 2  Second: 2):\n1. Black \n2. White \n3. Red \n4. Brown \n5. Blue \n6. Yellow \n7. Gray \n8. Orange \n9. Purple \n10. Green \n11. Teal \n12. Pink\n";

cout << "\nFirst: ";
cin >> color1;
while (color1 < 1 || color1  > 12){
cout << "Invalid. Please try again.\nFirst: ";
    cin >> color1;
}
cout << "Second: ";
cin >> color2;



while (color2 < 1 || color2  > 12){
cout << "Invalid. Please try again.\nSecond: ";
    cin >> color2;
}

//color analysis portion
switch(color1){


//-----------case 5 blue------------
    case 2:
    if (color2 != 2){
        cout << "\nThis color combo would work great for people with Tritanopia. \nThis color combo would work great for people with Deuteranopia.";
    }
    cout << "";
    break;

    case 5:

    
    if ( color2 == 11){

        cout << "\nThese colors would not work well for those with Tritanopia. When choosing blue, I would recommend using any other color on the list besides green and teal as a second color because it is easier to tell the difference.";

    }
    else if(color2 == 10){
        cout << "";
    }
     else if (color2 == 12){
        cout << ""; 
        }
        else if (color2 == 9){
    cout << "";
}
     else{
        cout << "\nThis color combo would work great for people with Tritanopia.";
    }
    if(color2 ==  9 ){
        cout << "\nThis color combo would not work very well for those with Deuteranopia. When choosing blue, I would recommend using any other color on the list besides purple as a second color because it is easier to tell the difference. ";

    }
      else if(color2 == 10){
        cout << "";
    }
    else if (color2 == 12){
        cout << "";
    }
    else {
        cout << "\nThis color combo would work great for people with Deuteranopia.";
    }
   
break; //case 5 blue


//----------------case 10 green---------------
case 10:


if ( color2 == 11){
    cout << "\nThese colors would not work well for those with Tritanopia. When choosing green, I would recommend using any other color on the list besides blue and teal as a second color because it is easier to tell the difference.";

}
else if (color2 == 9){
    cout << "";
}
else if (color2 == 5){
    cout << "";
}
else{
cout << "\nThis color combo would work great for people with Tritanopia.";

}
if (color2 == 3 || color2 == 4){
cout << "\nThis color combo would not work very well for those with Deuteranopia. When choosing green, I would recommend using any other color on the list besides red and brown as a second color because it is easier to tell the difference. ";

}
else if (color2 == 9){
    cout << "";
}
else if (color2 == 5){
    cout << "";
}
else {

cout << "\nThis color combo would work great for people with Deuteranopia.";
}

break;//case 10 green

//-------------------case 9 purple------------------

case 9:

     if (color2 == 3 ){
    cout << "\nThese colors would not work well for those with Tritanopia. When choosing purple, I would recommend using any other color on the list besides red as a second color because it is easier to tell the difference.";

}
else if (color2 == 10){
    cout << "";
}
else if (color2 == 5){
    cout << "";
}
else{
cout << "\nThis color combo would work great for people with Tritanopia.";

}
if (color2 == 5){
cout << "\nThis color combo would not work very well for those with Deuteranopia. When choosing purple, I would recommend using any other color on the list besides blue as a second color because it is easier to tell the difference. ";

}
else if (color2 == 10){
    cout << "";
}
else {

cout << "\nThis color combo would work great for people with Deuteranopia.";
}

break; //case 9 purple

//---------------case 12 pink --------------------

case 12:

     if (color2 == 6 ){
    cout << "\nThese colors would not work well for those with Tritanopia. When choosing pink, I would recommend using any other color on the list besides yellow as a second color because it is easier to tell the difference.";

}
else{
cout << "\nThis color combo would work great for people with Tritanopia.";

}
if (color2 == 7){
cout << "\nThis color combo would not work very well for those with Deuteranopia. When choosing pink, I would recommend using any other color on the list besides gray as a second color because it is easier to tell the difference. ";

}
else {

cout << "\nThis color combo would work great for people with Deuteranopia.";
}break; //case 12 pink

default:
 cout << "\nThis color combo would work great for people with Tritanopia. \nThis color combo would work great for people with Deuteranopia. ";

// if (color2 == 9 || color2 == 10 || color2 ==5 || color2 ==12){
//     cout << "";
// }
// else if  (color1 ==6 && color2 != 12){
//     cout << "\nThis color combo would work great for people with Tritanopia. \nThis color combo would work great for people with Deuteranopia.";
// }
// else if (color1 != color2){
//     cout << "";
// }
// else{
//     cout << "\nThis color combo would work great for people with Tritanopia. \nThis color combo would work great for people with Deuteranopia. ";
// }




// if (color1 == 6 && color2 == 5){
//   cout << "";   
// }
// if (color1 == 4 && color2 ==5 ){

//     cout << "";
// }
// if (color1 ==2 && color2 == 9){
//    cout << "";

// }
// if (color1 == 6 && color2 != 12){

//     cout << "";
// }
 
// else if (color1 ==8 && color2 == 9){
//     cout << "";
// }
//  else if (color1 == 6 && color2 == 12){
//     cout << "";
// }
// else if (color1 ==4 && color2 == 10){
//     cout << "";
// }
// else if (color1 ==3 && color2 == 9){
//     cout << "";
// }


 
}//end of color1 switch
//----------------------------------------------------


switch(color2){


//-----------case 5 blue------------
    case 5:

    if (color1 == 10 || color1 == 11){

        cout << "\nThese colors would not work well for those with Tritanopia. When choosing blue, I would recommend using any other color on the list besides green and teal as a second color because it is easier to tell the difference.";

    } 
     else if (color1 == 2){
    cout << "";
}

     else if(color1 == 12){
        cout << "";
    }

    if (color1 == 4 && color2 ==5 ){

    cout << "";
}
if (color1 == 6 && color2 == 5){
  cout << "";   
}

else  if (color2 == 5){
     cout << "";
}
 if (color1 == 1){
     cout << "\nThis color combo would work great for people with Tritanopia.";
}
     else{
        cout << "\nThis color combo would work great for people with Tritanopia.";
    }
 
    if(color1 ==  9 ){
        cout << "\nThis color combo would not work very well for those with Deuteranopia. When choosing blue, I would recommend using any other color on the list besides purple as a second color because it is easier to tell the difference. ";

    }
      else if (color1 == 4 && color2 ==5 ){

    cout << "";
}
     else if(color1 == 12){
        cout << "";
    }
    else if (color1 == 6 && color2 == 5){
  cout << "";   
}
 
else if (color1 ==3 ){
    cout << "";
}
 else if (color1 == 2){
    cout << "";
}
    else {
        cout << "\nThis color combo would work great for people with Deuteranopia.";
    }
   
break; //case 5 blue


//----------------case 10 green---------------
case 10:

if (color1 == 5 || color1 == 11){
    cout << "\nThese colors would not work well for those with Tritanopia. When choosing green, I would recommend using any other color on the list besides blue and teal as a second color because it is easier to tell the difference.";

}
 else  if (color1 == 1){
     cout << "";
}
 else if (color1 == 2){
    cout << "";
}

else{
cout << "\nThis color combo would work great for people with Tritanopia.";

}
if (color1 == 3 || color1 == 4){
cout << "\nThis color combo would not work very well for those with Deuteranopia. When choosing green, I would recommend using any other color on the list besides red and brown as a second color because it is easier to tell the difference. ";

}
   else if (color1 == 1){
     cout << "";
}
     else if (color1 == 2){
    cout << "";
} 
else {

cout << "\nThis color combo would work great for people with Deuteranopia.";
}

break;//case 10 green

//-------------------case 9 purple------------------

case 9:

     if (color1 == 3 ){
    cout << "\nThese colors would not work well for those with Tritanopia. When choosing purple, I would recommend using any other color on the list besides red as a second color because it is easier to tell the difference.";

}
else if (color1 ==2){
    cout << "";
}
// else if (color1 != 3 && color1 != 5){
//     cout << "";
// }
else{
cout << "\nThis color combo would work great for people with Tritanopia.";

}
if (color1 == 5){
cout << "\nThis color combo would not work very well for those with Deuteranopia. When choosing purple, I would recommend using any other color on the list besides blue as a second color because it is easier to tell the difference. ";

}
// else if (color1 != 3 && color1 != 5){
//     cout << "";
// }
else if (color1 ==2){
    cout << "";
}
else {

cout << "\nThis color combo would work great for people with Deuteranopia.";
}

break; //case 9 purple

//---------------case 12 pink --------------------

case 12:

     if (color1 == 6 ){
    cout << "\nThese colors would not work well for those with Tritanopia. When choosing pink, I would recommend using any other color on the list besides yellow as a second color because it is easier to tell the difference.";

}
else if (color1== 11){
    cout << "";
}
else  if (color1 == 1){
     cout << "";
}
 else if (color1 == 2){
    cout << "";
}
 else if (color1 == 3){
    cout << "";
}
else{
cout << "\nThis color combo would work great for people with Tritanopia.";

}
if (color1 == 7){
cout << "\nThis color combo would not work very well for those with Deuteranopia. When choosing pink, I would recommend using any other color on the list besides gray as a second color because it is easier to tell the difference. ";

}
else if (color1== 11){
    cout << "";
}
else  if (color1 == 1){
     cout << "";
}
 else if (color1 == 2){
    cout << "";
}
 else if (color1 == 3){
    cout << "";
}
else {

cout << "\nThis color combo would work great for people with Deuteranopia.";
}break; //case 12 pink

default:

if (color1 == 9 || color1 == 10 || color1==5 || color1 ==12){
    cout << "";
}
else if  (color2 ==6 && color1 != 12){
    cout << "\nThis color combo would work great for people with Tritanopia. \nThis color combo would work great for people with Deuteranopia.";
}
else if (color1 == 1 || (color1 ==2 && color2 == 1)){
    cout << "";
}
else if (color1 != color2){
    cout << "";
}
else{
    cout << "\nThis color combo would work great for people with Tritanopia. \nThis color combo would work great for people with Deuteranopia. ";
}


 }//end of color2 switch



    return 0;


}// end of color pick


//-------------------------------
// rate function

int rate(){

char rating;
int rates;
// asks user to rate program
cout << "\nWould you like to rate it? (y/n): ";
cin >> rating;
while (rating != 'Y' && rating !=  'y' && rating !=  'N' && rating  !=  'n' ){
 
    cout << "Invalid. Please try again: ";
    cin >> rating;

}

    switch(rating){

        case 'y':
        cout << "Rate 1-5: ";
        cin >> rates;
        while (rates < 1 || rates > 5 ){
            cout << "Invalid. Please try again: ";
            cin >> rates;

        }// end of while
        if (rates >= 4 && rates <= 5){

            cout << "I am glad you enjoyed my program!! Thank you for your time and your positive rating :)";
        }// end of if
        else if (rates >= 1 && rates <= 3){

            cout << "I am sorry you did not enjoy my program. Please feel free to give me advice on what I could do better.";

        }// end of else if
        break;

    case 'Y':
        cout << "Rate 1-5: ";
        cin >> rates;
        while (rates < 1 || rates > 5 ){
            cout << "Invalid. Please try again: ";
            cin >> rates;

        }// end of while
        if (rates >= 4 && rates <= 5){

            cout << "I am glad you enjoyed my prgram!! Thank you for your time and your positive rating :)";
        }// end of if
        else if (rates >= 1 && rates <= 3){

            cout << "I am sorry you did not enjoy my program. Please feel free to give me advice on what I could do better.";

        }// end of else if
        break;

        case 'n':
        cout << "\n\n:(";
        break;

         case 'N':
        cout << "\n\n:(";
        break;

    }// end of switch
    return 0;
}//end of rate

//---------------------------------------
//main function
int main(){

intro();

colorsPick();

char cont;

cout << "\n\nWould you like to input another set of colors to compare? (y/n): ";
cin >> cont;
while (cont != 'y' && cont != 'Y' && cont != 'n' && cont != 'N' ){
    cout << "Invalid. Please try again: ";
    cin >> cont;
}
    if(cont == 'y' || cont == 'Y'){
        //function for colors
    colorsPick();
    cout << "\n\nWould you like to input another set of colors to compare? (y/n): ";
    cin >> cont;
    while (cont == 'y' || cont == 'Y'){
         colorsPick();
         cout << "\n\nWould you like to input another set of colors to compare? (y/n): ";
    cin >> cont; 
    }//end of while
    
}
if(cont == 'n' || cont == 'N'){
    cout << "\nThank you for using my program!!!";
    rate();
}
  return 0;
}