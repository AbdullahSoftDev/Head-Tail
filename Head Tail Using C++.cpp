//uC=(user Choice)
//aT=(actual Toss)
//uO=(user Option)
//uS=(user Score)
//cS=(computer Score)
//uShot=(user Shot)
//cShot=(computer Shot)
//uB=(user Ball)
//cB=(computer Ball)
#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
int main()
{
    srand(time(0));
    int uC, toss, uO;
    char playAgain;
	cout << " \t\t\t\t\t\033[1;32m============================================\033[0m" << endl;
	cout << " \t\t\t\t      \033[1;32m==|\033[0m" << "      Welcome to T20 World Cup 2024!      " << "\033[1;32m|==\033[0m" << endl;
	cout << " \t\t\t\t    \033[1;32m====|\033[0m" << "      This game is brought to you by      " << "\033[1;32m|====\033[0m" << endl;
	cout << " \t\t\t\t    \033[1;32m====|\033[0m" << "           Muhammad Abdullah!             " << "\033[1;32m|====\033[0m" << endl;
	cout << " \t\t\t\t      \033[1;32m==|\033[0m" << "       Abdullah Ghazi & Mirza Ahsan!      " << "\033[1;32m|====\033[0m" << endl;
	cout << " \t\t\t\t\t\033[1;32m============================================\033[0m" << endl;
    cout<<"					           Let's start with a toss"<<endl; 
	cout<<"					     Enter 0 for heads and 1 for tails: ";
    cin>>toss;
    int actualToss = rand() % 2;
    if(toss == actualToss)
	{
        cout<<"					You won the toss! Enter 1 to bat and 2 to bowl: ";
        cin>>uO;
    }
	else
	{
        cout<<"					Computer won the toss. Computer chose to bat." << endl;
        uO = 2;
    }
    int uS = 0, cS = 0;
    if (uO == 1)
	{
        cout << "						       You are batting." << endl;
        while (true)
		{
            int uShot;
            cout<<"						    Enter your shot (1-6): ";
            cin>>uShot;
            int cB = rand() % 7;
            cout << "		\033[1;32m=====================                                            =======================\033[0m" << endl;
            cout << "		| You played a    " << uShot << " |                                            | Computer bowled a " << cB << " |" << endl;
            cout << "		\033[1;32m=====================                                            =======================\033[0m" << endl;
            if (uShot == cB)
			{
                cout << "				    	    	You got out!" << endl;
                cout << "				    	    Your total score is " << uS << " runs." << endl;
                cout << endl;
                break;
            }
			else
			{
                uS += uShot;
                cout << "				    	    Your total score is " << uS << " runs." << endl;
            }
        }
        cout << "		Now it's computer's turn to bat." << endl;
        while (true)
		{
            int cShot = rand() % 7;
            int uB;
            cout << "		Enter your ball (1-6): ";
            cin >> uB;
            cout << "		\033[1;32m=======================                                          =======================\033[0m" << endl;
            cout << "		| Computer played a " << cShot << " |                                          | You bowled a " << uB << "      |" << endl;
            cout << "		\033[1;32m=======================                                          =======================\033[0m" << endl;
            if (cShot == uB)
			{
                cout << "		             	Computer got out!" << endl;
                cout << "				Computer's total score is " << cS << " runs." << endl;
                break;
            }
			else
			{
                cS += cShot;
                cout << "				Computer's total score is " << cS << " runs." << endl;
            }
            if (cS > uS)
			{
                cout << "	Computer won the game. Better luck next time!" << endl;
                break;
            }
        }
        if (uS > cS)
		{
            cout << "				You won the game! Congratulations!" << endl;
        }
    }
	else
	{
        cout << "						     Computer is batting." << endl;
        while (true)
		{
            int cShot = rand() % 7;
            int uB;
            cout << "					            Enter your ball (1-6): ";
            cin >> uB;
            cout << "		\033[1;32m=======================                                          =======================\033[0m" << endl;
            cout << "		| Computer played a " << cShot << " |                                          |    You bowled a " << uB << "   |" << endl;
            cout << "		\033[1;32m=======================                                          =======================\033[0m" << endl;
            if (cShot == uB)
			{
                cout << "					              Computer got out!" << endl;
                cout << "					      Computer's total score is " << cS << " runs." << endl;
                cout << endl;
                break;
            }
			else
			{
                cS += cShot;
                cout << "					      Computer's total score is " << cS << " runs." << endl;
            }
        }
        cout << endl;
        cout << "		Now it's your turn to bat." << endl;
        while (true)
		{
            int uShot;
            cout << "					            Enter your shot (1-6): ";
            cin >> uShot;
            int cB = rand() % 7;
            //when im bating second
            cout << "		\033[1;32m=====================                                            =======================\033[0m" << endl;
            cout << "		| You played a    " << uShot << " |                                            | Computer bowled a " << cB << " |" << endl;
            cout << "		\033[1;32m=====================                                            =======================\033[0m" << endl;
            if (uShot == cB)
			{
                cout << "			    		    	    	   You got out!" << endl;
                break;
            }
			else
			{
                uS += uShot;
                cout << "						   Your total score is " << uS << " runs." << endl;
            }
            if (uS > cS)
			{
                cout << "						 You won the game! Congratulations!" << endl;
                break;
            }
        }
        if (cS > uS)
		{
            cout << "					Computer won the game. Better luck next time!" << endl;
        }
    }
    cout << "Do you want to play again? (Y/N): ";
    cin >> playAgain;
    if (playAgain == 'Y' || playAgain == 'y') 
    {
        main();
    }
    return 0;
}
//"					           "
