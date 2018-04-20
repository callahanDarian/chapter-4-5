#include <iostream>
#include <string>
#include <windows.h>
#include <random>

double race, spec, background;
double statChoice;
int stat1=0, stat2=0, stat3=0, stat4=0, stat5=0, stat6=0;
int trashStat[5];
int usedStat[7];
int abilityMod[7];
int abilityChoice[3];
std::string strRace, strSpec, strBackground;


void displayStats()
{
	std::cout << "\nYour stats have the following modifiers : " << std::endl;
	std::cout << "1 -  Strength ...... " << abilityMod[1] << std::endl;
	std::cout << "2 -  Dexterity ..... " << abilityMod[2] << std::endl;
	std::cout << "3 -  Constitution .. " << abilityMod[3] << std::endl;
	std::cout << "4 -  Inteligence ... " << abilityMod[4] << std::endl;
	std::cout << "5 -  Wisdom ........ " << abilityMod[5] << std::endl;
	std::cout << "6 -  Charisma ...... " << abilityMod[6] << std::endl;
	std::cout << std::endl;
}

void raceSelection()
{
	std::cout << "Please select a race.\n 1 - Dwarf          6 - Elf\n 2 - Halfling       7 - Human\n 3 - Dragonborn     8 - Gnome\n 4 - Half-Elf       9 - Half-Orc\n 5 - Tiefling\n > ";
	std::cin >> race;

	if (race == 1)
	{
		strRace = "Dwarf";
	}
	else if (race == 2)
	{
		strRace = "Halfling";
	}
	else if (race == 3)
	{
		strRace = "Dragonborn";
	}
	else if (race == 4)
	{
		strRace = "Half-Elf";
	}
	else if (race == 5)
	{
		strRace = "Tiefling";
	}
	else if (race == 6)
	{
		strRace = "Elf";
	}
	else if (race == 7)
	{
		strRace = "Human";
	}
	else if (race == 8)
	{
		strRace = "Gnome";
	}
	else if (race == 9)
	{
		strRace = "Half-Orc";
	}
	else
	{
		std::cout << "\n\n Please try again; input a number aside a race.\n\n" << std::endl;
		raceSelection();
	}
}

void classSelection()
{
	std::cout << "Please select a class.\n 1 - Barbarian      7 - Bard\n 2 - Cleric         8 - Druid\n 3 - Fighter        9 - Monk\n 4 - Paladin        10 - Ranger\n 5 - Rogue          11 - Sorcerer\n 6 - Warlock        12 - Wizard\n > ";
	std::cin >> spec;
	if (spec == 1)
	{
		strSpec = "Barbarian";
	}
	else if (spec == 2)
	{
		strSpec = "Cleric";
	}
	else if (spec == 3)
	{
		strSpec = "Fighter";
	}
	else if (spec == 4)
	{
		strSpec = "Paladin";
	}
	else if (spec == 5)
	{
		strSpec = "Rogue";
	}
	else if (spec == 6)
	{
		strSpec = "Warlock";
	}
	else if (spec == 7)
	{
		strSpec = "Bard";
	}
	else if (spec == 8)
	{
		strSpec = "Druid";
	}
	else if (spec == 9)
	{
		strSpec = "Monk";
	}
	else if (spec == 10)
	{
		strSpec = "Ranger";
	}
	else if (spec == 11)
	{
		strSpec = "Sorcerer";
	}
	else if (spec == 12)
	{
		strSpec = "Wizard";
	}
	else
	{
		std::cout << "\n\nPlease try again; input a number aside a class.\n\n" << std::endl;
		classSelection();
	}
}

void backgroundSelection()
{
	std::cout << "Please select a background.\n 1 - Acolyte        8 - Charlatan\n 2 - Criminal       9 - Entertainer\n 3 - Folk Hero      10 - Guild Artistan\n 4 - Hermit         11 - Noble\n 5 - Outlander      12 - Sage\n 6 - Sailor         13 - Soldier\n 7 - Urchin\n > ";
	std::cin >> background;

	if (background == 1)
	{
		strBackground = "Acolyte";
	}
	else if (background == 2)
	{
		strBackground = "Criminal";
	}
	else if (background == 3)
	{
		strBackground = "Folk Hero";
	}
	else if (background == 4)
	{
		strBackground = "Hermit";
	}
	else if (background == 5)
	{
		strBackground = "Outlander";
	}
	else if (background == 6)
	{
		strBackground = "Sailor";
	}
	else if (background == 7)
	{
		strBackground = "Urchin";
	}
	else if (background == 8)
	{
		strBackground = "Charlatan";
	}
	else if (background == 9)
	{
		strBackground = "Entertainer";
	}
	else if (background == 10)
	{
		strBackground = "Guild Artistan";
	}
	else if (background == 11)
	{
		strBackground = "Noble";
	}
	else if (background == 12)
	{
		strBackground = "Sage";
	}
	else if (background == 13)
	{
		strBackground = "Soldier";
	}
	else
	{
		std::cout << "\n\nPlease try again; input a number aside a background.\n\n" << std::endl;
		backgroundSelection();
	}
}

										// Stat rolling block start

