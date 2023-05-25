//Libraries
#include <iostream>
#include <cmath>
#include <ctime>
#include <iomanip>

//Using namespaces
using std::cout;
using std::cin;

//NAMESPACES

//Namespace = Provides a solution for preventing name conflicts in large projects.
//Each entity needs a unique name.
//A namespace allows for identically named entities as long as the namespaces are different.

namespace first
{
    int x = 1;
}

namespace second
{
    int x = 2;
}

int main()
{
    using namespace std;
    using namespace first;

    std::cout << x << "\n";
    std::cout << second::x << "\n";
    cout << x << "\n";

    return 0;
}


//TYPEDEF AND TYPE ALIASES
/*
//typedef = reserved keyword used to create an additional name (alias) for another data type.
//New identifier for an existing type.
//Helps with readability and reduces typos.
//Use when there's a clear benefit.
//Replaced with 'using' (work better w/ templates)

//typedef std::string text_t;
//typedef int number_t;
using text_t = std::string;
using number_t = int;

using std::cout;

int main()
{
    text_t first_name = "Jeffin";
    cout << first_name << "\n";

    number_t age = 21;
    cout << age << "\n";

    return 0;
}
*/

//TYPE CONVERSION
/*
//type conversion = conversion a value of one data type to another
//                two ways to perform this:
//                Implicit = automatic
//                Explicit = Precede value with new data type (int)

int main()
{
    using std::cout;

    //int x = 3.14; //Prints 3 (truncated decimal portion) [Implicit]
    double x = (int) 3.14; //[Explicit]
    cout << x << "\n";

    char c = 100;
    cout << c << '\n'; //prints out d [implicit]
    char e = (char) 100; //[explicit]
    cout << e << '\n';

    return 0;
}
*/

//USER INPUT
/*
//cout << (inserstion operator)
//cin >> (extraction operator)
using std::cout;
using std::cin;

int main()
{
    std::string name; //Create a string variable
    int age;
//    cout << "What's your full name?: ";
//    cin >> name;
//    cout << "What's your age?: ";
//    cin >> age;
//    cout << "Hello " << name << '\n';
//    cout << "You are " << age << " years old" << '\n';

    //Case where input contains spaces
//    cout << "What's your full name?: ";
//    std::getline(std::cin, name); //Getting the entire line of user input
//    cout << "What's your age?: ";
//    cin >> age;
//    cout << "Hello " << name << '\n';
//    cout << "You are " << age << " years old" << '\n';

    //Case where it asked age first, then name
    cout << "What's your age?: ";
    cin >> age;
    cout << "What's your full name?: ";
    std::getline(std::cin >> std::ws, name); //Getting the entire line of user input
    cout << "Hello " << name << '\n';
    cout << "You are " << age << " years old" << '\n';

    return 0;
}
*/

//USEFUL MATH RELATED FUNCTIONS
/*
int main()
{
    double x = 3.99;
    double y = 4;
    double z;

    //z = std::max(x, y);
    //z = std::min(x, y);
    //z = pow(2,4);
//    z = sqrt(9);
//    z = abs(-3);
//    z = round(x);
//    z = ceil(x);
    z = floor(x);
    std::cout << z << '\n';

    return 0;
}
*/

//EXERCISE: HYPOTENUSE CALCULATOR PRACTICE PROGRAM
/*
int main()
{
    double a;
    double b;
    double c;

    std::cout << "Enter side A: ";
    std::cin >> a;
    std::cout << "Enter side B: ";
    std::cin >> b;

    c = sqrt(pow(a,2) + pow(b,2));
    std::cout << "Side C: " << c << '\n';

    return 0;
}
*/

//IF STATEMENTS
/*
int main()
{
    int age;
    std::cout << "Enter your age: ";
    std::cin >> age;

    if(age >= 100)
        std::cout << "You are too old to enter this site.\n";
    else if(age >= 18)
        std::cout << "Welcome to the site!\n";
    else if(age < 0)
        std::cout << "You haven't been born yet.\n";
    else
        std::cout << "You are not old enough to enter.\n";

    return 0;
}
*/

//SWITCHES
/*
//switch = alternative to using many "else if" statements
//        compare one value against matching cases

int main()
{
//    int month;
//    std::cout << "Enter the month (1-12): ";
//    std::cin >> month;
//
//    switch(month)
//    {
//        case 1:
//            std::cout << "It is January!";
//            break;
//        case 2:
//            std::cout << "It is February!";
//            break;
//        case 3:
//            std::cout << "It is March!";
//            break;
//        case 4:
//            std::cout << "It is April!";
//            break;
//        case 5:
//            std::cout << "It is May!";
//            break;
//        case 6:
//            std::cout << "It is June!";
//            break;
//        case 7:
//            std::cout << "It is July!";
//            break;
//        case 8:
//            std::cout << "It is August!";
//            break;
//        case 9:
//            std::cout << "It is September!";
//            break;
//        case 10:
//            std::cout << "It is October!";
//            break;
//        case 11:
//            std::cout << "It is November!";
//            break;
//        case 12:
//            std::cout << "It is December!";
//            break;
//        default:
//            std::cout << "Please enter in only numbers (1-12)";
//    }

    char grade;
    std::cout << "What letter grade?: ";
    std::cin >> grade;

    switch(grade)
    {
        case 'A':
            std::cout << "You did great!";
            break;
        case 'B':
            std::cout << "You did good";
            break;
        case 'C':
            std::cout << "You did okay";
            break;
        case 'D':
            std::cout << "You did not do good";
            break;
        case 'F':
            std::cout << "YOU FAILED!";
            break;
        default:
            std::cout << "Please enter letter grade (A-F)";
    }

    return 0;
}
*/

//EXERCISE: CONSOLE CALCULATOR PROGRAM
/*
int main()
{
    char op;
    double num_1, num_2, result;

    std::cout<<"***********CALCULATOR**********\n";

    std::cout << "Enter either (+ - * /): ";
    std::cin >> op;

    std::cout << "Enter #1: ";
    std::cin >> num_1;

    std::cout << "Enter #2: ";
    std::cin >> num_2;

    switch(op)
    {
        case '+':
            result = num_1 + num_2;
            std::cout << "Result: " << result << "\n";
            break;
        case '-':
            result = num_1 - num_2;
            std::cout << "Result: " << result << "\n";
            break;
        case '*':
            result = num_1 * num_2;
            std::cout << "Result: " << result << "\n";
            break;
        case '/':
            result = num_1 / num_2;
            std::cout << "Result: " << result << "\n";
            break;
        default:
            std::cout << "That wasn't a valid operator\n";
            break;
    }
    std::cout<<"""""""""""""""""""""""""""""""""";

    return 0;
}
*/

