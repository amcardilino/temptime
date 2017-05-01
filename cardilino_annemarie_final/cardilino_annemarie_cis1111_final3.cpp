//Anne Marie Cardilino
//04.27.17
//CIS1111 Final Project
//This is the final project- I did a
//french dictionary. It will give you 
//options to learn words and phrases.
//Work in progress


#include<iostream>
#include<iomanip>
#include<string>
#include<ctime>
#include<cstdlib>
#include<fstream>

using namespace std;

string common_output(char);						//function for common
string random_output(int);						//function for random
string verb_menu(string);						//function for verb chart
void menu_select_original();					//function for menu selection

const int COLS = 6;								//constant for array
const int ROWS = 3;								//constant for array

int main()
{
	ofstream cardilino_french;					//writing file & opening
	cardilino_french.open("frenchWords.txt");	//file to write to

	char flirt_words = ' ';						//section b from first void menu
	char choice_from_void = ' ';				//section a from first void menu
	char common_phrases = ' ';					//switch common phrases
	string user = "";							//enter name
	string write_to_file = "";					//to write strings to file
	int begin_end = 1;							//to continue the program
	int common_again;


	cout << "Bienvenue! Welcome, to Cardilino's Dictionary!\n";
	cout << "What's your name?\nComment t'appelle tu: ";
	getline(cin, user);
	do {
		do {
			//original menu
			cout << endl;
			menu_select_original();
			cin >> choice_from_void;
		} while (choice_from_void != 'A' && choice_from_void != 'a' && choice_from_void != 'B' && choice_from_void != 'b' && choice_from_void != 'C' && choice_from_void != 'c' && choice_from_void != 'D' && choice_from_void != 'd');

		//selections from menu
		switch (choice_from_void)
		{
			//common words
		case 'a':
		case 'A':
				cout << "\nSelect a word from the words and phrases below:\n";
				cout << "________________________________________________\n";
				do {
					cout << "A-Hello.\nB-How are you?\nC-Where's the restroom?\nD-See you later.\nE-I would like some wine.\nChoice: ";
					cin >> common_phrases;

					//to catch for erroneous input
					while (common_phrases != 'a' && common_phrases != 'A' && common_phrases != 'b' && common_phrases != 'B' && common_phrases != 'c'
						&& common_phrases != 'C' && common_phrases != 'd' && common_phrases != 'D' && common_phrases != 'e' && common_phrases != 'E')
					{
						cout << "\nPlease select A, B, C, D or E: ";
						cin >> common_phrases;
					}				
					
					write_to_file = common_output(common_phrases);
					cardilino_french << endl << write_to_file;

					cout << "\nSelect 1 for another word\nSelect 0 to exit: ";
					cin >> common_again;
					cout << "________________________________________________\n";
					while (common_again != 1 && common_again != 0)
					{
						cout << "\nSelect 1 for another word\nSelect 0 to exit: ";
						cin >> common_again;
						cout << "________________________________________________\n\n";
					}
				} while (common_again == 1);




			break;

			//flirt words
		case 'b':
		case 'B':

			cout << "\nSelect a phrase from below:\n";
			cout << "________________________________________________\n";
			cout << "A-Can I get you a drink?\nB-It's prince charming!\nC-Do you want to dance with me?\nD-Are you a model?\n";
			cin >> flirt_words;

			while (flirt_words != 'a' && flirt_words != 'A' && flirt_words != 'b' && flirt_words != 'B' && flirt_words != 'c'
				&& flirt_words != 'C' && flirt_words != 'd' && flirt_words != 'D')
			{
				cout << "\nPlease select A, B, C or D: ";
				cin >> flirt_words;
			}

			//choices for flirt phrases
			switch (flirt_words)
			{
			case 'a':
			case 'A':
				write_to_file = "Verre";
				cout << "\nJe peux vous offrir un verre?\n";
				cout << "\n________________________________________________\n";
				cardilino_french << endl << write_to_file;
				break;
			case 'b':
			case 'B':
				write_to_file = "Charmant!";
				cout << "\nC'est le prince charmant!\n";
				cout << "\n________________________________________________\n";
				cardilino_french << endl << write_to_file;
				break;
			case 'c':
			case 'C':
				write_to_file = "Danser";
				cout << "\nVeux-tu danser avec moi?\nFormal: Voulez-vous danser avec moi?\n";
				cout << "\n________________________________________________\n";
				cardilino_french << endl << write_to_file;
				break;
			case 'd':
			case 'D':
				write_to_file = "Mannequin";
				cout << "\nEs-tu mannequin?\n";
				cout << "\n________________________________________________\n";
				cardilino_french << endl << write_to_file;
				break;
			}
			break;

			//conjugation
		case 'c':
		case 'C':
			do
			{ 
				//show conjugation chart
				write_to_file = verb_menu(user);
				cardilino_french << endl << write_to_file;
				cout << "\n\nSelect 1 for another word.\nSelect 0 to exit: ";
				cin >> begin_end;

				//to catch for erroneous input
				while (begin_end != 1 && begin_end != 0)
				{
					cout << "\nSelect 1 for another word\nSelect 0 to exit: ";
					cin >> begin_end;
				}
			} while (begin_end == 1);
			break;

			//random word generator
		case 'd':
		case 'D':
			//create random words
			string word_hold_output_file;
			int french_word = 0;
			do
			{
				//variables for rand gen
				const int MIN_VALUE = 1;
				const int MAX_VALUE = 20;

				//random word generator
				unsigned seed = time(0);
				srand(seed);
				french_word = (rand() % (MAX_VALUE - MIN_VALUE + 1)) + MIN_VALUE;

				cout << "________________________________________________\n";

				//function to output random word
				word_hold_output_file = random_output(french_word);
				cardilino_french << endl << word_hold_output_file;

				//select another word
				cout << "Select 1 for another word.\nSelect 0 to exit: ";
				cin >> begin_end;

				//to catch for erroneous input
				while (begin_end != 1 && begin_end != 0)
				{
					cout << "\nSelect 1 for another word\nSelect 0 to exit: ";
					cin >> begin_end;
				}
			} while (begin_end == 1);

			break;
		}

		//end, need the 1 do and 2 while statements. DO NOT TOUCH IT AGAIN AM
		//select to continue options
		do
		{
			cout << "\nSelect 1 to return to the \nmain menu, or 0 to end: ";
			cin >> begin_end;
			cout << "\n________________________________________________\n";
		} while (begin_end != 1 && begin_end != 0);
	} while (begin_end == 1);

	//reading data from file to see what you've selected
	cout << "\nLet's review what you've learned, " << user << ".\n";
	cout << "________________________________________________\n\n";

	//close file
	cardilino_french.close();

	//open file to read
	ifstream read_file;
	read_file.open("frenchWords.txt");
	string read_data;

	//read from open file
	while (read_file >> read_data)
	{
		cout << read_data;
		cout << endl;
	}

	//close the document
	read_file.close();

	system("pause");
	return 0;
}