void stat3d6()
{
	srand(GetTickCount());

	stat1 = (rand() % 6 + 1) + (rand() % 6 + 1) + (rand() % 6 + 1);
	stat2 = (rand() % 6 + 1) + (rand() % 6 + 1) + (rand() % 6 + 1);
	stat3 = (rand() % 6 + 1) + (rand() % 6 + 1) + (rand() % 6 + 1);
	stat4 = (rand() % 6 + 1) + (rand() % 6 + 1) + (rand() % 6 + 1);
	stat5 = (rand() % 6 + 1) + (rand() % 6 + 1) + (rand() % 6 + 1);
	stat6 = (rand() % 6 + 1) + (rand() % 6 + 1) + (rand() % 6 + 1);
}

void stat4d6()
{
	srand(GetTickCount());

	trashStat[1] = rand() % 6 + 1;
	trashStat[2] = rand() % 6 + 1;
	trashStat[3] = rand() % 6 + 1;
	trashStat[4] = rand() % 6 + 1;
	if ( (trashStat[1] < trashStat[2]) || (trashStat[1] < trashStat[3]) || (trashStat[1] < trashStat[4]) )
	{
		trashStat[1] = 0;
	}
	else if ( (trashStat[2] < trashStat[1]) || (trashStat[2] < trashStat[3]) || (trashStat[2] < trashStat[4]) )
	{
		trashStat[2] = 0;
	}
	else if ( (trashStat[3] < trashStat[1]) || (trashStat[3] < trashStat[2]) || (trashStat[3] < trashStat[4]) )
	{
		trashStat[3] = 0;
	}
	else if ( (trashStat[4] < trashStat[1]) || (trashStat[4] < trashStat[2]) || (trashStat[4] < trashStat[3]) )
	{
		trashStat[4] = 0;
	}
	else
	{
		trashStat[1] = 0;
	}
	stat1 = trashStat[1] + trashStat[2] + trashStat[3] + trashStat[4];

	trashStat[1] = rand() % 6 + 1;
	trashStat[2] = rand() % 6 + 1;
	trashStat[3] = rand() % 6 + 1;
	trashStat[4] = rand() % 6 + 1;
	if ((trashStat[1] < trashStat[2]) || (trashStat[1] < trashStat[3]) || (trashStat[1] < trashStat[4]))
	{
		trashStat[1] = 0;
	}
	else if ((trashStat[2] < trashStat[1]) || (trashStat[2] < trashStat[3]) || (trashStat[2] < trashStat[4]))
	{
		trashStat[2] = 0;
	}
	else if ((trashStat[3] < trashStat[1]) || (trashStat[3] < trashStat[2]) || (trashStat[3] < trashStat[4]))
	{
		trashStat[3] = 0;
	}
	else if ((trashStat[4] < trashStat[1]) || (trashStat[4] < trashStat[2]) || (trashStat[4] < trashStat[3]))
	{
		trashStat[4] = 0;
	}
	else
	{
		trashStat[1] = 0;
	}
	stat2 = trashStat[1] + trashStat[2] + trashStat[3] + trashStat[4];

	trashStat[1] = rand() % 6 + 1;
	trashStat[2] = rand() % 6 + 1;
	trashStat[3] = rand() % 6 + 1;
	trashStat[4] = rand() % 6 + 1;
	if ((trashStat[1] < trashStat[2]) || (trashStat[1] < trashStat[3]) || (trashStat[1] < trashStat[4]))
	{
		trashStat[1] = 0;
	}
	else if ((trashStat[2] < trashStat[1]) || (trashStat[2] < trashStat[3]) || (trashStat[2] < trashStat[4]))
	{
		trashStat[2] = 0;
	}
	else if ((trashStat[3] < trashStat[1]) || (trashStat[3] < trashStat[2]) || (trashStat[3] < trashStat[4]))
	{
		trashStat[3] = 0;
	}
	else if ((trashStat[4] < trashStat[1]) || (trashStat[4] < trashStat[2]) || (trashStat[4] < trashStat[3]))
	{
		trashStat[4] = 0;
	}
	else
	{
		trashStat[1] = 0;
	}
	stat3 = trashStat[1] + trashStat[2] + trashStat[3] + trashStat[4];

	trashStat[1] = rand() % 6 + 1;
	trashStat[2] = rand() % 6 + 1;
	trashStat[3] = rand() % 6 + 1;
	trashStat[4] = rand() % 6 + 1;
	if ((trashStat[1] < trashStat[2]) || (trashStat[1] < trashStat[3]) || (trashStat[1] < trashStat[4]))
	{
		trashStat[1] = 0;
	}
	else if ((trashStat[2] < trashStat[1]) || (trashStat[2] < trashStat[3]) || (trashStat[2] < trashStat[4]))
	{
		trashStat[2] = 0;
	}
	else if ((trashStat[3] < trashStat[1]) || (trashStat[3] < trashStat[2]) || (trashStat[3] < trashStat[4]))
	{
		trashStat[3] = 0;
	}
	else if ((trashStat[4] < trashStat[1]) || (trashStat[4] < trashStat[2]) || (trashStat[4] < trashStat[3]))
	{
		trashStat[4] = 0;
	}
	else
	{
		trashStat[1] = 0;
	}
	stat4 = trashStat[1] + trashStat[2] + trashStat[3] + trashStat[4];
	trashStat[1] = rand() % 6 + 1;
	trashStat[2] = rand() % 6 + 1;
	trashStat[3] = rand() % 6 + 1;
	trashStat[4] = rand() % 6 + 1;
	if ((trashStat[1] < trashStat[2]) || (trashStat[1] < trashStat[3]) || (trashStat[1] < trashStat[4]))
	{
		trashStat[1] = 0;
	}
	else if ((trashStat[2] < trashStat[1]) || (trashStat[2] < trashStat[3]) || (trashStat[2] < trashStat[4]))
	{
		trashStat[2] = 0;
	}
	else if ((trashStat[3] < trashStat[1]) || (trashStat[3] < trashStat[2]) || (trashStat[3] < trashStat[4]))
	{
		trashStat[3] = 0;
	}
	else if ((trashStat[4] < trashStat[1]) || (trashStat[4] < trashStat[2]) || (trashStat[4] < trashStat[3]))
	{
		trashStat[4] = 0;
	}
	else
	{
		trashStat[1] = 0;
	}
	stat5 = trashStat[1] + trashStat[2] + trashStat[3] + trashStat[4];

	trashStat[1] = rand() % 6 + 1;
	trashStat[2] = rand() % 6 + 1;
	trashStat[3] = rand() % 6 + 1;
	trashStat[4] = rand() % 6 + 1;
	if ((trashStat[1] < trashStat[2]) || (trashStat[1] < trashStat[3]) || (trashStat[1] < trashStat[4]))
	{
		trashStat[1] = 0;
	}
	else if ((trashStat[2] < trashStat[1]) || (trashStat[2] < trashStat[3]) || (trashStat[2] < trashStat[4]))
	{
		trashStat[2] = 0;
	}
	else if ((trashStat[3] < trashStat[1]) || (trashStat[3] < trashStat[2]) || (trashStat[3] < trashStat[4]))
	{
		trashStat[3] = 0;
	}
	else if ((trashStat[4] < trashStat[1]) || (trashStat[4] < trashStat[2]) || (trashStat[4] < trashStat[3]))
	{
		trashStat[4] = 0;
	}
	else
	{
		trashStat[1] = 0;
	}
	stat6 = trashStat[1] + trashStat[2] + trashStat[3] + trashStat[4];
}

