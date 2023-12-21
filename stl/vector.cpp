#include<vector>
#include<iostream>
#include<string>
#include<vector>
int main(){

    std::vector<std::string> names;

    std::string name  = "abc";
    names.push_back(name);
    names.push_back("Ryan");

    std::cout << "size="<<names.size()<<std::endl;

    for (int i = 0 ; i< names.size(); i++){
        std:: cout << names[i] << " ";
    }

    return 0;
}