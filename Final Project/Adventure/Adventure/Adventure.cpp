#include<iostream>
#include<string>
#include<iomanip>
#include<cstdlib>
#include<windows.h>

using namespace std;

int main()
{
	//Declares all variables used in the program
	int live = 1;
	int firewood = 0;
	const int LEAVE = 5;
	int stranger = 1;
	string ridOne;
	string ridTwo;
	string ridThree;
	int startup;
	int decOne;
	int decTwo;
	int expOne;
	int expTwo;
	int expThree;
	int expFour;
	int expFive;
	int expSix;
	int expSeven;
	int instruct;
	int num;
	int rid;
	int key;
start: //This is the goto start line. Only used in instructions at the bottom.

	cout << "                 SURVIVE                 " << endl;
	cout << "_________________________________________" << endl;
	cout << endl;													// This creates the GUI for the start of the game
	cout << endl;
	cout << "         1       [PLAY]                  " << endl;
	cout << "         2   [INSTRUCTIONS]              " << endl;
	cout << "         3       [QUIT]                  " << endl;
	cout << endl;
	cout << endl;
	cout << endl;

	cout << "Enter an Option Number: ";
	cin >> startup;
	system("CLS");
	switch (startup) {
	case 1: //In the event player chooses "Play" this case occurs (lines 39-41)
		cout << "You...are...alone..." << endl;
		cout << "Fatigued and weak, you wake up in the middle of a forest." << endl;
		cout << "You must make a choice: 1[Make a camp]  2[Explore the area]	" << endl;
		cin >> decOne;
		switch (decOne) {
		case 1: //In the event the user chooses "make a camp" this case occurs (option from line 53)
			system("CLS");
			cout << endl;
			cout << endl;
		Fireline: system("CLS");
			ridOne = "";
			ridTwo = "";
			ridThree = "";
			cout << "You make a small camp, with a one-person shelter, and a crude firepit." << endl;
			cout << endl;
			cout << "You have " << firewood << " firewood" << endl; //Displays the amount of firewood the user has, default is 0
			cout << endl;
			cout << "Now what? 1[Look for Food] 2[Light a Fire] 3[Collect Firewood] " << endl;
			cin >> decTwo;
			switch (decTwo) {
			case 1: //User chooses "look for food" this case occurs (option from line 68)
				cout << "You look for food...after a few hours, your efforts prove fruitless." << endl;
				cout << "You look around, suddenly with no sense of direction. You. Are. Lost." << endl;
				cout << "You havent eaten in days, your body gives out on you, it's the end for you this time...";
				break;
			case 2://User chooses "light a fire" this case occurs  (option from line 68)
				if (firewood >= 5) { // if the user has 5 firewood this if occurs (wood varriable changes in option three of  (option from line 68))
					system("CLS");
					cout << "You light a fire..." << endl;
					Sleep(2000);
					firewood -= 5;
					cout << "The smoke from the fire rises high into the air...someone might see it." << endl;
					cout << endl;
					cout << "After stoking the fire for a few hours you hear rustling in the woods around\n you." << endl;
					cout << "A strange group of people emerge, they speak English, and they tell you\n they have found safety." << endl;
					cout << endl;
					cout << "Confused, you follow them, they take you to a cave which has been transformed into an ";
					cout << "astounding underground compound, they all survived the Nuclear fallout.\nNow...you will too" << endl;
					Sleep(16000);
					system("CLS");
					cout << "						Congratulations!" << endl;
					cout << "You got the first ideal ending in SURVIVE." << endl;
					cout << "	Play again and select 'Explore the Area' to find the other ending!" << endl;
				} // if the firewood variable is not 5, this else occurs
				else {
					cout << "You need 5 firewood to light a fire." << endl;
					cout << endl;
					cout << endl;
					Sleep(2000);
					goto Fireline; //sends player back to line 60
				}
				break;
			case 3: //This case occurs if "collect firewood" is chosen  (option from line 68)
				srand(time(0));
				num = rand() % 8;
				if (num >= 2) { //Random chance to find firewood easily, or come across a harder version (harder version is in else of this statement)
					cout << "You found some firewood!" << endl;
					firewood++;
					cout << "You head back to camp..." << endl;
					Sleep(2000);
					goto Fireline; //Send player back to line 60

				}
				else { //Riddle game from random "collect firewood" outcome (option from line 68)
					cout << "You come across a strange woman... she will let you pass if you answer a riddle correctly" << endl;
					srand(time(0));
					rid = rand() % 2;
					switch (rid) { //This switch is randomized and determines what riddle you will get if
					case 1: //first riddle
						cout << "What gets sharper the more you use it?" << endl;
						cin >> ridOne;
						if (ridOne == "brain" || ridOne == "Brain") {
							cout << "You answered correctly. You may leave, and you get some firewood." << endl;
							firewood++; //adds 1 firewood to the users count
						}
						else { //game ends if the riddle is incorrect
							system("CLS");
							cout << "That answer wasn't right... The strange woman casts a spell, and suddenly\n you cease to exist" << endl;
							cout << "Better luck next time!" << endl;
							exit(0);
						}
						break;
					case 2: //second riddle
						cout << "What gets wetter the more it dries?" << endl;
						cin >> ridTwo;
						if (ridTwo == "towel" || ridTwo == "Towel") {
							cout << "You answered correctly. You may leave, and you get some firewood." << endl;
							firewood++; //adds 1 firewood to the users count
						}
						else { //game ends if the riddle is incorrect
							system("CLS");
							cout << "That answer wasn't right... The strange woman casts a spell, and suddenly you cease to exist" << endl;
							cout << "Better luck next time!" << endl;
							exit(0);
						}
						break;
					default: //third riddle
						cout << "What gets bigger the more you take away?" << endl;
						cin >> ridThree;
						if (ridThree == "hole" || ridThree == "Hole") {
							cout << "You answered correctly. You may leave, and you get some firewood." << endl;
							firewood++; //adds 1 firewood to the users count
						}
						else { //game ends if the riddle is incorrect
							system("CLS");
							cout << "That answer wasn't right... The strange woman casts a spell, and suddenly you cease to exist" << endl;
							cout << "Better luck next time!" << endl;
							exit(0);
						}
						break;
					}
					Sleep(2000);
					goto Fireline; //since all previous cases (lines 119-160) have a break if riddle is answered correctly the user gets sent back to line 60
				}
				break;
			}
			break;
		case 2: // In the event player chooses "explore the area" this case occurs (option from line 53)
			system("CLS");
			cout << "You begin to walk around, exploring your unfamiliar environment." << endl;
			cout << "You hear large, heavy footsteps a bit further in front of you." << endl;
			cout << "Curious, you walk towards the noise..." << endl;
			cout << endl;
			Sleep(8000);
			system("CLS");
			cout << "A GRIZZLY BEAR IS NOW STANDING IN FRONT OF YOU, STARING YOU DOWN." << endl;
			cout << "Will you 1[Run] or will you 2[Back Away to Safety]?" << endl;
			cin >> expOne;
			switch (expOne) {
			case 1: //case occurs if the user selects "run" (option from line 177)
				system("CLS");
				cout << "You turn and run, as fast as you possibly can!" << endl;
				cout << "Your heart is pounding in your chest, you can hear the large thuds behind you." << endl;
				cout << "You can't look back. Wont look back, you keep running... " << endl;
				cout << endl;
				cout << "It wasn't fast enough... The bear catches you, at least he isn't hungry anymore" << endl;
				exit(0); //game ends, you ran from the bear, it caught you
				break;
			case 2: //case occurs if the user selects "back away to safety" (option from line 177)
				cout << "You remember that backing away is your best chance to live." << endl;
				cout << endl;
				cout << "Slowly, you step backwards away from the bear. ";
				cout << "One step at a time." << endl;
				cout << "The bear doesn't seem interested in you, and it continues to mozy along \n searching for more appetizing meals." << endl;
				cout << endl;
				Sleep(10000);
				system("CLS");
				cout << "After a while, you get far enough away from the bear you dont feel\n worried anymore." << endl;
				cout << "As you continue to explore your surroundings, you find a cave." << endl;
				cout << "Will you 1[Keep Walking] or 2[Enter the Cave]" << endl;
				cin >> expTwo;
				switch (expTwo) {
				case 1: //case occurs if the user selects "Keep Walking" (option from line 200)
					cout << "You walk for a very long time and find nothing of use." << endl;
					cout << "You then decide to head back to the cave to try your luck." << endl;
					Sleep(2800);
					goto finishline; //jumps to line 210 to continue game
					break;
				case 2: //case occurs if the user selects "enter the cave" (option from line 200)
					finishline: cout << "You enter the cave..." << endl;
					Sleep(2000);
				cavesplit:
					system("CLS");
					cout << "It's dark, but you are able to see three paths\n Will you go 1[Left] 2[Straight] or 3[Right]?" << endl;
					cin >> expThree;
					switch (expThree) {
					case 1:
						system("CLS");
						cout << "You follow the path that bends to the left.";
						cout << " After walking for a while, \nyou hit what seems to be a dead end.";
						cout << "You can hardly see, will you\n 1[Search With Your Hands] or 2[Go Back]?" << endl;
						cin >> expFour;
						switch (expFour) {
						case 1:
							cout << endl;
							cout << "After searching around, fumbling in the darkness\n";
							cout << " you fall into a deep part of the cave, unable to climb out, you starve." << endl;
							cout << "It's an unfortunate way to go..." << endl;
							exit(0);
							break;
						case 2:
							cout << endl;
							cout << "You go back to the split in the cave paths...";
							Sleep(2800);
							goto cavesplit; //takes user to line 212

							break;
						}
						break;
					case 2:
						if (key != 1) {
							cout << "You go straight." << endl;
							cout << "Pretty quickly after making this choice, you find a door..." << endl;
							cout << "It requires a key though, you dont have one. 1[Go Back]" << endl;
							cin >> expFive;
							expFive = 1;
							if (expFive == 1) {
								goto cavesplit; //takes user to line 212
							}
						}
						else {
							cout << "You place the key into the lock, and turn." << endl;
							cout << "The door creaks open... You enter a long tunnel" << endl;
							cout << "You hear voices as you walk...the tunnel ends," << endl;
							cout << "and you find other survivors, salvation is yours. " << endl;
							Sleep(10000);
							cout << endl;
							system("CLS");
							cout << "						Congratulations!" << endl;
							cout << "You got the second ideal ending in SURVIVE." << endl;
							cout << "	Play again and select 'Make a Camp' to find the other ending!" << endl;
							exit(0); //game ends in the one of the ideal ways
						}
						break;
					case 3:
						cout << "You go right." << endl;
						cout << "After walking for what feels like hours, you hit a dead end." << endl;
						cout << "Will you 1[Stumble Around Searching] or 2[Go Back]" << endl;
						cin >> expSix;
					}
					switch (expSix) {
					case 1:
						cout << endl;
						cout << "After searching around, fumbling in the darkness\n";
						cout << " you feel a cold metal object. It seems to be a key." << endl;
						cout << "A key for what? You wonder. 1[Go Back]" << endl;
						key = 1;
						cin >> expSeven;
						expSeven = 1;
						if (expSeven == 1) {
							goto cavesplit;
							break;
					case 2:
						cout << endl;
						cout << "You go back to the split in the cave paths...";
						Sleep(2800);
						goto cavesplit;

						break;
						}
						break;
					}
					break;
				}


				break;
			}

		}
		break;
	
	case 2: // In the event player chooses "Instructions" at the start this case occurs (lines 39-41)
		system("CLS");
		cout << "Instructions:" << endl;
		cout << "SURVIVE is simple, make choices and try and get one of two desired endings." << endl;
		cout << "All choices will be made by inputting the number next to the desired choice" << endl;
		cout << "For Example: Make Sense? 1[Yes] or 2[No] (Enter 1 or 2)" << endl;
		cin >> instruct;
		if (instruct == 1 || instruct == 2)
			goto start;
		break;
	case 3: // In the event player chooses "exit" at the start this case occurs (lines 39-41)
		exit(0);
}
return 0;
}


