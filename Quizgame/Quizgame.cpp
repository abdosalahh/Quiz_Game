#include <iostream>
#include<fstream>
#include<algorithm>
#include<string>

using namespace std;


void sports_field()
{
    fstream sports;
    sports.open("Sports.txt", ios::out);
    sports << "First round questions .\n\n";
    sports << "what is the color of AL AHLY T-shirt?\na.green\nb.red\nc.white\nd.yellow \n";
    sports << "The right answer is 'b'\n";
    sports << "what is MOHAMED SALAH's nationality ?\na.EGYPTION\nb.RUSSIAN\nc.AMERICAN\nd.SPANISH\n";
    sports << "The right answer is 'a'\n";
    sports << "what sport does THE BIG RAMY famous of?\na.golf\nb.football\nc.tennis\nd.bodybuilding\n";
    sports << "The right answer is 'd'\n";
    sports << "sports make you....\na.fit\nb.lazy\nc.week\nd.angry\n";
    sports << "The right answer is 'a'\n\n";
    sports << "Second round questions .\n\n";
    sports << "Messi t_shirt's number is ?\na.9\nb.10\nc.11\nd.12\n";
    sports << "The right answer is 'b'\n";
    sports << "Who is the world championship in tennis in 2019 ?\na.Rafael Nadal\nb.Novak Djokovic\nc.Kevin Anderson\nd.Andy Murray\n";
    sports << "The right answer is 'a'\n";
    sports << "How many UCL titles does Real Madrid have ?\na.10\nb.13\nc.12\nd.13\n";
    sports << "The right answer is 'd'\n";
    sports << "De Bryune t_shirt's number is ?\na.14\nb.15\nc.16\nd.17\n";
    sports << "The right answer is 'd'\n\n";
    sports.close();
}
void math_field()
{
    fstream math;
    math.open("Math.txt", ios::out);
    math << "First round questions .\n\n";
    math << "what is the derivative of (3x^2)?\na.12\nb.6x\nc.2c\nd.x^2\n";
    math << "The right answer is 'b'\n";
    math << "what is the integration of 6 dx ?\na.6x\nb.5x\nc.23\nd.6\n";
    math << "The right answer is 'a'\n";
    math << "calculate : 3*4? \na.7\nb.32\nc.6\nd.12\n";
    math << "The right answer is 'd'\n";
    math << "calculate 15/3 \na.5\nb.4\nc.10\nd.3\n";
    math << "The right answer is 'a'\n\n";
    math << "Second round questions .\n\n";
    math << "What is the deravative of x^3 + 9?\na.x^2\nb.3x^3\nc.3x^2\nd.3x^2+9\n";
    math << "The right answer is 'c'\n";
    math << "What is the integration of 3x^2 + 9?\na.x+9\nb.x^2+9\nc.6d\nd.x^3+9x\n";
    math << "The right answer is 'd'\n";
    math << "The area of Rectangle which it's L=4 and W=3?\na.10\nb.12\nc.7\nd.9\n ";
    math << "The right answer is 'b'\n";
    math << "This (7 * 10) / 2  give us ?\na.30\nb.35\nc.40\nd.45\n";
    math << "The right answer is 'b'\n\n";
    math.close();
}
void science_field()
{
    fstream science;
    science.open("Science.txt", ios::out);
    science << "First round questions .\n\n";
    science << "who discovered the law of gravity?\na.Einestine\nb.Newton\nc.Ahmed Zweil\nd.Ebn Batota\n";
    science << "The right answer is 'b'\n";
    science << "protons of the atom is..?\na.positively charged\nb.negatively charged\nc.neutral\nd.no correct answer\n";
    science << "The right answer is 'a'\n";
    science << "is there gravity in the space? \na.yes\nb.maybe\nc.not discovered yet\nd.no there isn't\n";
    science << "The right answer is 'd'\n";
    science << "1 K.G is equal to\na.1000g\nb.100g\nc.10g\nd.200g\n";
    science << "The right answer is 'a'\n\n";
    science << "Second round questions .\n\n";
    science << "What is the chemical name of Aluminum ? \na.Al\nb.A\nc.L\nd.M\n";
    science << "The right answer is 'a'\n";
    science << "What is the chemical name of the element iron?\na.Fe\nb.F\nc.H\nd.E\n";
    science << "The right answer is 'a'\n";
    science << "What is the atomic number of the element gold ?\na.23\nb.79\nc.42\nd.3\n";
    science << "The right answer is 'b'\n";
    science << "What is the atomic number of the element Lithium ?\na.1\nb.2\nc.3\nd.4\n";
    science << "The right answer is 'c'\n\n";
    science.close();

}