//TERNARY OPERATOR
/*
// ternary operator?: = replacement to an if/else statement
//condition ? expression1 : expression 2;
int main()
{
    int grade = 50;

//    if(grade >= 60)
//        std::cout << "You pass!\n";
//    else
//        std::cout << "You fail!\n";

//    (grade >= 60) ? std::cout << "You pass!\n" : std::cout << "You fail!\n";

//    int number = 8;
//    (number % 2 == 1)? std::cout << "ODD\n" : std::cout << "EVEN\n";

    bool hungry = true;
//    hungry ? std::cout << "You are hungry\n" : std::cout << "You are full\n";
    std::cout << (hungry ? "You are hungry" : "You are full");

    return 0;
}
*/

//EXERCISE: TEMPERATURE CONVERSION PROGRAM
/*
using std::cout;
using std::cin;

int main()
{
    double temp;
    char unit;

    cout << "**********TEMPERATURE CONVERSION************\n";
    cout << "F = Fahrenheit\n"
         << "C = Celsius\n"
         << "What unit would you like to convert to: ";

    cin >> unit;

    if(unit == 'F' || unit == 'f')
    {
        cout << "Enter the temperature in celsius: ";
        cin >> temp;

        temp = (1.8 * temp) + 32;
        cout << "Temperature is: " << temp << "F\n";
    }
    else if(unit == 'C' || unit == 'c')
    {
        cout << "Enter the temperature in fahrenheit: ";
        cin >> temp;

        temp = (temp-32)/1.8;
        cout << "Temperature is: " << temp << "C\n";
    }
    else
        cout << "Please enter in only C or F.\n";

    cout << "*********************************************\n";

    return 0;
}
*/

//USEFUL STRING METHODS IN C++
/*
using std::cout;
using std::cin;
int main()
{
    std::string name;
    cout << "Enter your name: ";
    std::getline(cin, name);

//    if(name.length() > 12)
//        cout << "Your name cannot be over 12 characters\n";
//    else
//        cout << "Welcome " << name << "\n";

    // name.empty() //Returns a boolean value. Sees if name is empty
//    if(name.empty())
//        cout << "You didn't enter your name\n";
//    else
//        cout << "Hello " << name << "\n";

    //name.clear(). Clear data in name.

//    name.append("@gmail.com"); //Add this string to the end of name
//    cout << "Your name is now " << name << "\n";

//      cout << name.at(1) << "\n"; //Return the character at index 1.

//    name.insert(1, "@");
//    cout << name; //Prints J@effin

//    //Find a character in a string
//    cout << name.find(' '); //returns the position of the first space

    //Erase a portion of a strirng.
    name.erase(0, 3); //Ending index is not inclusive
    cout << name;

    return 0;
}
 */

//WHILE LOOPS
/*
using std::cout;
using std::cin;

int main()
{
    std::string name;

    while(name.empty())
    {
        cout << "Enter your name: ";
        std::getline(cin, name);
    }

    cout << "Hello " << name;

    return 0;
}
 */

//DO WHILE LOOPS
/*
//do while loop = do some block of code first,
//            THEN repeat again if condition is true

using std::cout;
using std::cin;

int main()
{
    int number;

    do
    {
        cout << "Enter  a positive number: ";
        cin >> number;
    }while(number < 0);

    return 0;
}
*/

//FOR LOOPS
/*
int main()
{
    for(int i=10; i >= 0; i-=2)
        cout << i << "\n";

    cout << "HAPPY NEW YEAR!\n";

    return 0;
}
*/

//BREAK & CONTINUE
/*
//break = break out of the loop
//continue = skip current instruction
int main()
{
    for (int i = 1; i <= 20 ; i++)
    {
        if(i == 13)
            continue; //Not going to print out 13

        cout << i << "\n";
    }


    return 0;
}
*/

//NESTED LOOPS
/*
//    loop(){
//        loop()
//        {
//
//        }
//    }

int main()
{
    int rows, columns;
    char symbol;

    cout << "How many rows: ";
    cin >> rows;
    cout << "How many columns: ";
    cin >> columns;
    cout << "Enter a symbol to use: ";
    cin >> symbol;

    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= columns; j++)
            cout << symbol;
        cout << "\n";
    }


//
//    for (int i = 1; i <= 3 ; i++)
//    {
//        for (int j = 1; j <= 10 ; j++)
//        {
//            cout << j << " ";
//        }
//        cout << "\n";
//
//    }

    return 0;
}
*/

//RANDOM NUMBER GENERATOR
/*
//pseudo-random = NOT truly random (but close)
int main()
{
    srand(time(nullptr));
    int num_1 = (rand() % 6) + 1;  //(rand() % MAX_VAL) + MIN_VAL
    int num_2 = (rand() % 6) + 1;
    int num_3 = (rand() % 6) + 1;

    cout << num_1 << "\n"
    << num_2 << "\n"
    << num_3 << "\n";

    return 0;
}
*/

//RANDOM EVENT GENERATOR
/*
int main()
{
    srand(time(nullptr));
    int rand_num = (rand() % 5) + 1;

    switch(rand_num)
    {
        case 1:
            cout << "You win a bumper sticker!\n";
            break;
        case 2:
            cout << "You win a t-shirt!\n";
            break;
        case 3:
            cout << "You win a free lunch!\n";
            break;
        case 4:
            cout << "You win a gift card!\n";
            break;
        case 5:
            cout << "You win concert tickets!\n";
            break;
    }

    return 0;
}
*/

//EXERCISE: NUMBER GUESSING GAME
/*
int main()
{
    int num, guess, tries;

    srand(time(nullptr));
    num = (rand() % 100) + 1;

    cout << "*******NUMBER GUESSING GAME********\n";

    do
    {
        cout << "Enter a guess between (1-100): ";
        cin >> guess;
        tries++;

        if(guess > num)
            cout << "Too high\n";
        else if(guess < num)
            cout << "Too low\n";
        else
            cout << "CORRECT! # of tries: " << tries << "\n";

    } while(guess != num);

    cout << "**********************\n";

    return 0;
}
*/

//USER DEFINED FUNCTIONS
/*
//function =  a block of reusable code

void happy_birthday(std::string bithday_boi, int age); //Prototype

void happy_birthday(std::string birthday_boi, int age)
{
    cout << "Happy birthday to " << birthday_boi << ".\n";
    cout << "Happy birthday to " << birthday_boi << ".\n";
    cout << "Happy birthday dear " << birthday_boi << ".\n";
    cout << "Happy birthday to " << birthday_boi << ".\n";
    cout << "You are age: " << age << " years old.\n";
}

int main()
{
    std::string name = "Bro";
    int age =21;

    happy_birthday(name, age); //Call/Invoke the function
//    cout << "\n";
//    happy_birthday(); //Call/Invoke the function

    return 0;
}
*/

