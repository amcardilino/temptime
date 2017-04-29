//Anne Marie Cardilino
//04.27.17
//CIS1111 Final Project
//This is the final project- I did a
//french dictionary. It will give you 
//options to learn words and phrases.
//Work in progress


#include<iostream>
#include<iomanip>
#include<vector>
#include<string>
#include<ctime>
#include<cstdlib>
#include<fstream>

using namespace std;
//menu selection
void menu_select_original();
//verb chart
void verb_menu();
//to put in array
const int COLS = 6;
const int ROWS = 3;

int main()
{
	ofstream cardilino_french;					//writing file & opening
	cardilino_french.open("frenchWords.txt");	//file to write to

	char flirt_words = ' ';						//section b from first void menu
	char choice_from_void = ' ';				//section a from first void menu
	string user = "";							//enter name
	string write_to_file = "";					//to write strings to file
	int begin_end = 1;							//to continue the program
	int common_phrases = 0;						//switch common phrases
	int count_for_file = 0;						//to add up how many times items are written in file

	cout << "Bienvenue! Welcome, to Cardilino's Dictionary!\n";
	cout << "What's your name?\nComment t'appelle tu: ";
	getline (cin, user);
	do {
		do {
			//original menu
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
			cout << "1-Hello.\n2-How are you?\n3-Where's the restroom?\n4-See you later.\n5-I would like some wine.\nChoice: ";
			cin >> common_phrases;
			
			//} while (common_phrases != 1 && common_phrases != 2 && common_phrases != 3 && common_phrases != 4 && common_phrases != 5);
			if (common_phrases == 1)
			{
				write_to_file = "Allo.\nFormal: Bonjour.\n";
				cout << write_to_file;
				/*cardilino_french << endl << write_to_file*/
				cout << "________________________________________________\n";
			}
			else if (common_phrases == 2)
			{
				write_to_file = "\nCa va?\nFormal: Comment ca va?\n";
				cout << write_to_file;
				/*cardilino_french << endl << write_to_file*/
				cout << "________________________________________________\n";
			}
			else if (common_phrases == 3)
			{
				write_to_file = "\nOu est la toilette?\n";
				cout << write_to_file;
				/*cardilino_french << endl << write_to_file*/
				cout << "________________________________________________\n";
			}
			else if (common_phrases == 4)
			{
				write_to_file = "\nA plus tard.\n";
				cout << write_to_file;
				/*cardilino_french << endl << write_to_file*/
				cout << "________________________________________________\n";
			}
			else if (common_phrases == 5)
			{
				write_to_file = "\nJe voudrais du vin.\n";
				cout << write_to_file;
				/*cardilino_french << endl << write_to_file*/
				cout << "________________________________________________\n";
			}
			cardilino_french << endl << write_to_file;
			break;
			//flirt words
		case 'b':
		case 'B':

			cout << "\nSelect a phrase from below:\n";
			cout << "________________________________________________\n";
			cout << "A-Can I get you a drink?\nB-It's prince charming!\nC-Do you want to dance with me?\nD-Are you a model?\n";
			cin >> flirt_words;


			switch (flirt_words)
			{
			case 'a':
			case 'A':
				write_to_file = "Je peux vous offrir un verre";
				cout << "\nJe peux vous offrir un verre?\n";
				cout << "\n________________________________________________\n";
				/*cardilino_french << endl << write_to_file;*/
				break;
			case 'b':
			case 'B':
				write_to_file = "C'est le prince charmant!";
				cout << "\nC'est le prince charmant!\n";
				cout << "\n________________________________________________\n";
				/*cardilino_french << endl << write_to_file;*/
				break;
			case 'c':
			case 'C':
				write_to_file = "\nVeux-tu danser avec moi?\nFormal: Voulez-vous danser avec moi?\n";
				cout << "\nVeux-tu danser avec moi?\nFormal: Voulez-vous danser avec moi?\n";
				cout << "\n________________________________________________\n";
				/*cardilino_french << endl << write_to_file;*/
				break;
			case 'd':
			case 'D':
				write_to_file = "mannequin";
				cout << "\nEs-tu mannequin?\n";
				cout << "\n________________________________________________\n";
				/*cardilino_french << endl << write_to_file;*/
				break;
				cardilino_french << endl << write_to_file;
			}
			break;
		case 'c':
		case 'C':
			//show conjugation chart
			verb_menu();
			break;
		case 'd':
		case 'D':
			//create random words
			string word_hold_output_file;
			int french_word = 0;

			//variables for rand gen
			const int MIN_VALUE = 1;
			const int MAX_VALUE = 10;

			//random word generator
			unsigned seed = time(0);
			srand(seed);
			french_word = (rand() % (MAX_VALUE - MIN_VALUE + 1)) + MIN_VALUE;

			//list of words
			cout << "________________________________________________\n";
			if (french_word == 1)
			{
				cout << "\nGrapefruit\n\nEn francais:\nPamplemousse\n";
				cout << "________________________________________________\n";
				//output to file
				write_to_file = "Pamplemousse";
				/*cardilino_french << endl <<write_to_file;*/

			}
			else if (french_word == 2)
			{
				cout << "\nPotato\n\nEn francais:\nPomme de terre\n";
				cout << "________________________________________________\n";
				//output to file
				write_to_file = "Pomme de terre";
				/*cardilino_french << endl << write_to_file;*/
			}
			else if (french_word == 3)
			{
				cout << "\nButterfly\n\nEn francais:\nPapillon\n";
				cout << "________________________________________________\n";
				//output to file
				write_to_file = "Papillon";
				/*cardilino_french << endl << write_to_file;*/
			}
			else if (french_word == 4)
			{
				cout << "\nBee\n\nEn francais:\nAbeille\n";
				cout << "________________________________________________\n";
				//output to file
				write_to_file = "Abeille";
				/*cardilino_french << endl << write_to_file;*/
			}
			else if (french_word == 5)
			{
				cout << "\nStar\n\nEn francais:\nEtoile\n";
				cout << "________________________________________________\n";
				//output to file
				write_to_file = "Etoile";
				/*cardilino_french << endl << write_to_file;*/
			}
			else if (french_word == 6)
			{
				cout << "\nBackpack\n\nEn francais:\nSac a dos\n";
				cout << "________________________________________________\n";
				//output to file
				write_to_file = "Sac a dos";
				/*cardilino_french << endl << write_to_file;*/
			}
			else if (french_word == 7)
			{
				cout << "\nDiamond\n\nEn francais:\nDiamant\n";
				cout << "________________________________________________\n";
				//output to file
				write_to_file = "Diamant";
				/*cardilino_french << endl << write_to_file;*/
			}
			else if (french_word == 8)
			{
				cout << "\nCandy\n\nEn francais:\nBonbons\n";
				cout << "________________________________________________\n";
				//output to file
				write_to_file = "Bonbons";
				/*cardilino_french << endl << write_to_file;*/
			}
			else if (french_word == 9)
			{
				cout << "\nDog\n\nEn francais:\nChien\n";
				cout << "________________________________________________\n";
				//output to file
				write_to_file = "Chien";
				/*cardilino_french << endl << write_to_file;*/
			}
			else if (french_word == 10)
			{
				cout << "\nShit\n\nEn francais:\nMerde\n";
				cout << "________________________________________________\n";
				//output to file
				write_to_file = "Merde";
				/*cardilino_french << endl << write_to_file;*/
			}
			cardilino_french << endl << write_to_file;
			break;
		}
		do
		{
			cout << "\nSelect 1 to continue, or 0 to end: ";
			cin >> begin_end;
			cout << "\n________________________________________________\n";
		} while (begin_end != 1 && begin_end != 0);
	} while (begin_end == 1);
	cardilino_french.close();

	cout << "Let's review what you've learned, " << user << ".\n";
	cout << "\n________________________________________________\n";

	//read data from file
	/*ifstream input_file;
	string hold_read_data;
*/
	//open file
	//input_file.open("frenchWords.txt");
	//input_file >> hold_read_data;
	////loop to show data in file
	//while (input_file >> hold_read_data)
	//{
	//	cout << input_file;
	//}

	////close file
	//input_file.close();

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
void verb_menu()
{
	//select which verb to conjugate
	char verb_select = '-';
	char formality = '-';
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
	cout << "\n\n________________________________________________\n";
	cout << "\nWelcome to the conjugation nation!\n";
	cout << "There are 3 main ending in verbs.\n\nIR, ER, and RE dictate the way that verbs will end.\n";
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
	//do-while loop will go here
	cout << "\nPlease select a verb you would like to conjugate:\n";
	cout << "________________________________________________________\n";
	cout << "A-Bite\nB-Buy\nC-Succeed\n";
	cin >> verb_select;

	//selection for bite
	if (verb_select == 'A' || verb_select == 'a')
	{
		cout << "\nThe verb for bite is MORDRE\n";
		//to choose to conjugate to which pronoun
		cout << "Please select for whom you would like to conjugate:\n\tI, you, he, she, it, they, us: ";
		cin >> plurality;
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
		cout << "\nThe verb for buy is ACHETER\n";
		//to choose to conjugate to which pronoun
		cout << "Please select for whom you would like to conjugate:\n\tI, you, he, she, it, they, us: ";
		cin >> plurality;
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
		cout << "\nThe verb for succeed is REUSSIR\n";
		//to choose to conjugate to which pronoun
		cout << "Please select for whom you would like to conjugate:\n\tI, you, he, she, it, they, us: ";
		cin >> plurality;
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
}