struct player
{
    string name;
    int    score;
};

player p[100];
int i;

void sports_question();
void math_question();
void science_question();

void more_sports_question();
void more_math_question();
void more_science_question();

void question(string question, string a, string b, string c, string d, char correct_answer);

bool compare(player a, player b)
{
    if (a.score > b.score)
        return 1;
    else
        return 0;
}



int main()
{
    sports_field();
    science_field();
    math_field();

    int nump;
    cout << "\n\n\n\t\t\t\t\t*WELCOME TO THE QUIZE GAME*\n";
    cout << "\t\t\t\t\t---------------------------\n\n";
    cout << "\n\n\n\t\t\t\t\t*ENTER THE NUMBER OF PLAYERS....";
    cin >> nump;
    for (i = 0; i < nump; i++)
    {
        system("cls");
        cout << "\n\n\t\t\t\t\t*PLAYER NUM \"" << i + 1 << "\" ENTER YOU NAME PLEASE....";
        cin >> p[i].name;
        int choise;
        cout << "\n*PRESS....\n\n" << "\"1\" FOR SPORTS QUESTIONS\n"
            << "\"2\" FOR MATH QUESTIONS\n" << "\"3\" FOR SCIENCE QUETIONS\\n\n";
        cin >> choise;
        if (choise == 1)
        {
            sports_question();

        }


        else if (choise == 2)
        {
            math_question();

        }


        else if (choise == 3)
        {
            science_question();

        }

        if (p[i].score >= 3 && choise == 1)

        {
            more_sports_question();

        }
        else if (p[i].score >= 3 && choise == 2)
        {
            more_math_question();

        }
        else if (p[i].score >= 3 && choise == 3)
        {
            more_science_question();

        }

        cout << "\n\n\n\n";


    }

    cout << "*THE HIGHEST SCORES ARE :" << "\n";
    sort(p, p + nump, compare);
    fstream scores;
    scores.open("Scores.txt", ios::out);
    scores << "THE HIGHEST SCORES ARE :\n";
    for (int j = 0; j < nump; j++)
    {
        scores << p[j].name << " : " << p[j].score << endl;

        cout << p[j].name << " : " << p[j].score << endl;
    }
    scores.close();

    return 0;
}



void question(string question, string a, string b, string c, string d, char correct_answer)
{
    cout << question << "\n";
    cout << "A. " << a << "\n";
    cout << "B. " << b << "\n";
    cout << "C. " << c << "\n";
    cout << "D. " << d << "\n\n";
    char answer;
    cin >> answer;
    cout << "\n\n";
    if (answer == correct_answer)
        p[i].score += 1;

}


void sports_question()
{
    system("cls");
    for (int i = 0; i < 4; i++)
    {

        switch (i)
        {
        case 0:
            question("what is the color of AL AHLY T-shirt?", "green", "red", "white", "yellow", 'b');
            break;

        case 1:
            question("what is MOHAMED SALAH's nationality ?", "EGYPTION", "RUSSIAN", "AMERICAN", "SPANISH", 'a');
            break;

        case 2:
            question("what sport does THE BIG RAMY famous of? ", "golf", "football", "tennis", "body buildig", 'd');
            break;

        case 3:
            question("sports make you....", "fit", "lazy", "week", "angry", 'a');
            break;



        }
    }
}