//RETURN KEYWORD
/*
//return = return a value back to the spot
//        where you called the encompassing function.

double square(double length);
double cube(double length);
std::string concat_strings(std::string string_1, std::string string_2);

double square(double length)
{
    return length * length;
}

double cube(double length)
{
    return length * length * length;
}

std::string concat_strings(std::string string_1, std::string string_2)
{
    return string_1 + " " + string_2; //Appending strings
}

int main()
{
//    double length = 6.0;
//    double area = square(length);
//    double volume = cube(length);
//
//    cout << "Area: " << area << " cm^2\n";
//    cout << "Volume: " << volume << " cm^3\n";

    //PASSING STRINGS
    std::string first_name = "Jeffin";
    std::string last_name = "Johnykutty";
    std::string full_name = concat_strings(first_name, last_name);

    cout << "Hello " << full_name << "\n";

    return 0;
}
*/

//OVERLOADED FUNCTIONS
/*
//overloading functions = functions that share the name, but have a different set of parameters
//function's signature = a function's name + its parameters
void bake_pizza();
void bake_pizza(std::string topping_1);
void bake_pizza(std::string topping_1, std::string topping_2);

void bake_pizza()
{
    cout << "Here is your pizza!\n";
}

void bake_pizza(std::string topping_1)
{
    cout << "Here is your " << topping_1 << " pizza!\n";

}

void bake_pizza(std::string topping_1, std::string topping_2)
{
    cout << "Here is your " << topping_1  << "and " << topping_2 << " pizza!\n";
}


int main()
{
//    bake_pizza();
//    bake_pizza("pepperoni");
    bake_pizza("pepperoni", "mushrooms");

    return 0;
}
*/

//VARIABLE
/*
//local variables = declared inside a function or block {}
//global variables = declared outside of all functions

int my_num = 3;

void print_num(int num);

void print_num(int num)
{
    cout << num << "\n";
}

int main()
{
    int my_num = 1;
    print_num(my_num);
    cout << ::my_num << "\n";  //::my_num scope resolution operator. Perform the line using the global variable

    return 0;
}
*/

//EXERCISE: BANKING PRACTICE PROGRAM
/*
void show_balance(double balance);
double deposit();
double withdraw(double balance);

void show_balance(double balance)
{
    cout << "Your balance is: $" << std::setprecision(2) << std::fixed << balance << "\n"; //Display balance up to 2 decimal points.
}

double deposit()
{
    double amount = 0;
    cout << "Enter amount to the deposited: ";
    cin >> amount;

    if(amount > 0)
        return amount;
    else
    {
        cout << "That's not a standard amount.\n";
        return 0;
    }
}

double withdraw(double balance)
{
    double amount = 0;
    cout << "Enter amount to be withdrawn: ";
    cin >> amount;

    if(amount > balance)
    {
        cout << "Insufficient funds.\n";
        return 0;
    }
    else if(amount < 0)
    {
        cout << "That's not a valid amount.\n";
        return 0;
    }
    else
        return amount;
}

int main()
{
    double balance = 0;
    int choice = 0;

    do
    {
        cout << "*************************";
        cout << "Enter your choice: \n";
        cout << "1. Show Balance\n";
        cout << "2. Deposit Money\n";
        cout << "3. Withdrawal Money\n";
        cout << "4. Exit\n";
        cin >> choice;

        std::cin.clear(); //Will reset any error flags when the stdin fails to interpret the input.
        fflush(stdin); //Clear the input buffer. Prevent our program to go crazy.

        switch(choice)
        {
            case 1:
                show_balance(balance);
                break;
            case 2:
                balance += deposit();
                show_balance(balance);
                break;
            case 3:
                balance -= withdraw(balance);
                show_balance(balance);
                break;
            case 4:
                cout << "Thanks for visiting!\n";
                break;
            default:
                cout << "Invalid choice.\n";
        }

    }while(choice != 4);

    cout << "*************************";

    return 0;
}
*/

//EXERCISE: ROCK PAPER SCISSORS GAME
/*
char get_user_choice();
char get_computer_choice();
void show_choice(char choice);
void choose_winner(char player, char computer);

char get_user_choice()
{
    char player;
    cout << "Rock-Paper-Scissors Game!\n";

    do
    {
        cout << "Choose one of the following\n";
        cout << "****************************\n";
        cout << "'r' for rock\n"
             << "'p' for paper\n"
             << "'s' for scissors\n";
        cin >> player;
    }while(player != 'r' && player != 'p' && player != 's');

    return player;
}

char get_computer_choice()
{
    srand(time(nullptr));
    int num = (rand()) % 3 + 1;
    switch (num)
    {
        case 1:
            return 'r';
        case 2:
            return 'p';
        case 3:
            return 's';
    }

}

void show_choice(char choice)
{
    switch(choice)
    {
        case 'r':
            cout << "Rock\n";
            break;
        case 'p':
            cout << "Paper\n";
            break;
        case 's':
            cout << "Scissors\n";
            break;
    }

}

void choose_winner(char player, char computer)
{
    switch(player)
    {
        case 'r':
            if(computer == 'r')
                cout << "It's a tie!\n";
            else if(computer == 'p')
                cout << "You lose!\n";
            else
                cout << "You win!\n";
            break;
        case 'p':
            if(computer == 'r')
                cout << "You win!\n";
            else if(computer == 'p')
                cout << "It's a tie!\n";
            else
                cout << "You lose!\n";
            break;
        case 's':
            if(computer == 'r')
                cout << "You lose!\n";
            else if(computer == 'p')
                cout << "You win!\n";
            else
                cout << "It's a tie!\n";
            break;
    }
}

int main()
{
    char player, computer;

    player= get_user_choice();
    cout << "Your choice: ";
    show_choice(player);

    computer = get_computer_choice();
    cout << "Computer's choice: ";
    show_choice(computer);

    choose_winner(player, computer);

    return 0;
}
*/

//ARRAYS
/*
//array = a data structure that can hold multiple values
//        values are accessed by an index number
//        "kind of like a variable that holds multiple values"
//          an array should contain values with the same data type

int main()
{
//    std::string cars[] = {"Corvette", "Mustang", "Camry"};
//    cout << cars << "\n"; //Prints memory address where our array is located
//    cout << cars[0] << "\n"
//         << cars[1] << "\n"
//         << cars[2] << "\n\n";
//
//    cars[0] = "Camaro";

//    std::string cars[3]; //Create an empty array

    double prices [] = {5.00, 7.50, 9.99, 15.00};
    cout << prices[0] << "\n"
         << prices[1] << "\n"
         << prices[2] << "\n"
         << prices[3] << "\n";

    return 0;
}
*/

