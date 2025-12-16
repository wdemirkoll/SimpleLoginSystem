#include <iostream>
#include <string>

int main(){
    // Define the correct username for authentication
    std::string correct_Username = "myUsername";

    // Variable to store the username entered by the user
    std::string entered_Username;

    // Define the correct password for authentication
    std::string correct_Password = "123456789";

    // Variable to store the password entered by the user
    std::string entered_Password;

    // Set the number of allowed login attempts
    int Right_to_Try = 3;

    // Loop until the user either logs in successfully or exhausts all attempts
    while(Right_to_Try > 0){
        std::cout << "Enter Username, ";
        std::cin >> entered_Username;

        // Check if the entered username matches the correct one
        if(entered_Username == correct_Username){
            std::cout << "Enter Password";
            std::cin >> entered_Password;

            // Check if the entered password matches the correct one
            if(entered_Password == correct_Password){
                std::cout << "Logged In";
                break; // Exit the loop after successful login
            }
            else{
                // Inform the user that the password is incorrect
                std::cout << "Wrong Password" << std::endl;
                Right_to_Try--; // Decrement remaining attempts
            }
        }
        else{
            // Inform the user that the username is incorrect
            std::cout << "Wrong Username" << std::endl;
            Right_to_Try--; // Decrement remaining attempts
        }

        // Check if the user has used all attempts
        if(Right_to_Try == 0){
            std::cout << "You have no more rights and your account has been blocked." << std::endl;
            break; // Exit the loop as account is blocked
        }
    }

    return 0;
}