void predeterminedStats()
{
	stat1 = 15;
	stat2 = 14;
	stat3 = 13;
	stat4 = 12;
	stat5 = 10;
	stat6 = 8;
}

void statRolling()
{
	std::cout << "Which method would you like to use to generate stats?\n 1 - 3d6 : roll 3d6 and use total\n 2 - 4d6 : roll 4d6 and use total of top 3d6\n 3 - Predetermined Stats : 15, 14, 13, 12, 10, 8" << std::endl;
	std::cin >> statChoice;
	if (statChoice == 1)
	{
		stat3d6();
	}
	else if (statChoice == 2)
	{
		stat4d6();
	}
	else if (statChoice == 3)
	{
		predeterminedStats();
	}
	else
	{
		std::cout << "\n\nPlease try again; input a number next to a stat generation method.\n\n" << std::endl;
		statRolling();
	}
}

										// Stat rolling block end

void statAssigning()
{
	std::cout << "\n\nOnly use each stat once, or you will have to restart this process.\n" << std::endl;
	std::cout << "Your available stats are :\n 1 - " << stat1 << "\n 2 - " << stat2 << "\n 3 - " << stat3 << "\n 4 - " << stat4 << "\n 5 - " << stat5 << "\n 6 - " << stat6 << std::endl;
	std::cout << std::endl;

	std::cout << "Which stat would you like to assign to Strength?\n > ";										// Stat 1
	std::cin >> usedStat[1];
	if ( (usedStat[1] > 6) || (usedStat[1] < 1) )
	{
		std::cout << "\n\nYou messed up\nPlease start over and try again.\n\n" << std::endl;
		statAssigning();
	}
	else { }
		
	std::cout << "Which stat would you like to assign to Dexterity?\n > ";										//Stat 2
	std::cin >> usedStat[2];
	if ((usedStat[2] > 6) || (usedStat[2] < 1) || (usedStat[2] == usedStat[1]) )
	{
		std::cout << "\n\nYou messed up\nPlease start over and try again.\n\n" << std::endl;
		statAssigning();
	}
	else {}

	std::cout << "Which stat would you like to assign to Constitution?\n > ";										// Stat 3
	std::cin >> usedStat[3];
	if ((usedStat[3] > 6) || (usedStat[3] < 1) || (usedStat[3] == usedStat[1]) || (usedStat[3] == usedStat[2]) )
	{
		std::cout << "\n\nYou messed up\nPlease start over and try again.\n\n" << std::endl;
		statAssigning();
	}
	else {}

	std::cout << "Which stat would you like to assign to Intelligence?\n > ";										// Stat 4
	std::cin >> usedStat[4];
	if ((usedStat[4] > 6) || (usedStat[4] < 1) || (usedStat[4] == usedStat[1]) || (usedStat[4] == usedStat[2]) || (usedStat[4] == usedStat[3]))
	{
		std::cout << "\n\nYou messed up\nPlease start over and try again.\n\n" << std::endl;
		statAssigning();
	}
	else {}

	std::cout << "Which stat would you like to assign to Wisdom?\n > ";										// Stat 5
	std::cin >> usedStat[5];
	if ((usedStat[5] > 6) || (usedStat[5] < 1) || (usedStat[5] == usedStat[1]) || (usedStat[5] == usedStat[2]) || (usedStat[5] == usedStat[3]) || (usedStat[5] == usedStat [4]))
	{
		std::cout << "\n\nYou messed up\nPlease start over and try again.\n\n" << std::endl;
		statAssigning();
	}
	else {}

	std::cout << "Which stat would you like to assign to Charisma?\n > ";										// Stat 6
	std::cin >> usedStat[6];
	if ((usedStat[6] > 6) || (usedStat[6] < 1) || (usedStat[6] == usedStat[1]) || (usedStat[6] == usedStat[2]) || (usedStat[6] == usedStat[3]) || (usedStat[6] == usedStat[4]) || (usedStat[6] == usedStat[5]))
	{
		std::cout << "\n\nYou messed up\nPlease start over and try again.\n\n" << std::endl;
		statAssigning();
	}
	else {}

	if (usedStat[1] == 1)										// Assign usedStat1
	{
		usedStat[1] = stat1;
	}
	else if (usedStat[1] == 2)
	{
		usedStat[1] = stat2;
	}
	else if (usedStat[1] == 3)
	{
		usedStat[1] = stat3;
	}
	else if (usedStat[1] == 4)
	{
		usedStat[1] = stat4;
	}
	else if (usedStat[1] == 5)
	{
		usedStat[1] = stat5;
	}
	else if (usedStat[1] == 6)
	{
		usedStat[1] = stat6;
	}
	else
	{
		std::cout << "ERROR" << std::endl;
		system("Pause");
		exit(0);
	}

	if (usedStat[2] == 1)										// Assign usedStat2
	{
		usedStat[2] = stat1;
	}
	else if (usedStat[2] == 2)
	{
		usedStat[2] = stat2;
	}
	else if (usedStat[2] == 3)
	{
		usedStat[2] = stat3;
	}
	else if (usedStat[2] == 4)
	{
		usedStat[2] = stat4;
	}
	else if (usedStat[2] == 5)
	{
		usedStat[2] = stat5;
	}
	else if (usedStat[2] == 6)
	{
		usedStat[2] = stat6;
	}
	else
	{
		std::cout << "ERROR" << std::endl;
		system("Pause");
		exit(0);
	}

	if (usedStat[3] == 1)										// Assign usedStat3
	{
		usedStat[3] = stat1;
	}
	else if (usedStat[3] == 2)
	{
		usedStat[3] = stat2;
	}
	else if (usedStat[3] == 3)
	{
		usedStat[3] = stat3;
	}
	else if (usedStat[3] == 4)
	{
		usedStat[3] = stat4;
	}
	else if (usedStat[3] == 5)
	{
		usedStat[3] = stat5;
	}
	else if (usedStat[3] == 6)
	{
		usedStat[3] = stat6;
	}
	else
	{
		std::cout << "ERROR" << std::endl;
		system("Pause");
		exit(0);
	}

	if (usedStat[4] == 1)										// Assign usedStat4
	{
		usedStat[4] = stat1;
	}
	else if (usedStat[4] == 2)
	{
		usedStat[4] = stat2;
	}
	else if (usedStat[4] == 3)
	{
		usedStat[4] = stat3;
	}
	else if (usedStat[4] == 4)
	{
		usedStat[4] = stat4;
	}
	else if (usedStat[4] == 5)
	{
		usedStat[4] = stat5;
	}
	else if (usedStat[4] == 6)
	{
		usedStat[4] = stat6;
	}
	else
	{
		std::cout << "ERROR" << std::endl;
		system("Pause");
		exit(0);
	}

	if (usedStat[5] == 1)										// Assign usedStat 5
	{
		usedStat[5] = stat1;
	}
	else if (usedStat[5] == 2)
	{
		usedStat[5] = stat2;
	}
	else if (usedStat[5] == 3)
	{
		usedStat[5] = stat3;
	}
	else if (usedStat[5] == 4)
	{
		usedStat[5] = stat4;
	}
	else if (usedStat[5] == 5)
	{
		usedStat[5] = stat5;
	}
	else if (usedStat[5] == 6)
	{
		usedStat[5] = stat6;
	}
	else
	{
		std::cout << "ERROR" << std::endl;
		system("Pause");
		exit(0);
	}

	if (usedStat[6] == 1)										// Assign usedStat6
	{
		usedStat[6] = stat1;
	}
	else if (usedStat[6] == 2)
	{
		usedStat[6] = stat2;
	}
	else if (usedStat[6] == 3)
	{
		usedStat[6] = stat3;
	}
	else if (usedStat[6] == 4)
	{
		usedStat[6] = stat4;
	}
	else if (usedStat[6] == 5)
	{
		usedStat[6] = stat5;
	}
	else if (usedStat[6] == 6)
	{
		usedStat[6] = stat6;
	}
	else
	{
		std::cout << "ERROR" << std::endl;
		system("Pause");
		exit(0);
	}
}

										// Ability Score BS start

