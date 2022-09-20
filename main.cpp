#include <iostream>
#include <cmath>

unsigned int moves = 0;


unsigned int required_moves(unsigned int number, char first_rod, char second_rod, char third_rod){
    if(number == 1){
        moves += 1;
        return moves;
    }
    else {
        required_moves(number-1, first_rod, third_rod, second_rod);
        moves += 1;
        required_moves(number-1, third_rod, second_rod, first_rod);
    }
}


bool unit_test(){
    for(int n=1; n<101; n++)
        if(required_moves(n,'A','B','C') != (pow(2,n)-1))
            return false;
    return true;
}


int main(){
    
    if(!unit_test) //  if the program fails the unit test, stop it
        return 1;
    
    unsigned int number = 0;
    std::cout << "enter the number of disks: ";
    std::cin >> number;
    
    unsigned int hanoi_moves = required_moves(number,'A','B','C');
    std::cout << "Number of moves needed:" << hanoi_moves << std::endl;
    
    return 0;
}