//SIZEOF() OPERATOR
/*
//sizeof() = determines the size in bytes of a:
//        variable, data type, class, objects, etc.
int main()
{
    double gpa = 2.5;
    cout << sizeof(gpa) << " bytes\n";

    std::string name = "Bro code is awsome";
    cout << sizeof(name) << " bytes.\n"; //A string is a reference data type

    char grade = 'F';
    cout << sizeof(grade) << " bytes.\n";

    bool student  = true;
    cout << sizeof(bool) << " bytes.\n";

    char grades[] = {'A', 'B', 'C', 'D', 'E', 'F'};
    cout << sizeof(grades) << " bytes.\n"; //5 elements * (# of bytes of a char) = 1 * 5 = 5 bytes
    cout << sizeof(grades) / sizeof(char) << " elements.\n"; //Finding the number of elements in an array.

    std::string students[] = {"Spongebob", "Patrick", "Squidward", "Sandy"};
    cout << sizeof(students) / sizeof(std::string) << " elements.\n";


    return 0;
}
 */

//ITERATE OVER AN ARRAY
/*
int main()
{
//    std::string students[] = {"Spongebob", "Patrick", "Squidward", "Sandy"};

    char grades[] = {'A', 'B', 'C', 'D', 'F'};

    for(int i = 0; i < sizeof(grades)/sizeof(char); i++)
    cout << grades[i] << "\n";


//    for(int i = 0; i < sizeof(students)/sizeof(std::string); i++)
//        cout << students[i] << "\n";

    return 0;
}
*/

//FOREACH LOOP
/*
//foreach loop = loop that eases the traversal over an
//               iterable data set
int main()
{
//    std::string students[] = {"Spongebob", "Patrick", "Squidward", "Sandy"};
    int grades[] = {65, 72, 81, 93};

    for(int grade: grades)
        cout << grade << "\n";

//    for(std::string student: students)
//        cout << student << "\n";


    return 0;
}
*/

//PASS ARRAY TO A FUNCTION
/*
double get_total(double prices[], int size);

double get_total(double prices[], int size) //The parameter that is an "array" is actually an pointer to the array
{
    double total = 0;

    for (int i = 0; i < size; i++)
        total += prices[i];

    return total;
}

int main()
{
    double prices[] = {49.99, 15.05, 75.00, 9.99};
    int size = sizeof(prices) / sizeof(double);

    double total = get_total(prices, size);

    cout << "$" << total << "\n";

    return 0;
}
*/

//SEARCH AN ARRAY FOR AN ELEMENT
/*
int search_array(int array[], int size, int element);
int search_array_food(int array[], int size, std::string element);


int search_array(int array[], int size, int element)
{
    for(int i=0; i< size; i++) //linear search
    {
        if(array[i] == element)
            return i;
    }

    return -1; //Serves as a sentinel value.
}

int search_array_food(std::string array[], int size, std::string element)
{
    for(int i=0; i< size; i++) //linear search
    {
        if(array[i] == element)
            return i;
    }

    return -1; //Serves as a sentinel value.
}


int main()
{
//    int numbers[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
//    int size = sizeof(numbers)/sizeof(int);
//    int index, my_num;
//
//    cout << "Enter element to search for: \n";
//    cin >> my_num;
//
//    index = search_array(numbers, size, my_num);
//
//    if(index != -1)
//        cout << my_num << " is at " << index << "\n";
//    else
//        cout << my_num << " is not in the array.\n";

    std::string foods[] = {"pizza", "hamburger", "hotdog"};
    int size = sizeof(foods)/sizeof(std::string);
    int index;
    std::string my_food;

    cout << "Enter element to search for: \n";
    std::getline(cin, my_food);

    index = search_array_food(foods, size, my_food);

    if(index != -1)
        cout << my_food << " is at " << index << "\n";
    else
        cout << my_food << " is not in the array.\n";



    return 0;
}
*/

//SORT AN ARRAY
/*

void sort(int array[], int size);
void sort_descend(int array[], int size);

void sort(int array[], int size) //bubble sort
{
    int temp;

    for(int i=0; i<size-1; i++)
    {
        for(int j=0; j < size-i-1; j++)
        {
            if(array[j] > array[j+1])
            {
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}

void sort_descend(int array[], int size)
{
    int temp;

    for (int i = 0; i < size-1; i++)
    {
        for(int j=0; j<size-i-1; j++)
        {
            if(array[j] < array[j+1])
            {
                temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }

}


int main()
{
    int array[] = {10, 1, 9, 2 ,8, 3, 7, 4, 6, 5};
    int size = sizeof(array)/sizeof(int);

    sort(array, size);

//    sort_descend(array, size);

    for(int element: array)
        cout << element << " ";


    return 0;
}
*/

//FILL() FUNCTION
/*
//fill() = fills a range of elements with a specified value
//        fill(begin, end, value)
int main()
{

//    const int SIZE = 100;
//    std::string foods[SIZE];
//    fill(foods, foods+(SIZE/2), "pizza");
//    fill(foods+(SIZE/2), foods+SIZE, "hamburger");
//
//    for(std::string food: foods)
//    {
//        cout << food << "\n";
//    }

    //Fill an array "foods" where a third of elemetns are pizza, another third of elements are hamburger, and the last third is hot dogs
    const int SIZE = 99;
    std::string foods[SIZE];
    fill(foods, foods+(SIZE/3), "pizza");
    fill(foods+(SIZE/3), foods+(SIZE/3)*2, "hamburger");
    fill(foods+(SIZE/3)*2, foods+SIZE, "hot dogs");


    for(std::string food: foods)
    {
        cout << food << "\n";
    }


    return 0;
}
*/

//FILL AN ARRAY WITH USER INPUT
/*
int main()
{
    std::string foods[5]; //Arrays are static, you can't change the size dynamically
    int size = sizeof(foods)/sizeof(std::string);
    std::string temp;

    for(int i=0; i<=size-1; i++)
    {
        cout<< "Enter a food you like or 'q' to quit # " << i+1 << ": ";
        std::getline(cin,temp);
        if(temp == "q")
            break;
        else
            foods[i] = temp;
    }

    cout << "You like the following food:\n";

    for(int i=0; !foods[i].empty(); i++)
        cout << foods[i] << "\n";

    return 0;
}
*/