void abilityModIncrease()
{
	displayStats();
	std::cout << "Which ability modifier would you like to increase?\n > ";
	std::cin >> abilityChoice[1];

	if (abilityChoice[1] == 1)
	{
		abilityMod[1] = abilityMod[1] + 1;
	}
	else if (abilityChoice[1] == 2)
	{
		abilityMod[2] = abilityMod[2] + 1;
	}
	else if (abilityChoice[1] == 3)
	{
		abilityMod[3] = abilityMod[3] + 1;
	}
	else if (abilityChoice[1] == 4)
	{
		abilityMod[4] = abilityMod[4] + 1;
	}
	else if (abilityChoice[1] == 5)
	{
		abilityMod[5] = abilityMod[5] + 1;
	}
	else if (abilityChoice[1] == 6)
	{
		abilityMod[6] = abilityMod[6] + 1;
	}
	else
	{
		std::cout << "\n\nPlease try again\n\n" << std::endl;
		abilityModIncrease();
	}

	std::cout << "\n\n\nYour stats have the following modifiers : " << std::endl;
	std::cout << "1 -  Strength ...... " << abilityMod[1] << std::endl;
	std::cout << "2 -  Dexterity ..... " << abilityMod[2] << std::endl;
	std::cout << "3 -  Constitution .. " << abilityMod[3] << std::endl;
	std::cout << "4 -  Intelligence ... " << abilityMod[4] << std::endl;
	std::cout << "5 -  Wisdom ........ " << abilityMod[5] << std::endl;
	std::cout << "6 -  Charisma ...... " << abilityMod[6] << std::endl;
	std::cout << std::endl;
	std::cout << "Which ability modifier would you like to increase?\n > ";
	std::cin >> abilityChoice[2];

	if (abilityChoice[1] == abilityChoice[2])
	{
		std::cout << "\n\nYou cannot increase the same ability modifier multiple times.\n\n" << std::endl;

		if (abilityChoice[1] == 1)
		{
			abilityMod[1] = abilityMod[1] - 1;
		}
		else if (abilityChoice[1] == 2)
		{
			abilityMod[2] = abilityMod[2] - 1;
		}
		else if (abilityChoice[1] == 3)
		{
			abilityMod[3] = abilityMod[3] - 1;
		}
		else if (abilityChoice[1] == 4)
		{
			abilityMod[4] = abilityMod[4] - 1;
		}
		else if (abilityChoice[1] == 5)
		{
			abilityMod[5] = abilityMod[5] - 1;
		}
		else if (abilityChoice[1] == 6)
		{
			abilityMod[6] = abilityMod[6] - 1;
		}
		else
		{
			std::cout << "\n\nPlease try again\n\n" << std::endl;
			abilityModIncrease();
		}
		abilityModIncrease();
	}


	else if (abilityChoice[2] == 1)
	{
		abilityMod[1] = abilityMod[1] + 1;
	}
	else if (abilityChoice[2] == 2)
	{
		abilityMod[2] = abilityMod[2] + 1;
	}
	else if (abilityChoice[2] == 3)

	{
		abilityMod[3] = abilityMod[3] + 1;
	}
	else if (abilityChoice[2] == 4)
	{
		abilityMod[4] = abilityMod[4] + 1;
	}
	else if (abilityChoice[2] == 5)
	{
		abilityMod[5] = abilityMod[5] + 1;
	}
	else if (abilityChoice[2] == 6)
	{
		abilityMod[6] = abilityMod[6] + 1;
	}
	else
	{
		std::cout << "\n\nPlease try again\n\n" << std::endl;
		abilityModIncrease();
	}
}

