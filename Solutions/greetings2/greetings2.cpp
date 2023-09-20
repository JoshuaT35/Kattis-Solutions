// https://open.kattis.com/problems/greetings2


// Solution
#include<iostream>

int main() {
    std::string greet;
    std::cin >> greet;
    int eNum = greet.size() - 2;
    std::string response = "";
    response += "h";
    for (int i = 0; i < eNum*2; i++) {
        response += "e";
    }
    response += "y";
    std::cout << response;
    
    return 0;
}