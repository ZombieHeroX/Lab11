//include headers and libraries
#include "Library.h"
#include <iostream>
#include <string>
using namespace std;



int main(){
    Library library;
    
    //ask for commands and execute
    string command;
    do{
        cout<<"Enter command: "<<endl;
	    cin>>command;
        if(command == "a"){
            string bookName;
            cin >> bookName;
            if(library.addBook(bookName)){
                //cout << "success" << endl;
                ;
            }else{
                cout << "Cannot add the book."<< endl;
            }
        }else if(command == "r"){
            string bookName;
            cin >> bookName;
            if(library.removeBook(bookName)){
                //cout << "success" << endl;
                ;
            }else{
                cout << "Cannot remove the book." << endl;
            }
        }else if(command == "p"){
            library.print();
        }
    }while(command != "q");
    return 0;
}