void abilityScoreRaceAndBackgroundCalc()
{
	if (race == 1)
	{
		abilityMod[3] = abilityMod[3] + 2;
	}
	else if (race == 2)
	{
		abilityMod[2] = abilityMod[2] + 2;
	}
	else if (race == 3)
	{
		abilityMod[1] = abilityMod[1] + 2;
		abilityMod[6] = abilityMod[6] + 1;
	}
	else if (race == 4)
	{
		abilityMod[6] = abilityMod[6] + 2;
		abilityModIncrease();					// +1 to two of choice
	}
	else if (race == 5)
	{
		abilityMod[6] = abilityMod[6] + 2;
		abilityMod[4] = abilityMod[4] + 1;
	}
	else if (race == 6)
	{
		abilityMod[2] = abilityMod[2] + 2;
	}
	else if (race == 7)
	{
		abilityMod[1] = abilityMod[1] + 1;
		abilityMod[2] = abilityMod[2] + 1;
		abilityMod[3] = abilityMod[3] + 1;
		abilityMod[4] = abilityMod[4] + 1;
		abilityMod[5] = abilityMod[5] + 1;
		abilityMod[6] = abilityMod[6] + 1;
	}
	else if (race == 8)
	{
		abilityMod[4] = abilityMod[4] + 2;
	}
	else if (race == 9)
	{
		abilityMod[1] = abilityMod[1] + 2;
		abilityMod[3] = abilityMod[3] + 1;
	}
	else
	{

	}

	displayStats();

}

