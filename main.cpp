// Mad-Lib
// Creates a story based on user input

#include <iostream>
#include <string>

using namespace std;

void introduction();
void pluralNounHelp();
void partOfBody();
void adjectiveHelp();
void verbHelp();
void nounHelp();
string askText(string prompt);
int askNumber(string prompt);
int checkNumber(int number);
void tellStory(
				string name0, string name1, string name2,
				string name3, string name4, string name5,
				string name6, string name7, string name8,
				string name9, string name10, string name11,
				string name12, string name13, string name14,
				string name15, int number
				);

int main()
{
    introduction();
    string name0 = askText("A plural noun: ");
    if (name0 == "help")
    {
    	pluralNounHelp();
    	cout << "🦒 A plural noun: ";
		cin.clear();
		cin.ignore(256,'\n');
		cin >> name0;
    }
    string name1 = askText("\nA plural noun: ");
    if (name1 == "help")
    {
    	pluralNounHelp();
    	cout << "🦒 A plural noun: ";
		cin.clear();
		cin.ignore(256,'\n');
		cin >> name1;
    }
    string name2 = askText("\nA part of the body: ");
    if (name2 == "help")
    {
    	partOfBody();
    	cout << "🦒 A part of the body: ";
		cin.clear();
		cin.ignore(256,'\n');
		cin >> name2;
    }
    int number = askNumber("\nA number: ");
    //checkNumber(number);
    string name3 = askText("\nA plural noun: ");
    if (name3 == "help")
    {
    	pluralNounHelp();
    	cout << "🦒 A plural noun: ";
		cin.clear();
		cin.ignore(256,'\n');
		cin >> name3;
    }
    string name4 = askText("\nA part of the body: ");
    if (name4 == "help")
    {
    	partOfBody();
    	cout << "🦒 A part of the body: ";
		cin.clear();
		cin.ignore(256,'\n');
		cin >> name0;
    }
    string name5 = askText("\nA type of liquid: ");
    string name6 = askText("\nA part of the body (plural): ");
    if (name6 == "help")
    {
    	partOfBody();
    	cout << "🦒 A part of the body (plural): ";
		cin.clear();
		cin.ignore(256,'\n');
		cin >> name6;
    }
    string name7 = askText("\nA part of the body: ");
    if (name7 == "help")
    {
    	partOfBody();
    	cout << "🦒 A part of the body: ";
		cin.clear();
		cin.ignore(256,'\n');
		cin >> name7;
    }
    string name8 = askText("\nAn adjective: ");
    if (name8 == "help")
    {
    	adjectiveHelp();
    	cout << "🦒 An adjective: ";
		cin.clear();
		cin.ignore(256,'\n');
		cin >> name8;
    }
    string name9 = askText("\nA plural noun: ");
    if (name9 == "help")
    {
    	pluralNounHelp();
    	cout << "🦒 A plural noun: ";
		cin.clear();
		cin.ignore(256,'\n');
		cin >> name9;
    }
    string name10 = askText("\nAn adjective: ");
    if (name10 == "help")
    {
    	adjectiveHelp();
    	cout << "🦒 An adjective: ";
		cin.clear();
		cin.ignore(256,'\n');
		cin >> name10;
    }
    string name11 = askText("\nAn adjective: ");
    if (name11 == "help")
    {
    	adjectiveHelp();
    	cout << "🦒 An adjective: ";
		cin.clear();
		cin.ignore(256,'\n');
		cin >> name11;
    }
    string name12 = askText("\nA verb ending in 'ing': ");
    if (name12 == "help")
    {
    	verbHelp();
    	cout << "🦒 A verb ending in 'ing': ";
		cin.clear();
		cin.ignore(256,'\n');
		cin >> name12;
    }
    string name13 = askText("\nA noun: ");
    if (name13 == "help")
    {
    	nounHelp();
    	cout << "🦒 A noun: ";
		cin.clear();
		cin.ignore(256,'\n');
		cin >> name13;
    }
    string name14 = askText("\nA plural noun: ");
    if (name14 == "help")
    {
    	pluralNounHelp();
    	cout << "🦒 A plural noun: ";
		cin.clear();
		cin.ignore(256,'\n');
		cin >> name14;
    }
    string name15 = askText("\nA noun: ");
    if (name15 == "help")
    {
    	nounHelp();
    	cout << "🦒 A noun: ";
		cin.clear();
		cin.ignore(256,'\n');
		cin >> name15;
    }
    
    tellStory(name0, name1, name2, name3, name4,
				name5, name6, name7, name8,
				name9, name10, name11, name12,
				name13, name14, name15, number);
	cout << "\n\n🦒 End of Story 🦒";
    return 0;
}

