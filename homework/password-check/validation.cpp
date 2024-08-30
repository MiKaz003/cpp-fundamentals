#include "validation.hpp"
#include <algorithm>
#include <cctype>
#include <vector>
// TODO: Put implementations here

enum class ErrorCode{
    Ok,
    PasswordNeedsAtLeastNineCharacters,
    PasswordNeedsAtLeastOneNumber,
    PasswordNeedsAtLeastOneSpecialCharacter,
    PasswordNeedsAtLeastOneUppercaseLetter,
    PasswordsDoNotMatch
};
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

ErrorCode checkPassword(std::string pass, std::string repPass){
    if (doPasswordsMatch(pass, repPass)){
        return checkPasswordRules(pass);
    }
    else{
        return ErrorCode::PasswordsDoNotMatch;
    }
}

std::string getErrorMessage(int errorNum){
    static const std::vector<std::string> errorMessages = {
     "Ok",
     "Password needs to have at least nine characters",
     "Password needs to have at least one number",
     "Password needs to have at least one special character",
     "Password needs to have at least one uppercase letter",
     "Passwords do not match",
    };
    if (errorNum >= 0 && errorNum <= static_cast<int>(errorMessages.size())){
        return errorMessages[errorNum];
    }
    else{
        return "Unknown error";
    }
}