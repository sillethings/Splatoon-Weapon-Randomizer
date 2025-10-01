#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
#include <array>

int main() {
	/* Entire Splatoon Weapons */
	std::string shooters[39]{ "Sploosh-o-matic", "Neo Sploosh-o-matic", "Splattershot Jr.", "Custom Splattershot Jr.",
	"Splash-o-matic", "Neo Splash-o-matic", "Splash-o-matic GCK-O", "Aerospray MG", "Aerospray RG", "Colorz Aerospray",
	"Splattershot", "Tentatek Splattershot", "Glamorz Splattershot", "Hero Shot Replica", "Octo Shot Replica",
	"Order Shot Replica", ".52 Gal", ".52 Gal Deco", "N-ZAP 85'", "N-ZAP 89'", "Splattershot Pro",
	"Forge Splattershot Pro", "Splattershot Pro FRZ-N", ".96 Gal", ".96 Gal Deco", "Clawz .96 Gal", "Jet Squelcher", 
	"Custom Jet Squelcher", "Jet Squelcer COB-R", "Splattershot Nova", "Annaki Splattershot Nova", "L-3 Nozzlenose",
	"L-3 Nozzlenose D", "Glitterz L-3 Nozzlenose", "H-3 Nozzlenose", "H-3 Nozzlenose D", "H-3 Nozzlenose VIP-R", 
	"Squeezer", "Foil Squeezer" }; 
	std::string rollers[14]{ "Carbon Roller", "Carbon Roller Deco", "Carbon Roller ANG-L", "Splat Roller",
	"Krak-On Splat Roller", "Order Roller Replica", "Dynamo Roller", "Gold Dynamo Roller", "Starz Dyanmo Roller",
	"Flingza Roller", "Foil Flingza Roller", "Big Swig Roller", "Big Swig Roller Express", "Planetz Swig Roller" };
	std::string chargers[19]{ "Classic Squiffer", "New Squiffer", "Splat Charger", "Z+F Splat Charger",
	"Splat Charger CAM-O", "Order Charger Replica", "Splatterscope", "Z+F Splatterscope", "Splatterscope CAM-O",
	"E-Liter 4K", "Custom E-Liter 4K", "E-Liter 4K Scope", "Custom E-Liter 4K Scope", "Bamboozler 14 Mk I",
	"Bamboozler 14 Mk II", "Goo Tuber", "Custom Goo Tuber", "Snipewriter 5H", "Snipewriter 5B" };
	std::string sloshers[15]{ "Slosher", "Slosher Deco", "Order Slosher Replica", "Tri-Slosher", "Tri-Slosher Nouveau",
	"Tri-Slosher ASH-N", "Sloshing Machine", "Sloshing Machine Neo", "Bloblobber", "Bloblobber Deco", "Explosher",
	"Custom Explosher", "Dread Wringer", "Dread Wringer D", "Hornz Dread Wringer" };
	std::string splatlings[15]{ "Mini Splatling", "Zink Mini Splatling", "Mini Splatling RTL-R", "Heavy Splatling",
	"Heavy Splatling Deco", "Order Splatling Replica", "Hydra Splatling", "Custom Hydra Splatling",
	"Torrentz Hydra Splatling", "Ballpoint Splatling", "Ballpoint Splatling Nouveau", "Nautilus 47", "Nautilus 79",
	"Heavy Edit Splatling", "Heavy Edit Splatling Nouveau" };
	std::string dualies[16]{ "Dapples Dualies", "Dapples Dualies Nouveau", "Dapples Dualies NOC-T", "Splat Dualies",
	"Enperry Splat Dualies", "Twinklez Splat Dualies", "Order Dualies Replica", "Glooga Dualies", "Glooga Dualies Deco",
	"Dualie Squelchers", "Custom Dualie Squelchers", "Hoofz Dualie Squelchers", "Dark Tetra Dualies",
	"Light Tetra Dualies", "Douser Dualies FF", "Custom Douser Dualies FF" };
	std::string brellas[11]{ "Splat Brella", "Sorella Brella", "Order Brella Replica", "Tenta Brella",
	"Tenta Sorella Brella", "Tenta Brella CRE-M", "Undercover Brella", "Undercover Sorella Brella",
	"Patternz Undercover Brella", "Recycled Brella 24 Mk I", "Recycled Brella 24 Mk II" };
	std::string blasters[17]{ "Luna Blaster", "Luna Blaster Neo", "Order Blaster Replica", "Blaster", "Custom Blaster",
	"Gleamz Blaster", "Range Blaster", "Custom Range Blaster", "Clash Blaster", "Clash Blaster Neo", "Rapid Blaster",
	"Rapid Blaster Deco", "Rapid Blaster Pro", "Rapid Blaster Pro Deco", "Rapid Blaster Pro WNT-R", "S-Blast '92",
	"S-Blast '91", };
	std::string brushes[9]{ "Inkbrush", "Inkbrush Nouveau", "Octobrush", "Octobrush Nouveau", "Cometz Octobrush",
	"Order Brush Replica", "Painbrush", "Painbrush Nouveau", "Painbrush BRN-Z", };
	std::string stringers[9]{ "Tri-Stringer", "Inkline Tri-Stringer", "Bulbz Tri-Stringer", "Order Stringer Replica",
	"REEF-LUX 450", "REEF-LUX 450 Deco", "REEF-LUX 450 MIL-K", "Wellstring V", "Custom Wellstring V", };
	std::string splatanas[9]{ "Splatana Stamper", "Custom Splatana Stamper", "Stickerz Splatana Stamper",
	"Order Splatana Replica", "Splatana Wiper", "Splatana Wiper Deco", "Splatana Wiper RUS-T", "Mint Decavitator",
	"Charcoal Decavitator", };
	std::string allWeapons[173]{ "Sploosh-o-matic", "Neo Sploosh-o-matic", "Splattershot Jr.", "Custom Splattershot Jr.",
	"Splash-o-matic", "Neo Splash-o-matic", "Splash-o-matic GCK-O", "Aerospray MG", "Aerospray RG", "Colorz Aerospray",
	"Splattershot", "Tentatek Splattershot", "Glamorz Splattershot", "Hero Shot Replica", "Octo Shot Replica",
	"Order Shot Replica", ".52 Gal", ".52 Gal Deco", "N-ZAP 85'", "N-ZAP 89'", "Splattershot Pro",
	"Forge Splattershot Pro", "Splattershot Pro FRZ-N", ".96 Gal", ".96 Gal Deco", "Clawz .96 Gal", "Jet Squelcher",
	"Custom Jet Squelcher", "Jet Squelcer COB-R", "Splattershot Nova", "Annaki Splattershot Nova", "L-3 Nozzlenose",
	"L-3 Nozzlenose D", "Glitterz L-3 Nozzlenose", "H-3 Nozzlenose", "H-3 Nozzlenose D", "H-3 Nozzlenose VIP-R",
	"Squeezer", "Foil Squeezer", "Carbon Roller", "Carbon Roller Deco", "Carbon Roller ANG-L", "Splat Roller",
	"Krak-On Splat Roller", "Order Roller Replica", "Dynamo Roller", "Gold Dynamo Roller", "Starz Dyanmo Roller",
	"Flingza Roller", "Foil Flingza Roller", "Big Swig Roller", "Big Swig Roller Express", "Planetz Swig Roller",
	"Classic Squiffer", "New Squiffer", "Splat Charger", "Z+F Splat Charger",
	"Splat Charger CAM-O", "Order Charger Replica", "Splatterscope", "Z+F Splatterscope", "Splatterscope CAM-O",
	"E-Liter 4K", "Custom E-Liter 4K", "E-Liter 4K Scope", "Custom E-Liter 4K Scope", "Bamboozler 14 Mk I",
	"Bamboozler 14 Mk II", "Goo Tuber", "Custom Goo Tuber", "Snipewriter 5H", "Snipewriter 5B",
	"Slosher", "Slosher Deco" "Order Slosher Replica", "Tri-Slosher", "Tri-Slosher Nouveau",
	"Tri-Slosher ASH-N", "Sloshing Machine", "Sloshing Machine Neo", "Bloblobber", "Bloblobber Deco", "Explosher",
	"Custom Explosher", "Dread Wringer", "Dread Wringer D", "Hornz Dread Wringer", "Mini Splatling",
	"Zink Mini Splatling", "Mini Splatling RTL-R", "Heavy Splatling",
	"Heavy Splatling Deco", "Order Splatling Replica", "Hydra Splatling", "Custom Hydra Splatling",
	"Torrentz Hydra Splatling", "Ballpoint Splatling", "Ballpoint Splatling Nouveau", "Nautilus 47", "Nautilus 79",
	"Heavy Edit Splatling", "Heavy Edit Splatling Nouveau",
	"Dapples Dualies", "Dapples Dualies Nouveau", "Dapples Dualies NOC-T", "Splat Dualies",
	"Enperry Splat Dualies", "Twinklez Splat Dualies", "Order Dualies Replica", "Glooga Dualies", "Glooga Dualies Deco"
	"Dualie Squelchers", "Custom Dualie Squelchers", "Hoofz Dualie Squelchers", "Dark Tetra Dualies",
	"Light Tetra Dualies", "Douser Dualies FF", "Custom Douser Dualies FF", "Splat Brella", "Sorella Brella", "Order Brella Replica", "Tenta Brella",
	"Tenta Sorella Brella", "Tenta Brella CRE-M", "Undercover Brella", "Undercover Sorella Brella",
	"Patternz Undercover Brella", "Recycled Brella 24 Mk I", "Recycled Brella 24 Mk II",
	"Luna Blaster", "Luna Blaster Neo", "Order Blaster Replica", "Blaster", "Custom Blaster",
	"Gleamz Blaster", "Range Blaster", "Custom Range Blaster", "Clash Blaster", "Clash Blaster Neo", "Rapid Blaster",
	"Rapid Blaster Deco", "Rapid Blaster Pro", "Rapid Blaster Pro Deco", "Rapid Blaster Pro WNT-R", "S-Blast '92",
	"S-Blast '91", "Inkbrush", "Inkbrush Nouveau", "Octobrush", "Octobrush Nouveau", "Cometz Octobrush"
	"Order Brush Replica", "Painbrush", "Painbrush Nouveau", "Painbrush BRN-Z", "Tri-Stringer", "Inkline Tri-Stringer", "Bulbz Tri-Stringer", "Order Stringer Replica",
	"REEF-LUX 450", "REEF-LUX 450 Deco", "REEF-LUX 450 MIL-K", "Wellstring V", "Custom Wellstring V", "Splatana Stamper", "Custom Splatana Stamper", "Stickerz Splatana Stamper"
	"Order Splatana Replica", "Splatana Wiper", "Splatana Wiper Deco", "Splatana Wiper RUS-T", "Mint Decavitator",
	"Charcoal Decavitator", }; // Holy Hell a lot of weapons

	/* A Lot of weapons lol */
	int numberInput;
	srand(time(0));
	std::cout << "Hello, and welcome to Splatoon weapon randomizer where you can randomize different Splatoon weapons or all!\n";
	std::cout <<  "Now, Randomize which weapon class or all? \n";
	std::cout << "1) Shooters\n";
	std::cout << "2) Rollers\n";
	std::cout << "3) Chargers\n";
	std::cout << "4) Sloshers\n";
	std::cout << "5) Splatlings\n";
	std::cout << "6) Dualies\n";
	std::cout << "7) Brellas\n";
	std::cout << "8) Blasters\n";
	std::cout << "9) Brushes\n";
	std::cout << "10) Stringers\n";
	std::cout << "11) Splatanas\n";
	std::cout << "12) Randomize All\n";
	std::cout << "Just type in the number that corresponds to the option you want!: ";
	std::cin >> numberInput;
	switch (numberInput) {
	case 1: {
		int x = rand() % 39;
		std::cout << "Here's your random weapon, the " << shooters[x] << "!" << " Fire quickly and splat people with this shooter!\n";
		std::cout << "Okay bye now see you again soon or not!";
		std::cin.get();
		break;
	}
	case 2: {
		int y = rand() % 14;
		std::cout << "Here's your random weapon, the " << rollers[y] << "!" << " Paint in large numbers with powerful swings with this!\n";
		std::cout << "Okay bye now see you again soon or not!";
		std::cin.get();
		break;
	}
	case 3: {
		int z = rand() % 19;
		std::cout << "Here's your random weapon, the " << chargers[z] << "!" << " Snipe people effectively with this charger!\n";
		std::cout << "Okay bye now see you again soon or not!";
		std::cin.get();
		break;
	}
	case 4: {
		int a = rand() % 15;
		std::cout << "Here's your random weapon, the " << sloshers[a] << "!" << " Paint quickly with this slosher!\n";
		std::cout << "Okay bye now see you again soon or not!";
		std::cin.get();
		break;
	}
	case 5: {
		int b = rand() % 15; 
		std::cout << "Here's your random weapon, the " << splatlings[b] << "!" << " This splatling is really powerful!\n";
		std::cout << "Okay bye now see you again soon or not!";
		std::cin.get();
		break;
		}
	case 6: {
		int c = rand() % 16;
		std::cout << "Here's your random weapon, the " << dualies[c] << "!" << " Move quickly or not so much with these dualies\n";
		std::cout << "Okay bye now see you again soon or not!";
		std::cin.get();
		break;
	}
	case 7: {
		int d = rand() % 11;
		std::cout << "Here's your random weapon, the " << brellas[d] << "!" << " Defend with this brella!\n";
		std::cout << "Okay bye now see you again soon or not!";
		std::cin.get();
		break;
	}
	case 8: {
		int e = rand() % 17;
		std::cout << "Here's your random weapon, the " << blasters[e] << "!" << " Blast people with this!\n";
		std::cout << "Okay bye now see you again soon or not!";
		std::cin.get();
		break;
	}
	case 9: {
		int f = rand() % 9;
		std::cout << "Here's your random weapon, the " << brushes[f] << "!" << " Swing, swing with this brush!\n";
		std::cout << "Okay bye now see you again soon or not!";
		std::cin.get();
		break;
	}
	case 10: {
		int g = rand() % 9;
		std::cout << "Here's your random weapon, the " << stringers[g] << "!" << " Get ready to aim with this one!\n";
		std::cout << "Okay bye now see you again soon or not!";
		std::cin.get();
		break;
	}
	case 11: {
		int h = rand() % 9;
		std::cout << "Here's your random weapon, the " << splatanas[h] << "!" << " Wow this splatana is good!\n";
		std::cout << "Okay bye now see you again soon or not!";
		std::cin.get();
		break;
	}
	case 12: {
		int i = rand() % 173;
		std::cout << "Here's your random weapon, the " << allWeapons[i] << "!" << " With all out of the 173 weapons you end up with this one, be proud!\n";
		std::cout << "Okay bye now see you again soon or not!";
		std::cin.get();
		break;
	}
	default:
		std::cout << "Please retry the program again or enter a number 1 - 12.\n";
		std::cout << "Sorry I think I would be able to send you back but I'm a new programmer and bye-bye!.";
		std::cin.get();
	}
	std::cin.get();
	return 0;    
}
// @BabyMickey or @SilleThings
