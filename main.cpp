#include <iostream>
#include "Semestr-1/semestr1.h"
int OneMore(){
    int answer;
    std::cout << "\nOne more? (1 - yes, 0 - no): ";
    std::cin >> answer;
    return answer;
}
int main() {
    int n;

    std::cout << "Enter number task: ";
    std::cin >> n;
    switch (n) {
        case 1:
            do{program1();}while(OneMore());
            break;
        case 2:
            do{program2();}while(OneMore());
            break;
        case 3:
            do{program3();}while(OneMore());
            break;
        case 4:
            do{program4();}while(OneMore());
            break;
        case 5:
            do{program5();}while(OneMore());
            break;
        case 6:
            do{program6();}while(OneMore());
            break;
        case 7:
            do{program7();}while(OneMore());
            break;
        case 8:
            do{program8();}while(OneMore());
            break;
        case 9:
            do{program9();}while(OneMore());
            break;
        case 10:
            do{program10();}while(OneMore());
            break;
        case 11:
            do{program11();}while(OneMore());
            break;
        case 12:
            do{program12();}while(OneMore());
            break;
        case 13:
            do{program13();}while(OneMore());
            break;
        case 14:
            do{program14();}while(OneMore());
            break;
        case 15:
            do{program15();}while(OneMore());
            break;
        case 16:
            do{program16();}while(OneMore());
            break;
        case 17:
            do{program17();}while(OneMore());
            break;
        case 18:
            do{program18();}while(OneMore());
            break;
        case 19:
            do{program19();}while(OneMore());
            break;
        case 20:
            do{program20();}while(OneMore());
            break;
        case 21:
            do{program21();}while(OneMore());
            break;
        case 22:
            do{program22();}while(OneMore());
            break;
        case 23:
            do{program23();}while(OneMore());
            break;
        case 24:
            do{program24();}while(OneMore());
            break;
        case 25:
            do{program25();}while(OneMore());
            break;
        case 26:
            do{program26();}while(OneMore());
            break;
        case 27:
            do{program27();}while(OneMore());
            break;
        case 28:
            do{program28();}while(OneMore());
            break;
        case 29:
            do{program29();}while(OneMore());
            break;
        case 30:
            do{program30();}while(OneMore());
            break;
        case 31:
            do{program31();}while(OneMore());
            break;
        case 32:
            do{program32();}while(OneMore());
            break;
        case 33:
            do{program33();}while(OneMore());
            break;
        case 34:
            do{program34();}while(OneMore());
            break;
        case 35:
            do{program35();}while(OneMore());
            break;
        case 36:
            do{program36();}while(OneMore());
            break;
        case 37:
            do{program37();}while(OneMore());
            break;
        case 38:
            do{program38();}while(OneMore());
            break;
        case 39:
            do{program39();}while(OneMore());
            break;
        default:
            std::cout <<"Not exist number task.";
            break;
    }

    //check();
    return 0;
}