//functions
//function for original menu to select the different options
void menu_select_original()
{
	cout << "\nPlease select an option below:\n";
	cout << "________________________________________________\n";
	cout << "A-Translate common words and phrases\nB-Translate flirting phrases\nC-Conjugate\nD-Random word\n";
	cout << "Selection: ";
}


//add a do-while loop to add if they want to make another selection
//function to hold and do conjugations
string verb_menu(string name)
{
	//select which verb to conjugate
	char verb_select = '-';
	char formality = '-';

	//for output to main
	string output_to_main;

	//select the plurality to conjugate
	string plurality = "-";
	string he_she_it = "-";
	string bite = "mord";
	string succeed = "reuss";
	string buy = "achet";
	//verb ending for chart
	string a = "is";
	string b = "it";
	string c = "issent";
	string d = "issez";
	string e = "issons";
	string f = "e";
	string g = "es";
	string h = "ent";
	string i = "ez";
	string j = "ons";
	string k = "s";
	string l = "-";
	string verb_end = "-";
	//strings to do chart
	string conjugate[][COLS] = { { a, a, b, c, d, e },
	{ f, g, f, h, i, j },
	{ k, k, l, h, i, j } };
	cout << "\n\n\n________________________________________________\n";
	cout << "\nWelcome, " << name << " to the conjugation nation!\n";
	cout << "\nThere are 3 main ending in verbs.\n\nIR, ER, and RE dictate the way that verbs will end.\n";
	cout << "\n\nChart of conjugation:\n";
	//chart output
	cout << "________________________________________________________\n";
	cout << "         Je       Tu  Il/Elle  Ils/Elles   Vous    Nous\n";
	cout << "________________________________________________________\n";
	for (int x = 0; x < ROWS; x++)
	{
		if (x == 0)
			verb_end = "ir|";
		else if (x == 1)
			verb_end = "er|";
		else if (x == 2)
			verb_end = "re|";
		cout << verb_end << "  ";
		for (int y = 0; y < COLS; y++)
		{
			cout << setw(6) << conjugate[x][y] << "   ";
		}
		cout << endl;
	}


	cout << "\nPlease select a verb you would like to conjugate:\n";
	cout << "________________________________________________________\n";
	cout << "A-Bite\nB-Buy\nC-Succeed\n";
	cin >> verb_select;
	while (verb_select != 'a' && verb_select != 'A' && verb_select != 'b' && verb_select != 'B' && verb_select != 'c'
		&& verb_select != 'C')
	{
		cout << "Incorrect selection. Please enter A, B, or C: ";
		cin >> verb_select;
	}


	//selection for bite
	if (verb_select == 'A' || verb_select == 'a')
	{
		output_to_main = "Mordre";

		cout << "\nThe verb for bite is MORDRE\n";
		//to choose to conjugate to which pronoun
		cout << "Please select for whom you would like to conjugate:\n\tI, you, he, she, it, they, us: ";
		cin >> plurality;

		//catch if incorrect selection was made
		while (plurality != "I" && plurality != "i" && plurality != "you" && plurality != "he" && plurality != "she"
			&& plurality != "it" && plurality != "they" && plurality != "us")
		{
			cout << "Incorrect selection.\n\n";
			cout << "Please select for whom you would like to conjugate:\n\tI, you, he, she, it, they, us: ";
			cin >> plurality;
		}

		if (plurality == "I" || plurality == "i")
		{
			cout << "\nJe " << bite << conjugate[2][0] << ".\n";
		}
		else if (plurality == "you")
		{
			cout << "\nSelect A for informal or B for formal(to a superior): ";
			cin >> formality;
			if (formality == 'A' || formality == 'a')
			{
				cout << "\nTu " << bite << conjugate[2][1] << ".\n";
			}
			else if (formality == 'B' || formality == 'b')
			{
				cout << "\nVous " << bite << conjugate[2][4] << ".\n";
			}
		}
		else if (plurality == "he" || plurality == "she" || plurality == "it")
		{
			if (plurality == "he" || plurality == "it")
				he_she_it = "il";
			else if (plurality == "she")
				he_she_it = "elle";
			cout << "\n" << he_she_it << " " << bite << conjugate[2][2] << ".\n";
		}
		else if (plurality == "they")
		{
			cout << "\nIls " << bite << conjugate[2][3] << ".\n";
		}
		else if (plurality == "us")
		{
			cout << "\nNous " << bite << conjugate[2][5] << ".\n";
		}
	}
	//selection for buy
	else if (verb_select == 'B' || verb_select == 'b')
	{
		output_to_main = "Acheter";
		cout << "\nThe verb for buy is ACHETER\n";
		//to choose to conjugate to which pronoun
		cout << "Please select for whom you would like to conjugate:\n\tI, you, he, she, it, they, us: ";
		cin >> plurality;

		//catch if incorrect selection was made
		while (plurality != "I" && plurality != "i" && plurality != "you" && plurality != "he" && plurality != "she"
			&& plurality != "it" && plurality != "they" && plurality != "us")
		{
			cout << "Incorrect selection.\n\n";
			cout << "Please select for whom you would like to conjugate:\n\tI, you, he, she, it, they, us: ";
			cin >> plurality;
		}

		if (plurality == "I" || plurality == "i")
		{
			cout << "\nJe " << buy << conjugate[1][0] << ".\n";
		}
		else if (plurality == "you")
		{
			cout << "\nSelect A for informal or B for formal(to a superior): ";
			cin >> formality;
			if (formality == 'A' || formality == 'a')
			{
				cout << "\nTu " << buy << conjugate[1][1] << ".\n";
			}
			else if (formality == 'B' || formality == 'b')
			{
				cout << "\nVous " << buy << conjugate[1][4] << ".\n";
			}
		}
		else if (plurality == "he" || plurality == "she" || plurality == "it")
		{
			if (plurality == "he" || plurality == "it")
				he_she_it = "il";
			else if (plurality == "she")
				he_she_it = "elle";
			cout << "\n" << he_she_it << " " << buy << conjugate[1][2] << ".\n";
		}
		else if (plurality == "they")
		{
			cout << "\nIls " << buy << conjugate[1][3] << ".\n";
		}
		else if (plurality == "us")
		{
			cout << "\nNous " << buy << conjugate[1][5] << ".\n";
		}
	}
	//selection for succeed
	else if (verb_select == 'C' || verb_select == 'c')
	{
		output_to_main = "Reussir";
		cout << "\nThe verb for succeed is REUSSIR\n";
		//to choose to conjugate to which pronoun
		cout << "Please select for whom you would like to conjugate:\n\tI, you, he, she, it, they, us: ";
		cin >> plurality;

		//catch if incorrect selection was made
		while (plurality != "I" && plurality != "i" && plurality != "you" && plurality != "he" && plurality != "she"
			&& plurality != "it" && plurality != "they" && plurality != "us")
		{
			cout << "Incorrect selection.\n\n";
			cout << "Please select for whom you would like to conjugate:\n\tI, you, he, she, it, they, us: ";
			cin >> plurality;
		}

		if (plurality == "I" || plurality == "i")
		{
			cout << "\nJe " << succeed << conjugate[0][0] << ".\n";
		}
		else if (plurality == "you")
		{
			cout << "\nSelect A for informal or B for formal(to a superior): ";
			cin >> formality;
			if (formality == 'A' || formality == 'a')
			{
				cout << "\nTu " << succeed << conjugate[0][1] << ".\n";
			}
			else if (formality == 'B' || formality == 'b')
			{
				cout << "\nVous " << succeed << conjugate[0][4] << ".\n";
			}
		}
		else if (plurality == "he" || plurality == "she" || plurality == "it")
		{
			if (plurality == "he" || plurality == "it")
				he_she_it = "il";
			else if (plurality == "she")
				he_she_it = "elle";
			cout << "\n" << he_she_it << " " << succeed << conjugate[0][2] << ".\n";
		}
		else if (plurality == "they")
		{
			cout << "\nIls " << succeed << conjugate[0][3] << ".\n";
		}
		else if (plurality == "us")
		{
			cout << "\nNous " << succeed << conjugate[0][5] << ".\n";
		}
	}
	return output_to_main;
}


