
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

char stars = '*';
char spacing = ' ';
int CheeseProduced;
const double ContainerCapacity = 2.76;
const double ContainerCost = 4.12;
const double ProfitPerContainer = 1.45;

int main()
{
    
    //Prints the welcome messsage:
    cout << setw(80) << setfill(stars) << stars << endl;
    cout << setw(25) << setfill(stars) << stars << "Cost & profit calculator" << setw(27) << setfill(stars) << stars << endl;
    cout << setw(80) << setfill(stars) << stars << endl;


    std::cout << "Please enter the total number of kilograms of cheese produced: ";  //Asks the user for the amount of cheese produced
    std::cin >> CheeseProduced; // Takes and stores the input on the amount of cheese produced

    cout << fixed << setprecision(2); //Setting the output numbers to 2 decimal points

    //Shows how many containers are needed for the cheese produced
    std::cout << "The number of containers to hold the cheese is: " << setw(30) << setfill(spacing) << spacing << round(CheeseProduced / ContainerCapacity) << endl;
    
    //Shows the total cost based on the amount of containers needed
    std::cout << "The cost of producing " << to_string(lround(round(CheeseProduced / ContainerCapacity))) << " container(s) of cheese is: $" << setw(24) << setfill(spacing) << spacing << float((CheeseProduced / ContainerCapacity) * ContainerCost) << endl;
    
    //Shows how much profit can be earned through the cheese production
    std::cout << "The profit from producing " << to_string(lround(round(CheeseProduced / ContainerCapacity))) << " container(s) of cheese is: $" << setw(20) << setfill(spacing) << spacing << float((CheeseProduced / ContainerCapacity) * ProfitPerContainer) << endl;
}

