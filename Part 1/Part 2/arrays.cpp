/*
    Author: Cold Id-deen
    Date: 4-12-2026
    Activity: The task was given by Claude AI to help me practice using Arrays which is for Student roster.
*/

#include <iostream>
#include <string>



int main(){
    std::string students[5] = {"Cold", "Emma", "John", "Sarah", "Mike"}; 

    for(int i = 0; i < 5; i++){
        std::cout << "Student " << i + 1 << ": " << students[i] << std::endl;
    }
    
    return 0; 
}