void abilityScoreCalculator()
{
	// Strength Mod - usedStat1
	if ((usedStat[1] == 2) || (usedStat[1] == 3))
	{
		abilityMod[1] = -4;
	}
	else if ((usedStat[1] == 4) || (usedStat[1] == 5))
	{
		abilityMod[1] = -3;
	}
	else if ((usedStat[1] == 6) || (usedStat[1] == 7))
	{
		abilityMod[1] = -2;
	}
	else if ((usedStat[1] == 8) || (usedStat[1] == 9))
	{
		abilityMod[1] = -1;
	}
	else if ((usedStat[1] == 10) || (usedStat[1] == 11))
	{
		abilityMod[1] = 0;
	}
	else if ((usedStat[1] == 12) || (usedStat[1] == 13))
	{
		abilityMod[1] = 1;
	}
	else if ((usedStat[1] == 14) || (usedStat[1] == 15))
	{
		abilityMod[1] = 2;
	}
	else if ((usedStat[1] == 16) || (usedStat[1] == 17))
	{
		abilityMod[1] = 3;
	}
	else if ((usedStat[1] == 18) || (usedStat[1] == 19))
	{
		abilityMod[1] = 4;
	}
	else if ((usedStat[1] == 20) || (usedStat[1] == 21))
	{
		abilityMod[1] = 5;
	}
	else
	{ }

	// Dexterity Mod - usedStat2
	if ((usedStat[2] == 2) || (usedStat[2] == 3))
	{
		abilityMod[2] = -4;
	}
	else if ((usedStat[2] == 4) || (usedStat[2] == 5))
	{
		abilityMod[2] = -3;
	}
	else if ((usedStat[2] == 6) || (usedStat[2] == 7))
	{
		abilityMod[2] = -2;
	}
	else if ((usedStat[2] == 8) || (usedStat[2] == 9))
	{
		abilityMod[2] = -1;
	}
	else if ((usedStat[2] == 10) || (usedStat[2] == 11))
	{
		abilityMod[2] = 0;
	}
	else if ((usedStat[2] == 12) || (usedStat[2] == 13))
	{
		abilityMod[2] = 1;
	}
	else if ((usedStat[2] == 14) || (usedStat[2] == 15))
	{
		abilityMod[2] = 2;
	}
	else if ((usedStat[2] == 16) || (usedStat[2] == 17))
	{
		abilityMod[2] = 3;
	}
	else if ((usedStat[2] == 18) || (usedStat[2] == 19))
	{
		abilityMod[2] = 4;
	}
	else if ((usedStat[2] == 20) || (usedStat[2] == 21))
	{
		abilityMod[2] = 5;
	}
	else
	{ }

	// Constitution Mod - usedStat3
	if ((usedStat[3] == 2) || (usedStat[3] == 3))
	{
		abilityMod[3] = -4;
	}
	else if ((usedStat[3] == 4) || (usedStat[3] == 5))
	{
		abilityMod[3] = -3;
	}
	else if ((usedStat[3] == 6) || (usedStat[3] == 7))
	{
		abilityMod[3] = -2;
	}
	else if ((usedStat[3] == 8) || (usedStat[3] == 9))
	{
		abilityMod[3] = -1;
	}
	else if ((usedStat[3] == 10) || (usedStat[3] == 11))
	{
		abilityMod[3] = 0;
	}
	else if ((usedStat[3] == 12) || (usedStat[3] == 13))
	{
		abilityMod[3] = 1;
	}
	else if ((usedStat[3] == 14) || (usedStat[3] == 15))
	{
		abilityMod[3] = 2;
	}
	else if ((usedStat[3] == 16) || (usedStat[3] == 17))
	{
		abilityMod[3] = 3;
	}
	else if ((usedStat[3] == 18) || (usedStat[3] == 19))
	{
		abilityMod[3] = 4;
	}
	else if ((usedStat[3] == 20) || (usedStat[3] == 21))
	{
		abilityMod[3] = 5;
	}
	else
	{
	}

	// Intelligence Mod - usedStat4
	if ((usedStat[4] == 2) || (usedStat[4] == 3))
	{
		abilityMod[4] = -4;
	}
	else if ((usedStat[4] == 4) || (usedStat[4] == 5))
	{
		abilityMod[4] = -3;
	}
	else if ((usedStat[4] == 6) || (usedStat[4] == 7))
	{
		abilityMod[4] = -2;
	}
	else if ((usedStat[4] == 8) || (usedStat[4] == 9))
	{
		abilityMod[4] = -1;
	}
	else if ((usedStat[4] == 10) || (usedStat[4] == 11))
	{
		abilityMod[4] = 0;
	}
	else if ((usedStat[4] == 12) || (usedStat[4] == 13))
	{
		abilityMod[4] = 1;
	}
	else if ((usedStat[4] == 14) || (usedStat[4] == 15))
	{
		abilityMod[4] = 2;
	}
	else if ((usedStat[4] == 16) || (usedStat[4] == 17))
	{
		abilityMod[4] = 3;
	}
	else if ((usedStat[4] == 18) || (usedStat[4] == 19))
	{
		abilityMod[4] = 4;
	}
	else if ((usedStat[4] == 20) || (usedStat[4] == 21))
	{
		abilityMod[4] = 5;
	}
	else
	{
	}

	// Wisdom Mod - usedStat5
	if ((usedStat[5] == 2) || (usedStat[5] == 3))
	{
		abilityMod[5] = -4;
	}
	else if ((usedStat[5] == 4) || (usedStat[5] == 5))
	{
		abilityMod[5] = -3;
	}
	else if ((usedStat[5] == 6) || (usedStat[5] == 7))
	{
		abilityMod[5] = -2;
	}
	else if ((usedStat[5] == 8) || (usedStat[5] == 9))
	{
		abilityMod[5] = -1;
	}
	else if ((usedStat[5] == 10) || (usedStat[5] == 11))
	{
		abilityMod[5] = 0;
	}
	else if ((usedStat[5] == 12) || (usedStat[5] == 13))
	{
		abilityMod[5] = 1;
	}
	else if ((usedStat[5] == 14) || (usedStat[5] == 15))
	{
		abilityMod[5] = 2;
	}
	else if ((usedStat[5] == 16) || (usedStat[5] == 17))
	{
		abilityMod[5] = 3;
	}
	else if ((usedStat[5] == 18) || (usedStat[5] == 19))
	{
		abilityMod[5] = 4;
	}
	else if ((usedStat[5] == 20) || (usedStat[5] == 21))
	{
		abilityMod[5] = 5;
	}
	else
	{
	}

	// Charisma Mod - usedStat6
	if ((usedStat[6] == 2) || (usedStat[6] == 3))
	{
		abilityMod[6] = -4;
	}
	else if ((usedStat[6] == 4) || (usedStat[6] == 5))
	{
		abilityMod[6] = -3;
	}
	else if ((usedStat[6] == 6) || (usedStat[6] == 7))
	{
		abilityMod[6] = -2;
	}
	else if ((usedStat[6] == 8) || (usedStat[6] == 9))
	{
		abilityMod[6] = -1;
	}
	else if ((usedStat[6] == 10) || (usedStat[6] == 11))
	{
		abilityMod[6] = 0;
	}
	else if ((usedStat[6] == 12) || (usedStat[6] == 13))
	{
		abilityMod[6] = 1;
	}
	else if ((usedStat[6] == 14) || (usedStat[6] == 15))
	{
		abilityMod[6] = 2;
	}
	else if ((usedStat[6] == 16) || (usedStat[6] == 17))
	{
		abilityMod[6] = 3;
	}
	else if ((usedStat[6] == 18) || (usedStat[6] == 19))
	{
		abilityMod[6] = 4;
	}
	else if ((usedStat[6] == 20) || (usedStat[6] == 21))
	{
		abilityMod[6] = 5;
	}
	else
	{
	}

	abilityScoreRaceAndBackgroundCalc();

}

										// Ability Score BS end

int main()
{
	std::cout << " - Character Creation - \n" << std::endl;

	raceSelection();
	std::cout << "\n - Race : " << strRace << std::endl;
	std::cout << std::endl;

	classSelection();
	std::cout << "\n - Class : " << strSpec << std::endl;
	std::cout << std::endl;

	backgroundSelection();
	std::cout << "\n - Background : " << strBackground << std::endl;
	std::cout << std::endl;

	statRolling();
	std::cout << std::endl;

	statAssigning();
	std::cout << "\n\n\nYou have assigned the following stats : " << std::endl;
	std::cout << "1 -  Strength ...... " << usedStat[1] << std::endl;
	std::cout << "2 -  Dexterity ..... " << usedStat[2] << std::endl;
	std::cout << "3 -  Constitution .. " << usedStat[3] << std::endl;
	std::cout << "4 -  Inteligence ... " << usedStat[4] << std::endl;
	std::cout << "5 -  Wisdom ........ " << usedStat[5] << std::endl;
	std::cout << "6 -  Charisma ...... " << usedStat[6] << std::endl;
	std::cout << std::endl;

	abilityScoreCalculator();
	


	std::cout << std::endl;
	system("Pause");
	return(0);
}