//MULTI DIMENSIONAL ARRAYS
/*
int main()
{
    std::string cars[][3] = {{"Mustang", "Escape", "F-150"},
                            {"Corvette", "Equinox", "Silverado"},
                            {"Challenger", "Durango", "RAM 1500"}};

//    cout << cars[0][0] << " ";
//    cout << cars[0][1] << " ";
//    cout << cars[0][2] << " " << "\n";
//    cout << cars[1][0] << " ";
//    cout << cars[1][1] << " ";
//    cout << cars[1][2] << " " << "\n";
//    cout << cars[2][0] << " ";
//    cout << cars[2][1] << " ";
//    cout << cars[2][2] << " " << "\n";

    int rows = sizeof(cars) / sizeof(cars[0]);
    int columns = sizeof(cars[0]) / sizeof(cars[0][0]);

    //Prints memory addresses, one for ach array.
    for (int i = 0; i < rows; i++)
    {
        cout << cars[i] << "\n";
    }
    cout << "\n";

    for(int i=0; i<rows; i++)
    {
        for(int j=0; j<columns; j++)
        {
            cout << cars[i][j] << " ";
        }
        cout << "\n";
    }


    return 0;
}
*/

//EXERCISE: QUIZ GAME
/*
int main()
{
    std::string questions[] = {"1. What year was C++ created?: ",
                               "2. Who invented C++?: ",
                               "3. What is the predecessor of C++?: ",
                               "4. Is the Earth flat?: "};

    std::string options[][4] = {{"A. 1969", "B. 1975", "C. 1985", "D. 1989"},
                                {"A. Guid van Rosum", "B. Bjarne Stroustrup", "C. John Carmack", "D. Mar Zuckerberg"},
                                {"A. C", "B. C+", "C. C--", "D. B++"},
                                {"A. Yes", "B. No", "C. Sometimes", "D. What's Earth?"}};

    char answer_key[] = {'C', 'B', 'A', 'B'};

    int size = sizeof(questions)/ sizeof(questions[0]);
    char guess;
    int score = 0;

    for(int i=0; i<size; i++)
    {
        cout << "*************************\n";
        cout << questions[i] << "\n";
        cout << "*************************\n";

        for(int j=0; j< sizeof(options[i])/sizeof(options[i][0]) ; j++)
        {
            cout << options[i][j] << "\n";
        }

        cin >> guess;
        guess = toupper(guess);

        if(guess == answer_key[i])
        {
            cout << "CORRECT\n";
            score++;
        }
        else
        {
            cout << "WRONG\n";
            cout << "Answer: " << answer_key[i] << "\n";
        }

    }
    cout << "*************************\n";
    cout << "*       RESULTS         *\n";
    cout << "*************************\n";
    cout << "CORRECT GUESSES: " << score << "\n";
    cout << "Number of questions " << size << "\n";
    cout << "SCORE: " << (score/(double)size)*100 << "%";

    return 0;
}
*/

//MEMORY ADDRESSES
/*
//memory address = a location in memeory where data is stored
//a memory address can accessed with & (address-of operator)
int main()
{
    std::string name = "Bro";
    int age = 21;
    bool student = true;

    cout << &name << "\n";
    cout << &age << "\n";
    cout << &student << "\n";


    return 0;
}
*/

//PASS BY VALUE VS PASS BY REFERENCE
/*
//pass by value = created copies of x & y
//pass by reference = passing memeory addresses where the x and y variables are located
void swap(std::string &x, std::string &y);

void swap(std::string &x, std::string &y)
{
    std::string temp;
    temp=x;
    x=y;
    y=temp;

}
int main()
{
    std::string x = "Kool-Aid";
    std::string y = "Water";
    swap(x, y);

    cout << "X: " << x << "\n";
    cout << "Y: " << y << "\n";



    return 0;
}
*/

//CONST PARAMETER
/*
//const-parameter = parameter that is effectively read-only
//                  Code is more secure & conveys intent to other programmers
//                  Useful for references and pointers

void print_info(const std::string &name, const int &age);

void print_info(const std::string &name, const int &age)
{
//    name = " ";
//    age = 0;

    cout << name << "\n";
    cout << age << "\n";

}

int main()
{
    std::string name = "Jeffin";
    int age = 21;

    print_info(name, age);

    return 0;
}
*/

//EXERCISE: CREDIT CARD VALIDATOR PROGRAM
/*
//Luhn Algorithm:
//1. Double every second digit from right to left. If doubled number is 2 digits, split them.
//2. Add all single digits from step 1.
//3. Add all odd numbered digits from right to left with the og number
//4. Sum results from steps 2 & 3.
//5. If step 4 is divisible by 10, # is valid

int get_digit(const int number);
int sum_odd_digits(const std::string card_number);
int sum_even_digits(const std::string card_number);

int get_digit(const int number)
{
    return (number % 10) + (number / 10 % 10); //Splitting double digit numbers and adding them
//    Ex: int number =18
//    number % 10
//    = 18 % 10
//    = 8
//
//    number / 10 % 10
//    = 18 / 10
//    = 1 % 10
//    = 1
//
//    8+1 = 9 -> 9 is returned
}

int sum_odd_digits(const std::string card_number)
{
    int sum = 0;
    for(int i=card_number.size()-1; i>=0; i-=2)
    {
        sum += get_digit(card_number[i] - '0');
    }

}

int sum_even_digits(const std::string card_number)
{
    int sum = 0;

    for(int i=card_number.size()-2; i>=0; i-=2)
    {
        sum += get_digit((card_number[i] - '0') * 2);  //" -'0' " will allow numbers 0-9 to be passed.
                                                       // Ex: character '9' is obtained. char '9' = 57 (decimal value).
                                                       // Since char '0' = 48 -> 57-48 = 9 -> the number 9 will be passed
    }

    return sum;
}

int main()
{
    std::string card_number;
    int result = 0;

    cout << "Enter a credit card number: ";
    cin >> card_number;

    result = sum_even_digits(card_number) + sum_odd_digits(card_number);

    if(result % 10 == 0)
        cout << card_number << " is valid";
    else
        cout << card_number << " is not valid";


    return 0;
}
*/

//POINTERS
/*
//pointers = variable that stores a memory address of another variable
//        ReasonL Sometimes it's easier to work with an address
//& address of operator
//  * dereference operator

int main()
{
    std::string free_pizzas[5] = {"pizza1", "pizza2", "pizza3", "pizza4", "pizza5"};
    std::string *p_free_pizzas = free_pizzas; //Array is already an address. Don't need & for creating pointers to arrays
    cout << *p_free_pizzas << "\n"; //Prints first element of pizza
    cout << p_free_pizzas << "\n"; //Prints address of free_pizzas

    int age = 21;
    int *p_age = &age;
    cout << *p_age << "\n";

    std::string name = "Jeffin";
    std::string *p_name = &name;
    cout << p_name << "\n"; //Prints memory address
    cout << *p_name << "\n"; //Prints value of address


    return 0;
}
 */

