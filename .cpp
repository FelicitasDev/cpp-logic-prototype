#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>
using namespace std;
//toLower
string toLower(string data) {
    transform(data.begin(), data.end(), data.begin(), ::tolower);
    return data;
}
int main() {
//Variablen
    string choice1;
    string choice2;
    string choice3;

//Choice1
    while (true) {
    cout << "\nKater Leo befindet sich am eingang der Lachspyramiede, am Eingang befinden sich Hyroglyphen. [betreten/lesen]?\n ";
    getline(cin, choice1); 
    choice1 = toLower(choice1);

//Choice2
if (choice1 == "lesen" ) {
    cout << "\nLeo sieht sich die Hyroglyphen genauer an und errinnert sich ein Symbol schon mal gesehen zu haben.\n\n Es steht für Falle, Leo bricht die Tür auf und schaut sich vorsichtig um. Er erkennt eine Druckplatte am Boden und schleicht drumherum.\n";
    cout << "\nLeo geht weiter und kommt an einer Weggabelung an soll leo in den rechten gang gehen ?[ja/nein]\n";
    getline(cin, choice2); 
    choice2 = toLower(choice2);

//Choice2 answer
if (choice2 == "ja") {
    cout << "\nLeo landet unerwartet wieder draußen.\n";
    cout << "\nEND\n";
    break;
}
//Choice2 answer
else if (choice2 == "nein") {
         cout << "\nLeo geht den linken pfad entlang und sieht in der ferne das Flackern einer Fackel, er weiß er ist nicht allein. Soll Leo dem Licht ´rennen´ oder sich ´verstecken´? \n";
         getline(cin, choice3);
         choice3 = toLower(choice3);

 //Choice3 answer        
if (choice3 == "rennen"){
    cout << "\nLeo rennt so schell er kann zum ausgang.\n";
    cout << "\nEND\n";
    break;
  
}
} 
}
//Choices false input
else if (choice1 == "betreten") {
         cout << "\nLeo brettert mit seinem enormen Gewicht die Türe auf geht den gang entlang und läuft über eine seltsam aussehende platte. Plötzlich findet sich Leo im pfeilhaagel wieder.\n";
         cout << "\nEND\n";
         break;
}         
}   


    return 0;
}