//random words
string random_output(int french_word)
{
	int random_cont;
	string write_to_file;
	if (french_word == 1)
	{
		cout << "\nGrapefruit\n\nEn francais:\n\nPamplemousse\n";
		cout << "________________________________________________\n";
		write_to_file = "Pamplemousse";										//output
	}
	else if (french_word == 2)
	{
		cout << "\nPotato\n\nEn francais:\n\nPomme de terre\n";
		cout << "________________________________________________\n";
		write_to_file = "Pomme-de-terre";									//output
	}
	else if (french_word == 3)
	{
		cout << "\nButterfly\n\nEn francais:\n\nPapillon\n";
		cout << "________________________________________________\n";
		write_to_file = "Papillon";											//output
	}
	else if (french_word == 4)
	{
		cout << "\nBee\n\nEn francais:\n\nAbeille\n";
		cout << "________________________________________________\n";
		write_to_file = "Abeille";											//output
	}
	else if (french_word == 5)
	{
		cout << "\nStar\n\nEn francais:\n\nEtoile\n";
		cout << "________________________________________________\n";
		write_to_file = "Etoile";											//output
	}
	else if (french_word == 6)
	{
		cout << "\nBackpack\n\nEn francais:\n\nSac a dos\n";
		cout << "________________________________________________\n";
		write_to_file = "Sac-a-dos";										//output
	}
	else if (french_word == 7)
	{
		cout << "\nDiamond\n\nEn francais:\n\nDiamant\n";
		cout << "________________________________________________\n";
		write_to_file = "Diamant";											//output
	}
	else if (french_word == 8)
	{
		cout << "\nCandy\n\nEn francais:\n\nBonbons\n";
		cout << "________________________________________________\n";
		write_to_file = "Bonbons";											//output
	}
	else if (french_word == 9)
	{
		cout << "\nDog\n\nEn francais:\n\nChien\n";
		cout << "________________________________________________\n";
		write_to_file = "Chien";											//output
	}
	else if (french_word == 10)
	{
		cout << "\nShit\n\nEn francais:\n\nMerde\n";
		cout << "________________________________________________\n";
		write_to_file = "Merde";											//output
	}
	else if (french_word == 11)
	{
		cout << "\nTwin sister\n\nEn francais:\n\nJumelle\n";
		cout << "________________________________________________\n";
		write_to_file = "Jumelle";											//output
	}
	else if (french_word == 12)
	{
		cout << "\nRed\n\nEn francais:\n\nRouge\n";
		cout << "________________________________________________\n";
		write_to_file = "Rouge";											//output
	}
	else if (french_word == 13)
	{
		cout << "\nBoss\n\nEn francais:\n\nPatron\n";
		cout << "________________________________________________\n";
		write_to_file = "Patron";											//output
	}
	else if (french_word == 14)
	{
		cout << "\nTree\n\nEn francaise:\n\nArbe\n";
		cout << "________________________________________________\n";
		write_to_file = "Arbe";												//output
	}
	else if (french_word == 15)
	{
		cout << "\nPlane\n\nEn francais:\n\nAvion\n";
		cout << "________________________________________________\n";
		write_to_file = "Avion";											//output
	}
	else if (french_word == 16)
	{
		cout << "\nHope\n\nEn francais:\n\nEspere\n";
		cout << "________________________________________________\n";
		write_to_file = "Espere";											//output
	}
	else if (french_word == 17)
	{
		cout << "\nShadow\n\nEn francais:\n\nOmbre\n";
		cout << "________________________________________________\n";
		write_to_file = "Ombre";											//output
	}
	else if (french_word == 18)
	{
		cout << "\nFear\n\nEn francais:\n\nPeur\n";
		cout << "________________________________________________\n";
		write_to_file = "Peur";												//output
	}
	else if (french_word == 19)
	{
		cout << "\nSeahorse\n\nEn francais:\n\nHippocampe\n";
		cout << "________________________________________________\n";
		write_to_file = "Hippocampe";										//output
	}
	else if (french_word == 20)
	{
		cout << "\nNoodles\n\nEn francais:\n\nNouilles\n";
		cout << "________________________________________________\n";
		write_to_file = "Nouilles";											//output
	}
	return write_to_file;
}


//function for common
string common_output(char common_phrases)

{
	string write_to_file;

	switch (common_phrases)
	{
	case 'a':
	case 'A':
		write_to_file = "Bonjour";
		cout << "\nAllo.\nFormal: Bonjour.\n";
		cout << "________________________________________________\n";
		break;
	case 'b':
	case 'B':
		write_to_file = "Ca-va?";
		cout << "\nCa va?\nFormal: Comment ca va?\n";
		cout << "________________________________________________\n";
		break;
	case 'c':
	case 'C':
		write_to_file = "Toilette";
		cout << "\nOu est la toilette?\n";
		cout << "________________________________________________\n";
		break;
	case 'd':
	case 'D':
		write_to_file = "A-plus-tard.";
		cout << "\nA plus tard.\n";
		cout << "________________________________________________\n";
		break;
	case 'e':
	case 'E':
		write_to_file = "Vin";
		cout << "\nJe voudrais du vin.\n";
		cout << "________________________________________________\n";
		break;
	}
	return write_to_file;
}