//NULL POINTERS
/*
//null value = a special value that means something has no value.
//            When a pointer is holding a null value, that pointer is not pointing at anything (null pointer)
//
//nullptr = keyword represents a null pointer literal
//
//nullptrs are helpful when determining if an address was successfully assigned to a pointer

//when using pointers, be careful that your code isn't
//de-referencing null or pointing to free memory
//this will cause undefined behaviour

int main()
{
    int *pointer = nullptr;
    int x = 123;

    pointer = &x;

    if(pointer == nullptr)
        cout << "Address was not assigned.";
    else
    {
        cout << "Address was assigned\n";
        cout << *pointer;
    }

    return 0;
}
*/

//EXERCISE: TIC-TAC-TOE GAME
/*
void draw_board(char *spaces);
void player_move(char *spaces, char player);
void computer_move(char *spaces, char player);
bool check_winner(char *spaces, char player, char computer);
bool check_tie(char *spaces, char player, char computer);


void draw_board(char *spaces)
{
    cout << "\n";
    cout << "     |     |     " << "\n";
    cout << "  " << spaces[0] << "  |  " << spaces[1] << "  |  " << spaces[2] << "   " << "\n";
    cout << "_____|_____|_____" << "\n";
    cout << "     |     |     " << "\n";
    cout << "  " << spaces[3] << "  |  " << spaces[4] << "  |  " << spaces[5] << "   " << "\n";
    cout << "_____|_____|_____" << "\n";
    cout << "     |     |     " << "\n";
    cout << "  " << spaces[6] << "  |  " << spaces[7] << "  |  " << spaces[8] << "   " << "\n";
    cout << "     |     |     " << "\n";
    cout << "\n";

}

void player_move(char *spaces, char player)
{
    int number;
    do
    {
        cout << "Enter a spot to place a marker (1-9): ";
        cin >> number;
        number--;
        if(spaces[number] == ' ')
        {
            spaces[number] = player;
            break;
        }

    }while(!number > 0 || !number < 8);
}

void computer_move(char *spaces, char computer)
{
    int number;
    srand(time(nullptr));

    while(true)
    {
        number = rand() % 9; //[0-8]

        if(spaces[number] == ' ')
        {
            spaces[number] = computer;
            break;
        }

    }

}

bool check_winner(char *spaces, char player, char computer)
{
    if( (spaces[0] != ' ')  && (spaces[0] == spaces[1] && spaces[1] == spaces[2]) )
    {
        spaces[0] == player? cout << "YOU WIN!\n" : cout << "YOU LOSE!\n";
    }
    else if( (spaces[3] != ' ')  && (spaces[3] == spaces[4] && spaces[4] == spaces[5]) )
    {
        spaces[3] == player ? cout << "YOU WIN!\n" : cout << "YOU LOSE!\n";
    }
    else if( (spaces[6] != ' ')  && (spaces[6] == spaces[7] && spaces[7] == spaces[8]) )
    {
        spaces[6] == player ? cout << "YOU WIN!\n" : cout << "YOU LOSE!\n";
    }
    else if( (spaces[0] != ' ')  && (spaces[0] == spaces[3] && spaces[3] == spaces[6]) )
    {
        spaces[0] == player ? cout << "YOU WIN!\n" : cout << "YOU LOSE!\n";
    }
    else if( (spaces[1] != ' ')  && (spaces[1] == spaces[4] && spaces[4] == spaces[7]) )
    {
        spaces[1] == player ? cout << "YOU WIN!\n" : cout << "YOU LOSE!\n";
    }
    else if( (spaces[2] != ' ')  && (spaces[2] == spaces[5] && spaces[5] == spaces[8]) )
    {
        spaces[2] == player ? cout << "YOU WIN!\n" : cout << "YOU LOSE!\n";
    }
    else if( (spaces[2] != ' ')  && (spaces[2] == spaces[5] && spaces[5] == spaces[8]) )
    {
        spaces[2] == player ? cout << "YOU WIN!\n" : cout << "YOU LOSE!\n";
    }
    else if( (spaces[0] != ' ')  && (spaces[0] == spaces[4] && spaces[4] == spaces[8]) )
    {
        spaces[0] == player ? cout << "YOU WIN!\n" : cout << "YOU LOSE!\n";
    }
    else if( (spaces[2] != ' ')  && (spaces[2] == spaces[4] && spaces[4] == spaces[6]) )
    {
        spaces[2] == player ? cout << "YOU WIN!\n" : cout << "YOU LOSE!\n";
    }
    else
    {
        return false;
    }

    return true;
}

bool check_tie(char *spaces, char player, char computer)
{
    for(int i=0; i<9; i++)
    {
        if(spaces[i] == ' ')
            return false;
    }

    cout << "IT'S A TIE\n";
    return true;
}


int main()
{
    char spaces[9] = {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '};
    char player = 'X';
    char computer = 'O';
    bool running = true;

    draw_board(spaces);

    while(running)
    {
        player_move(spaces, player);
        draw_board(spaces);

        if(check_winner(spaces, player, computer))
        {
            running = false;
            break;
        }
        else if(check_tie(spaces, player, computer))
        {
            running = false;
            break;
        }

        computer_move(spaces, computer);
        draw_board(spaces);

        if(check_winner(spaces, player, computer))
        {
            running = false;
            break;
        }
        else if(check_tie(spaces, player, computer))
        {
            running = false;
            break;
        }


    }

    cout << "\nTHANKS FOR PLAYING!\n";

    return 0;
}
*/

//DYNAMIC MEMORY
/*
//dynamic memory = Memory that is allocated after the program
//                is already compiled & running.
//                Use the 'new' operator to allocate
//                memory in the heap rather than the stack
//
//                Useful when we don't know how much memory
//                we will need. Makes out programs more flexible,
//                especially when accepting user input.


int main()
{

//    int *p_num = NULL;
//    p_num = new int;
//
//    *p_num = 21;
//
//    cout << "Address: " << p_num << "\n";
//    cout << "Value: " << *p_num << "\n";
//
//    delete p_num; //Use to to avoid memory leak;

    char *p_grades = NULL;
    int size;
    cout << "How many grades to enter in: ";
    cin >> size;

    p_grades = new char[size];

    for(int i=0; i<size; i++)
    {
        cout << "Enter grade number " << i+1 << ": ";
        cin >> p_grades[i];
    }

    for(int i=0; i<size; i++)
    {
        cout << p_grades[i] << " ";
    }

    delete[] p_grades;

    return 0;
}
*/

