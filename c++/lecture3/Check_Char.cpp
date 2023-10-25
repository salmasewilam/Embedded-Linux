#include <iostream>
#include <ostream>

int check_char(char x){
    if (x>='0' and x<='9'){
    std::cout<<"DIGTI\n";
    return 1;
    }
    std::cout<<"NOT DIGTI\n";
    return 0;
} 
int main(){
check_char('x');
return 0;
}
