#include <iostream>
#include <vector>
#include <string>
using namespace std;
//---------------------------------

//function that asks user for name 
string askName(string usrName){

    cout << "Please enter your name: " << endl;
    getline (cin, usrName);
    cout << "Hello, " << usrName << "! Welcome to my Color Vision Project." << endl;

    return usrName;
}//end of askName function

//introduction function
char intro(char yesORno){

    cout << "Would you like to read the background information on my project? (y/n): ";
    cin >> yesORno;

    while(yesORno != 'Y' && yesORno !=  'y' && yesORno !=  'N' && yesORno !=  'n'){

        cout << "Invalid. Please try again: ";
        cin >> yesORno;
    }//end of invalid input while loop

    if(yesORno == 'Y' || yesORno == 'y'){
        cout << "--------------------------------------------------------------"
        "\nThe two types of color blindnesses that my project will cover are Tritanopia and Deuteranopia. Tritanopia is a blue-yellow color vision deficiancy."
        " People with this color blindness tend to confuse blue from green, purple from red, and yellow from pink. Deuteranopia is a red-green color vision deficiency. They tend to confuse green and red, blue and purple, orange and yellow-green, green and brown or tan, pink and gray." 
        "\nIn my code I will help those with Tritanopia or Deuteranopia color blindnesses know if the RGB values they input can be percieved."
                "\n--------------------------------------------------------------\n";
    }//end of "yes" if
    else if (yesORno == 'N' || yesORno == 'n'){

    }//end of "no" else if

    return ' ';
}//end of intro function

//rating function
string rating(char yOn, int opinion[5], int numrate){
    
    cout << "\nWould you like to rate my program? (y/n): ";
    cin >> yOn;
    while (yOn != 'Y' && yOn !=  'y' && yOn !=  'N' && yOn  !=  'n' ){
 
        cout << "Invalid. Please try again: ";
        cin >> yOn;

   }// end of invalid input while loop
    if (yOn == 'y' || yOn == 'Y'){
        cout << "Rate 1-5: ";
        cin >> numrate; 
        while (numrate < 1 || numrate > 5 ){
            cout << "Invalid. Please try again: ";
            cin >> numrate;
        }// end of invalid input while loop

            if (numrate == opinion[0] || numrate == opinion[1] || numrate == opinion[2] ){
                cout << "I am sorry you did not enjoy my program. Please feel free to give me advice on what I could do better." << endl;
            }// end of if
            else if ( numrate == opinion[3]  || numrate == opinion[4] ){
                cout << "I am glad you enjoyed my program!! Thank you for your time and positive rating :)";
            }// end of else if

    }// end of yes to rate
    else if (yOn == 'n' || yOn == 'N'){
        cout << ":(";
    }// end of else if for no
    
    return " ";
}// end of rating function

// invalid RGB value input function
int invalid(int inv, vector<int> &wrong){
     
     while(inv > 255 || inv < 0){
          
            cout << "Invalid. Please try again: "; 
            cin >> inv;
            
        }
    if (inv < 255 && inv > 0){
            wrong.push_back(inv);
            }
        return inv;
}//end of invalid function

//invalid yes or no input function
char yesno(char yn){
    while (yn != 'Y' && yn !=  'y' && yn !=  'N' && yn  !=  'n' ){
 
        cout << "Invalid. Please try again: ";
        cin >> yn;
  }// end of invalid input while loop
  return ' ';
}// end of yesno function

//function that asks for color 1
string askColor1 (vector<int> &c11, int &rgb11){
  cout << "Enter the RGB value of the first color one by one. Example: R: 200 G: 50 G: 139" << endl;
        cout << "R: ";
        cin >> rgb11;
        invalid(rgb11, c11);
        cout << endl;
        cout << "G: ";
        cin >> rgb11;
       invalid(rgb11, c11);
        cout << endl;
        cout << "B: ";
        cin >> rgb11;
        invalid(rgb11, c11);
        cout << endl;

        return " ";  
}//end of askColor1

//function that asks for color 2
string askColor2 (vector<int> &c22, int &rgb22){
  cout << "Enter the RGB value of the second color one by one. Example: R: 200 G: 50 G: 139" << endl;
        cout << "R: ";
        cin >> rgb22;
        invalid(rgb22, c22);
        cout << endl;
        cout << "G: ";
        cin >> rgb22;
       invalid(rgb22, c22);
        cout << endl;
        cout << "B: ";
        cin >> rgb22;
        invalid(rgb22, c22);
        cout << endl;

        return " ";  
}//end of askColor2


//color analysis function
string analysis(vector<int> c1, vector<int> c2, int rgb1, int rgb2){
    char wrongIn = ' ';
    int retry = 0;
    //color 1
    askColor1(c1,rgb1);
        
    //color 2
   askColor2(c2, rgb2);
        
        cout << "Do you need to correct any of your inputed RGB values? (y/n): ";
        cin >> wrongIn;
        yesno(wrongIn);

        if (wrongIn == 'Y' || wrongIn == 'y'){
            cout << "Which RGB value would you like to re-input? 1. first RGB value, 2. second RGB value, 3. both" << endl;
            cin >> retry;
            while ( retry < 1 || retry > 3){
                
                 cout << "Invalid. Please try again: ";
                 cin >> retry;
            }
            switch (retry){
                case 1: 
                     
                        for (int i = 0; i < 3; i++){
                            c1.pop_back();
                        }
                        askColor1(c1, rgb1);

                         cout << "Your new color 1 RGB value is ";
                         for (int i = 0; i < 3; i++){
                            cout << c1[i] << " ";
                         }
                         
                break;
                case 2:
                    
                         for (int i = 0; i < 3; i++){
                            c2.pop_back();
                        }
                        askColor2(c2, rgb2);
                        cout << "Your new color 2 RGB value is ";
                         for (int i = 0; i < 3; i++){
                            cout << c2[i] << " ";
                         }
                       

                break;
                case 3:
                   
                        for (int i = 0; i < 3; i++){
                            c1.pop_back();
                        }//gets rid of all inputs in vector c1
                        askColor1(c1, rgb1);
                        cout << "Your new color 1 RGB value is ";
                         for (int i = 0; i < 3; i++){
                            cout << c1[i] << " ";
                         }
                        cout << endl;

                        for (int i = 0; i < 3; i++){
                            c2.pop_back();
                        }//gets rid of all inputs in vector c2
                        askColor2(c2, rgb2);
                        cout << "Your new color 2 RGB value is ";
                         for (int i = 0; i < 3; i++){
                            cout << c2[i] << " ";
                         }
                        
                break;


            } // end of switch

        }

    return " ";
}// end of analysis function