//RECURSION
/*
//recursion = a programming technique where a function
//            invokes itself from within
//            break a complex concept in a repeatable single step
//
//(iterative ve recursive)
//
//advantages = less code and is clearer
//            useful for sorting and searching algorithms
//
//disadvantages = uses more memory
//                slower

void walk(int steps);
int factorial(int num);

void walk(int steps)
{
    if(steps > 0)
    {
        cout << "You take a step!\n";
        walk(steps-1);
    }

    //Stack overflow occurs for infinite loops
}

int factorial(int num)
{
   if(num > 1)
       return num * factorial(num-1);
   else
       return 1;
}


int main()
{
    //walk(100);
    cout << factorial(10);

    return 0;
}
 */

//FUNCTION TEMPLATES
/*
//function template = describes what a function look like.
//                    Can be used to generate as many overloaded functions
//                    as needed, each using different data types
//                    Ex: "It's like a cookie-cutter..."
//                    "Cookies are the same shape, but the dough can be different"


//int max(int x, int y)
//{
//    return (x>y) ? x : y;
//}
//
//double max(double x, double y)
//{
//    return (x>y) ? x : y;
//}
//
//char max(char x, char y)
//{
//    return (x > y) ? x : y;
//}


//Function Template definition
template <typename T, typename U> //Template parameter declaration with two different data types
auto max(T x, U y)
{
    return (x>y) ? x : y;
}



int main()
{
    cout << max(1, 2) <<"\n";
    cout << max(1.1, 2.1) <<"\n";
    cout << max('A', 'B') <<"\n";

    cout << max(1, 2.1) <<"\n"; //Passing two different data types

    return 0;
}
*/

//STRUCTS
/*
//struct = A structure that group related variables under one name
//        structs can contain many different data types (string, int, doubles, bool, etc.)
//        variables in a struct are known as "members"
//        members can be access with . "Class Member Access Operator"

struct student
{
    std::string name;
    double gpa;
    bool enrolled = true; //default value
};


int main()
{
    student student_1;
    student_1.name = "Spongebob";
    student_1.gpa = 3.2;
//    student_1.enrolled = true;

    student student_2;
    student_2.name = "Patrick";
    student_2.gpa = 2.1;
//    student_2.enrolled = true;

    student student_3;
    student_3.name = "Squidward";
    student_3.gpa = 1.5;
//    student_3.enrolled = false;


    cout << student_1.name << "\n";
    cout << student_1.gpa << "\n";
    cout << student_1.enrolled << "\n";

    cout << student_2.name << "\n";
    cout << student_2.gpa << "\n";
    cout << student_2.enrolled << "\n";

    cout << student_3.name << "\n";
    cout << student_3.gpa << "\n";
    cout << student_3.enrolled << "\n";


    return 0;
}
*/

//PASS STRUCTS AS ARGUMENTS
/*
struct Car
{
    std::string model;
    int year;
    std::string color;
};

void print_car(Car car);
void print_car_ref(Car &car);
void paint_car(Car &car, std::string color);

void print_car(Car car) //Passing a copy of struct (passing by value)
{
    cout << &car << "\n";
    cout << car.model << "\n";
    cout << car.year << "\n";
    cout << car.color << "\n";
    cout << "\n";
}

void print_car_ref(Car &car) //Passing by reference
{
    cout << &car << "\n";
    cout << car.model << "\n";
    cout << car.year << "\n";
    cout << car.color << "\n";
    cout << "\n";

}

void paint_car(Car &car, std::string color)
{
    car.color = color;
}

int main()
{
    Car car_1;
    Car car_2;

    car_1.model = "Mustang";
    car_1.year = 2023;
    car_1.color = "Red";

    car_2.model = "Corvette";
    car_2.year = 2024;
    car_2.color = "Blue";

    paint_car(car_1, "Silver");
    paint_car(car_2, "Gold");

    //print_car(car_1);
    print_car_ref(car_1);
    print_car_ref(car_2);

    return 0;
}
*/

//ENUMS
/*
//enums (enumerations) = a user-defined data type that consists
//                       of paired named-integer constants.
//                       GREAT if you have a set of potential options.


enum Day {sunday =0, monday=1, tuesday=2,
          wednesday=3, thursday=4, friday=5, saturday=6};

enum Flavor {vanilla, chocolate, strawberry, mint};

int main()
{
    //std::string today = "sunday";

//    switch(today) //You can't use strings for switch case
//    {
//        case "sunday":
//            cout << "It is Sunday!\n";
//            break;
//        case "monday":
//            cout << "It is Monday!\n";
//            break;
//        case "tuesday":
//            cout << "It is Tuesday!\n";
//            break;
//        case "wednesday":
//            cout << "It is Wednesday!\n";
//            break;
//        case "thursday":
//            cout << "It is Thursday!\n";
//            break;
//        case "friday":
//            cout << "It is Friday!\n";
//            break;
//        case "saturday":
//            cout << "It is Saturday!\n";
//            break;
//    }

    Day today = friday;

    switch(today) //You can't use strings for switch case
    {
        case sunday:
            cout << "It is Sunday!\n";
            break;
        case monday:
            cout << "It is Monday!\n";
            break;
        case tuesday:
            cout << "It is Tuesday!\n";
            break;
        case wednesday:
            cout << "It is Wednesday!\n";
            break;
        case thursday:
            cout << "It is Thursday!\n";
            break;
        case friday:
            cout << "It is Friday!\n";
            break;
        case saturday:
            cout << "It is Saturday!\n";
            break;
    }

    return 0;
}
*/

//OBJECT ORIENTED PROGRAMMING
/*
//object = A collection of attributes (characteristics) and methods
//        They can have characteristics and could perform actions
//        Can be used to mimic real world items (ex. Phone, Book, Dog)
//        Created from a class which acts as a "blue-print"


//class Human
//{
//    public:
//        std::string name = "Rick"; //Default attribute
//        std::string occupation;
//        int age;
//
//        void eat()
//        {
//            cout << "This person is eating.\n";
//        }
//
//        void drink()
//        {
//            cout << "This person is drinking.\n";
//        }
//        void sleep()
//        {
//            cout << "This person is sleeping.\n";
//        }
//};

class Car
{
    public:
        std::string make;
        std::string model;
        int year;
        std::string color;

        void accelerate()
        {
            cout << "You step on the gas.\n";
        }

        void brake()
        {
            cout << "You step on the breaks.\n";
        }

};


int main()
{
//    Human human_1;
//    human_1.occupation = "Scientist";
//    human_1.age = 70;
//
//    Human human_2;
//    human_2.occupation = "Student";
//    human_2.age = 15;
//
//
//    cout << human_1.name << "\n";
//    cout << human_1.occupation << "\n";
//    cout << human_1.age << "\n";
//
//    human_1.eat();
//    human_1.drink();
//    human_1.sleep();
//
//    cout << "\n";
//
//    cout << human_2.name << "\n";
//    cout << human_2.occupation << "\n";
//    cout << human_2.age << "\n";
//
//    human_2.eat();
//    human_2.drink();
//    human_2.sleep();

    Car car_1;

    car_1.make = "Ford";
    car_1.model = "Mustang";
    car_1.year = 2023;
    car_1.color = "silver";

    cout << car_1.make << "\n";
    cout << car_1.model << "\n";
    cout << car_1.year << "\n";
    cout << car_1.color << "\n";

    car_1.accelerate();
    car_1.brake();


    return 0;
}
*/

