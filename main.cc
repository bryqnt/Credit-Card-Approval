// Bryant Huynh
// CPSC 121L-02
// 09/05/2023
// 22bhuynh2@csu.fullerton.edu
// @bryqnt
//
// Lab 2-2
// 
// 

#include <iostream>

int main() {
int credit_score = 0;

std::cout << "Thank you for applying for the Tuffy Credit Card. Please enter your credit score.\n";
std::cout << "Credit Score: ";
std::cin >> credit_score;

if (credit_score <= 579 && credit_score >= 0) {
  std::cout << "\nUnfortunately, you are ineligible for Tuffy credit cards at the moment. Please try again at a later date.\n";
  std::cout << "Thank you for using our program, please come again!\n";
}
if (credit_score >= 580 && credit_score <= 669) {
  std::cout << "\nYou are eligible for the Silver Tuffy Card.\n";
  std::cout << "Thank you for using our program, please come again!\n";
}
if (credit_score >= 670 && credit_score <= 799) {
  std::cout << "\nYou are eligible for the Gold Tuffy Card.\n";
  std::cout << "Thank you for using our program, please come again!\n";
}
if (credit_score >= 800 && credit_score <= 850) {
  std::cout << "\nYou are eligible for the Platinum Tuffy Card.\n";
  std::cout << "Thank you for using our program, please come again!\n";
}
if (credit_score >= 851) {
  std::cout << "\nThat is an invalid credit score. Please run the program again and provide a valid credit score.\n";
}
if (credit_score < 0) {
  std::cout << "\nThat is an invalid credit score. Please run the program again and provide a valid credit score.\n";
}
return 0;
}
  
