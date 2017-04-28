#include<iostream>
#include<iomanip>
#include<vector>
#include<string>
#include<ctime>
#include<cstdlib>
#include<fstream>

using namespace std;

void menu_select_original();
void word_random();

int main()
{
//writing file & opening
ofstream cardilino_french;
//file to write to
cardilino_french.open("frenchWords.txt");

    //section b from first void menu
    char flirt_words = '';
    //section a from first void menu
	char choice_from_void = '';
    //enter name
	string user = "";
    //to write strings to file
    string common_write = "";
    //to write strings to file
    string flirt_write = "";
    //to continue the program
    int begin_end = 1,
    //switch common phrases
    int common_phrases = 0;
	
    cout << "Bienvenue! Welcome, to Cardilino's Dictionary!\n";
    cout << "What's your name?\nComment t'appelle tu: "
    cin >> user;
    cardilino_french << user << endl;
    do{
        do{
        //original menu
		menu_select_original();
		cin >> choice_from_void;
        }while (choice_from_void != 'A' || choice_from_void != 'a' || choice_from_void != 'B' || choice_from_void != 'b' || choice_from_void != 'C' || choice_from_void != 'c' || choice_from_void != 'D' || choice_from_void != 'd');

                //selections from menu
				switch (choice_from_void)
				{
                //common words
				case 'a':
				case 'A': 
                    do
                    {
					cout << "\nSelect a word from the words and phrases below:\n";
					cout << "________________________________________________\n";
					cout << "1-Hello.\n2-How are you?\n3-Where's the restroom?\n4-See you later.\n5-I would like some wine.\n";
					cin >> common_phrases;
                    } while (common_phrases != 1 && common_phrases != 2 && common_phrases != 3 && common_phrases != 4 && common_phrases !=5;
					switch (common_phrases)
					{
					if (common_phrases == 1)
                    {
                            common_write = "\nAllo.\nFormal: Bonjour.\n";
							cout << common_write;
                            cardilino_french << common_write
                    }
					else if (common_phrases == 2)
                    {
                            common_write = "\nCa va?\nFormal: Comment ca va?\n";
							cout << common_write;
                            cardilino_french << common_write;
                    }
					else if (common_phrases == 3)
                    {
                            common_write = "\nOu est la toilette?\n";
							cout << common_write;
                            cardilino_french << common_write;
                    }
					else if (common_phrases == 4)
                    {
                            common_write = "\nA plus tard.\n";
							cout << common_write;
                            cardilino_french << common_write; 
                    }
					else if (common_phrases == 5)
                    {
                            common_write = "\nJe voudrais du vin.\n";
							cout << common_write;
                            cardilino_french << common_write;
					}
                    break;
                //bizarre words
                case 'b':
                case 'B':
                    do
                    {
                  	cout << "\nSelect a phrase from below:\n";
					cout << "________________________________________________\n"; 
                    cout << "A-Can I get you a drink?\nB-You're prince charming?\nC-Do you want to dance with me?\nD-Are you a model?\n";
                    cin >> flirt_words;
                    } while (flirt_words != 'a' && flirt_words != 'A' && flirt_words != 'b' && flirt_words != 'B' && flirt_words != 'c'
                        && flirt_words != 'C' && flirt_words != 'd' && flirt_words != 'D');

                    switch(flirt_words)
                    {
                    case 'a':
                    case 'A':
                        flirt_write = "\nJe peux vous offrir un verre?\n";
                        cout << "\nJe peux vous offrir un verre?\n";
                        cardilino_french << flirt_write;
                        break;
                    case 'b':
                    case 'B':
                        flirt_write = "\nC'est le prince charmant!\n";
                        cout << "\nC'est le prince charmant!\n";
                        cardilino_french << flirt_write;
                        break;
                    case 'c':
                    case 'C':
                        flirt_write = "\nVeux-tu danser avec moi?\nFormal: Voulez-vous danser avec moi?\n";
                        cout << "\nVeux-tu danser avec moi?\nFormal: Voulez-vous danser avec moi?\n";
                        cardilino_french << flirt_write;
                        break;
                    case 'd':
                    case 'D': 
                        flirt_write = "\nEs-tu mannequin?\n";
                        cout << "\nEs-tu mannequin?\n" ;
                        cardilino_french << flirt_write;
                        break;
                    }
                    break;
                case 'c':
                case 'C':
                //use an array maybe?
                break;
                case 'd':
                case 'D':
                word_random();
                break;
			    }
            
			cout << "Select 1 to continue, or 0 to end: ";
            cin >> begin_end;
	} while (begin_end == 1);


	system("pause");
	return 0;
}

void menu_select_original()
{
	cout << "\nPlease select an option below:\n";
	cout << "________________________________________________\n";
	cout << "A-Translate common words and phrases\nB-Translate flirting phrases\nC-Conjugate\nD-Test your knowledge\nE-Random word";
	cout << "Selection: ";
}

void word_random()
{
    string word_hold_output_file
    int french_word = 0;
    const int MIN_VALUE = 1;
    const int MAX_VALUE = 10;

    unsigned seed = time(0);
    srand(seed);
    french_word = (rand()%(MAX_VALUE - MIN_VALUE +1)) + MIN_VALUE;
    if (french_word == 1)
    {
        cout << "\nGrapefruit\n\nEn francais:\nPamplemousse\n";
        word_hold_output_file = "Pamplemousse";
        cardilino_french << word_hold_output_file << endl;

    }
    else if (french_word == 2)
    {
        cout << "\nPotato\n\nEn francais:\nPomme de terre\n";
        word_hold_output_file = "Pomme de terre";
        cardilino_french << word_hold_output_file << endl;
    }
    else if (french_word == 3)
    {
        cout << "\nButterfly\n\nEn francais:\nPapillon\n";
        word_hold_output_file = "Papillon";
        cardilino_french << word_hold_output_file << endl;
    }
    else if (french_words == 4)
    {
        cout << "\nBee\n\nEn francais:\nAbeille\n";
        word_hold_output_file = "Abeille";
        cardilino_french << word_hold_output_file << endl;
    }
    else if (french_words == 5)
    {
        cout << "\nStar\n\nEn francais:\nEtoile\n";
        word_hold_output_file = "Etoile";
        cardilino_french << word_hold_output_file << endl;
    }
    else if (french_words == 6)
    {
        cout << "\nBackpack\n\nEn francais:\nSac a dos\n";
        world_hold_output_file = "Sac a dos";
        cardilino_french << word_hold_output_file << endl;
    }
    else if (french_words == 7)
    {
        cout << "\nDiamond\n\nEn francais:\nDiamant\n";
        word_hold_output_file = "Diamant";
        cardilino_french << word_hold_output_file << endl;
    }
    else if (french_words == 8)
    {
        cout << "\nCandy\n\nEn francais:\nBonbons\n";
        word_hold_output_file = "Bonbons";
        cardilino_french << word_hold_output_file << endl;
    }
    else if (french_words == 9)
    {
        cout << "\nDog\n\nEn francais:\nChien\n";
        word_hold_output_file = "Chien";
        cardilino_french << word_hold_output_file << endl;
    }
    else if (french_words == 10)
    {
        cout << "\nShit\n\nEn francais:\nMerde\n";
        word_hold_output_file = "Merde";
        cardilino_french << word_hold_output_file << endl;
    }
}