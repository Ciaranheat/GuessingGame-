#include <iostream> 
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
  int num, guess, tries = 0;
  srand(time(0));
  num = rand() % 100 + 1; //Generates random number 
  std :: cout << "Guess My Number\n\n";//Title of game
  bool again = true;
  char input[4];
  while (again == true)
    {
      cout << "Enter a guess between 1 and 100:  " << endl; //Asks user for number 
      cin >> guess;
	tries++;

      if (guess > num)
	cout << "You guessed to high" << endl; //Tells user they gussed to high
      if (guess < num)
	cout << "You guessed to low" << endl ;//Tells user they guessed to low 
      if (guess == num){
	cout << "\nYou got it right, in " << tries << "guesses.\n " << endl; //Says they got it right
	cout << "Do you want to play again (Y/N)" << endl; //ask users if they want to play again
      cin >> input;
      }
    

    if(input[0] == 'N' || input[0] == 'n') { //Ends game if user says no and says thanks for playing 
    cout << "Thanks for playing";
      again = false; 
      }
    }
  return 0;
}


      
   
    
