#include <iostream>
#include <vector>
#include <cstring>



using namespace std;


std::vector<string> splitString(char* text, char* delimiters){

    std::vector<string> textSplit;

    char *text_aux;


    text_aux = strtok (text,delimiters);

    while (text_aux){
        textSplit.push_back(text_aux);
        text_aux = strtok (NULL, delimiters);
  }

    return textSplit;

}


int main (){

    int n;

    std::vector<string> text;

    string texta = "input Text";
    char deli[] = " ";

    string inputText;

    // std::cin >> n;
    // getline(cin,inputText);

    text = splitString(const_cast<char*>(texta.c_str()),deli);

    for (size_t i = 0; i < 2; i++){

        std::cout << text[i] << "\n";
    }


    // for (size_t i = 0; i < n; i++){
    //     getline(cin,inputText);
    //     text.push_back(inputText);
    // }

    // for (size_t i = 0; i < n; i++){

    //     std::cout << text[i] << "\n";
    // }
  
    return 0;


}


//{Jack: 0};{Alice: 2};{}
// 


//3,6,9
//31

//Vet[100]

//6