#include "validation.hpp"
#include <algorithm>
#include <cctype>
#include <vector>
// TODO: Put implementations here

bool doPasswordsMatch(std::string& pass1, std::string& pass2) {
    if (pass1 == pass2) {
        return true;
    } else {
        return false;
    }
}

bool checkSpecialChar(std::string& pass) {
    static const std::string special_chars = "!@#$%^&*()_-+=`~:;<,>.|";
    return pass.find_first_of(special_chars) != std::string::npos;
}

ErrorCode checkPasswordRules(std::string pass) {
    if (std::none_of(pass.begin(), pass.end(), ::isupper)) {
        return ErrorCode::PasswordNeedsAtLeastOneUppercaseLetter;
    } else if (std::none_of(pass.begin(), pass.end(), ::isdigit)) {
        return ErrorCode::PasswordNeedsAtLeastOneNumber;
    } else if (!checkSpecialChar(pass)) {
        return ErrorCode::PasswordNeedsAtLeastOneSpecialCharacter;
    } else if (pass.length() < 9) {
        return ErrorCode::PasswordNeedsAtLeastNineCharacters;
    } else {
        return ErrorCode::Ok;
    }
}

ErrorCode checkPassword(std::string& pass, std::string& repPass){
    if (doPasswordsMatch(pass, repPass)){
        return checkPasswordRules(pass);
    }
    else{
        return ErrorCode::PasswordsDoNotMatch;
    }
}

std::string getErrorMessage(ErrorCode& errorNum){
    switch(errorNum){ 
        case ErrorCode::Ok:
            return "Ok";
        case ErrorCode::PasswordNeedsAtLeastNineCharacters:
            return "Password needs to have at least nine characters";
        case ErrorCode::PasswordNeedsAtLeastOneNumber:
            return "Password needs to have at least one number";
        case ErrorCode::PasswordNeedsAtLeastOneSpecialCharacter:
            return "Password needs to have at least one special character";
        case ErrorCode::PasswordNeedsAtLeastOneUppercaseLetter:
            return "Password needs to have at least one uppercase letter";
        case ErrorCode::PasswordsDoNotMatch:
            return "Passwords do not match";
        default:
            return "Unknown error";
    }
}
