/*
 * functionstocomplete.cpp
 *
 *  Created on: Sep 10, 2017
 *      Author: keith
 */

//============================================================================

#define ARRAY_FUNCTIONS_H_
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

#include "constants.h"
//============================================================================

//============================================================================
//	stuff you will need
//============================================================================
//TODO define a structure to track words and number of times they occur

//TODO add a global array of entry structs (global to this file)

//TODO add variable to keep track of next available slot in array

//TODO define all functions in header file

//TODO look in utilities.h for useful functions, particularly strip_unwanted_chars!

void cleararray(){

}
int getArraySize(){
	return 0;
}
std::string getArrayWordAt(int i){
	return 0;
}
int getArrayWord_NumbOccur_At(int i){
	return 0;
}
bool processFile(std::fstream &myfstream){
	return false;
}
void processLine(std::string &myString{

}
void processToken(std::string &token){

}
bool openFile(std::fstream& myfile, const std::string& myFileName, std::ios_base::openmode mode = std::ios_base::in){
	return false;
}
void closeFile(std::fstream& myfile){

}
int writeArraytoFile(const std::string &outputfilename){
	return 0;
}
void sortArray(constants::sortOrder so){

}
void extractTokensFromLine(std::string &myString){
	stringstream ss(myString);
	string tempToken;

	while (getLine(ss, tempToken, CHAR_TO_SEARCH_FOR)){
		processToken(tempToken);
	}

}