void introduction()
{
	cout << "🦒 Welcome to Mad Libs! 🦒\n\n";
    cout << "Please answer the following questions to help create your story.\n";
    cout << "And if at any time, you have a question, please type in 'help'.";
    cout << "\n" << string(70, '-') << "\n";
}

void pluralNounHelp()
{
	cout << string(70, '-');
	cout << "\n🦒 Mad Libs Helper 🦒";
	cout << "\n• A NOUN is the name of a person, place or thing: Sidewalk, umbrella, smartphone, desk, and Mr. Smith are nouns.";
	cout << "\n• And when asked for a PLURAL, it means more than one: cat pluralized is cats.";
	cout << "\n" << string(70, '-') << "\n";
}

void partOfBody()
{
	cout << string(70, '-');
	cout << "\n🦒 Mad Libs Helper 🦒";
	cout << "\n• When asked for specific words, like a NUMBER, a COLOR, an ANIMAL, or a PART OF THE BODY, it means a word that is one of those things, like seven, blue, horse, or arm.";
	cout << "\n• When asked for a PLURAL, it means more than one: cat pluralized is cats.";
	cout << "\n" << string(70, '-') << "\n";
}

void adjectiveHelp()
{
	cout << string(70, '-');
	cout << "\n🦒 Mad Libs Helper 🦒";
	cout << "\n• An ADJECTIVE describes something or somebody:  Lumpy, soft, ugly, messy and short are adjectives.";
	cout << "\n" << string(70, '-') << "\n";
}

void verbHelp()
{
	cout << string(70, '-');
	cout << "\n🦒 Mad Libs Helper 🦒";
	cout << "\n• A VERB: is an action word: Run, jump, and sleep are verbs.  Put the verbs in past tense if the directions say PAST TENSE: Ran, jumped, and slept are verbs in the past tense.";
	cout << "\n" << string(70, '-') << "\n";
}

void nounHelp()
{
	cout << string(70, '-');
	cout << "\n🦒 Mad Libs Helper 🦒";
	cout << "\n• A NOUN is the name of a person, place or thing: Sidewalk, umbrella, smartphone, desk, and Mr. Smith are nouns.";
	cout << "\n" << string(70, '-') << "\n";
}

string askText(string prompt)
{
    string text;
    cout << prompt;
    cin >> text; 
    return text;
}

int askNumber(string prompt)
{
    int number;
    cout << prompt;
	cin >> number;
	while (cin.fail())
	{
		cout << "🦒 Enter a valid number: ";
		cin.clear();
		cin.ignore(256,'\n');
		cin >> number;
	}
	return number;

}

int checkNumber(int number)
{
	cin >> number;
	while (cin.fail())
	{
		cout << "🦒 Enter a valid number: ";
		cin.clear();
		cin.ignore(256,'\n');
		cin >> number;
	}
	return number;
}

void tellStory(string name0, string name1, string name2,
				string name3, string name4, string name5,
				string name6, string name7, string name8,
				string name9, string name10, string name11,
				string name12, string name13, string name14,
				string name15, int number)
{
    cout << string(70, '-');
    cout << "\n🦒 Here's your story:\n";
	cout << "\nGiraffes have aroused curiosity of " << name0 << " since earliest times.";
	cout << "\nThe giraffe is the tallest of all living " << name1 << ", but";
	cout << "\nscientists are unable to explain how it got its long " << name2 << ".";
	cout << "\nThe giraffe's tremendous height, which might reach " << number << " ";
	cout << "\n" << name3 << ", comes mostly from its legs and " << name4 << ". If a giraffe";
	cout << "\nwants to take a drink of " << name5 << " from the ground, it has to";
	cout << "\nspread its " << name6 << " far apart inorder to reach down and lap up";
	cout << "\nthe water with its huge " << name7 << ". The giraffe has " << name8 << " ears";
	cout << "\nthat are sensitive to the faintest " << name9 << ", and it has a/an ";
	cout << "\n" << name10 << " sense of smell and sight. When attacked, the giraffe can";
	cout << "\nput up a/an " << name11 << " fight by " << name12 << " out with its hind legs and using";
	cout << "\nits head like a sledge " << name13 << ". Finally, a giraffe can gallop";
	cout << "\nat more than thirty " << name14 << " an hour when pursued and can outrun";
	cout << "\nthe fastest " << name15 << ".";
	cout << "\n" << string(60, '-');
}