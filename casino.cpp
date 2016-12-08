#include<iostream> 
#include<iomanip>
#include<string>
using namespace std;



class Dice {
public:
	int die1, die2, result;
	string topDice, midDice, botDice, rollA, rollB, rollC, rollAC;
	Dice();
	void blankDice();
	void diceRoll ();
	void diceDislpay(int, int);
};

	 Dice::Dice() {

	topDice       =" _____ ";
	//placeholder ="|     |";
    midDice       ="|     |";
	//placeholder ="|     |";
	botDice       =" ----- ";

	rollA         ="|    0|";
	rollB         ="|  0  |";
	rollC         ="|0    |";
	rollAC        ="|0   0|";

	die1 = 0;
	die2 = 0;
	result = 0;

}

	void Dice::blankDice() {

	cout <<"Die #1"<< endl;
	cout << topDice << endl;
	cout << midDice << endl;
	cout << midDice << endl;
	cout << midDice << endl;
	cout << botDice << endl;
	cout << "Die #2" << endl;
	cout << topDice << endl;
	cout << midDice << endl;
	cout << midDice << endl;
	cout << midDice << endl;
	cout << botDice << endl;
}
	void Dice::diceRoll()	{

	die1 = rand() % 6 + 1;
	die2 = rand() % 6 + 1;
	result = die1 + die2;

}
	void Dice::diceDislpay(int d1,int d2) {
		
		cout << topDice << endl;
	
		if (d1 == 1) { 
					cout << midDice << endl;
					cout << rollB << endl;
					cout << midDice << endl;
		}
		
		else if (d1 == 2){
					cout << rollA << endl;
					cout << midDice << endl;
					cout << rollC << endl;
		}

		else if (d1 == 3) { 
					cout << rollA << endl;
					cout << rollB << endl;
					cout << rollC << endl;
		}	

		else if (d1 == 4){
					cout << rollAC << endl;
					cout << midDice << endl;
					cout << rollAC << endl;
		}
							
		else if (d1 == 5){
					cout << rollAC << endl;
					cout << rollB << endl;
					cout << rollAC << endl;
		}
					

		else if (d1 ==6){ 
					cout << rollAC << endl;
			        cout << rollAC << endl;
					cout << rollAC << endl;
		}
		cout << botDice << endl;
		cout << d1 << " & " << d2 << endl;
		cout << topDice << endl;
		
			if (d2 == 1) { 
					cout << midDice << endl;
					cout << rollB << endl;
					cout << midDice << endl;
		}
		
		else if (d2 == 2){
					cout << rollA << endl;
					cout << midDice << endl;
					cout << rollC << endl;
		}

		else if (d2 == 3) { 
					cout << rollA << endl;
					cout << rollB << endl;
					cout << rollC << endl;
		}
					
		else if (d2 == 4){
					cout << rollAC << endl;
					cout << midDice << endl;
					cout << rollAC << endl;
		}
			
		else if (d2 == 5){
					cout << rollAC << endl;
					cout << rollB << endl;
					cout << rollAC << endl;
		}
					
		else if (d2 ==6){ 
					cout << rollAC << endl;
			        cout << rollAC << endl;
					cout << rollAC << endl;
		}
		cout << botDice << endl;
		cout << "You rolled " << result << endl;	
	}

class Table {
public:
	Table();
	void blankTable();
	void tableMaker(bool, int, int, int);
	string top, middle, bottom, middleNum, off, fourOn, fiveOn, sixOn, eightOn, nineOn, tenOn, passLine, passBot, freeOdds;
	int hundredDollars, passLineValue, freeOddsValue;
	bool phase;
};

	Table::Table () {
	
	top            ="_____________________________________";
	middle         ="|     |     |     |     |     |     |";
	middleNum      ="|  4  |  5  |  6  |  8  |  9  |  10 |";
	//placeholder  ="|     |     |     |     |     |     |";
	off            ="|{OFF}|{OFF}|{OFF}|{OFF}|{OFF}|{OFF}|";
	bottom         ="|_____|_____|_____|_____|_____|_____|";
	//placeholder  ="_____________________________________";
	passLine       ="|            PASS LINE              |";  
	//placeholder  ="              value                  ";
	passBot        ="|___________________________________|";
	freeOdds       ="Free odds bets: "                     ;
	//On modifiers
	fourOn         ="| {ON}|     |     |     |     |     |";
	fiveOn         ="|     | {ON}|     |     |     |     |";
	sixOn          ="|     |     | {ON}|     |     |     |";
	eightOn        ="|     |     |     | {ON}|     |     |";
	nineOn         ="|     |     |     |     | {ON}|     |";
	tenOn          ="|     |     |     |     |     | {ON}|";

	hundredDollars = 100;
	phase = false;
	passLineValue = 0;
	freeOddsValue = 0;
}

	void Table::tableMaker(bool onOff, int pointNum, int pass, int odds) {
		cout << top << endl;
		cout << middle << endl;
		cout << middleNum << endl;
		cout << middle << endl;
		if (onOff == false) { cout << off << endl; }
		else {
			if (pointNum == 4) { cout << fourOn << endl;}
			else if (pointNum == 5) {cout << fiveOn << endl;}
			else if (pointNum == 6) {cout << sixOn << endl;}
			else if (pointNum == 8) {cout << eightOn << endl;}
			else if (pointNum == 9) {cout << nineOn << endl;}
			else if (pointNum == 10) {cout << tenOn << endl;}
		
		}
		cout << bottom << endl;

		cout << top << endl;
		cout << passLine << endl;
		cout << "		$" << pass << endl;
		cout << passBot << endl;
		cout << freeOdds << "$" << odds << endl;
	}

	void Table::blankTable () {

	cout << top << endl;
	cout << middle << endl;
	cout << middleNum << endl;
	cout << middle << endl;
	cout << off << endl;
	cout << bottom << endl;
	cout << top << endl;
	cout << passLine << endl << endl;
	cout << passBot << endl;
	cout << "Free odds:" << endl << endl;
	
	}

	int main () {

	char name[12];
	int Chip = 1000;
	bool onOff = false;
	Table table1;
	srand (time(NULL));
	Dice diceOne;
	
	
	cout << "Welcome to Mini Craps!" << endl;
	cout << "Please type in your name:" << endl;
	cin >> name;
	cout << "Welcome to the table, " << name << "!" << endl << endl;
	table1.blankTable();
	diceOne.blankDice();
	diceOne.diceRoll();
	diceOne.diceDislpay(diceOne.die1, diceOne.die2);
	table1.tableMaker(true, diceOne.result, 10, 30);
	diceOne.diceRoll();
	diceOne.diceDislpay(diceOne.die1, diceOne.die2);
	

	system("PAUSE");
}