void math_question()
{
    system("cls");
    for (int i = 0; i < 4; i++)
    {

        switch (i)
        {
        case 0:
            question("what is the derivative of (3x^2)?", "12", "6x", "2x", "x^2", 'b');
            break;

        case 1:
            question("what is the integration of 6 dx ?", "6x", "5x", "23", "6", 'a');
            break;

        case 2:
            question("calculate : 3*4? ", "7", "32", "6", "12", 'd');
            break;

        case 3:
            question("calculate 15/3", "5", "4", "10", "3", 'a');
            break;



        }
    }
}

void science_question()
{
    system("cls");
    for (int i = 0; i < 4; i++)
    {

        switch (i)
        {
        case 0:
            question("who discovered the law of gravity?", "Einestine", "Newton", " Ahmed Zweil", "Ebn Batota", 'b');
            break;

        case 1:
            question("protons of the atom is..?", "positively charged", "negatively charged", "neutral", "no correct answer", 'a');
            break;

        case 2:
            question("is there gravity in the space? ", "yes", "maybe", "not discovered yet", "no there isn't", 'd');
            break;

        case 3:
            question("1 K.G is equal to", "1000g", "100g", "10g", "200g", 'a');
            break;



        }
    }
}







void more_sports_question()
{

    system("cls");
    cout << "\n\n\n\t\t\t\t\t\tGOOD JOB " << p[i].name << " YOU ARE QUALIFIED TO THE SECOND LEVEL " << "\n\n";
    for (int i = 0; i < 4; i++)
    {

        switch (i)
        {
        case 0:
            question("Messi t_shirt's number is ?", "9", "10", "11", "12", 'b');
            break;

        case 1:
            question("Who is the world championship in tennis in 2019 ?", "Rafael Nadal", "Novak Djokovic", "Kevin Anderson", "Andy Murray", 'a');
            break;

        case 2:
            question(" How many UCL titles does Real Madrid have ? ", "10", "11", "12", "13", 'd');
            break;

        case 3:
            question("De Bryune t_shirt's number is ?", "14", "15", "16", "17", 'd');
            break;


        }
    }

}
void more_math_question()
{

    system("cls");
    cout << "/n/n\t\t\t\t\tGOOD JOB " << p[i].name << " YOU ARE QUALIFIED TO THE SECOND LEVEL " << "\n\n";
    for (int i = 0; i < 4; i++)
    {

        switch (i)
        {
        case 0:
            question("What is the deravative of x^3 + 9?", "x^2", "3x^3", "3x^2", "3x^2 + 9", 'c');
            break;

        case 1:
            question("What is the integration of 3x^2 + 9?", "x+9", "x^2 + 9", "6x", "x^3+9x", 'd');
            break;

        case 2:
            question("The area of Rectangle which it's L=4 and W=3? ", "10", "12", "7", "9", 'b');
            break;

        case 3:
            question("This (7 * 10) / 2  give us ?", "35", "30", "40", "45", 'a');
            break;
        }
    }
}


void more_science_question()
{

    system("cls");
    cout << "/n/n\t\t\t\t\tGOOD JOB " << p[i].name << " YOU ARE QUALIFIED TO THE SECOND LEVEL " << "\n\n";
    for (int i = 0; i < 4; i++)
    {

        switch (i)
        {
        case 0:
            question("What is the chemical name of Aluminum ?", "Al", "A", "L", "M", 'a');
            break;

        case 1:
            question("What is the chemical name of the element iron?", "Fe", "F", "H", "E", 'a');
            break;

        case 2:
            question("What is the atomic number of the element gold ?", "23", "79", "42", "3", 'b');
            break;

        case 3:
            question("What is the atomic number of the element Lithium ?", "1", "2", "3", "4", 'c');
            break;



        }
    }
}

