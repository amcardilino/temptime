//Anne Marie Cardilino
//CIS1111
//Midterm project
//03.08-12.17
//This project is a choice story game
//based on the tv series Twin Peaks


#include<iostream>
#include<cstdlib>
#include<ctime>
#include<string>
#include<cmath>
#include<iomanip>

using namespace std;
int main()
{

	string user;
	int unpack_explore, //first decision to explore or unpack in the black lodge
		talk_to,        //who to talk to in the diner
		home_curtain, //choose to go home or continue through curtain
		owl_home,     // choose the curtain, or go home
		search_run, //to search for the noise in the white lodge or to run from it
		familiar_face, //the face in the mirror
		owl_eye, //either approach it more or run
		fire_years; //what they will whisper in your ear
	double radius, //radius around fire pit
		area; //the area calculated around the pit
	const int RAND_CHOOSE1 = 1; //to use in a coin-flip scenario in random generator
	const int RAND_CHOOSE2 = 2; //to use in a coin-flip scenario in random generator
	const double PI = 3.14159; //calculating area around pit
//-----------------------------------------------------------------------------


	// intro
	cout << "Welcome. Please enter your name: ";
	getline(cin, user);
	cout << "\n____________________________________________________\n" << endl;
	cout << "It's time to check into your room at\n";
	cout << "The Black Lodge." << endl;
	cout << "\nWhat would you like to do?\n" << endl;
	cout << "(1) Go up and unpack." << endl;
	cout << "(2) Explore the town." << endl;
	cin >> unpack_explore;


	//unpack in black lodge
	if (unpack_explore == 1)
	{
		cout << "\nWelcome to your room in the Black Lodge.\n";
		system("pause");
		cout << "\n____________________________________________________\n" << endl;
		cout << "Your door swings open into an uncomfortably red\n";
		cout << "room. As you begin to unpack, a giant appears\n" << endl;
		cout << "He doesn't say much, but what really stands out:\n";
	}

	//explore the town, double r diner
	else if (unpack_explore == 2)
	{
		cout << "\nYou decide to follow the concierge's advice and\n";
		cout << "head into town." << endl;
		cout << "You're craving a cup of coffee and a slice of pie,\n";
		cout << "and you see the Double R Diner up ahead.\n" << endl;
		system("pause");
		cout << "\n____________________________________________________\n" << endl;
		cout << "There are several perculiar people in the\n";
		cout << "Double R Diner.\n" << endl;

		cout << "Who would you like to speak to?\n" << endl;
		cout << "(1) Lady with a log sitting in a booth.\n";
		cout << "(2) Girl dancing by herself near the door.\n";
		cout << "(3) FBI Agent drinking coffee at the bar.\n";
		cin >> talk_to;

		//talk to log lady
		if (talk_to == 1)
		{
			cout << "\n____________________________________________________\n" << endl;
			cout << "Without looking up, she says \"My log has something\n";
			cout << "to tell you.\" \n" << endl;
			system("pause");
			cout << "Standing confused for a moment, she continues:" << endl;
		}

		//talk to audrey
		else if (talk_to == 2)
		{
			cout << "\n____________________________________________________\n" << endl;
			cout << "As you approach, she continues to sway with the\n";
			cout << "music. \"Don't you just love the way the music\n";
			cout << "feels?\" She asks softly. \"I'm Audrey Horn.\" \n";
			cout << "Confused, you ask, \"So, what's with this town?\"\n";
			cout << "She responds simply: " << endl;
		}

		//talk to cooper
		else if (talk_to == 3)
		{
			cout << "\n____________________________________________________\n" << endl;
			cout << "You walk up and take a seat next to this man. \n";
			cout << "Before uttering a single sound, he puts up one\n";
			cout << "hand and says, \"This is a damn fine cup of coffee.\"" << endl;
			cout << "Hi, I'm Agent Cooper. Pleasure to meet you, " << user << "." << endl;
			cout << "\n\"I don't know how long you've been here,\" he\n";
			cout << "continues, \"but there's a strange saying going \n";
			cout << "around here: " << endl;
		}
	}

	//no real pick, choose for you
	else if (unpack_explore > 2)
	{
		cout << "\nYou've displeased the Black Lodge. The choice\n";
		cout << "will be chosen for you." << endl;

		//incorrect decision, create random choice
		unsigned seed = time(0);
		srand(seed);
		unpack_explore = (rand() % (RAND_CHOOSE2 - RAND_CHOOSE1 + 1)) + RAND_CHOOSE1;


		//inside random from incorrect selection
		//unpack in black lodge
		if (unpack_explore == 1)
		{
			cout << "\nWelcome to your room in the Black Lodge.\a" << endl;
			cout << "\n____________________________________________________\n" << endl;
			cout << "Your door swings open into an uncomfortably red\n";
			cout << "room. As you begin to unpack, a giant appears.\n" << endl;
			cout << "He doesn't say much. but what really stands out:\n";
		}

		//inside random from incorrect selection
		//explore town, double r diner
		else if (unpack_explore == 2)
		{
			cout << "\nYou decide to follow the concierge's advice and\n";
			cout << "head into town.\a" << endl;
			cout << "\n____________________________________________________\n" << endl;
			cout << "There are several perculiar people in the\n";
			cout << "Double R Diner.\n" << endl;
			cout << "Who would you like to speak to?\n" << endl;
			cout << "(1) Lady with a log sitting in a booth.\n";
			cout << "(2) Girl dancing by herself near the door.\n";
			cout << "(3) FBI Agent drinking coffee at the bar.\n" << endl;
			cin >> talk_to;

			//talk to log lady
			if (talk_to == 1)
			{
				cout << "\n____________________________________________________\n" << endl;
				cout << "Without looking up, she says 'My log has something\n";
				cout << "to tell you.'\n" << endl;
				cout << "Standing confused for a moment, she continues:" << endl;
			}

			//talk to audrey
			else if (talk_to == 2)
			{
				cout << "\n____________________________________________________\n" << endl;
				cout << "As you approach, she continues to sway with the\n";
				cout << "music. 'Don't you just love the way the music\n";
				cout << "feels?' She asks softly. 'I'm Audrey Horn.'\n";
				cout << "Confused, you ask, \"So, what's with this town?\"\n" << endl;
				cout << "She responds simply: " << endl;
			}

			//talk to cooper
			else if (talk_to == 3)
			{
				cout << "\n____________________________________________________\n" << endl;
				cout << "You walk up and take a seat next to this man. \n";
				cout << "Before uttering a single sound, he puts up one\n";
				cout << "hand and says, \"This is a damn fine cup of coffee." << endl;
				cout << "Hi. I'm Agent Cooper. It's nice to meet you, " << user << ".\"" << endl;
				cout << "\n\"I don't know how long you've been here,\" he\n";
				cout << "continues, \"but there's a strange saying going \n";
				cout << "around here: " << endl;
			}
		}
	}


	//outcome of all people's statements
	cout << "\n\"The owls are not as they seem.\" " << endl;
	system("pause");                                                    //pause for a moment
	cout << "\n____________________________________________________\n" << endl;
	cout << "Without knowing what it means, you exit the building\n";
	cout << "in hopes of finding an answer to a statement that\n";
	cout << "doesn't seem to have any meaning." << endl;
	system("pause");
	cout << "\n____________________________________________________\n" << endl;



	//forest for clarity
	cout << "You decide to walk into the forest. You see a small\n";
	cout << "circle around an unsupervised fire pit completely\n";
	cout << "ablaze. \nYou know that it must be put out safely,\n";
	cout << "but there must be an ample amount of area around the\n";
	cout << "pit.\n\nPlease enter your guess of the radius (in feet): ";
	cin >> radius;

	area = PI * pow(radius, 2.0); //find the area of the pit

	//show the area of the fire circle
	cout << "\nThe area of the circle is " << setprecision(2) << fixed << area << "." << endl;

	// if they've entered anything smaller than 4, it will not be safe
	if (area > 4)
	{
		cout << "\nYou are able to safely put out the fire.\n" << endl;
		system("pause");
		cout << "\n____________________________________________________\n" << endl;
		cout << "After extinguishing the fire, you look up to see that\n";
		cout << "a set of red curtains has appeared between two trees\n";
	}

	//it is unsafe to extinguish this fire
	else if (area < 5)
	{
		cout << "\nIt is unsafe to put out this fire.\n" << endl;
		system("pause");
		cout << "\n____________________________________________________\n" << endl;
		cout << "Looking around for a safe way to continue your hike,\n";
		cout << "you notice behind the fire that a curtain appeared\n";
		cout << "between two trees." << endl;
	}

	//shouldn't display
	else
		cout << "I have royally messed up something in my code.";

	//curtain options
	cout << "\nAn eerie feeling surrounds this place." << endl;
	system("pause");
	cout << "\n____________________________________________________\n" << endl;
	cout << "What do you want to do?\n" << endl;
	cout << "(1) Leave the forest, check out of the Black Lodge, \n";
	cout << "    and go home. This place is nuts." << endl;
	cout << "(2) Continue through the curtain. \n";
	cin >> home_curtain;

	//didn't choose 1 or 2
	while (home_curtain < 2)
	{
		cout << "Please, " << user << ", you have made it this far.\n";
		cout << "Do not give up on us now.\n" << endl;
		cout << "\n____________________________________________________\n" << endl;
		cout << "What do you want to do?\n" << endl;
		cout << "(1) Leave the forest, check out of the Black Lodge, \n";
		cout << "    and go home. This place is nuts." << endl;
		cout << "(2) Continue through the curtain. \n";
		cin >> home_curtain;
	}

	//you choose to go home
	if (home_curtain == 1)
	{
		cout << "And with that, you flee from sight. You may\n";
		cout << "be done with Twin Peaks, but that doesn't \n";
		cout << "mean Twin Peaks is done with you." << endl;

		system("pause");
		return 0;
	}

	//choose to go through the curtain
	else if (home_curtain == 2)
	{
		cout << "\n____________________________________________________\n" << endl;
		cout << "Before you're able to pull back the curtain, a owl\n";
		cout << "swoops down and lands itself on one of the trees on\n";
		cout << "either side of the curtain.\n" << endl;
		cout << "The owls are not as they seem.\n";
		system("pause");
		cout << "\n____________________________________________________\n" << endl;
		cout << "Two choices face you :\n";
		cout << "(1) Walk away, check out of the Black Lodge, and\n";
		cout << "     never look back." << endl;
		cout << "(2) Disreagard the owl, and head through the curtain." << endl;
		cin >> owl_home;

		//choose to go home, 
		if (owl_home == 1)
		{
			cout << "And with that, you flee from sight. You may\n";
			cout << "be done with Twin Peaks, but that doesn't \n";
			cout << "mean Twin Peaks is done with you." << endl;

			system("pause");
			return 0;
		}

		// choose to continue through the curtain
		else if (owl_home == 2)
		{
			cout << "\nWelcome, " << user << ", to the White Lodge." << endl;
		}
		//any number
		else if (owl_home > 2)
		{
			cout << "Your indecision has pushed you forever into the White Lodge." << endl;

			system("pause");
			return 0;
		}
	}

	//white lodge entrance
	cout << "\n____________________________________________________\n" << endl;
	cout << "An uncomfortable feeling tingles up your spine as\n";
	cout << "you make your way down a narrow and disorienting\n";
	cout << "hallway.\n";
	system("pause");
	cout << "\n____________________________________________________\n" << endl;
	cout << "You hear a rustle behind the curtain that surrounds\n";
	cout << "either side of the hallway." << endl;
	cout << "You know you must run from it, or find the cause." << endl;
	system("pause");

	//rand to autochoose weather to run or search
	unsigned seed = time(0);
	srand(seed);
	search_run = (rand() % (RAND_CHOOSE2 - RAND_CHOOSE1 + 1)) + RAND_CHOOSE1;

	//decide to run from the noise
	if (search_run == 1)
	{
		cout << "\nRun.\n" << endl;
		system("pause");
		cout << "\n____________________________________________________\n" << endl;
		cout << "Without truly knowing where the source of the noise\n";
		cout << "is, the frantic panic begins to grow.\n";
		cout << "You don't know how long you've been running, but it\n";
		cout << "feels like an eternity.\n";
		cout << "\nYou have fallen forever prey to the White Lodge." << endl;
		system("pause");
		return 0;
	}

	//find the source of the noise
	else if (search_run == 2)
	{
		cout << "\nYou know you have to find it.\n" << endl;
		system("pause");
		cout << "\n____________________________________________________\n" << endl;
		cout << "You begin slowly, but curiousity begins to hurry\n";
		cout << "your speed. It's not to your left, not to your right,\n";
		cout << "but then you notice a ruffling in the curtain straight\n";
		cout << "ahead. You reach for it, and pull it back.\n";
		system("pause");
		cout << "\n\n\a\a\aA psychotic smile is staring back at you.\n\n";
		system("pause");
		cout << "Does it look familiar? (1) yes or (2) no:\n" << endl;
		cin >> familiar_face;

		//familiar face
		if (familiar_face == 1)
		{
			cout << "Hair strung out, bags under their eyes. You've\n";
			cout << "seen it before. \n";
		}

		//unfamiliar face
		else if (familiar_face == 2)
		{
			cout << "It's no one. The face doesn't seem human. In fact,\n";
			cout << "the eyes have a severe angle, almost as if they\n";
			cout << "belonged to an owl. . .\n" << endl;
			cout << "The owls are not as they seem.\n" << endl;
			cout << "\nPress (1) to get closer or (2) to run as far\nas possible: ";
			cin >> owl_eye;

			//get closer
			if (owl_eye == 1)
			{
				cout << "\n____________________________________________________\n" << endl;
				cout << "As you inch slowly forward, the face morphs." << endl;
				cout << "It twists and turns into the person from the diner.\n";

				//random to pick what will be said
				cout << "Standing in shock, they lean over and whisper:\n" << endl;
				unsigned seed = time(0);
				srand(seed);
				fire_years = (rand() % (RAND_CHOOSE2 - RAND_CHOOSE1 + 1)) + RAND_CHOOSE1;

				//fire response
				if (fire_years == 1)
				{
					cout << "Fire, walk with me.\n" << endl;
					system("pause");
					cout << "\n____________________________________________________\n" << endl;
					cout << "After those words, the face begins to morph. . .\n" << endl;
				}
				
				//25 years later
				else if (fire_years == 2)
				{
					cout << "I will return in 25 years. \nOnly then can you escape here.\n";
					system("pause");
					cout << "\n____________________________________________________\n" << endl;
					cout << "Stunned, all there is to mutter is \"Where is here?\"\n";
					cout << "\n\"You are trapped here in the White Lodge.\"\n" << endl;
					system("pause");
					return 0;
				}	
			}

			//turn to run
			else if (owl_eye == 2)
			{
				cout << "\n____________________________________________________\n" << endl;
				cout << "You drop the curtain and go to run, but something\n";
				cout << "catches you at the collar." << endl;
				cout << "As you turn around, the owl face begins to morph. . .\n";
			}
		}
	}
	system("pause");

    //end program, welcome to white lodge
	cout << "It's you. Welcome, to your new home\n";
	cout << "in the White Lodge.\a\n" << endl;

	system("pause");
	return 0;
}