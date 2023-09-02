#include <iostream>
#include <ctime> // for random seed
#include <cstdlib> // for rand() and srand()

using namespace std;

int roll(int numDice,int numSides,int tries){
	    // Seed the random number generator with the current time
    srand(static_cast<unsigned int>(time(0)));
    int total=0;


    // Roll the dice and display the results
  	for(int j = 0; j < tries; j++){  
  cout << "Rolling " << numDice << " " << numSides << "-sided dice..." << endl;
    for (int i = 0; i < numDice; ++i) {
        int roll = rand() % numSides + 1;
        cout << "Die " << i + 1 << ": " << roll << endl;
        total+=roll;
    }
  }
  cout<<"Score is ";
  return total;
}
//------------------------------main--------------------
int main() {
 	    int tries;
 	    int numPlayers=0;
 	    int numDice, numSides;
	cout << "Welcome to the Dice Rolling Simulator!" << endl;
	cout << "Number of participant: ";
	cin >> numPlayers;
	
	// Input the number of dice and sides per die
    cout << "Enter the number of dice: ";
    cin >> numDice;
    
    cout << "Enter the number of sides on each die: ";
    cin >> numSides;
    
    cout << "How many times you want to roll?" << endl;
cin >> tries;

    for(int i=1;i<=numPlayers;i++){
    	cout<<roll(numDice,numSides,tries)<<" for Player "<<i<<endl;
    	}
    return 0;
}
