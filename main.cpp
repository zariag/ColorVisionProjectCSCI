#include <iostream>
#include <vector>
#include <string>
using namespace std;
//---------------------------------
// function prototypes 
string askName(string name);
char intro(char yesORno);
string rating(char yOn, int opinion[5], int numrate);
string analysis(vector<int> c1, vector<int> c2, int rgb1, int rgb2);

int main(){
    
    //variables
    string name; // where the user's name is inputed into
    char skipIntro = ' '; // where user input goes to see if they'd like to skip the intro or not 
    int ratingArray[5] = {1, 2, 3, 4, 5}; // array for rating
    char YNrate = ' '; // yes or no char for rating system
    int nrate = 0; // user number rating
    vector<int> color1; //vector for first color input
    vector<int> color2; //vector for second color input
    int RGB1 = 0; //for vector 1
    int RGB2 = 0; //for vector 2
    //end of variables
    
    askName(name);

    intro(skipIntro);
    
    analysis(color1, color2, RGB1, RGB2);
     
    rating(YNrate, ratingArray, nrate);

    return 0;
}