//CONSTRUCTORS
/*
//constructor = special method that is automatically called when an object is instantiated
//              Useful for assigning values to attributes as arguments

//class Student
//{
//    public:
//        std::string name;
//        int age;
//        double gpa;
//
//    //Declare a constructor
//    Student(std::string name, int age, double gpa)
//    {
//        this->name = name;
//        this->age = age;
//        this ->gpa = gpa;
//    }
//};

class Car
{
    public:
        std::string make;
        std::string model;
        int year;
        std::string color;

    Car(std::string make, std::string model, int year, std::string color)
    {
        this->make = make;
        this->model = model;
        this->year = year;
        this->color = color;
    }

    public:
        void print_attributes()
        {
            cout << "Make: " << this->make << "\n";
            cout << "Model: " << this->model << "\n";
            cout << "Year: " << this->year << "\n";
            cout << "Color: " << this->color << "\n";
            cout << "\n";
        }

};


int main()
{
//    Student student_1("Spongebob", 25, 3.2);
//    Student student_2("Patrick", 40, 1.5);
//    Student student_3("Sandy", 21, 4.0);
//
//    cout << student_1.name << "\n";
//    cout << student_1.age << "\n";
//    cout << student_1.gpa << "\n";
//
//    cout << student_2.name << "\n";
//    cout << student_2.age << "\n";
//    cout << student_2.gpa << "\n";
//
//    cout << student_3.name << "\n";
//    cout << student_3.age << "\n";
//    cout << student_3.gpa << "\n";


    Car car_1("Chevy", "Corvette", 2022, "blue");
    car_1.print_attributes();

    Car car_2("Ford", "Mustang", 2023, "red");
    car_2.print_attributes();

    return 0;
}
*/

//CONSTRUCTOR OVERLOADING
/*
//overloaded constructors = multiple constructors w/ same name but different parameters
//                          Allows for varying arguments when instantiating an object

class Pizza
{
    public:
        std::string topping_1;
        std::string topping_2;

    Pizza()
    {

    }

    Pizza(std::string topping_1)
    {
        this->topping_1 = topping_1;
    }

    Pizza(std::string topping_1, std::string topping_2)
    {
        this->topping_1 = topping_1;
        this->topping_2 = topping_2;
    }

};

int main()
{
    Pizza pizza_1("pepperoni");
    Pizza pizza_2("mushrooms", "peppers");
    Pizza pizza_3;

    cout << pizza_1.topping_1 << "\n";

    cout << pizza_2.topping_1 << "\n";
    cout << pizza_2.topping_2 << "\n";


    return 0;
}
*/

//GETTER & SETTERS
/*
//Abstraction = hiding unnecessary data from outside a class
//getter = A public function that makes a private attribute READABLE
//setter = A public function that makes a private attribute WRITABLE

class Stove
{
    private: //No longer have acess to thi temperature attirbute
        int temperature = 0;
    public:
        Stove(int temperature) //Creating a constructor that passes a tmperature, and calls the get_temperature method
        {
            set_temperatrue(temperature);
        }

        int get_temperature()
        {
            return temperature;
        }

        void set_temperatrue(int temperature)
        {
            if(temperature < 0)
                this->temperature = 0;
            else if(temperature >= 10)
                this->temperature = 10;
            else
                this->temperature = temperature;
        }

};

int main()
{
//    Stove stove;
//    stove.temperature = 1000000; //You can do this when the attribute is public. You can't do this when its private.
//    cout << "The temperature setting is: " << stove.temperature << "\n";

//    cout << "The temperature setting is: " << stove.get_temperature() << "\n";
//    stove.set_temperatrue(5);
//    cout << "The temperature setting is: " << stove.get_temperature() << "\n";

    Stove stove(5);
    cout << "The temperature setting is: " << stove.get_temperature() << "\n";


    return 0;
}
*/

//INHERITANCE
/*
//inheritance = A class can receive atriutes and methods from another class
//              Children classes inherit from a Parent class
//              Helps to resuse similar code found within multiple classes

//class Animal
//{
//    public:
//        bool alive = true;
//
//        void eat()
//        {
//            cout << "This animal is eating\n";
//        }
//
//};
//
//class Dog : public Animal //Child class of animal
//{
//    public:
//        void bark()
//        {
//            cout << "The dog goes woof\n";
//        }
//
//};
//
//class Cat : public Animal
//{
//    public:
//        void meow()
//        {
//            cout << "The cat goes meow\n";
//        }
//
//};


class Shape
{
    public:
        double area;
        double volume;
};

class Cube : public Shape
{
    public:
        double side;

        Cube(double side)
        {
            this->side = side;
            this->area = this->side * this->side * 6;
            this->volume = this->side * this->side * this->side;
        }

        void display_cube_atts()
        {
            cout << "Area of cube: " << this->area << "cm^2\n";
            cout << "Volume of cube: " << this->volume << "cm^3\n\n";
        }
};

class Sphere : public Shape
{
    public:
        double radius;

        Sphere(double radius)
        {
            this->radius = radius;
            this->area = 4 * 3.14159 * pow(this->radius, 2);
            this->volume = (4.0 / 3.0) * 3.14159 * pow(this->radius, 3);
        }

        void display_cube_atts()
        {
            cout << "Area of " << this->area << "cm^2\n";
            cout << "Volume: " << this->volume << "cm^3\n\n";
        }


};

int main()
{
//    Dog dog;
//    Cat cat;
//
//    cout << dog.alive << "\n";
//    dog.eat();
//    dog.bark();
//    cout << "\n";
//
//    cout << cat.alive << "\n";
//    cat.eat();
//    //cat.bark(); //Can;t use it since the Cat class doesn't have a bark() method.
//    cat.meow();

    Cube cube(10);
    cube.display_cube_atts();

    Sphere sphere(5);
    sphere.display_cube_atts();



    return 0;
}
*/

