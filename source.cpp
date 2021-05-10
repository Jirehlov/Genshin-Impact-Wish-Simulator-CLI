#include <algorithm>
#include <chrono>
#include <iostream>
#include <random>
#include <vector>
#include <string>
#define ULTRAPOS 437580000
using namespace std;

int main() {
    std::cout << "WELCOME TO GENSHIN IMPACT WISH SIMULATOR CLI" << endl << endl;
    while ( 1 ) {
    int chosen_banner = 0;
    int chosen_event = 0;
    int wishes_number = 0;
    int four_star_assurance_number = 1;
    int five_star_assurance_number = 1;
    int five_star_guarantee_number = 0;
    int four_star_guarantee_number = 0;
    int quit = 1;
    unsigned int seed = (unsigned int) std::chrono::_V2::high_resolution_clock::now().time_since_epoch().count();
    std::mt19937_64 generator(seed);
    long long int count = 0;
    long long int five_count = 0;
    long long int four_count = 0;
    int threshold = 17;
    double unmet = 17.1;
    int unmet_count = 0;
    int is_noelle = 1;
    int ave_fives = 0;
    int max_fives = 1;
    int min_fives = 90;
    long long int max_fivesth = 1;
    long long int min_fivesth = 1;
    long long int max_fivecount = 1;
    long long int min_fivecount = 1;
    long long int pcount[128] = {0};
    string pname[128] = {
                "Keqing",
                "Mona",
                "Qiqi",
                "Diluc",
                "Jean",
                "Amos' Bow",
                "Skyward Harp",
                "Lost Prayer to the Sacred Winds",
                "Skyward Atlas",
                "Primordial Jade Winged-Spear",
                "Skyward Spine",
                "Wolf's Gravestone",
                "Skyward Pride",
                "Skyward Blade",
                "Aquila Favonia",
                "Rosaria",
                "Xinyan",
                "Sucrose",
                "Diona",
                "Chongyun",
                "Noelle",
                "Bennett",
                "Fischl",
                "Ningguang",
                "Xingqiu",
                "Beidou",
                "Xiangling",
                "Amber",
                "Razor",
                "Kaeya",
                "Barbara",
                "Lisa",
                "Rust",
                "Sacrificial Bow",
                "The Stringless",
                "Favonius Warbow",
                "Eye of Perception",
                "Sacrificial Fragments",
                "The Widsith",
                "Favonius Codex",
                "Favonius Lance",
                "Dragon's Bane",
                "Rainslasher",
                "Sacrificial Greatsword",
                "The Bell",
                "Favonius Greatsword",
                "Lion's Roar",
                "Sacrificial Sword",
                "The Flute",
                "Favonius Sword",
                "Slingshot",
                "Sharpshooter's Oath",
                "Raven Bow",
                "Emerald Orb",
                "Thrilling Tales of Dragon Slayers",
                "Magic Guide",
                "Black Tassel",
                "Debate Club",
                "Bloodtainted Greatsword",
                "Ferrous Shadow",
                "Skyrider Sword",
                "Harbinger of Dawn",
                "Cool Steel",
                "Venti",
                "Klee",
                "Tartaglia",
                "Zhongli",
                "Albedo",
                "Ganyu",
                "Xiao",
                "Hu Tao",
                "Yanfei",
                "Eula",
                "Memory of Dust",
                "Vortex Vanquisher",
                "The Unforged",
                "Summit Shaper",
                "Primordial Jade Cutter",
                "Staff of Homa",
                "Lithic Blade",
                "Lithic Spear",
                "Elegy of the End",
                "The Alley Flash",
                "Wine and Song",
                "Alley Hunter",
                "Placeholder",
                "Placeholder",
                "Placeholder",
                "Placeholder",
                "Placeholder",
                "Placeholder",
                "Placeholder",
                "Placeholder",
                "Placeholder",
                "Placeholder",
                "Placeholder",
                "Placeholder",
                "Placeholder",
                "Placeholder",
                "Placeholder",
                "Placeholder",
                "Placeholder",
                "Placeholder",
                "Placeholder",
                "Placeholder",
                "Placeholder",
                "Placeholder",
                "Placeholder",
                "Placeholder",
                "Placeholder",
                "Placeholder",
                "Placeholder",
                "Placeholder",
                "Placeholder",
                "Placeholder",
                "Placeholder",
                "Placeholder",
                "Placeholder",
                "Placeholder",
                "Placeholder",
                "Placeholder",
                "Placeholder",
                "Placeholder",
                "Placeholder",
                "Placeholder",
                "Placeholder",
                "Placeholder",
                "Placeholder",
    };
    enter_chosen_banner:
    chosen_banner = 0;
    std::cout << "Choose Your Wishes (Banners):" << endl;
    std::cout << "-1: Quit; 1: Character Event Wish; 2: Weapon Event Wish; 3: Permanent Wish; 4: Novice Wish;" << endl << endl;
    std::cin >> chosen_banner;
    switch (chosen_banner) {
        case -1: goto full_quit;
        case 1: {
            enter_chosen_event_1:
            chosen_event = 0;
            std::cout << endl << "Choose Your Events:" << endl
                << "-1: Re-choose Wishes (Banners)" << endl
                << "1: Ballad in Goblets/20200928-20201018 (Venti, Barbara, Fischl, Xiangling)" << endl
                << "2: Sparkling Steps/20201020-20201110 (Klee, Xingqiu, Noelle, Sucrose)" << endl
                << "3: Farewell of Snezhnaya/20201111-20201201 (Tartaglia, Diona, Beidou, Ningguang)" << endl
                << "4: Gentry of Hermitage/20201201-20201222 (Zhongli, Xinyan, Razor, Chongyun)" << endl
                << "5: Secretum Secretorum/20201223-20210112 (Albedo, Fischl, Sucrose, Bennett)" << endl
                << "6: Adrift in the Harbor/20210112-20210202 (Ganyu, Xiangling, Xingqiu, Noelle)" << endl
                << "7: Invitation to Mundane Life/20210203-20210217 (Xiao, Diona, Beidou, Xinyan)" << endl
                << "8: Dance of Lanterns/20210217-20210302 (Keqing, Ningguang, Bennett, Barbara)" << endl
                << "9: Moment of Bloom/20210302-20210316 (Hu Tao, Xingqiu, Xiangling, Chongyun)" << endl
                << "10: Ballad in Goblets/20210317-20210406 (Venti, Sucrose, Razor, Noelle)" << endl
                << "11: Farewell of Snezhnaya/20210406-20210427 (Tartaglia, Rosaria, Barbara, Fischl)" << endl 
                << "12: Gentry of Hermitage/20210428-20210518 (Zhongli, Yanfei, Noelle, Diona)" << endl << endl;
            std::cin >> chosen_event;
            if (chosen_event == -1) {chosen_event = 0; std::cout << endl; goto enter_chosen_banner;}
            if (chosen_event > 0 && chosen_event < 13 && chosen_event == (int) chosen_event) quit = 0; else {std::cout << endl << "Invalid event!" << endl << endl; goto enter_chosen_event_1;}
        } break;
        case 2: {
            enter_chosen_event_2:
            chosen_event = 0;
            std::cout << endl << "Choose Your Events:" << endl
                << "-1: Re-choose Wishes (Banners)" << endl
                << "1: Epitome Invocation/20200928-20201018 (Aquila Favonia, Amos' Bow, The Flute, The Bell, The Widsith, The Stringless, Favonius Lance)" << endl
                << "2: Epitome Invocation/20201020-20201109 (Lost Prayer to the Sacred Winds, Wolf's Gravestone, Sacrificial Sword, Sacrificial Bow, Sacrificial Greatsword, Sacrificial Fragments, Dragon's Bane)" << endl
                << "3: Epitome Invocation/20201111-20201201 (Memory of Dust, Skyward Harp, Rainslasher, Eye of Perception, Rust, Favonius Lance)" << endl
                << "4: Epitome Invocation/20201201-20201222 (Vortex Vanquisher, The Unforged, Lion's Roar, The Bell, Favonius Codex, Favonius Warbow, Dragon's Bane)" << endl
                << "5: Epitome Invocation/20201223-20210112 (Summit Shaper, Skyward Atlas, Favonius Sword, Favonius Greatsword, Favonius Lance, Sacrificial Fragments, The Stringless)" << endl
                << "6: Epitome Invocation/20210112-20210202 (Skyward Pride, Amos' Bow, Sacrificial Sword, The Bell, Dragon's Bane, Eye of Perception, Favonius Warbow)" << endl
                << "7: Epitome Invocation/20210203-20210223 (Primordial Jade Cutter, Primordial Jade Winged-Spear, Rust, Eye of Perception, Favonius Lance, Sacrificial Greatsword, The Flute)" << endl
                << "8: Epitome Invocation/20210223-20210316 (Staff of Homa, Lithic Blade, Lithic Spear, Wolf's Gravestone, Sacrificial Bow, The Widsith, Lion's Roar)" << endl
                << "9: Epitome Invocation/20210317-20210406 (Elegy for the End, Skyward Blade, The Alley Flash, Wine and Song, Favonius Greatsword, Favonius Warbow, Dragon's Bane)" << endl
                << "10: Epitome Invocation/20210406-20210427 (Skyward Harp, Lost Prayer to the Sacred Winds, Alley Hunter, Favonius Sword, Sacrificial Greatsword, Favonius Codex, Favonius Lance)" << endl 
                << "11: Epitome Invocation/20210428-20210518 (Summit Shaper, Memory of Dust, The Flute, Lithic Blade, Lithic Spear, Eye of Perception, Sacrificial Bow)" << endl << endl;
            std::cin >> chosen_event;
            if (chosen_event == -1) {chosen_event = 0; std::cout << endl; goto enter_chosen_banner;}
            if (chosen_event > 0 && chosen_event < 12 && chosen_event == (int) chosen_event) quit = 0; else {std::cout << endl << "Invalid event!" << endl << endl; goto enter_chosen_event_2;}
        } break;
        case 3: {
            enter_chosen_event_3:
            chosen_event = 0;
            std::cout << endl << "Choose Your Events:" << endl
                << "-1: Re-choose Wishes (Banners)" << endl
                << "1: Wanderlust Invocation/20200928-20201222 (Released)" << endl
                << "2: Wanderlust Invocation/20201223-20210427 (Adds Diona and Xinyan)" << endl 
                << "3: Wanderlust Invocation/20210428- (Adds Rosaria)" << endl << endl;
            std::cin >> chosen_event;
            if (chosen_event == -1) {chosen_event = 0; std::cout << endl; goto enter_chosen_banner;}
            if (chosen_event > 0 && chosen_event < 4 && chosen_event == (int) chosen_event) quit = 0; else {std::cout << endl << "Invalid event!" << endl << endl; goto enter_chosen_event_3;}
        } break;
        case 4: {
            enter_chosen_event_4:
            chosen_event = 0;
            std::cout << endl << "Choose Your Events:" << endl
                << "-1: Re-choose Wishes (Banners)" << endl 
                << "1: Beginners' wish" << endl << endl;
            std::cin >> chosen_event; quit = 0;} break;
            if (chosen_event == -1) {chosen_event = 0; std::cout << endl; goto enter_chosen_banner;}
            if (chosen_event == 1 && chosen_event == (int) chosen_event) quit = 0; else {std::cout << endl << "Invalid event!" << endl << endl; goto enter_chosen_event_4;}
        default: {chosen_banner = 0; chosen_event = 0; quit = 1; std::cout << "Invalid banner!" << endl << endl; goto enter_chosen_banner;}
    }
    while (wishes_number >= 0) {
        if (quit == 1) goto full_quit;
        enter_wishes_number:
        std::cout << endl << "How many wishes? -1: Re-choose Wishes (Banners); 1: 1 Wish; 10: 10 Wishes" << endl << endl;
        std::cin >> wishes_number;
        std::cout << endl;
        if (chosen_banner == 4 && chosen_event == 1 && wishes_number == -1) { wishes_number = 0; goto full_quit; }
        if (chosen_banner == 4 && chosen_event == 1 && wishes_number != 10) { wishes_number = 0; std::cout << "Invalid number of wishes!" << endl; goto enter_wishes_number; }
        //if (!(wishes_number == -1||wishes_number == 10||wishes_number == 1)){ wishes_number = 0; std::cout << "Invalid number of wishes!" << endl; goto enter_wishes_number; }
        auto start = std::chrono::steady_clock::now();
        if (chosen_banner == 1 && chosen_event == 11) {
            while (wishes_number > 0) {
                long long int temp1 = generator() % ULTRAPOS + 1;
                long long int temp2 = generator() % ULTRAPOS + 1;
                long long int temp3 = generator() % ULTRAPOS + 1;
                int star = 0; //4-star or 5-star
                int type = 0; //Up or non-up, character or weapon
                int kind = 0; //which exactly
                if (unmet_count > threshold) unmet = (double)unmet_count;
                if (five_star_assurance_number < 1 + 73 && four_star_assurance_number < 1 + 8) {
                    if (temp1 < 1 + ULTRAPOS/1000 * 6) {
                        star = 5;
                        five_count = five_count + 1;
                        ave_fives = ave_fives + five_star_assurance_number;
                        if (five_star_assurance_number > max_fives) { max_fives = five_star_assurance_number; max_fivesth = five_count; max_fivecount = count; }
                        if (five_star_assurance_number < min_fives) { min_fives = five_star_assurance_number; min_fivesth = five_count; min_fivecount = count; }
                        five_star_assurance_number = 0;
                        if (five_star_guarantee_number == 1) { type = 1; kind = 66; five_star_guarantee_number = 0;}
                        else if (temp2 < 1 + ULTRAPOS/2) {
                            type = 1;
                            kind = 66;
                            five_star_guarantee_number = 0;
                        }
                        else {
                            type = 2;
                            five_star_guarantee_number = 1;
                            if (temp3 < 1 + ULTRAPOS/5) kind = 5;
                            else if (temp3 < 1 + ULTRAPOS/5 * 2) kind = 3;
                            else if (temp3 < 1 + ULTRAPOS/5 * 3) kind = 1;
                            else if (temp3 < 1 + ULTRAPOS/5 * 4) kind = 4;
                            else kind = 2;
                        }
                    }
                    else if (temp1 < 1 + ULTRAPOS/1000*57) {
                        star = 4;
                        four_count = four_count + 1;
                        four_star_assurance_number = 0;
                        if (four_star_guarantee_number == 1) {
                            type = 1;
                            if (temp3 < 1 + ULTRAPOS/3) kind = 23;
                            else if (temp3 < 1 + ULTRAPOS/3 * 2) kind = 16;
                            else kind = 31; 
                            four_star_guarantee_number = 0;
                            }
                        else if (temp2 < 1 + ULTRAPOS/2) {
                            type = 1;
                            if (temp3 < 1 + ULTRAPOS/3) kind = 23;
                            else if (temp3 < 1 + ULTRAPOS/3 * 2) kind = 16;
                            else kind = 31;
                            four_star_guarantee_number = 0;
                        }
                        else if (temp2 < 1 + ULTRAPOS/4 * (int)(10 * (unmet - threshold))) {
                            type = 2;
                            unmet_count = 0;
                            unmet = (double)17.1;
                            if (temp3 < 1 + ULTRAPOS/11) kind = 18;
                            else if (temp3 < 1 + ULTRAPOS/11 * 2) kind = 20;
                            else if (temp3 < 1 + ULTRAPOS/11 * 3) kind = 26;
                            else if (temp3 < 1 + ULTRAPOS/11 * 4) kind = 29;
                            else if (temp3 < 1 + ULTRAPOS/11 * 5) kind = 21;
                            else if (temp3 < 1 + ULTRAPOS/11 * 6) kind = 24;
                            else if (temp3 < 1 + ULTRAPOS/11 * 7) kind = 25;
                            else if (temp3 < 1 + ULTRAPOS/11 * 8) kind = 22;
                            else if (temp3 < 1 + ULTRAPOS/11 * 9) kind = 27;
                            else if (temp3 < 1 + ULTRAPOS/11 * 10) kind = 19;
                            else kind = 17;
                            four_star_guarantee_number = 1;
                        }
                        else {
                            type = 3;
                            unmet_count = unmet_count + 1;
                            if (temp3 < 1 + ULTRAPOS/18) kind = 36;
                            else if (temp3 < 1 + ULTRAPOS/9) kind = 34;
                            else if (temp3 < 1 + ULTRAPOS/6) kind = 33;
                            else if (temp3 < 1 + ULTRAPOS/9 * 2) kind = 35;
                            else if (temp3 < 1 + ULTRAPOS/18 * 5) kind = 40;
                            else if (temp3 < 1 + ULTRAPOS/3) kind = 38;
                            else if (temp3 < 1 + ULTRAPOS/18 * 7) kind = 37;
                            else if (temp3 < 1 + ULTRAPOS/9 * 4) kind = 39;
                            else if (temp3 < 1 + ULTRAPOS/2) kind = 46;
                            else if (temp3 < 1 + ULTRAPOS/9 * 5) kind = 44;
                            else if (temp3 < 1 + ULTRAPOS/18 * 11) kind = 43;
                            else if (temp3 < 1 + ULTRAPOS/3 * 2) kind = 45;
                            else if (temp3 < 1 + ULTRAPOS/18 * 13) kind = 41;
                            else if (temp3 < 1 + ULTRAPOS/9 * 7) kind = 42;
                            else if (temp3 < 1 + ULTRAPOS/6 * 5) kind = 50;
                            else if (temp3 < 1 + ULTRAPOS/9 * 8) kind = 48;
                            else if (temp3 < 1 + ULTRAPOS/18 * 17) kind = 47;
                            else kind = 49;
                            four_star_guarantee_number = 1;
                        }
                    }
                    else {
                        star = 3;
                        type = 2;
                        if (temp3 < 1 + ULTRAPOS/13) kind = 51;
                        else if (temp3 < 1 + ULTRAPOS/13 * 2) kind = 52;
                        else if (temp3 < 1 + ULTRAPOS/13 * 3) kind = 53;
                        else if (temp3 < 1 + ULTRAPOS/13 * 4) kind = 54;
                        else if (temp3 < 1 + ULTRAPOS/13 * 5) kind = 55;
                        else if (temp3 < 1 + ULTRAPOS/13 * 6) kind = 56;
                        else if (temp3 < 1 + ULTRAPOS/13 * 7) kind = 57;
                        else if (temp3 < 1 + ULTRAPOS/13 * 8) kind = 58;
                        else if (temp3 < 1 + ULTRAPOS/13 * 9) kind = 59;
                        else if (temp3 < 1 + ULTRAPOS/13 * 10) kind = 60;
                        else if (temp3 < 1 + ULTRAPOS/13 * 11) kind = 61;
                        else if (temp3 < 1 + ULTRAPOS/13 * 12) kind = 62;
                        else kind = 63;
                    }
                }
                else if (five_star_assurance_number < 1 + 73 && four_star_assurance_number == 9) {
                    if (temp1 < 1 + ULTRAPOS/1000 * 6) {
                        star = 5;
                        five_count = five_count + 1;
                        ave_fives = ave_fives + five_star_assurance_number;
                        if (five_star_assurance_number > max_fives) { max_fives = five_star_assurance_number; max_fivesth = five_count; max_fivecount = count; }
                        if (five_star_assurance_number < min_fives) { min_fives = five_star_assurance_number; min_fivesth = five_count; min_fivecount = count; }
                        five_star_assurance_number = 0;
                        if (five_star_guarantee_number == 1) { type = 1; kind = 66; five_star_guarantee_number = 0;}
                        else if (temp2 < 1 + ULTRAPOS/2) {
                            type = 1;
                            kind = 66;
                            five_star_guarantee_number = 0;
                        }
                        else {
                            type = 2;
                            five_star_guarantee_number = 1;
                            if (temp3 < 1 + ULTRAPOS/5) kind = 5;
                            else if (temp3 < 1 + ULTRAPOS/5 * 2) kind = 3;
                            else if (temp3 < 1 + ULTRAPOS/5 * 3) kind = 1;
                            else if (temp3 < 1 + ULTRAPOS/5 * 4) kind = 4;
                            else kind = 2;
                        }
                    }
                    else if (temp1 < 1 + ULTRAPOS/1000 * 567) {
                        star = 4;
                        four_count = four_count + 1;
                        four_star_assurance_number = 0;
                        if (four_star_guarantee_number == 1) {
                            type = 1;
                            if (temp3 < 1 + ULTRAPOS/3) kind = 23;
                            else if (temp3 < 1 + ULTRAPOS/3 * 2) kind = 16;
                            else kind = 31;
                            four_star_guarantee_number = 0;
                            }
                        else if (temp2 < 1 + ULTRAPOS/2 * (int)(10 * (unmet - threshold))) {
                            type = 1;
                            if (temp3 < 1 + ULTRAPOS/3) kind = 23;
                            else if (temp3 < 1 + ULTRAPOS/3 * 2) kind = 16;
                            else kind = 31;
                            four_star_guarantee_number = 0;
                        }
                        else if (temp2 < 1 + ULTRAPOS/6 * 5) {
                            type = 2;
                            unmet_count = 0;
                            unmet = (double)17.1;
                            if (temp3 < 1 + ULTRAPOS/11) kind = 18;
                            else if (temp3 < 1 + ULTRAPOS/11 * 2) kind = 20;
                            else if (temp3 < 1 + ULTRAPOS/11 * 3) kind = 26;
                            else if (temp3 < 1 + ULTRAPOS/11 * 4) kind = 29;
                            else if (temp3 < 1 + ULTRAPOS/11 * 5) kind = 21;
                            else if (temp3 < 1 + ULTRAPOS/11 * 6) kind = 24;
                            else if (temp3 < 1 + ULTRAPOS/11 * 7) kind = 25;
                            else if (temp3 < 1 + ULTRAPOS/11 * 8) kind = 22;
                            else if (temp3 < 1 + ULTRAPOS/11 * 9) kind = 27;
                            else if (temp3 < 1 + ULTRAPOS/11 * 10) kind = 19;
                            else kind = 17;
                            four_star_guarantee_number = 1;
                        }
                        else {
                            type = 3;
                            unmet_count = unmet_count + 1;
                            if (temp3 < 1 + ULTRAPOS/18) kind = 36;
                            else if (temp3 < 1 + ULTRAPOS/9) kind = 34;
                            else if (temp3 < 1 + ULTRAPOS/6) kind = 33;
                            else if (temp3 < 1 + ULTRAPOS/9 * 2) kind = 35;
                            else if (temp3 < 1 + ULTRAPOS/3) kind = 40;
                            else if (temp3 < 1 + ULTRAPOS/18 * 5) kind = 38;
                            else if (temp3 < 1 + ULTRAPOS/18 * 7) kind = 37;
                            else if (temp3 < 1 + ULTRAPOS/9 * 4) kind = 39;
                            else if (temp3 < 1 + ULTRAPOS/2) kind = 46;
                            else if (temp3 < 1 + ULTRAPOS/9 * 5) kind = 44;
                            else if (temp3 < 1 + ULTRAPOS/18 * 11) kind = 43;
                            else if (temp3 < 1 + ULTRAPOS/3 * 2) kind = 45;
                            else if (temp3 < 1 + ULTRAPOS/18 * 13) kind = 41;
                            else if (temp3 < 1 + ULTRAPOS/9 * 7) kind = 42;
                            else if (temp3 < 1 + ULTRAPOS/6 * 5) kind = 50;
                            else if (temp3 < 1 + ULTRAPOS/9 * 8) kind = 47;
                            else if (temp3 < 1 + ULTRAPOS/18 * 17) kind = 48;
                            else kind = 49;
                            four_star_guarantee_number = 1;
                        }
                    }
                    else {
                        star = 3;
                        type = 2;
                        if (temp3 < 1 + ULTRAPOS/13) kind = 51;
                        else if (temp3 < 1 + ULTRAPOS/13 * 2) kind = 52;
                        else if (temp3 < 1 + ULTRAPOS/13 * 3) kind = 53;
                        else if (temp3 < 1 + ULTRAPOS/13 * 4) kind = 54;
                        else if (temp3 < 1 + ULTRAPOS/13 * 5) kind = 55;
                        else if (temp3 < 1 + ULTRAPOS/13 * 6) kind = 56;
                        else if (temp3 < 1 + ULTRAPOS/13 * 7) kind = 57;
                        else if (temp3 < 1 + ULTRAPOS/13 * 8) kind = 58;
                        else if (temp3 < 1 + ULTRAPOS/13 * 9) kind = 59;
                        else if (temp3 < 1 + ULTRAPOS/13 * 10) kind = 60;
                        else if (temp3 < 1 + ULTRAPOS/13 * 11) kind = 61;
                        else if (temp3 < 1 + ULTRAPOS/13 * 12) kind = 62;
                        else kind = 63;
                    }
                }
                else if (five_star_assurance_number < 1 + 73 && four_star_assurance_number >= 10) {
                    if (temp1 < 1 + ULTRAPOS/1000 * 6) {
                        star = 5;
                        five_count = five_count + 1;
                        ave_fives = ave_fives + five_star_assurance_number;
                        if (five_star_assurance_number > max_fives) { max_fives = five_star_assurance_number; max_fivesth = five_count; max_fivecount = count; }
                        if (five_star_assurance_number < min_fives) { min_fives = five_star_assurance_number; min_fivesth = five_count; min_fivecount = count; }
                        five_star_assurance_number = 0;
                        if (five_star_guarantee_number == 1) { type = 1; kind = 66; five_star_guarantee_number = 0;}
                        else if (temp2 < 1 + ULTRAPOS/2) {
                            type = 1;
                            kind = 66;
                            five_star_guarantee_number = 0;
                        }
                        else {
                            type = 2;
                            five_star_guarantee_number = 1;
                            if (temp3 < 1 + ULTRAPOS/5) kind = 5;
                            else if (temp3 < 1 + ULTRAPOS/5 * 2) kind = 3;
                            else if (temp3 < 1 + ULTRAPOS/5 * 3) kind = 1;
                            else if (temp3 < 1 + ULTRAPOS/5 * 4) kind = 4;
                            else kind = 2;
                        }
                    }
                    else {
                        star = 4;
                        four_count = four_count + 1;
                        four_star_assurance_number = 0;
                        if (four_star_guarantee_number == 1) {
                            type = 1;
                            if (temp3 < 1 + ULTRAPOS/3) kind = 23;
                            else if (temp3 < 1 + ULTRAPOS/3 * 2) kind = 16;
                            else kind = 31;
                            four_star_guarantee_number = 0;
                            }
                        else if (temp2 < 1 + ULTRAPOS/2 * (int)(10 * (unmet - threshold))) {
                            type = 1;
                            if (temp3 < 1 + ULTRAPOS/3) kind = 23;
                            else if (temp3 < 1 + ULTRAPOS/3 * 2) kind = 16;
                            else kind = 31;
                            four_star_guarantee_number = 0;
                        }
                        else if (temp2 < 1 + ULTRAPOS/6 * 5) {
                            type = 2;
                            unmet_count = 0;
                            unmet = (double)17.1;
                            if (temp3 < 1 + ULTRAPOS/11) kind = 18;
                            else if (temp3 < 1 + ULTRAPOS/11 * 2) kind = 20;
                            else if (temp3 < 1 + ULTRAPOS/11 * 3) kind = 26;
                            else if (temp3 < 1 + ULTRAPOS/11 * 4) kind = 29;
                            else if (temp3 < 1 + ULTRAPOS/11 * 5) kind = 21;
                            else if (temp3 < 1 + ULTRAPOS/11 * 6) kind = 24;
                            else if (temp3 < 1 + ULTRAPOS/11 * 7) kind = 25;
                            else if (temp3 < 1 + ULTRAPOS/11 * 8) kind = 22;
                            else if (temp3 < 1 + ULTRAPOS/11 * 9) kind = 27;
                            else if (temp3 < 1 + ULTRAPOS/11 * 10) kind = 19;
                            else kind = 17;
                            four_star_guarantee_number = 1;
                        }
                        else {
                            type = 3;
                            unmet_count = unmet_count + 1;
                            if (temp3 < 1 + ULTRAPOS/18) kind = 36;
                            else if (temp3 < 1 + ULTRAPOS/9) kind = 34;
                            else if (temp3 < 1 + ULTRAPOS/6) kind = 33;
                            else if (temp3 < 1 + ULTRAPOS/9 * 2) kind = 35;
                            else if (temp3 < 1 + ULTRAPOS/18 * 5) kind = 40;
                            else if (temp3 < 1 + ULTRAPOS/3) kind = 38;
                            else if (temp3 < 1 + ULTRAPOS/18 * 7) kind = 37;
                            else if (temp3 < 1 + ULTRAPOS/9 * 4) kind = 39;
                            else if (temp3 < 1 + ULTRAPOS/2) kind = 46;
                            else if (temp3 < 1 + ULTRAPOS/9 * 5) kind = 44;
                            else if (temp3 < 1 + ULTRAPOS/18 * 11) kind = 43;
                            else if (temp3 < 1 + ULTRAPOS/3 * 2) kind = 45;
                            else if (temp3 < 1 + ULTRAPOS/18 * 13) kind = 41;
                            else if (temp3 < 1 + ULTRAPOS/9 * 7) kind = 42;
                            else if (temp3 < 1 + ULTRAPOS/6 * 5) kind = 50;
                            else if (temp3 < 1 + ULTRAPOS/9 * 8) kind = 47;
                            else if (temp3 < 1 + ULTRAPOS/18 * 17) kind = 48;
                            else kind = 49;
                            four_star_guarantee_number = 1;
                        }
                    }
                }
                else if (five_star_assurance_number < 1 + 89 && five_star_assurance_number >= 74 && four_star_assurance_number < 1 + 8) {
                    if (temp1 < 1 + ULTRAPOS/1000 * 6 + (five_star_assurance_number - 73) * ULTRAPOS/1000 * 60) {
                        star = 5;
                        five_count = five_count + 1;
                        ave_fives = ave_fives + five_star_assurance_number;
                        if (five_star_assurance_number > max_fives) { max_fives = five_star_assurance_number; max_fivesth = five_count; max_fivecount = count; }
                        if (five_star_assurance_number < min_fives) { min_fives = five_star_assurance_number; min_fivesth = five_count; min_fivecount = count; }
                        five_star_assurance_number = 0;
                        if (five_star_guarantee_number == 1) { type = 1; kind = 66; five_star_guarantee_number = 0;}
                        else if (temp2 < 1 + ULTRAPOS/2) {
                            type = 1;
                            kind = 66;
                            five_star_guarantee_number = 0;
                        }
                        else {
                            type = 2;
                            five_star_guarantee_number = 1;
                            if (temp3 < 1 + ULTRAPOS/5) kind = 5;
                            else if (temp3 < 1 + ULTRAPOS/5 * 2) kind = 3;
                            else if (temp3 < 1 + ULTRAPOS/5 * 3) kind = 1;
                            else if (temp3 < 1 + ULTRAPOS/5 * 4) kind = 4;
                            else kind = 2;
                        }
                    }
                    else if (temp1 < 1 + ULTRAPOS/1000 * 57 + (five_star_assurance_number - 73) * ULTRAPOS/1000 * 60) {
                        star = 4;
                        four_count = four_count + 1;
                        four_star_assurance_number = 0;
                        if (four_star_guarantee_number == 1) {
                            type = 1;
                            if (temp3 < 1 + ULTRAPOS/3) kind = 23;
                            else if (temp3 < 1 + ULTRAPOS/3 * 2) kind = 16;
                            else kind = 31;
                            four_star_guarantee_number = 0;
                            }
                        else if (temp2 < 1 + ULTRAPOS/2 * (int)(10 * (unmet - threshold))) {
                            type = 1;
                            if (temp3 < 1 + ULTRAPOS/3) kind = 23;
                            else if (temp3 < 1 + ULTRAPOS/3 * 2) kind = 16;
                            else kind = 31;
                            four_star_guarantee_number = 0;
                        }
                        else if (temp2 < 1 + ULTRAPOS/6 * 5) {
                            type = 2;
                            unmet_count = 0;
                            unmet = (double)17.1;
                            if (temp3 < 1 + ULTRAPOS/11) kind = 18;
                            else if (temp3 < 1 + ULTRAPOS/11 * 2) kind = 20;
                            else if (temp3 < 1 + ULTRAPOS/11 * 3) kind = 26;
                            else if (temp3 < 1 + ULTRAPOS/11 * 4) kind = 29;
                            else if (temp3 < 1 + ULTRAPOS/11 * 5) kind = 21;
                            else if (temp3 < 1 + ULTRAPOS/11 * 6) kind = 24;
                            else if (temp3 < 1 + ULTRAPOS/11 * 7) kind = 25;
                            else if (temp3 < 1 + ULTRAPOS/11 * 8) kind = 22;
                            else if (temp3 < 1 + ULTRAPOS/11 * 9) kind = 27;
                            else if (temp3 < 1 + ULTRAPOS/11 * 10) kind = 19;
                            else kind = 17;
                            four_star_guarantee_number = 1;
                        }
                        else {
                            type = 3;
                            unmet_count = unmet_count + 1;
                            if (temp3 < 1 + ULTRAPOS/18) kind = 36;
                            else if (temp3 < 1 + ULTRAPOS/9) kind = 34;
                            else if (temp3 < 1 + ULTRAPOS/6) kind = 33;
                            else if (temp3 < 1 + ULTRAPOS/9 * 2) kind = 35;
                            else if (temp3 < 1 + ULTRAPOS/3) kind = 40;
                            else if (temp3 < 1 + ULTRAPOS/18 * 5) kind = 38;
                            else if (temp3 < 1 + ULTRAPOS/18 * 7) kind = 37;
                            else if (temp3 < 1 + ULTRAPOS/9 * 4) kind = 39;
                            else if (temp3 < 1 + ULTRAPOS/2) kind = 46;
                            else if (temp3 < 1 + ULTRAPOS/9 * 5) kind = 44;
                            else if (temp3 < 1 + ULTRAPOS/18 * 11) kind = 43;
                            else if (temp3 < 1 + ULTRAPOS/3 * 2) kind = 45;
                            else if (temp3 < 1 + ULTRAPOS/18 * 13) kind = 41;
                            else if (temp3 < 1 + ULTRAPOS/9 * 7) kind = 42;
                            else if (temp3 < 1 + ULTRAPOS/6 * 5) kind = 50;
                            else if (temp3 < 1 + ULTRAPOS/9 * 8) kind = 47;
                            else if (temp3 < 1 + ULTRAPOS/18 * 17) kind = 48;
                            else kind = 49;
                            four_star_guarantee_number = 1;
                        }
                    }
                    else {
                        star = 3;
                        type = 2;
                        if (temp3 < 1 + ULTRAPOS/13) kind = 51;
                        else if (temp3 < 1 + ULTRAPOS/13 * 2) kind = 52;
                        else if (temp3 < 1 + ULTRAPOS/13 * 3) kind = 53;
                        else if (temp3 < 1 + ULTRAPOS/13 * 4) kind = 54;
                        else if (temp3 < 1 + ULTRAPOS/13 * 5) kind = 55;
                        else if (temp3 < 1 + ULTRAPOS/13 * 6) kind = 56;
                        else if (temp3 < 1 + ULTRAPOS/13 * 7) kind = 57;
                        else if (temp3 < 1 + ULTRAPOS/13 * 8) kind = 58;
                        else if (temp3 < 1 + ULTRAPOS/13 * 9) kind = 59;
                        else if (temp3 < 1 + ULTRAPOS/13 * 10) kind = 60;
                        else if (temp3 < 1 + ULTRAPOS/13 * 11) kind = 61;
                        else if (temp3 < 1 + ULTRAPOS/13 * 12) kind = 62;
                        else kind = 63;
                    }
                }
                else if (five_star_assurance_number < 1 + 89 && five_star_assurance_number >= 74 && four_star_assurance_number == 9) {
                    if (temp1 < 1 + ULTRAPOS/1000 * 6 + (five_star_assurance_number - 73) * ULTRAPOS/1000 * 60) {
                        star = 5;
                        five_count = five_count + 1;
                        ave_fives = ave_fives + five_star_assurance_number;
                        if (five_star_assurance_number > max_fives) { max_fives = five_star_assurance_number; max_fivesth = five_count; max_fivecount = count; }
                        if (five_star_assurance_number < min_fives) { min_fives = five_star_assurance_number; min_fivesth = five_count; min_fivecount = count; }
                        five_star_assurance_number = 0;
                        if (five_star_guarantee_number == 1) { type = 1; kind = 66; five_star_guarantee_number = 0;}
                        else if (temp2 < 1 + ULTRAPOS/2) {
                            type = 1;
                            kind = 66;
                            five_star_guarantee_number = 0;
                        }
                        else {
                            type = 2;
                            five_star_guarantee_number = 1;
                            if (temp3 < 1 + ULTRAPOS/5) kind = 5;
                            else if (temp3 < 1 + ULTRAPOS/5 * 2) kind = 3;
                            else if (temp3 < 1 + ULTRAPOS/5 * 3) kind = 1;
                            else if (temp3 < 1 + ULTRAPOS/5 * 4) kind = 4;
                            else kind = 2;
                        }
                    }
                    else if (temp1 < 1 + ULTRAPOS/1000 * 567 + (five_star_assurance_number - 73) * ULTRAPOS/1000 * 60) {
                        star = 4;
                        four_count = four_count + 1;
                        four_star_assurance_number = 0;
                        if (four_star_guarantee_number == 1) {
                            type = 1;
                            if (temp3 < 1 + ULTRAPOS/3) kind = 23;
                            else if (temp3 < 1 + ULTRAPOS/3 * 2) kind = 16;
                            else kind = 31;
                            four_star_guarantee_number = 0;
                            }
                        else if (temp2 < 1 + ULTRAPOS/2 * (int)(10 * (unmet - threshold))) {
                            type = 1;
                            if (temp3 < 1 + ULTRAPOS/3) kind = 23;
                            else if (temp3 < 1 + ULTRAPOS/3 * 2) kind = 16;
                            else kind = 31;
                            four_star_guarantee_number = 0;
                        }
                        else if (temp2 < 1 + ULTRAPOS/6 * 5) {
                            type = 2;
                            unmet_count = 0;
                            unmet = (double)17.1;
                            if (temp3 < 1 + ULTRAPOS/11) kind = 18;
                            else if (temp3 < 1 + ULTRAPOS/11 * 2) kind = 20;
                            else if (temp3 < 1 + ULTRAPOS/11 * 3) kind = 26;
                            else if (temp3 < 1 + ULTRAPOS/11 * 4) kind = 29;
                            else if (temp3 < 1 + ULTRAPOS/11 * 5) kind = 21;
                            else if (temp3 < 1 + ULTRAPOS/11 * 6) kind = 24;
                            else if (temp3 < 1 + ULTRAPOS/11 * 7) kind = 25;
                            else if (temp3 < 1 + ULTRAPOS/11 * 8) kind = 22;
                            else if (temp3 < 1 + ULTRAPOS/11 * 9) kind = 27;
                            else if (temp3 < 1 + ULTRAPOS/11 * 10) kind = 19;
                            else kind = 17;
                            four_star_guarantee_number = 1;
                        }
                        else {
                            type = 3;
                            unmet_count = unmet_count + 1;
                            if (temp3 < 1 + ULTRAPOS/18) kind = 36;
                            else if (temp3 < 1 + ULTRAPOS/9) kind = 34;
                            else if (temp3 < 1 + ULTRAPOS/6) kind = 33;
                            else if (temp3 < 1 + ULTRAPOS/9 * 2) kind = 35;
                            else if (temp3 < 1 + ULTRAPOS/3) kind = 40;
                            else if (temp3 < 1 + ULTRAPOS/18 * 5) kind = 38;
                            else if (temp3 < 1 + ULTRAPOS/18 * 7) kind = 37;
                            else if (temp3 < 1 + ULTRAPOS/9 * 4) kind = 39;
                            else if (temp3 < 1 + ULTRAPOS/2) kind = 46;
                            else if (temp3 < 1 + ULTRAPOS/18) kind = 44;
                            else if (temp3 < 1 + ULTRAPOS/18 * 11) kind = 43;
                            else if (temp3 < 1 + ULTRAPOS/3 * 2) kind = 45;
                            else if (temp3 < 1 + ULTRAPOS/18 * 13) kind = 41;
                            else if (temp3 < 1 + ULTRAPOS/9 * 7) kind = 42;
                            else if (temp3 < 1 + ULTRAPOS/6 * 5) kind = 50;
                            else if (temp3 < 1 + ULTRAPOS/9 * 8) kind = 47;
                            else if (temp3 < 1 + ULTRAPOS/18 * 17) kind = 48;
                            else kind = 49;
                            four_star_guarantee_number = 1;
                        }
                    }
                    else {
                        star = 3;
                        type = 2;
                        if (temp3 < 1 + ULTRAPOS/13) kind = 51;
                        else if (temp3 < 1 + ULTRAPOS/13 * 2) kind = 52;
                        else if (temp3 < 1 + ULTRAPOS/13 * 3) kind = 53;
                        else if (temp3 < 1 + ULTRAPOS/13 * 4) kind = 54;
                        else if (temp3 < 1 + ULTRAPOS/13 * 5) kind = 55;
                        else if (temp3 < 1 + ULTRAPOS/13 * 6) kind = 56;
                        else if (temp3 < 1 + ULTRAPOS/13 * 7) kind = 57;
                        else if (temp3 < 1 + ULTRAPOS/13 * 8) kind = 58;
                        else if (temp3 < 1 + ULTRAPOS/13 * 9) kind = 59;
                        else if (temp3 < 1 + ULTRAPOS/13 * 10) kind = 60;
                        else if (temp3 < 1 + ULTRAPOS/13 * 11) kind = 61;
                        else if (temp3 < 1 + ULTRAPOS/13 * 12) kind = 62;
                        else kind = 63;
                    }
                }
                else if (five_star_assurance_number < 1 + 89 && five_star_assurance_number >= 74 && four_star_assurance_number >= 10) {
                    if (temp1 < 1 + ULTRAPOS/1000 * 6 + (five_star_assurance_number - 73) * ULTRAPOS/1000 * 60) {
                        star = 5;
                        five_count = five_count + 1;
                        ave_fives = ave_fives + five_star_assurance_number;
                        if (five_star_assurance_number > max_fives) { max_fives = five_star_assurance_number; max_fivesth = five_count; max_fivecount = count; }
                        if (five_star_assurance_number < min_fives) { min_fives = five_star_assurance_number; min_fivesth = five_count; min_fivecount = count; }
                        five_star_assurance_number = 0;
                        if (five_star_guarantee_number == 1) { type = 1; kind = 66; five_star_guarantee_number = 0;}
                        else if (temp2 < 1 + ULTRAPOS/2) {
                            type = 1;
                            kind = 66;
                            five_star_guarantee_number = 0;
                        }
                        else {
                            type = 2;
                            five_star_guarantee_number = 1;
                            if (temp3 < 1 + ULTRAPOS/5) kind = 5;
                            else if (temp3 < 1 + ULTRAPOS/5 * 2) kind = 3;
                            else if (temp3 < 1 + ULTRAPOS/5 * 3) kind = 1;
                            else if (temp3 < 1 + ULTRAPOS/5 * 4) kind = 4;
                            else kind = 2;
                        }
                    }
                    else {
                        star = 4;
                        four_count = four_count + 1;
                        four_star_assurance_number = 0;
                        if (four_star_guarantee_number == 1) {
                            type = 1;
                            if (temp3 < 1 + ULTRAPOS/3) kind = 23;
                            else if (temp3 < 1 + ULTRAPOS/3 * 2) kind = 16;
                            else kind = 31;
                            four_star_guarantee_number = 0;
                            }
                        else if (temp2 < 1 + ULTRAPOS/2 * (int)(10 * (unmet - threshold))) {
                            type = 1;
                            if (temp3 < 1 + ULTRAPOS/3) kind = 23;
                            else if (temp3 < 1 + ULTRAPOS/3 * 2) kind = 16;
                            else kind = 31;
                            four_star_guarantee_number = 0;
                        }
                        else if (temp2 < 1 + ULTRAPOS/6 * 5) {
                            type = 2;
                            unmet_count = 0;
                            unmet = (double)17.1;
                            if (temp3 < 1 + ULTRAPOS/11) kind = 18;
                            else if (temp3 < 1 + ULTRAPOS/11 * 2) kind = 20;
                            else if (temp3 < 1 + ULTRAPOS/11 * 3) kind = 26;
                            else if (temp3 < 1 + ULTRAPOS/11 * 4) kind = 29;
                            else if (temp3 < 1 + ULTRAPOS/11 * 5) kind = 21;
                            else if (temp3 < 1 + ULTRAPOS/11 * 6) kind = 24;
                            else if (temp3 < 1 + ULTRAPOS/11 * 7) kind = 25;
                            else if (temp3 < 1 + ULTRAPOS/11 * 8) kind = 22;
                            else if (temp3 < 1 + ULTRAPOS/11 * 9) kind = 27;
                            else if (temp3 < 1 + ULTRAPOS/11 * 10) kind = 19;
                            else kind = 17;
                            four_star_guarantee_number = 1;
                        }
                        else {
                            type = 3;
                            unmet_count = unmet_count + 1;
                            if (temp3 < 1 + ULTRAPOS/18) kind = 36;
                            else if (temp3 < 1 + ULTRAPOS/9) kind = 34;
                            else if (temp3 < 1 + ULTRAPOS/6) kind = 33;
                            else if (temp3 < 1 + ULTRAPOS/9 * 2) kind = 35;
                            else if (temp3 < 1 + ULTRAPOS/3) kind = 40;
                            else if (temp3 < 1 + ULTRAPOS/18 * 5) kind = 38;
                            else if (temp3 < 1 + ULTRAPOS/18 * 7) kind = 37;
                            else if (temp3 < 1 + ULTRAPOS/9 * 4) kind = 39;
                            else if (temp3 < 1 + ULTRAPOS/2) kind = 46;
                            else if (temp3 < 1 + ULTRAPOS/9 * 5) kind = 44;
                            else if (temp3 < 1 + ULTRAPOS/18 * 11) kind = 43;
                            else if (temp3 < 1 + ULTRAPOS/3 * 2) kind = 45;
                            else if (temp3 < 1 + ULTRAPOS/18 * 13) kind = 41;
                            else if (temp3 < 1 + ULTRAPOS/9 * 7) kind = 42;
                            else if (temp3 < 1 + ULTRAPOS/6 * 5) kind = 50;
                            else if (temp3 < 1 + ULTRAPOS/9 * 8) kind = 47;
                            else if (temp3 < 1 + ULTRAPOS/18 * 17) kind = 48;
                            else kind = 49;
                            four_star_guarantee_number = 1;
                        }
                    }
                }
                else {
                    star = 5;
                        five_count = five_count + 1;
                        ave_fives = ave_fives + five_star_assurance_number;
                        if (five_star_assurance_number > max_fives) { max_fives = five_star_assurance_number; max_fivesth = five_count; max_fivecount = count; }
                        if (five_star_assurance_number < min_fives) { min_fives = five_star_assurance_number; min_fivesth = five_count; min_fivecount = count; }
                        five_star_assurance_number = 0;
                    if (five_star_guarantee_number == 1) { type = 1; kind = 66; five_star_guarantee_number = 0;}
                    else if (temp2 < 1 + ULTRAPOS/2) {
                        type = 1;
                        kind = 66;
                        five_star_guarantee_number = 0;
                    }
                    else {
                        type = 2;
                        five_star_guarantee_number = 1;
                        if (temp3 < 1 + ULTRAPOS/5) kind = 5;
                        else if (temp3 < 1 + ULTRAPOS/5 * 2) kind = 3;
                        else if (temp3 < 1 + ULTRAPOS/5 * 3) kind = 1;
                        else if (temp3 < 1 + ULTRAPOS/5 * 4) kind = 4;
                        else kind = 2;
                    }
                }
                std::cout << count + 1 << "(" << five_star_assurance_number << ")" << " ";
                switch (kind) {
                case 1: { std::cout << "!!!!!*****Keqing" << endl; pcount[0]++; } break;
                case 2: { std::cout << "!!!!!*****Mona" << endl; pcount[1]++; } break;
                case 3: { std::cout << "!!!!!*****Qiqi" << endl; pcount[2]++; } break;
                case 4: { std::cout << "!!!!!*****Diluc" << endl; pcount[3]++; } break;
                case 5: { std::cout << "!!!!!*****Jean" << endl; pcount[4]++; } break;
                case 6: { std::cout << "!!!!!*****Amos' Bow" << endl; pcount[5]++; } break;
                case 7: { std::cout << "!!!!!*****Skyward Harp" << endl; pcount[6]++; } break;
                case 8: { std::cout << "!!!!!*****Lost Prayer to the Sacred Winds" << endl; pcount[7]++; } break;
                case 9: { std::cout << "!!!!!*****Skyward Atlas" << endl; pcount[8]++; } break;
                case 10: { std::cout << "!!!!!*****Primordial Jade Winged-Spear" << endl; pcount[9]++; } break;
                case 11: { std::cout << "!!!!!*****Skyward Spine" << endl; pcount[10]++; } break;
                case 12: { std::cout << "!!!!!*****Wolf's Gravestone" << endl; pcount[11]++; } break;
                case 13: { std::cout << "!!!!!*****Skyward Pride" << endl; pcount[12]++; } break;
                case 14: { std::cout << "!!!!!*****Skyward Blade" << endl; pcount[13]++; } break;
                case 15: { std::cout << "!!!!!*****Aquila Favonia" << endl; pcount[14]++; } break;
                case 16: { std::cout << "!!****Rosaria" << endl; pcount[15]++; } break;
                case 17: { std::cout << "!!****Xinyan" << endl; pcount[16]++; } break;
                case 18: { std::cout << "!!****Sucrose" << endl; pcount[17]++; } break;
                case 19: { std::cout << "!!****Diona" << endl; pcount[18]++; } break;
                case 20: { std::cout << "!!****Chongyun" << endl; pcount[19]++; } break;
                case 21: { std::cout << "!!****Noelle" << endl; pcount[20]++; } break;
                case 22: { std::cout << "!!****Bennett" << endl; pcount[21]++; } break;
                case 23: { std::cout << "!!****Fischl" << endl; pcount[22]++; } break;
                case 24: { std::cout << "!!****Ningguang" << endl; pcount[23]++; } break;
                case 25: { std::cout << "!!****Xingqiu" << endl; pcount[24]++; } break;
                case 26: { std::cout << "!!****Beidou" << endl; pcount[25]++; } break;
                case 27: { std::cout << "!!****Xiangling" << endl; pcount[26]++; } break;
                case 28: { std::cout << "!!****Amber" << endl; pcount[27]++; } break;
                case 29: { std::cout << "!!****Razor" << endl; pcount[28]++; } break;
                case 30: { std::cout << "!!****Kaeya" << endl; pcount[29]++; } break;
                case 31: { std::cout << "!!****Barbara" << endl; pcount[30]++; } break;
                case 32: { std::cout << "!!****Lisa" << endl; pcount[31]++; } break;
                case 33: { std::cout << "!!****Rust" << endl; pcount[32]++; } break;
                case 34: { std::cout << "!!****Sacrificial Bow" << endl; pcount[33]++; } break;
                case 35: { std::cout << "!!****The Stringless" << endl; pcount[34]++; } break;
                case 36: { std::cout << "!!****Favonius Warbow" << endl; pcount[35]++; } break;
                case 37: { std::cout << "!!****Eye of Perception" << endl; pcount[36]++; } break;
                case 38: { std::cout << "!!****Sacrificial Fragments" << endl; pcount[37]++; } break;
                case 39: { std::cout << "!!****The Widsith" << endl; pcount[38]++; } break;
                case 40: { std::cout << "!!****Favonius Codex" << endl; pcount[39]++; } break;
                case 41: { std::cout << "!!****Favonius Lance" << endl; pcount[40]++; } break;
                case 42: { std::cout << "!!****Dragon's Bane" << endl; pcount[41]++; } break;
                case 43: { std::cout << "!!****Rainslasher" << endl; pcount[42]++; } break;
                case 44: { std::cout << "!!****Sacrificial Greatsword" << endl; pcount[43]++; } break;
                case 45: { std::cout << "!!****The Bell" << endl; pcount[44]++; } break;
                case 46: { std::cout << "!!****Favonius Greatsword" << endl; pcount[45]++; } break;
                case 47: { std::cout << "!!****Lion's Roar" << endl; pcount[46]++; } break;
                case 48: { std::cout << "!!****Sacrificial Sword" << endl; pcount[47]++; } break;
                case 49: { std::cout << "!!****The Flute" << endl; pcount[48]++; } break;
                case 50: { std::cout << "!!****Favonius Sword" << endl; pcount[49]++; } break;
                case 51: { std::cout << "***Slingshot" << endl; pcount[50]++; } break;
                case 52: { std::cout << "***Sharpshooter's Oath" << endl; pcount[51]++; } break;
                case 53: { std::cout << "***Raven Bow" << endl; pcount[52]++; } break;
                case 54: { std::cout << "***Emerald Orb" << endl; pcount[53]++; } break;
                case 55: { std::cout << "***Thrilling Tales of Dragon Slayers" << endl; pcount[54]++; } break;
                case 56: { std::cout << "***Magic Guide" << endl; pcount[55]++; } break;
                case 57: { std::cout << "***Black Tassel" << endl; pcount[56]++; } break;
                case 58: { std::cout << "***Debate Club" << endl; pcount[57]++; } break;
                case 59: { std::cout << "***Bloodtainted Greatsword" << endl; pcount[58]++; } break;
                case 60: { std::cout << "***Ferrous Shadow" << endl; pcount[59]++; } break;
                case 61: { std::cout << "***Skyrider Sword" << endl; pcount[60]++; } break;
                case 62: { std::cout << "***Harbinger of Dawn" << endl; pcount[61]++; } break;
                case 63: { std::cout << "***Cool Steel" << endl; pcount[62]++; } break;
                case 64: { std::cout << "!!!!!*****Venti" << endl; pcount[63]++; } break;
                case 65: { std::cout << "!!!!!*****Klee" << endl; pcount[64]++; } break;
                case 66: { std::cout << "!!!!!*****Tartaglia" << endl; pcount[65]++; } break;
                case 67: { std::cout << "!!!!!*****Zhongli" << endl; pcount[66]++; } break;
                case 68: { std::cout << "!!!!!*****Albedo" << endl; pcount[67]++; } break;
                case 69: { std::cout << "!!!!!*****Ganyu" << endl; pcount[68]++; } break;
                case 70: { std::cout << "!!!!!*****Xiao" << endl; pcount[69]++; } break;
                case 71: { std::cout << "!!!!!*****Hu Tao" << endl; pcount[70]++; } break;
                case 72: { std::cout << "!!****Yanfei" << endl; pcount[71]++; } break;
                case 73: { std::cout << "!!****Eula" << endl; pcount[72]++; } break;
                case 74: { std::cout << "!!!!!*****Memory of Dust" << endl; pcount[73]++; } break;
                case 75: { std::cout << "!!!!!*****Vortex Vanquisher" << endl; pcount[74]++; } break;
                case 76: { std::cout << "!!!!!*****The Unforged" << endl; pcount[75]++; } break;
                case 77: { std::cout << "!!!!!*****Summit Shaper" << endl; pcount[76]++; } break;
                case 78: { std::cout << "!!!!!*****Primordial Jade Cutter" << endl; pcount[77]++; } break;
                case 79: { std::cout << "!!!!!*****Staff of Homa" << endl; pcount[78]++; } break;
                case 80: { std::cout << "!!****Lithic Blade" << endl; pcount[79]++; } break;
                case 81: { std::cout << "!!****Lithic Spear" << endl; pcount[80]++; } break;
                case 82: { std::cout << "!!!!!*****Elegy of the End" << endl; pcount[81]++; } break;
                case 83: { std::cout << "!!****The Alley Flash" << endl; pcount[82]++; } break;
                case 84: { std::cout << "!!****Wine and Song" << endl; pcount[83]++; } break;
                case 85: { std::cout << "!!****Alley Hunter" << endl; pcount[84]++; } break;
                case 86: { std::cout << "Placeholder" << endl; pcount[85]++; } break;
                case 87: { std::cout << "Placeholder" << endl; pcount[86]++; } break;
                case 88: { std::cout << "Placeholder" << endl; pcount[87]++; } break;
                case 89: { std::cout << "Placeholder" << endl; pcount[88]++; } break;
                case 90: { std::cout << "Placeholder" << endl; pcount[89]++; } break;
                case 91: { std::cout << "Placeholder" << endl; pcount[90]++; } break;
                case 92: { std::cout << "Placeholder" << endl; pcount[91]++; } break;
                case 93: { std::cout << "Placeholder" << endl; pcount[92]++; } break;
                case 94: { std::cout << "Placeholder" << endl; pcount[93]++; } break;
                case 95: { std::cout << "Placeholder" << endl; pcount[94]++; } break;
                case 96: { std::cout << "Placeholder" << endl; pcount[95]++; } break;
                case 97: { std::cout << "Placeholder" << endl; pcount[96]++; } break;
                case 98: { std::cout << "Placeholder" << endl; pcount[97]++; } break;
                case 99: { std::cout << "Placeholder" << endl; pcount[98]++; } break;
                case 100: { std::cout << "Placeholder" << endl; pcount[99]++; } break;
                case 101: { std::cout << "Placeholder" << endl; pcount[100]++; } break;
                case 102: { std::cout << "Placeholder" << endl; pcount[101]++; } break;
                case 103: { std::cout << "Placeholder" << endl; pcount[102]++; } break;
                case 104: { std::cout << "Placeholder" << endl; pcount[103]++; } break;
                case 105: { std::cout << "Placeholder" << endl; pcount[104]++; } break;
                case 106: { std::cout << "Placeholder" << endl; pcount[105]++; } break;
                case 107: { std::cout << "Placeholder" << endl; pcount[106]++; } break;
                case 108: { std::cout << "Placeholder" << endl; pcount[107]++; } break;
                case 109: { std::cout << "Placeholder" << endl; pcount[108]++; } break;
                case 110: { std::cout << "Placeholder" << endl; pcount[109]++; } break;
                case 111: { std::cout << "Placeholder" << endl; pcount[110]++; } break;
                case 112: { std::cout << "Placeholder" << endl; pcount[111]++; } break;
                case 113: { std::cout << "Placeholder" << endl; pcount[112]++; } break;
                case 114: { std::cout << "Placeholder" << endl; pcount[113]++; } break;
                case 115: { std::cout << "Placeholder" << endl; pcount[114]++; } break;
                case 116: { std::cout << "Placeholder" << endl; pcount[115]++; } break;
                case 117: { std::cout << "Placeholder" << endl; pcount[116]++; } break;
                case 118: { std::cout << "Placeholder" << endl; pcount[117]++; } break;
                case 119: { std::cout << "Placeholder" << endl; pcount[118]++; } break;
                case 120: { std::cout << "Placeholder" << endl; pcount[119]++; } break;
                case 121: { std::cout << "Placeholder" << endl; pcount[120]++; } break;
                case 122: { std::cout << "Placeholder" << endl; pcount[121]++; } break;
                case 123: { std::cout << "Placeholder" << endl; pcount[122]++; } break;
                case 124: { std::cout << "Placeholder" << endl; pcount[123]++; } break;
                case 125: { std::cout << "Placeholder" << endl; pcount[124]++; } break;
                case 126: { std::cout << "Placeholder" << endl; pcount[125]++; } break;
                case 127: { std::cout << "Placeholder" << endl; pcount[126]++; } break;
                case 128: { std::cout << "Placeholder" << endl; pcount[127]++; } break;
                }
                wishes_number = wishes_number - 1;
                count = count + 1;
                five_star_assurance_number = five_star_assurance_number + 1;
                four_star_assurance_number = four_star_assurance_number + 1;
            }
        }
        if (chosen_banner == 1 && chosen_event == 12) {
            while (wishes_number > 0) {
                long long int temp1 = generator() % ULTRAPOS + 1;
                long long int temp2 = generator() % ULTRAPOS + 1;
                long long int temp3 = generator() % ULTRAPOS + 1;
                int star = 0; //4-star or 5-star
                int type = 0; //Up or non-up, character or weapon
                int kind = 0; //which exactly
                if (unmet_count > threshold) unmet = (double)unmet_count;
                if (five_star_assurance_number < 1 + 73 && four_star_assurance_number < 1 + 8) {
                    if (temp1 < 1 + ULTRAPOS/1000 * 6) {
                        star = 5;
                        five_count = five_count + 1;
                        ave_fives = ave_fives + five_star_assurance_number;
                        if (five_star_assurance_number > max_fives) { max_fives = five_star_assurance_number; max_fivesth = five_count; max_fivecount = count; }
                        if (five_star_assurance_number < min_fives) { min_fives = five_star_assurance_number; min_fivesth = five_count; min_fivecount = count; }
                        five_star_assurance_number = 0;
                        if (five_star_guarantee_number == 1) { type = 1; kind = 1; five_star_guarantee_number = 0;}
                        else if (temp2 < 1 + ULTRAPOS/2) {
                            type = 1;
                            kind = 1;
                            five_star_guarantee_number = 0;
                        }
                        else {
                            type = 2;
                            five_star_guarantee_number = 1;
                            if (temp3 < 1 + ULTRAPOS/5) kind = 2;
                            else if (temp3 < 1 + ULTRAPOS/5 * 2) kind = 3;
                            else if (temp3 < 1 + ULTRAPOS/5 * 3) kind = 4;
                            else if (temp3 < 1 + ULTRAPOS/5 * 4) kind = 5;
                            else kind = 6;
                        }
                    }
                    else if (temp1 < 1 + ULTRAPOS/1000 * 57) {
                        star = 4;
                        four_count = four_count + 1;
                        four_star_assurance_number = 0;
                        if (four_star_guarantee_number == 1) {
                            type = 1;
                            if (temp3 < 1 + ULTRAPOS/3) kind = 7;
                            else if (temp3 < 1 + ULTRAPOS/3 * 2) kind = 8;
                            else kind = 9; 
                            four_star_guarantee_number = 0;
                            }
                        else if (temp2 < 1 + ULTRAPOS/2) {
                            type = 1;
                            if (temp3 < 1 + ULTRAPOS/3) kind = 7;
                            else if (temp3 < 1 + ULTRAPOS/3 * 2) kind = 8;
                            else kind = 9;
                            four_star_guarantee_number = 0;
                        }
                        else if (temp2 < 1 + ULTRAPOS/4 * (int)(10 * (unmet - threshold))) {
                            type = 2;
                            unmet_count = 0;
                            unmet = (double)17.1;
                            if (temp3 < 1 + ULTRAPOS/12) kind = 10;
                            else if (temp3 < 1 + ULTRAPOS/6) kind = 11;
                            else if (temp3 < 1 + ULTRAPOS/4) kind = 12;
                            else if (temp3 < 1 + ULTRAPOS/3) kind = 13;
                            else if (temp3 < 1 + ULTRAPOS/12 * 5) kind = 14;
                            else if (temp3 < 1 + ULTRAPOS/2) kind = 15;
                            else if (temp3 < 1 + ULTRAPOS/12 * 7) kind = 16;
                            else if (temp3 < 1 + ULTRAPOS/3 * 2) kind = 17;
                            else if (temp3 < 1 + ULTRAPOS/4 * 3) kind = 18;
                            else if (temp3 < 1 + ULTRAPOS/6 * 5) kind = 19;
                            else if (temp3 < 1 + ULTRAPOS/12 * 11) kind = 20;
                            else kind = 21;
                            four_star_guarantee_number = 1;
                        }
                        else {
                            type = 3;
                            unmet_count = unmet_count + 1;
                            if (temp3 < 1 + ULTRAPOS/18) kind = 22;
                            else if (temp3 < 1 + ULTRAPOS/9) kind = 23;
                            else if (temp3 < 1 + ULTRAPOS/6) kind = 24;
                            else if (temp3 < 1 + ULTRAPOS/9 * 2) kind = 25;
                            else if (temp3 < 1 + ULTRAPOS/18 * 5) kind = 26;
                            else if (temp3 < 1 + ULTRAPOS/3) kind = 27;
                            else if (temp3 < 1 + ULTRAPOS/18 * 7) kind = 28;
                            else if (temp3 < 1 + ULTRAPOS/9 * 4) kind = 29;
                            else if (temp3 < 1 + ULTRAPOS/2) kind = 30;
                            else if (temp3 < 1 + ULTRAPOS/9 * 5) kind = 31;
                            else if (temp3 < 1 + ULTRAPOS/18 * 11) kind = 32;
                            else if (temp3 < 1 + ULTRAPOS/3 * 2) kind = 33;
                            else if (temp3 < 1 + ULTRAPOS/18 * 13) kind = 34;
                            else if (temp3 < 1 + ULTRAPOS/9 * 7) kind = 35;
                            else if (temp3 < 1 + ULTRAPOS/6 * 5) kind = 36;
                            else if (temp3 < 1 + ULTRAPOS/9 * 8) kind = 37;
                            else if (temp3 < 1 + ULTRAPOS/18 * 17) kind = 38;
                            else kind = 39;
                            four_star_guarantee_number = 1;
                        }
                    }
                    else {
                        star = 3;
                        type = 2;
                        if (temp3 < 1 + ULTRAPOS/13) kind = 40;
                        else if (temp3 < 1 + ULTRAPOS/13 * 2) kind = 41;
                        else if (temp3 < 1 + ULTRAPOS/13 * 3) kind = 42;
                        else if (temp3 < 1 + ULTRAPOS/13 * 4) kind = 43;
                        else if (temp3 < 1 + ULTRAPOS/13 * 5) kind = 44;
                        else if (temp3 < 1 + ULTRAPOS/13 * 6) kind = 45;
                        else if (temp3 < 1 + ULTRAPOS/13 * 7) kind = 46;
                        else if (temp3 < 1 + ULTRAPOS/13 * 8) kind = 47;
                        else if (temp3 < 1 + ULTRAPOS/13 * 9) kind = 48;
                        else if (temp3 < 1 + ULTRAPOS/13 * 10) kind = 49;
                        else if (temp3 < 1 + ULTRAPOS/13 * 11) kind = 50;
                        else if (temp3 < 1 + ULTRAPOS/13 * 12) kind = 51;
                        else kind = 52;
                    }
                }
                else if (five_star_assurance_number < 1 + 73 && four_star_assurance_number == 9) {
                    if (temp1 < 1 + ULTRAPOS/1000 * 6) {
                        star = 5;
                        five_count = five_count + 1;
                        ave_fives = ave_fives + five_star_assurance_number;
                        if (five_star_assurance_number > max_fives) { max_fives = five_star_assurance_number; max_fivesth = five_count; max_fivecount = count; }
                        if (five_star_assurance_number < min_fives) { min_fives = five_star_assurance_number; min_fivesth = five_count; min_fivecount = count; }
                        five_star_assurance_number = 0;
                        if (five_star_guarantee_number == 1) { type = 1; kind = 1; five_star_guarantee_number = 0;}
                        else if (temp2 < 1 + ULTRAPOS/2) {
                            type = 1;
                            kind = 1;
                            five_star_guarantee_number = 0;
                        }
                        else {
                            type = 2;
                            five_star_guarantee_number = 1;
                            if (temp3 < 1 + ULTRAPOS/5) kind = 2;
                            else if (temp3 < 1 + ULTRAPOS/5 * 2) kind = 3;
                            else if (temp3 < 1 + ULTRAPOS/5 * 3) kind = 4;
                            else if (temp3 < 1 + ULTRAPOS/5 * 4) kind = 5;
                            else kind = 6;
                        }
                    }
                    else if (temp1 < 1 + ULTRAPOS/1000 * 567) {
                        star = 4;
                        four_count = four_count + 1;
                        four_star_assurance_number = 0;
                        if (four_star_guarantee_number == 1) {
                            type = 1;
                            if (temp3 < 1 + ULTRAPOS/3) kind = 7;
                            else if (temp3 < 1 + ULTRAPOS/3 * 2) kind = 8;
                            else kind = 9; 
                            four_star_guarantee_number = 0;
                            }
                        else if (temp2 < 1 + ULTRAPOS/2 * (int)(10 * (unmet - threshold))) {
                            type = 1;
                            if (temp3 < 1 + ULTRAPOS/3) kind = 7;
                            else if (temp3 < 1 + ULTRAPOS/3 * 2) kind = 8;
                            else kind = 9;
                            four_star_guarantee_number = 0;
                        }
                        else if (temp2 < 1 + ULTRAPOS/6 * 5) {
                            type = 2;
                            unmet_count = 0;
                            unmet = (double)17.1;
                            if (temp3 < 1 + ULTRAPOS/12) kind = 10;
                            else if (temp3 < 1 + ULTRAPOS/6) kind = 11;
                            else if (temp3 < 1 + ULTRAPOS/4) kind = 12;
                            else if (temp3 < 1 + ULTRAPOS/3) kind = 13;
                            else if (temp3 < 1 + ULTRAPOS/12 * 5) kind = 14;
                            else if (temp3 < 1 + ULTRAPOS/2) kind = 15;
                            else if (temp3 < 1 + ULTRAPOS/12 * 7) kind = 16;
                            else if (temp3 < 1 + ULTRAPOS/3 * 2) kind = 17;
                            else if (temp3 < 1 + ULTRAPOS/4 * 3) kind = 18;
                            else if (temp3 < 1 + ULTRAPOS/6 * 5) kind = 19;
                            else if (temp3 < 1 + ULTRAPOS/12 * 11) kind = 20;
                            else kind = 21;
                            four_star_guarantee_number = 1;
                        }
                        else {
                            type = 3;
                            unmet_count = unmet_count + 1;
                            if (temp3 < 1 + ULTRAPOS/18) kind = 22;
                            else if (temp3 < 1 + ULTRAPOS/9) kind = 23;
                            else if (temp3 < 1 + ULTRAPOS/6) kind = 24;
                            else if (temp3 < 1 + ULTRAPOS/9 * 2) kind = 25;
                            else if (temp3 < 1 + ULTRAPOS/18 * 5) kind = 26;
                            else if (temp3 < 1 + ULTRAPOS/3) kind = 27;
                            else if (temp3 < 1 + ULTRAPOS/18 * 7) kind = 28;
                            else if (temp3 < 1 + ULTRAPOS/9 * 4) kind = 29;
                            else if (temp3 < 1 + ULTRAPOS/2) kind = 30;
                            else if (temp3 < 1 + ULTRAPOS/9 * 5) kind = 31;
                            else if (temp3 < 1 + ULTRAPOS/18 * 11) kind = 32;
                            else if (temp3 < 1 + ULTRAPOS/3 * 2) kind = 33;
                            else if (temp3 < 1 + ULTRAPOS/18 * 13) kind = 34;
                            else if (temp3 < 1 + ULTRAPOS/9 * 7) kind = 35;
                            else if (temp3 < 1 + ULTRAPOS/6 * 5) kind = 36;
                            else if (temp3 < 1 + ULTRAPOS/9 * 8) kind = 37;
                            else if (temp3 < 1 + ULTRAPOS/18 * 17) kind = 38;
                            else kind = 39;
                            four_star_guarantee_number = 1;
                        }
                    }
                    else {
                        star = 3;
                        type = 2;
                        if (temp3 < 1 + ULTRAPOS/13) kind = 40;
                        else if (temp3 < 1 + ULTRAPOS/13 * 2) kind = 41;
                        else if (temp3 < 1 + ULTRAPOS/13 * 3) kind = 42;
                        else if (temp3 < 1 + ULTRAPOS/13 * 4) kind = 43;
                        else if (temp3 < 1 + ULTRAPOS/13 * 5) kind = 44;
                        else if (temp3 < 1 + ULTRAPOS/13 * 6) kind = 45;
                        else if (temp3 < 1 + ULTRAPOS/13 * 7) kind = 46;
                        else if (temp3 < 1 + ULTRAPOS/13 * 8) kind = 47;
                        else if (temp3 < 1 + ULTRAPOS/13 * 9) kind = 48;
                        else if (temp3 < 1 + ULTRAPOS/13 * 10) kind = 49;
                        else if (temp3 < 1 + ULTRAPOS/13 * 11) kind = 50;
                        else if (temp3 < 1 + ULTRAPOS/13 * 12) kind = 51;
                        else kind = 52;
                    }
                }
                else if (five_star_assurance_number < 1 + 73 && four_star_assurance_number >= 10) {
                    if (temp1 < 1 + ULTRAPOS/1000 * 6) {
                        star = 5;
                        five_count = five_count + 1;
                        ave_fives = ave_fives + five_star_assurance_number;
                        if (five_star_assurance_number > max_fives) { max_fives = five_star_assurance_number; max_fivesth = five_count; max_fivecount = count; }
                        if (five_star_assurance_number < min_fives) { min_fives = five_star_assurance_number; min_fivesth = five_count; min_fivecount = count; }
                        five_star_assurance_number = 0;
                        if (five_star_guarantee_number == 1) { type = 1; kind = 1; five_star_guarantee_number = 0;}
                        else if (temp2 < 1 + ULTRAPOS/2) {
                            type = 1;
                            kind = 1;
                            five_star_guarantee_number = 0;
                        }
                        else {
                            type = 2;
                            five_star_guarantee_number = 1;
                            if (temp3 < 1 + ULTRAPOS/5) kind = 2;
                            else if (temp3 < 1 + ULTRAPOS/5 * 2) kind = 3;
                            else if (temp3 < 1 + ULTRAPOS/5 * 3) kind = 4;
                            else if (temp3 < 1 + ULTRAPOS/5 * 4) kind = 5;
                            else kind = 6;
                        }
                    }
                    else {
                        star = 4;
                        four_count = four_count + 1;
                        four_star_assurance_number = 0;
                        if (four_star_guarantee_number == 1) {
                            type = 1;
                            if (temp3 < 1 + ULTRAPOS/3) kind = 7;
                            else if (temp3 < 1 + ULTRAPOS/3 * 2) kind = 8;
                            else kind = 9; 
                            four_star_guarantee_number = 0;
                            }
                        else if (temp2 < 1 + ULTRAPOS/2 * (int)(10 * (unmet - threshold))) {
                            type = 1;
                            if (temp3 < 1 + ULTRAPOS/3) kind = 7;
                            else if (temp3 < 1 + ULTRAPOS/3 * 2) kind = 8;
                            else kind = 9;
                            four_star_guarantee_number = 0;
                        }
                        else if (temp2 < 1 + ULTRAPOS/6 * 5) {
                            type = 2;
                            unmet_count = 0;
                            unmet = (double)17.1;
                            if (temp3 < 1 + ULTRAPOS/12) kind = 10;
                            else if (temp3 < 1 + ULTRAPOS/6) kind = 11;
                            else if (temp3 < 1 + ULTRAPOS/4) kind = 12;
                            else if (temp3 < 1 + ULTRAPOS/3) kind = 13;
                            else if (temp3 < 1 + ULTRAPOS/12 * 5) kind = 14;
                            else if (temp3 < 1 + ULTRAPOS/2) kind = 15;
                            else if (temp3 < 1 + ULTRAPOS/12 * 7) kind = 16;
                            else if (temp3 < 1 + ULTRAPOS/3 * 2) kind = 17;
                            else if (temp3 < 1 + ULTRAPOS/4 * 3) kind = 18;
                            else if (temp3 < 1 + ULTRAPOS/6 * 5) kind = 19;
                            else if (temp3 < 1 + ULTRAPOS/12 * 11) kind = 20;
                            else kind = 21;
                            four_star_guarantee_number = 1;
                        }
                        else {
                            type = 3;
                            unmet_count = unmet_count + 1;
                            if (temp3 < 1 + ULTRAPOS/18) kind = 22;
                            else if (temp3 < 1 + ULTRAPOS/9) kind = 23;
                            else if (temp3 < 1 + ULTRAPOS/6) kind = 24;
                            else if (temp3 < 1 + ULTRAPOS/9 * 2) kind = 25;
                            else if (temp3 < 1 + ULTRAPOS/18 * 5) kind = 26;
                            else if (temp3 < 1 + ULTRAPOS/3) kind = 27;
                            else if (temp3 < 1 + ULTRAPOS/18 * 7) kind = 28;
                            else if (temp3 < 1 + ULTRAPOS/9 * 4) kind = 29;
                            else if (temp3 < 1 + ULTRAPOS/2) kind = 30;
                            else if (temp3 < 1 + ULTRAPOS/9 * 5) kind = 31;
                            else if (temp3 < 1 + ULTRAPOS/18 * 11) kind = 32;
                            else if (temp3 < 1 + ULTRAPOS/3 * 2) kind = 33;
                            else if (temp3 < 1 + ULTRAPOS/18 * 13) kind = 34;
                            else if (temp3 < 1 + ULTRAPOS/9 * 7) kind = 35;
                            else if (temp3 < 1 + ULTRAPOS/6 * 5) kind = 36;
                            else if (temp3 < 1 + ULTRAPOS/9 * 8) kind = 37;
                            else if (temp3 < 1 + ULTRAPOS/18 * 17) kind = 38;
                            else kind = 39;
                            four_star_guarantee_number = 1;
                        }
                    }
                }
                else if (five_star_assurance_number < 1 + 89 && five_star_assurance_number >= 74 && four_star_assurance_number < 1 + 8) {
                    if (temp1 < 1 + ULTRAPOS/1000 * 6 + (five_star_assurance_number - 73) * ULTRAPOS/1000 * 60) {
                        star = 5;
                        five_count = five_count + 1;
                        ave_fives = ave_fives + five_star_assurance_number;
                        if (five_star_assurance_number > max_fives) { max_fives = five_star_assurance_number; max_fivesth = five_count; max_fivecount = count; }
                        if (five_star_assurance_number < min_fives) { min_fives = five_star_assurance_number; min_fivesth = five_count; min_fivecount = count; }
                        five_star_assurance_number = 0;
                        if (five_star_guarantee_number == 1) { type = 1; kind = 1; five_star_guarantee_number = 0;}
                        else if (temp2 < 1 + ULTRAPOS/2) {
                            type = 1;
                            kind = 1;
                            five_star_guarantee_number = 0;
                        }
                        else {
                            type = 2;
                            five_star_guarantee_number = 1;
                            if (temp3 < 1 + ULTRAPOS/5) kind = 2;
                            else if (temp3 < 1 + ULTRAPOS/5 * 2) kind = 3;
                            else if (temp3 < 1 + ULTRAPOS/5 * 3) kind = 4;
                            else if (temp3 < 1 + ULTRAPOS/5 * 4) kind = 5;
                            else kind = 6;
                        }
                    }
                    else if (temp1 < 1 + ULTRAPOS/1000 * 57 + (five_star_assurance_number - 73) * ULTRAPOS/1000 * 60) {
                        star = 4;
                        four_count = four_count + 1;
                        four_star_assurance_number = 0;
                        if (four_star_guarantee_number == 1) {
                            type = 1;
                            if (temp3 < 1 + ULTRAPOS/3) kind = 7;
                            else if (temp3 < 1 + ULTRAPOS/3 * 2) kind = 8;
                            else kind = 9; 
                            four_star_guarantee_number = 0;
                            }
                        else if (temp2 < 1 + ULTRAPOS/2 * (int)(10 * (unmet - threshold))) {
                            type = 1;
                            if (temp3 < 1 + ULTRAPOS/3) kind = 7;
                            else if (temp3 < 1 + ULTRAPOS/3 * 2) kind = 8;
                            else kind = 9;
                            four_star_guarantee_number = 0;
                        }
                        else if (temp2 < 1 + ULTRAPOS/6 * 5) {
                            type = 2;
                            unmet_count = 0;
                            unmet = (double)17.1;
                            if (temp3 < 1 + ULTRAPOS/12) kind = 10;
                            else if (temp3 < 1 + ULTRAPOS/6) kind = 11;
                            else if (temp3 < 1 + ULTRAPOS/4) kind = 12;
                            else if (temp3 < 1 + ULTRAPOS/3) kind = 13;
                            else if (temp3 < 1 + ULTRAPOS/12 * 5) kind = 14;
                            else if (temp3 < 1 + ULTRAPOS/2) kind = 15;
                            else if (temp3 < 1 + ULTRAPOS/12 * 7) kind = 16;
                            else if (temp3 < 1 + ULTRAPOS/3 * 2) kind = 17;
                            else if (temp3 < 1 + ULTRAPOS/4 * 3) kind = 18;
                            else if (temp3 < 1 + ULTRAPOS/6 * 5) kind = 19;
                            else if (temp3 < 1 + ULTRAPOS/12 * 11) kind = 20;
                            else kind = 21;
                            four_star_guarantee_number = 1;
                        }
                        else {
                            type = 3;
                            unmet_count = unmet_count + 1;
                            if (temp3 < 1 + ULTRAPOS/18) kind = 22;
                            else if (temp3 < 1 + ULTRAPOS/9) kind = 23;
                            else if (temp3 < 1 + ULTRAPOS/6) kind = 24;
                            else if (temp3 < 1 + ULTRAPOS/9 * 2) kind = 25;
                            else if (temp3 < 1 + ULTRAPOS/18 * 5) kind = 26;
                            else if (temp3 < 1 + ULTRAPOS/3) kind = 27;
                            else if (temp3 < 1 + ULTRAPOS/18 * 7) kind = 28;
                            else if (temp3 < 1 + ULTRAPOS/9 * 4) kind = 29;
                            else if (temp3 < 1 + ULTRAPOS/2) kind = 30;
                            else if (temp3 < 1 + ULTRAPOS/9 * 5) kind = 31;
                            else if (temp3 < 1 + ULTRAPOS/18 * 11) kind = 32;
                            else if (temp3 < 1 + ULTRAPOS/3 * 2) kind = 33;
                            else if (temp3 < 1 + ULTRAPOS/18 * 13) kind = 34;
                            else if (temp3 < 1 + ULTRAPOS/9 * 7) kind = 35;
                            else if (temp3 < 1 + ULTRAPOS/6 * 5) kind = 36;
                            else if (temp3 < 1 + ULTRAPOS/9 * 8) kind = 37;
                            else if (temp3 < 1 + ULTRAPOS/18 * 17) kind = 38;
                            else kind = 39;
                            four_star_guarantee_number = 1;
                        }
                    }
                    else {
                        star = 3;
                        type = 2;
                        if (temp3 < 1 + ULTRAPOS/13) kind = 40;
                        else if (temp3 < 1 + ULTRAPOS/13 * 2) kind = 41;
                        else if (temp3 < 1 + ULTRAPOS/13 * 3) kind = 42;
                        else if (temp3 < 1 + ULTRAPOS/13 * 4) kind = 43;
                        else if (temp3 < 1 + ULTRAPOS/13 * 5) kind = 44;
                        else if (temp3 < 1 + ULTRAPOS/13 * 6) kind = 45;
                        else if (temp3 < 1 + ULTRAPOS/13 * 7) kind = 46;
                        else if (temp3 < 1 + ULTRAPOS/13 * 8) kind = 47;
                        else if (temp3 < 1 + ULTRAPOS/13 * 9) kind = 48;
                        else if (temp3 < 1 + ULTRAPOS/13 * 10) kind = 49;
                        else if (temp3 < 1 + ULTRAPOS/13 * 11) kind = 50;
                        else if (temp3 < 1 + ULTRAPOS/13 * 12) kind = 51;
                        else kind = 52;
                    }
                }
                else if (five_star_assurance_number < 1 + 89 && five_star_assurance_number >= 74 && four_star_assurance_number == 9) {
                    if (temp1 < 1 + ULTRAPOS/1000 * 6 + (five_star_assurance_number - 73) * ULTRAPOS/1000 * 60) {
                        star = 5;
                        five_count = five_count + 1;
                        ave_fives = ave_fives + five_star_assurance_number;
                        if (five_star_assurance_number > max_fives) { max_fives = five_star_assurance_number; max_fivesth = five_count; max_fivecount = count; }
                        if (five_star_assurance_number < min_fives) { min_fives = five_star_assurance_number; min_fivesth = five_count; min_fivecount = count; }
                        five_star_assurance_number = 0;
                        if (five_star_guarantee_number == 1) { type = 1; kind = 1; five_star_guarantee_number = 0;}
                        else if (temp2 < 1 + ULTRAPOS/2) {
                            type = 1;
                            kind = 1;
                            five_star_guarantee_number = 0;
                        }
                        else {
                            type = 2;
                            five_star_guarantee_number = 1;
                            if (temp3 < 1 + ULTRAPOS/5) kind = 2;
                            else if (temp3 < 1 + ULTRAPOS/5 * 2) kind = 3;
                            else if (temp3 < 1 + ULTRAPOS/5 * 3) kind = 4;
                            else if (temp3 < 1 + ULTRAPOS/5 * 4) kind = 5;
                            else kind = 6;
                        }
                    }
                    else if (temp1 < 1 + ULTRAPOS/1000 * 567 + (five_star_assurance_number - 73) * ULTRAPOS/1000 * 60) {
                        star = 4;
                        four_count = four_count + 1;
                        four_star_assurance_number = 0;
                        if (four_star_guarantee_number == 1) {
                            type = 1;
                            if (temp3 < 1 + ULTRAPOS/3) kind = 7;
                            else if (temp3 < 1 + ULTRAPOS/3 * 2) kind = 8;
                            else kind = 9; 
                            four_star_guarantee_number = 0;
                            }
                        else if (temp2 < 1 + ULTRAPOS/2 * (int)(10 * (unmet - threshold))) {
                            type = 1;
                            if (temp3 < 1 + ULTRAPOS/3) kind = 7;
                            else if (temp3 < 1 + ULTRAPOS/3 * 2) kind = 8;
                            else kind = 9;
                            four_star_guarantee_number = 0;
                        }
                        else if (temp2 < 1 + ULTRAPOS/6 * 5) {
                            type = 2;
                            unmet_count = 0;
                            unmet = (double)17.1;
                            if (temp3 < 1 + ULTRAPOS/12) kind = 10;
                            else if (temp3 < 1 + ULTRAPOS/6) kind = 11;
                            else if (temp3 < 1 + ULTRAPOS/4) kind = 12;
                            else if (temp3 < 1 + ULTRAPOS/3) kind = 13;
                            else if (temp3 < 1 + ULTRAPOS/12 * 5) kind = 14;
                            else if (temp3 < 1 + ULTRAPOS/2) kind = 15;
                            else if (temp3 < 1 + ULTRAPOS/12 * 7) kind = 16;
                            else if (temp3 < 1 + ULTRAPOS/3 * 2) kind = 17;
                            else if (temp3 < 1 + ULTRAPOS/4 * 3) kind = 18;
                            else if (temp3 < 1 + ULTRAPOS/6 * 5) kind = 19;
                            else if (temp3 < 1 + ULTRAPOS/12 * 11) kind = 20;
                            else kind = 21;
                            four_star_guarantee_number = 1;
                        }
                        else {
                            type = 3;
                            unmet_count = unmet_count + 1;
                            if (temp3 < 1 + ULTRAPOS/18) kind = 22;
                            else if (temp3 < 1 + ULTRAPOS/9) kind = 23;
                            else if (temp3 < 1 + ULTRAPOS/6) kind = 24;
                            else if (temp3 < 1 + ULTRAPOS/9 * 2) kind = 25;
                            else if (temp3 < 1 + ULTRAPOS/18 * 5) kind = 26;
                            else if (temp3 < 1 + ULTRAPOS/3) kind = 27;
                            else if (temp3 < 1 + ULTRAPOS/18 * 7) kind = 28;
                            else if (temp3 < 1 + ULTRAPOS/9 * 4) kind = 29;
                            else if (temp3 < 1 + ULTRAPOS/2) kind = 30;
                            else if (temp3 < 1 + ULTRAPOS/9 * 5) kind = 31;
                            else if (temp3 < 1 + ULTRAPOS/18 * 11) kind = 32;
                            else if (temp3 < 1 + ULTRAPOS/3 * 2) kind = 33;
                            else if (temp3 < 1 + ULTRAPOS/18 * 13) kind = 34;
                            else if (temp3 < 1 + ULTRAPOS/9 * 7) kind = 35;
                            else if (temp3 < 1 + ULTRAPOS/6 * 5) kind = 36;
                            else if (temp3 < 1 + ULTRAPOS/9 * 8) kind = 37;
                            else if (temp3 < 1 + ULTRAPOS/18 * 17) kind = 38;
                            else kind = 39;
                            four_star_guarantee_number = 1;
                        }
                    }
                    else {
                        star = 3;
                        type = 2;
                        if (temp3 < 1 + ULTRAPOS/13) kind = 40;
                        else if (temp3 < 1 + ULTRAPOS/13 * 2) kind = 41;
                        else if (temp3 < 1 + ULTRAPOS/13 * 3) kind = 42;
                        else if (temp3 < 1 + ULTRAPOS/13 * 4) kind = 43;
                        else if (temp3 < 1 + ULTRAPOS/13 * 5) kind = 44;
                        else if (temp3 < 1 + ULTRAPOS/13 * 6) kind = 45;
                        else if (temp3 < 1 + ULTRAPOS/13 * 7) kind = 46;
                        else if (temp3 < 1 + ULTRAPOS/13 * 8) kind = 47;
                        else if (temp3 < 1 + ULTRAPOS/13 * 9) kind = 48;
                        else if (temp3 < 1 + ULTRAPOS/13 * 10) kind = 49;
                        else if (temp3 < 1 + ULTRAPOS/13 * 11) kind = 50;
                        else if (temp3 < 1 + ULTRAPOS/13 * 12) kind = 51;
                        else kind = 52;
                    }
                }
                else if (five_star_assurance_number < 1 + 89 && five_star_assurance_number >= 74 && four_star_assurance_number >= 10) {
                    if (temp1 < 1 + ULTRAPOS/1000 * 6 + (five_star_assurance_number - 73) * ULTRAPOS/1000 * 60) {
                        star = 5;
                        five_count = five_count + 1;
                        ave_fives = ave_fives + five_star_assurance_number;
                        if (five_star_assurance_number > max_fives) { max_fives = five_star_assurance_number; max_fivesth = five_count; max_fivecount = count; }
                        if (five_star_assurance_number < min_fives) { min_fives = five_star_assurance_number; min_fivesth = five_count; min_fivecount = count; }
                        five_star_assurance_number = 0;
                        if (five_star_guarantee_number == 1) { type = 1; kind = 1; five_star_guarantee_number = 0;}
                        else if (temp2 < 1 + ULTRAPOS/2) {
                            type = 1;
                            kind = 1;
                            five_star_guarantee_number = 0;
                        }
                        else {
                            type = 2;
                            five_star_guarantee_number = 1;
                            if (temp3 < 1 + ULTRAPOS/5) kind = 2;
                            else if (temp3 < 1 + ULTRAPOS/5 * 2) kind = 3;
                            else if (temp3 < 1 + ULTRAPOS/5 * 3) kind = 4;
                            else if (temp3 < 1 + ULTRAPOS/5 * 4) kind = 5;
                            else kind = 6;
                        }
                    }
                    else {
                        star = 4;
                        four_count = four_count + 1;
                        four_star_assurance_number = 0;
                        if (four_star_guarantee_number == 1) {
                            type = 1;
                            if (temp3 < 1 + ULTRAPOS/3) kind = 7;
                            else if (temp3 < 1 + ULTRAPOS/3 * 2) kind = 8;
                            else kind = 9; 
                            four_star_guarantee_number = 0;
                            }
                        else if (temp2 < 1 + ULTRAPOS/2 * (int)(10 * (unmet - threshold))) {
                            type = 1;
                            if (temp3 < 1 + ULTRAPOS/3) kind = 7;
                            else if (temp3 < 1 + ULTRAPOS/3 * 2) kind = 8;
                            else kind = 9;
                            four_star_guarantee_number = 0;
                        }
                        else if (temp2 < 1 + ULTRAPOS/6 * 5) {
                            type = 2;
                            unmet_count = 0;
                            unmet = (double)17.1;
                            if (temp3 < 1 + ULTRAPOS/12) kind = 10;
                            else if (temp3 < 1 + ULTRAPOS/6) kind = 11;
                            else if (temp3 < 1 + ULTRAPOS/4) kind = 12;
                            else if (temp3 < 1 + ULTRAPOS/3) kind = 13;
                            else if (temp3 < 1 + ULTRAPOS/12 * 5) kind = 14;
                            else if (temp3 < 1 + ULTRAPOS/2) kind = 15;
                            else if (temp3 < 1 + ULTRAPOS/12 * 7) kind = 16;
                            else if (temp3 < 1 + ULTRAPOS/3 * 2) kind = 17;
                            else if (temp3 < 1 + ULTRAPOS/4 * 3) kind = 18;
                            else if (temp3 < 1 + ULTRAPOS/6 * 5) kind = 19;
                            else if (temp3 < 1 + ULTRAPOS/12 * 11) kind = 20;
                            else kind = 21;
                            four_star_guarantee_number = 1;
                        }
                        else {
                            type = 3;
                            unmet_count = unmet_count + 1;
                            if (temp3 < 1 + ULTRAPOS/18) kind = 22;
                            else if (temp3 < 1 + ULTRAPOS/9) kind = 23;
                            else if (temp3 < 1 + ULTRAPOS/6) kind = 24;
                            else if (temp3 < 1 + ULTRAPOS/9 * 2) kind = 25;
                            else if (temp3 < 1 + ULTRAPOS/18 * 5) kind = 26;
                            else if (temp3 < 1 + ULTRAPOS/3) kind = 27;
                            else if (temp3 < 1 + ULTRAPOS/18 * 7) kind = 28;
                            else if (temp3 < 1 + ULTRAPOS/9 * 4) kind = 29;
                            else if (temp3 < 1 + ULTRAPOS/2) kind = 30;
                            else if (temp3 < 1 + ULTRAPOS/9 * 5) kind = 31;
                            else if (temp3 < 1 + ULTRAPOS/18 * 11) kind = 32;
                            else if (temp3 < 1 + ULTRAPOS/3 * 2) kind = 33;
                            else if (temp3 < 1 + ULTRAPOS/18 * 13) kind = 34;
                            else if (temp3 < 1 + ULTRAPOS/9 * 7) kind = 35;
                            else if (temp3 < 1 + ULTRAPOS/6 * 5) kind = 36;
                            else if (temp3 < 1 + ULTRAPOS/9 * 8) kind = 37;
                            else if (temp3 < 1 + ULTRAPOS/18 * 17) kind = 38;
                            else kind = 39;
                            four_star_guarantee_number = 1;
                        }
                    }
                }
                else {
                    star = 5;
                        five_count = five_count + 1;
                        ave_fives = ave_fives + five_star_assurance_number;
                        if (five_star_assurance_number > max_fives) { max_fives = five_star_assurance_number; max_fivesth = five_count; max_fivecount = count; }
                        if (five_star_assurance_number < min_fives) { min_fives = five_star_assurance_number; min_fivesth = five_count; min_fivecount = count; }
                        five_star_assurance_number = 0;
                    if (five_star_guarantee_number == 1) { type = 1; kind = 1; five_star_guarantee_number = 0;}
                    else if (temp2 < 1 + ULTRAPOS/2) {
                        type = 1;
                        kind = 1;
                        five_star_guarantee_number = 0;
                    }
                    else {
                        type = 2;
                        five_star_guarantee_number = 1;
                        if (temp3 < 1 + ULTRAPOS/5) kind = 2;
                        else if (temp3 < 1 + ULTRAPOS/5 * 2) kind = 3;
                        else if (temp3 < 1 + ULTRAPOS/5 * 3) kind = 4;
                        else if (temp3 < 1 + ULTRAPOS/5 * 4) kind = 5;
                        else kind = 6;
                    }
                }
                std::cout << count + 1 << "(" << five_star_assurance_number << ")" << " ";
                switch (kind) {
                case 1: { std::cout << "!!!!!*****Keqing" << endl; pcount[0]++; } break;
                case 2: { std::cout << "!!!!!*****Mona" << endl; pcount[1]++; } break;
                case 3: { std::cout << "!!!!!*****Qiqi" << endl; pcount[2]++; } break;
                case 4: { std::cout << "!!!!!*****Diluc" << endl; pcount[3]++; } break;
                case 5: { std::cout << "!!!!!*****Jean" << endl; pcount[4]++; } break;
                case 6: { std::cout << "!!!!!*****Amos' Bow" << endl; pcount[5]++; } break;
                case 7: { std::cout << "!!!!!*****Skyward Harp" << endl; pcount[6]++; } break;
                case 8: { std::cout << "!!!!!*****Lost Prayer to the Sacred Winds" << endl; pcount[7]++; } break;
                case 9: { std::cout << "!!!!!*****Skyward Atlas" << endl; pcount[8]++; } break;
                case 10: { std::cout << "!!!!!*****Primordial Jade Winged-Spear" << endl; pcount[9]++; } break;
                case 11: { std::cout << "!!!!!*****Skyward Spine" << endl; pcount[10]++; } break;
                case 12: { std::cout << "!!!!!*****Wolf's Gravestone" << endl; pcount[11]++; } break;
                case 13: { std::cout << "!!!!!*****Skyward Pride" << endl; pcount[12]++; } break;
                case 14: { std::cout << "!!!!!*****Skyward Blade" << endl; pcount[13]++; } break;
                case 15: { std::cout << "!!!!!*****Aquila Favonia" << endl; pcount[14]++; } break;
                case 16: { std::cout << "!!****Rosaria" << endl; pcount[15]++; } break;
                case 17: { std::cout << "!!****Xinyan" << endl; pcount[16]++; } break;
                case 18: { std::cout << "!!****Sucrose" << endl; pcount[17]++; } break;
                case 19: { std::cout << "!!****Diona" << endl; pcount[18]++; } break;
                case 20: { std::cout << "!!****Chongyun" << endl; pcount[19]++; } break;
                case 21: { std::cout << "!!****Noelle" << endl; pcount[20]++; } break;
                case 22: { std::cout << "!!****Bennett" << endl; pcount[21]++; } break;
                case 23: { std::cout << "!!****Fischl" << endl; pcount[22]++; } break;
                case 24: { std::cout << "!!****Ningguang" << endl; pcount[23]++; } break;
                case 25: { std::cout << "!!****Xingqiu" << endl; pcount[24]++; } break;
                case 26: { std::cout << "!!****Beidou" << endl; pcount[25]++; } break;
                case 27: { std::cout << "!!****Xiangling" << endl; pcount[26]++; } break;
                case 28: { std::cout << "!!****Amber" << endl; pcount[27]++; } break;
                case 29: { std::cout << "!!****Razor" << endl; pcount[28]++; } break;
                case 30: { std::cout << "!!****Kaeya" << endl; pcount[29]++; } break;
                case 31: { std::cout << "!!****Barbara" << endl; pcount[30]++; } break;
                case 32: { std::cout << "!!****Lisa" << endl; pcount[31]++; } break;
                case 33: { std::cout << "!!****Rust" << endl; pcount[32]++; } break;
                case 34: { std::cout << "!!****Sacrificial Bow" << endl; pcount[33]++; } break;
                case 35: { std::cout << "!!****The Stringless" << endl; pcount[34]++; } break;
                case 36: { std::cout << "!!****Favonius Warbow" << endl; pcount[35]++; } break;
                case 37: { std::cout << "!!****Eye of Perception" << endl; pcount[36]++; } break;
                case 38: { std::cout << "!!****Sacrificial Fragments" << endl; pcount[37]++; } break;
                case 39: { std::cout << "!!****The Widsith" << endl; pcount[38]++; } break;
                case 40: { std::cout << "!!****Favonius Codex" << endl; pcount[39]++; } break;
                case 41: { std::cout << "!!****Favonius Lance" << endl; pcount[40]++; } break;
                case 42: { std::cout << "!!****Dragon's Bane" << endl; pcount[41]++; } break;
                case 43: { std::cout << "!!****Rainslasher" << endl; pcount[42]++; } break;
                case 44: { std::cout << "!!****Sacrificial Greatsword" << endl; pcount[43]++; } break;
                case 45: { std::cout << "!!****The Bell" << endl; pcount[44]++; } break;
                case 46: { std::cout << "!!****Favonius Greatsword" << endl; pcount[45]++; } break;
                case 47: { std::cout << "!!****Lion's Roar" << endl; pcount[46]++; } break;
                case 48: { std::cout << "!!****Sacrificial Sword" << endl; pcount[47]++; } break;
                case 49: { std::cout << "!!****The Flute" << endl; pcount[48]++; } break;
                case 50: { std::cout << "!!****Favonius Sword" << endl; pcount[49]++; } break;
                case 51: { std::cout << "***Slingshot" << endl; pcount[50]++; } break;
                case 52: { std::cout << "***Sharpshooter's Oath" << endl; pcount[51]++; } break;
                case 53: { std::cout << "***Raven Bow" << endl; pcount[52]++; } break;
                case 54: { std::cout << "***Emerald Orb" << endl; pcount[53]++; } break;
                case 55: { std::cout << "***Thrilling Tales of Dragon Slayers" << endl; pcount[54]++; } break;
                case 56: { std::cout << "***Magic Guide" << endl; pcount[55]++; } break;
                case 57: { std::cout << "***Black Tassel" << endl; pcount[56]++; } break;
                case 58: { std::cout << "***Debate Club" << endl; pcount[57]++; } break;
                case 59: { std::cout << "***Bloodtainted Greatsword" << endl; pcount[58]++; } break;
                case 60: { std::cout << "***Ferrous Shadow" << endl; pcount[59]++; } break;
                case 61: { std::cout << "***Skyrider Sword" << endl; pcount[60]++; } break;
                case 62: { std::cout << "***Harbinger of Dawn" << endl; pcount[61]++; } break;
                case 63: { std::cout << "***Cool Steel" << endl; pcount[62]++; } break;
                case 64: { std::cout << "!!!!!*****Venti" << endl; pcount[63]++; } break;
                case 65: { std::cout << "!!!!!*****Klee" << endl; pcount[64]++; } break;
                case 66: { std::cout << "!!!!!*****Tartaglia" << endl; pcount[65]++; } break;
                case 67: { std::cout << "!!!!!*****Zhongli" << endl; pcount[66]++; } break;
                case 68: { std::cout << "!!!!!*****Albedo" << endl; pcount[67]++; } break;
                case 69: { std::cout << "!!!!!*****Ganyu" << endl; pcount[68]++; } break;
                case 70: { std::cout << "!!!!!*****Xiao" << endl; pcount[69]++; } break;
                case 71: { std::cout << "!!!!!*****Hu Tao" << endl; pcount[70]++; } break;
                case 72: { std::cout << "!!****Yanfei" << endl; pcount[71]++; } break;
                case 73: { std::cout << "!!****Eula" << endl; pcount[72]++; } break;
                case 74: { std::cout << "!!!!!*****Memory of Dust" << endl; pcount[73]++; } break;
                case 75: { std::cout << "!!!!!*****Vortex Vanquisher" << endl; pcount[74]++; } break;
                case 76: { std::cout << "!!!!!*****The Unforged" << endl; pcount[75]++; } break;
                case 77: { std::cout << "!!!!!*****Summit Shaper" << endl; pcount[76]++; } break;
                case 78: { std::cout << "!!!!!*****Primordial Jade Cutter" << endl; pcount[77]++; } break;
                case 79: { std::cout << "!!!!!*****Staff of Homa" << endl; pcount[78]++; } break;
                case 80: { std::cout << "!!****Lithic Blade" << endl; pcount[79]++; } break;
                case 81: { std::cout << "!!****Lithic Spear" << endl; pcount[80]++; } break;
                case 82: { std::cout << "!!!!!*****Elegy of the End" << endl; pcount[81]++; } break;
                case 83: { std::cout << "!!****The Alley Flash" << endl; pcount[82]++; } break;
                case 84: { std::cout << "!!****Wine and Song" << endl; pcount[83]++; } break;
                case 85: { std::cout << "!!****Alley Hunter" << endl; pcount[84]++; } break;
                case 86: { std::cout << "Placeholder" << endl; pcount[85]++; } break;
                case 87: { std::cout << "Placeholder" << endl; pcount[86]++; } break;
                case 88: { std::cout << "Placeholder" << endl; pcount[87]++; } break;
                case 89: { std::cout << "Placeholder" << endl; pcount[88]++; } break;
                case 90: { std::cout << "Placeholder" << endl; pcount[89]++; } break;
                case 91: { std::cout << "Placeholder" << endl; pcount[90]++; } break;
                case 92: { std::cout << "Placeholder" << endl; pcount[91]++; } break;
                case 93: { std::cout << "Placeholder" << endl; pcount[92]++; } break;
                case 94: { std::cout << "Placeholder" << endl; pcount[93]++; } break;
                case 95: { std::cout << "Placeholder" << endl; pcount[94]++; } break;
                case 96: { std::cout << "Placeholder" << endl; pcount[95]++; } break;
                case 97: { std::cout << "Placeholder" << endl; pcount[96]++; } break;
                case 98: { std::cout << "Placeholder" << endl; pcount[97]++; } break;
                case 99: { std::cout << "Placeholder" << endl; pcount[98]++; } break;
                case 100: { std::cout << "Placeholder" << endl; pcount[99]++; } break;
                case 101: { std::cout << "Placeholder" << endl; pcount[100]++; } break;
                case 102: { std::cout << "Placeholder" << endl; pcount[101]++; } break;
                case 103: { std::cout << "Placeholder" << endl; pcount[102]++; } break;
                case 104: { std::cout << "Placeholder" << endl; pcount[103]++; } break;
                case 105: { std::cout << "Placeholder" << endl; pcount[104]++; } break;
                case 106: { std::cout << "Placeholder" << endl; pcount[105]++; } break;
                case 107: { std::cout << "Placeholder" << endl; pcount[106]++; } break;
                case 108: { std::cout << "Placeholder" << endl; pcount[107]++; } break;
                case 109: { std::cout << "Placeholder" << endl; pcount[108]++; } break;
                case 110: { std::cout << "Placeholder" << endl; pcount[109]++; } break;
                case 111: { std::cout << "Placeholder" << endl; pcount[110]++; } break;
                case 112: { std::cout << "Placeholder" << endl; pcount[111]++; } break;
                case 113: { std::cout << "Placeholder" << endl; pcount[112]++; } break;
                case 114: { std::cout << "Placeholder" << endl; pcount[113]++; } break;
                case 115: { std::cout << "Placeholder" << endl; pcount[114]++; } break;
                case 116: { std::cout << "Placeholder" << endl; pcount[115]++; } break;
                case 117: { std::cout << "Placeholder" << endl; pcount[116]++; } break;
                case 118: { std::cout << "Placeholder" << endl; pcount[117]++; } break;
                case 119: { std::cout << "Placeholder" << endl; pcount[118]++; } break;
                case 120: { std::cout << "Placeholder" << endl; pcount[119]++; } break;
                case 121: { std::cout << "Placeholder" << endl; pcount[120]++; } break;
                case 122: { std::cout << "Placeholder" << endl; pcount[121]++; } break;
                case 123: { std::cout << "Placeholder" << endl; pcount[122]++; } break;
                case 124: { std::cout << "Placeholder" << endl; pcount[123]++; } break;
                case 125: { std::cout << "Placeholder" << endl; pcount[124]++; } break;
                case 126: { std::cout << "Placeholder" << endl; pcount[125]++; } break;
                case 127: { std::cout << "Placeholder" << endl; pcount[126]++; } break;
                case 128: { std::cout << "Placeholder" << endl; pcount[127]++; } break;
                }
                wishes_number = wishes_number - 1;
                count = count + 1;
                five_star_assurance_number = five_star_assurance_number + 1;
                four_star_assurance_number = four_star_assurance_number + 1;
            }
        }
        if (chosen_banner == 3 && chosen_event == 1) {
            while (wishes_number > 0) {
                long long int temp1 = generator() % ULTRAPOS + 1;
                long long int temp2 = generator() % ULTRAPOS + 1;
                long long int temp3 = generator() % ULTRAPOS + 1;
                int star = 0; //4-star or 5-star
                int type = 0; //Up or non-up, character or weapon
                int kind = 0; //which exactly
                if (unmet_count > threshold) unmet = (double)unmet_count;
                if (five_star_assurance_number < 1 + 73 && four_star_assurance_number < 1 + 8) {
                    if (temp1 < 1 + ULTRAPOS/1000 * 6) {
                        star = 5;
                        five_count = five_count + 1;
                        ave_fives = ave_fives + five_star_assurance_number;
                        if (five_star_assurance_number > max_fives) { max_fives = five_star_assurance_number; max_fivesth = five_count; max_fivecount = count; }
                        if (five_star_assurance_number < min_fives) { min_fives = five_star_assurance_number; min_fivesth = five_count; min_fivecount = count; }
                        five_star_assurance_number = 0;
                        if (temp2 < 1 + ULTRAPOS/2) {
                            type = 1;
                            if (temp3 < 1 + ULTRAPOS/5) kind = 1;
                            else if (temp3 < 1 + ULTRAPOS/5 * 2) kind = 2;
                            else if (temp3 < 1 + ULTRAPOS/5 * 3) kind = 3;
                            else if (temp3 < 1 + ULTRAPOS/5 * 4) kind = 4;
                            else kind = 5;
                        }
                        else {
                            type = 2;
                            if (temp3 < 1 + ULTRAPOS/10) kind = 6;
                            else if (temp3 < 1 + ULTRAPOS/5) kind = 7;
                            else if (temp3 < 1 + ULTRAPOS/10 * 3) kind = 8;
                            else if (temp3 < 1 + ULTRAPOS/5 * 2) kind = 9;
                            else if (temp3 < 1 + ULTRAPOS/2) kind = 10;
                            else if (temp3 < 1 + ULTRAPOS/5 * 3) kind = 11;
                            else if (temp3 < 1 + ULTRAPOS/10 * 7) kind = 12;
                            else if (temp3 < 1 + ULTRAPOS/5 * 4) kind = 13;
                            else if (temp3 < 1 + ULTRAPOS/10 * 9) kind = 14;
                            else kind = 15;
                        }
                    }
                    else if (temp1 < 1 + ULTRAPOS/1000 * 57) {
                        star = 4;
                        four_count = four_count + 1;
                        four_star_assurance_number = 0;
                        if (temp2 < 1 + ULTRAPOS/2 * (int)(10 * (unmet - threshold))) {
                            type = 1;
                            unmet_count = 0;
                            unmet = (double)17.1;
                            if (temp3 < 1 + ULTRAPOS/14) kind = 16;
                            else if (temp3 < 1 + ULTRAPOS/7) kind = 17;
                            else if (temp3 < 1 + ULTRAPOS/14 * 3) kind = 18;
                            else if (temp3 < 1 + ULTRAPOS/7 * 2) kind = 19;
                            else if (temp3 < 1 + ULTRAPOS/14 * 5) kind = 20;
                            else if (temp3 < 1 + ULTRAPOS/7 * 3) kind = 21;
                            else if (temp3 < 1 + ULTRAPOS/2) kind = 22;
                            else if (temp3 < 1 + ULTRAPOS/7 * 4) kind = 23;
                            else if (temp3 < 1 + ULTRAPOS/14 * 9) kind = 24;
                            else if (temp3 < 1 + ULTRAPOS/7 * 5) kind = 25;
                            else if (temp3 < 1 + ULTRAPOS/14 * 11) kind = 26;
                            else if (temp3 < 1 + ULTRAPOS/7 * 6) kind = 27;
                            else if (temp3 < 1 + ULTRAPOS/14 * 13) kind = 28;
                            else kind = 29;
                        }
                        else {
                            type = 2;
                            unmet_count = unmet_count + 1;
                            if (temp3 < 1 + ULTRAPOS/9 * 5) kind = 30;
                            else if (temp3 < 1 + ULTRAPOS/9) kind = 31;
                            else if (temp3 < 1 + ULTRAPOS/6) kind = 32;
                            else if (temp3 < 1 + ULTRAPOS/9 * 2) kind = 33;
                            else if (temp3 < 1 + ULTRAPOS/18 * 5) kind = 34;
                            else if (temp3 < 1 + ULTRAPOS/3) kind = 35;
                            else if (temp3 < 1 + ULTRAPOS/18 * 7) kind = 36;
                            else if (temp3 < 1 + ULTRAPOS/9 * 4) kind = 37;
                            else if (temp3 < 1 + ULTRAPOS/2) kind = 38;
                            else if (temp3 < 1 + ULTRAPOS/9 * 5) kind = 39;
                            else if (temp3 < 1 + ULTRAPOS/18 * 11) kind = 40;
                            else if (temp3 < 1 + ULTRAPOS/3 * 2) kind = 41;
                            else if (temp3 < 1 + ULTRAPOS/18 * 13) kind = 42;
                            else if (temp3 < 1 + ULTRAPOS/9 * 7) kind = 43;
                            else if (temp3 < 1 + ULTRAPOS/6 * 5) kind = 44;
                            else if (temp3 < 1 + ULTRAPOS/9 * 8) kind = 45;
                            else if (temp3 < 1 + ULTRAPOS/18 * 17) kind = 46;
                            else kind = 47;
                        }
                    }
                    else {
                        star = 3;
                        type = 2;
                        if (temp3 < 1 + ULTRAPOS/13) kind = 48;
                        else if (temp3 < 1 + ULTRAPOS/13 * 2) kind = 49;
                        else if (temp3 < 1 + ULTRAPOS/13 * 3) kind = 50;
                        else if (temp3 < 1 + ULTRAPOS/13 * 4) kind = 51;
                        else if (temp3 < 1 + ULTRAPOS/13 * 5) kind = 52;
                        else if (temp3 < 1 + ULTRAPOS/13 * 6) kind = 53;
                        else if (temp3 < 1 + ULTRAPOS/13 * 7) kind = 54;
                        else if (temp3 < 1 + ULTRAPOS/13 * 8) kind = 55;
                        else if (temp3 < 1 + ULTRAPOS/13 * 9) kind = 56;
                        else if (temp3 < 1 + ULTRAPOS/13 * 10) kind = 57;
                        else if (temp3 < 1 + ULTRAPOS/13 * 11) kind = 58;
                        else if (temp3 < 1 + ULTRAPOS/13 * 12) kind = 59;
                        else kind = 60;
                    }
                }
                else if (five_star_assurance_number < 1 + 73 && four_star_assurance_number == 9) {
                    if (temp1 < 1 + ULTRAPOS/1000 * 6) {
                        star = 5;
                        five_count = five_count + 1;
                        ave_fives = ave_fives + five_star_assurance_number;
                        if (five_star_assurance_number > max_fives) { max_fives = five_star_assurance_number; max_fivesth = five_count; max_fivecount = count; }
                        if (five_star_assurance_number < min_fives) { min_fives = five_star_assurance_number; min_fivesth = five_count; min_fivecount = count; }
                        five_star_assurance_number = 0;
                        if (temp2 < 1 + ULTRAPOS/2) {
                            type = 1;
                            if (temp3 < 1 + ULTRAPOS/5) kind = 1;
                            else if (temp3 < 1 + ULTRAPOS/5 * 2) kind = 2;
                            else if (temp3 < 1 + ULTRAPOS/5 * 3) kind = 3;
                            else if (temp3 < 1 + ULTRAPOS/5 * 4) kind = 4;
                            else kind = 5;
                        }
                        else {
                            type = 2;
                            if (temp3 < 1 + ULTRAPOS/10) kind = 6;
                            else if (temp3 < 1 + ULTRAPOS/5) kind = 7;
                            else if (temp3 < 1 + ULTRAPOS/10 * 3) kind = 8;
                            else if (temp3 < 1 + ULTRAPOS/5 * 2) kind = 9;
                            else if (temp3 < 1 + ULTRAPOS/2) kind = 10;
                            else if (temp3 < 1 + ULTRAPOS/5 * 3) kind = 11;
                            else if (temp3 < 1 + ULTRAPOS/10 * 7) kind = 12;
                            else if (temp3 < 1 + ULTRAPOS/5 * 4) kind = 13;
                            else if (temp3 < 1 + ULTRAPOS/10 * 9) kind = 14;
                            else kind = 15;
                        }
                    }
                    else if (temp1 < 1 + ULTRAPOS/1000 * 567) {
                        star = 4;
                        four_count = four_count + 1;
                        four_star_assurance_number = 0;
                        if (temp2 < 1 + ULTRAPOS/2 * (int)(10 * (unmet - threshold))) {
                            type = 1;
                            unmet_count = 0;
                            unmet = (double)17.1;
                            if (temp3 < 1 + ULTRAPOS/14) kind = 16;
                            else if (temp3 < 1 + ULTRAPOS/7) kind = 17;
                            else if (temp3 < 1 + ULTRAPOS/14 * 3) kind = 18;
                            else if (temp3 < 1 + ULTRAPOS/7 * 2) kind = 19;
                            else if (temp3 < 1 + ULTRAPOS/14 * 5) kind = 20;
                            else if (temp3 < 1 + ULTRAPOS/7 * 3) kind = 21;
                            else if (temp3 < 1 + ULTRAPOS/2) kind = 22;
                            else if (temp3 < 1 + ULTRAPOS/7 * 4) kind = 23;
                            else if (temp3 < 1 + ULTRAPOS/14 * 9) kind = 24;
                            else if (temp3 < 1 + ULTRAPOS/7 * 5) kind = 25;
                            else if (temp3 < 1 + ULTRAPOS/14 * 11) kind = 26;
                            else if (temp3 < 1 + ULTRAPOS/7 * 6) kind = 27;
                            else if (temp3 < 1 + ULTRAPOS/14 * 13) kind = 28;
                            else kind = 29;
                        }
                        else {
                            type = 2;
                            unmet_count = unmet_count + 1;
                            if (temp3 < 1 + ULTRAPOS/9 * 5) kind = 30;
                            else if (temp3 < 1 + ULTRAPOS/9) kind = 31;
                            else if (temp3 < 1 + ULTRAPOS/6) kind = 32;
                            else if (temp3 < 1 + ULTRAPOS/9 * 2) kind = 33;
                            else if (temp3 < 1 + ULTRAPOS/18 * 5) kind = 34;
                            else if (temp3 < 1 + ULTRAPOS/3) kind = 35;
                            else if (temp3 < 1 + ULTRAPOS/18 * 7) kind = 36;
                            else if (temp3 < 1 + ULTRAPOS/9 * 4) kind = 37;
                            else if (temp3 < 1 + ULTRAPOS/2) kind = 38;
                            else if (temp3 < 1 + ULTRAPOS/9 * 5) kind = 39;
                            else if (temp3 < 1 + ULTRAPOS/18 * 11) kind = 40;
                            else if (temp3 < 1 + ULTRAPOS/3 * 2) kind = 41;
                            else if (temp3 < 1 + ULTRAPOS/18 * 13) kind = 42;
                            else if (temp3 < 1 + ULTRAPOS/9 * 7) kind = 43;
                            else if (temp3 < 1 + ULTRAPOS/6 * 5) kind = 44;
                            else if (temp3 < 1 + ULTRAPOS/9 * 8) kind = 45;
                            else if (temp3 < 1 + ULTRAPOS/18 * 17) kind = 46;
                            else kind = 47;
                        }
                    }
                    else {
                        star = 3;
                        type = 2;
                        if (temp3 < 1 + ULTRAPOS/13) kind = 48;
                        else if (temp3 < 1 + ULTRAPOS/13 * 2) kind = 49;
                        else if (temp3 < 1 + ULTRAPOS/13 * 3) kind = 50;
                        else if (temp3 < 1 + ULTRAPOS/13 * 4) kind = 51;
                        else if (temp3 < 1 + ULTRAPOS/13 * 5) kind = 52;
                        else if (temp3 < 1 + ULTRAPOS/13 * 6) kind = 53;
                        else if (temp3 < 1 + ULTRAPOS/13 * 7) kind = 54;
                        else if (temp3 < 1 + ULTRAPOS/13 * 8) kind = 55;
                        else if (temp3 < 1 + ULTRAPOS/13 * 9) kind = 56;
                        else if (temp3 < 1 + ULTRAPOS/13 * 10) kind = 57;
                        else if (temp3 < 1 + ULTRAPOS/13 * 11) kind = 58;
                        else if (temp3 < 1 + ULTRAPOS/13 * 12) kind = 59;
                        else kind = 60;
                    }
                }
                else if (five_star_assurance_number < 1 + 73 && four_star_assurance_number >= 10) {
                    if (temp1 < 1 + ULTRAPOS/1000 * 6) {
                        star = 5;
                        five_count = five_count + 1;
                        ave_fives = ave_fives + five_star_assurance_number;
                        if (five_star_assurance_number > max_fives) { max_fives = five_star_assurance_number; max_fivesth = five_count; max_fivecount = count; }
                        if (five_star_assurance_number < min_fives) { min_fives = five_star_assurance_number; min_fivesth = five_count; min_fivecount = count; }
                        five_star_assurance_number = 0;
                        if (temp2 < 1 + ULTRAPOS/2) {
                            type = 1;
                            if (temp3 < 1 + ULTRAPOS/5) kind = 1;
                            else if (temp3 < 1 + ULTRAPOS/5 * 2) kind = 2;
                            else if (temp3 < 1 + ULTRAPOS/5 * 3) kind = 3;
                            else if (temp3 < 1 + ULTRAPOS/5 * 4) kind = 4;
                            else kind = 5;
                        }
                        else {
                            type = 2;
                            if (temp3 < 1 + ULTRAPOS/10) kind = 6;
                            else if (temp3 < 1 + ULTRAPOS/5) kind = 7;
                            else if (temp3 < 1 + ULTRAPOS/10 * 3) kind = 8;
                            else if (temp3 < 1 + ULTRAPOS/5 * 2) kind = 9;
                            else if (temp3 < 1 + ULTRAPOS/2) kind = 10;
                            else if (temp3 < 1 + ULTRAPOS/5 * 3) kind = 11;
                            else if (temp3 < 1 + ULTRAPOS/10 * 7) kind = 12;
                            else if (temp3 < 1 + ULTRAPOS/5 * 4) kind = 13;
                            else if (temp3 < 1 + ULTRAPOS/10 * 9) kind = 14;
                            else kind = 15;
                        }
                    }
                    else {
                        star = 4;
                        four_count = four_count + 1;
                        four_star_assurance_number = 0;
                        if (temp2 < 1 + ULTRAPOS/2 * (int)(10 * (unmet - threshold))) {
                            type = 1;
                            unmet_count = 0;
                            unmet = (double)17.1;
                            if (temp3 < 1 + ULTRAPOS/14) kind = 16;
                            else if (temp3 < 1 + ULTRAPOS/7) kind = 17;
                            else if (temp3 < 1 + ULTRAPOS/14 * 3) kind = 18;
                            else if (temp3 < 1 + ULTRAPOS/7 * 2) kind = 19;
                            else if (temp3 < 1 + ULTRAPOS/14 * 5) kind = 20;
                            else if (temp3 < 1 + ULTRAPOS/7 * 3) kind = 21;
                            else if (temp3 < 1 + ULTRAPOS/2) kind = 22;
                            else if (temp3 < 1 + ULTRAPOS/7 * 4) kind = 23;
                            else if (temp3 < 1 + ULTRAPOS/14 * 9) kind = 24;
                            else if (temp3 < 1 + ULTRAPOS/7 * 5) kind = 25;
                            else if (temp3 < 1 + ULTRAPOS/14 * 11) kind = 26;
                            else if (temp3 < 1 + ULTRAPOS/7 * 6) kind = 27;
                            else if (temp3 < 1 + ULTRAPOS/14 * 13) kind = 28;
                            else kind = 29;
                        }
                        else {
                            type = 2;
                            unmet_count = unmet_count + 1;
                            if (temp3 < 1 + ULTRAPOS/9 * 5) kind = 30;
                            else if (temp3 < 1 + ULTRAPOS/9) kind = 31;
                            else if (temp3 < 1 + ULTRAPOS/6) kind = 32;
                            else if (temp3 < 1 + ULTRAPOS/9 * 2) kind = 33;
                            else if (temp3 < 1 + ULTRAPOS/18 * 5) kind = 34;
                            else if (temp3 < 1 + ULTRAPOS/3) kind = 35;
                            else if (temp3 < 1 + ULTRAPOS/18 * 7) kind = 36;
                            else if (temp3 < 1 + ULTRAPOS/9 * 4) kind = 37;
                            else if (temp3 < 1 + ULTRAPOS/2) kind = 38;
                            else if (temp3 < 1 + ULTRAPOS/9 * 5) kind = 39;
                            else if (temp3 < 1 + ULTRAPOS/18 * 11) kind = 40;
                            else if (temp3 < 1 + ULTRAPOS/3 * 2) kind = 41;
                            else if (temp3 < 1 + ULTRAPOS/18 * 13) kind = 42;
                            else if (temp3 < 1 + ULTRAPOS/9 * 7) kind = 43;
                            else if (temp3 < 1 + ULTRAPOS/6 * 5) kind = 44;
                            else if (temp3 < 1 + ULTRAPOS/9 * 8) kind = 45;
                            else if (temp3 < 1 + ULTRAPOS/18 * 17) kind = 46;
                            else kind = 47;
                        }
                    }
                }
                else if (five_star_assurance_number < 1 + 89 && five_star_assurance_number >= 74 && four_star_assurance_number < 1 + 8) {
                    if (temp1 < 1 + ULTRAPOS/1000 * 6 + (five_star_assurance_number - 73) * ULTRAPOS/1000 * 60) {
                        star = 5;
                        five_count = five_count + 1;
                        ave_fives = ave_fives + five_star_assurance_number;
                        if (five_star_assurance_number > max_fives) { max_fives = five_star_assurance_number; max_fivesth = five_count; max_fivecount = count; }
                        if (five_star_assurance_number < min_fives) { min_fives = five_star_assurance_number; min_fivesth = five_count; min_fivecount = count; }
                        five_star_assurance_number = 0;
                        if (temp2 < 1 + ULTRAPOS/2) {
                            type = 1;
                            if (temp3 < 1 + ULTRAPOS/5) kind = 1;
                            else if (temp3 < 1 + ULTRAPOS/5 * 2) kind = 2;
                            else if (temp3 < 1 + ULTRAPOS/5 * 3) kind = 3;
                            else if (temp3 < 1 + ULTRAPOS/5 * 4) kind = 4;
                            else kind = 5;
                        }
                        else {
                            type = 2;
                            if (temp3 < 1 + ULTRAPOS/10) kind = 6;
                            else if (temp3 < 1 + ULTRAPOS/5) kind = 7;
                            else if (temp3 < 1 + ULTRAPOS/10 * 3) kind = 8;
                            else if (temp3 < 1 + ULTRAPOS/5 * 2) kind = 9;
                            else if (temp3 < 1 + ULTRAPOS/2) kind = 10;
                            else if (temp3 < 1 + ULTRAPOS/5 * 3) kind = 11;
                            else if (temp3 < 1 + ULTRAPOS/10 * 7) kind = 12;
                            else if (temp3 < 1 + ULTRAPOS/5 * 4) kind = 13;
                            else if (temp3 < 1 + ULTRAPOS/10 * 9) kind = 14;
                            else kind = 15;
                        }
                    }
                    else if (temp1 < 1 + ULTRAPOS/1000 * 57 + (five_star_assurance_number - 73) * ULTRAPOS/1000 * 60){
                        star = 4;
                        four_count = four_count + 1;
                        four_star_assurance_number = 0;
                        if (temp2 < 1 + ULTRAPOS/2 * (int)(10 * (unmet - threshold))) {
                            type = 1;
                            unmet_count = 0;
                            unmet = (double)17.1;
                            if (temp3 < 1 + ULTRAPOS/14) kind = 16;
                            else if (temp3 < 1 + ULTRAPOS/7) kind = 17;
                            else if (temp3 < 1 + ULTRAPOS/14 * 3) kind = 18;
                            else if (temp3 < 1 + ULTRAPOS/7 * 2) kind = 19;
                            else if (temp3 < 1 + ULTRAPOS/14 * 5) kind = 20;
                            else if (temp3 < 1 + ULTRAPOS/7 * 3) kind = 21;
                            else if (temp3 < 1 + ULTRAPOS/2) kind = 22;
                            else if (temp3 < 1 + ULTRAPOS/7 * 4) kind = 23;
                            else if (temp3 < 1 + ULTRAPOS/14 * 9) kind = 24;
                            else if (temp3 < 1 + ULTRAPOS/7 * 5) kind = 25;
                            else if (temp3 < 1 + ULTRAPOS/14 * 11) kind = 26;
                            else if (temp3 < 1 + ULTRAPOS/7 * 6) kind = 27;
                            else if (temp3 < 1 + ULTRAPOS/14 * 13) kind = 28;
                            else kind = 29;
                        }
                        else {
                            type = 2;
                            unmet_count = unmet_count + 1;
                            if (temp3 < 1 + ULTRAPOS/9 * 5) kind = 30;
                            else if (temp3 < 1 + ULTRAPOS/9) kind = 31;
                            else if (temp3 < 1 + ULTRAPOS/6) kind = 32;
                            else if (temp3 < 1 + ULTRAPOS/9 * 2) kind = 33;
                            else if (temp3 < 1 + ULTRAPOS/18 * 5) kind = 34;
                            else if (temp3 < 1 + ULTRAPOS/3) kind = 35;
                            else if (temp3 < 1 + ULTRAPOS/18 * 7) kind = 36;
                            else if (temp3 < 1 + ULTRAPOS/9 * 4) kind = 37;
                            else if (temp3 < 1 + ULTRAPOS/2) kind = 38;
                            else if (temp3 < 1 + ULTRAPOS/9 * 5) kind = 39;
                            else if (temp3 < 1 + ULTRAPOS/18 * 11) kind = 40;
                            else if (temp3 < 1 + ULTRAPOS/3 * 2) kind = 41;
                            else if (temp3 < 1 + ULTRAPOS/18 * 13) kind = 42;
                            else if (temp3 < 1 + ULTRAPOS/9 * 7) kind = 43;
                            else if (temp3 < 1 + ULTRAPOS/6 * 5) kind = 44;
                            else if (temp3 < 1 + ULTRAPOS/9 * 8) kind = 45;
                            else if (temp3 < 1 + ULTRAPOS/18 * 17) kind = 46;
                            else kind = 47;
                        }
                    }
                    else {
                        star = 3;
                        type = 2;
                        if (temp3 < 1 + ULTRAPOS/13) kind = 48;
                        else if (temp3 < 1 + ULTRAPOS/13 * 2) kind = 49;
                        else if (temp3 < 1 + ULTRAPOS/13 * 3) kind = 50;
                        else if (temp3 < 1 + ULTRAPOS/13 * 4) kind = 51;
                        else if (temp3 < 1 + ULTRAPOS/13 * 5) kind = 52;
                        else if (temp3 < 1 + ULTRAPOS/13 * 6) kind = 53;
                        else if (temp3 < 1 + ULTRAPOS/13 * 7) kind = 54;
                        else if (temp3 < 1 + ULTRAPOS/13 * 8) kind = 55;
                        else if (temp3 < 1 + ULTRAPOS/13 * 9) kind = 56;
                        else if (temp3 < 1 + ULTRAPOS/13 * 10) kind = 57;
                        else if (temp3 < 1 + ULTRAPOS/13 * 11) kind = 58;
                        else if (temp3 < 1 + ULTRAPOS/13 * 12) kind = 59;
                        else kind = 60;
                    }
                }
                else if (five_star_assurance_number < 1 + 89 && five_star_assurance_number >= 74 && four_star_assurance_number == 9) {
                    if (temp1 < 1 + ULTRAPOS/1000 * 6 + (five_star_assurance_number - 73) * ULTRAPOS/1000 * 60) {
                        star = 5;
                        five_count = five_count + 1;
                        ave_fives = ave_fives + five_star_assurance_number;
                        if (five_star_assurance_number > max_fives) { max_fives = five_star_assurance_number; max_fivesth = five_count; max_fivecount = count; }
                        if (five_star_assurance_number < min_fives) { min_fives = five_star_assurance_number; min_fivesth = five_count; min_fivecount = count; }
                        five_star_assurance_number = 0;
                        if (temp2 < 1 + ULTRAPOS/2) {
                            type = 1;
                            if (temp3 < 1 + ULTRAPOS/5) kind = 1;
                            else if (temp3 < 1 + ULTRAPOS/5 * 2) kind = 2;
                            else if (temp3 < 1 + ULTRAPOS/5 * 3) kind = 3;
                            else if (temp3 < 1 + ULTRAPOS/5 * 4) kind = 4;
                            else kind = 5;
                        }
                        else {
                            type = 2;
                            if (temp3 < 1 + ULTRAPOS/10) kind = 6;
                            else if (temp3 < 1 + ULTRAPOS/5) kind = 7;
                            else if (temp3 < 1 + ULTRAPOS/10 * 3) kind = 8;
                            else if (temp3 < 1 + ULTRAPOS/5 * 2) kind = 9;
                            else if (temp3 < 1 + ULTRAPOS/2) kind = 10;
                            else if (temp3 < 1 + ULTRAPOS/5 * 3) kind = 11;
                            else if (temp3 < 1 + ULTRAPOS/10 * 7) kind = 12;
                            else if (temp3 < 1 + ULTRAPOS/5 * 4) kind = 13;
                            else if (temp3 < 1 + ULTRAPOS/10 * 9) kind = 14;
                            else kind = 15;
                        }
                    }
                    else if (temp1 < 1 + ULTRAPOS/1000 * 567 + (five_star_assurance_number - 73) * ULTRAPOS/1000 * 60) {
                        star = 4;
                        four_count = four_count + 1;
                        four_star_assurance_number = 0;
                        if (temp2 < 1 + ULTRAPOS/2 * (int)(10 * (unmet - threshold))) {
                            type = 1;
                            unmet_count = 0;
                            unmet = (double)17.1;
                            if (temp3 < 1 + ULTRAPOS/14) kind = 16;
                            else if (temp3 < 1 + ULTRAPOS/7) kind = 17;
                            else if (temp3 < 1 + ULTRAPOS/14 * 3) kind = 18;
                            else if (temp3 < 1 + ULTRAPOS/7 * 2) kind = 19;
                            else if (temp3 < 1 + ULTRAPOS/14 * 5) kind = 20;
                            else if (temp3 < 1 + ULTRAPOS/7 * 3) kind = 21;
                            else if (temp3 < 1 + ULTRAPOS/2) kind = 22;
                            else if (temp3 < 1 + ULTRAPOS/7 * 4) kind = 23;
                            else if (temp3 < 1 + ULTRAPOS/14 * 9) kind = 24;
                            else if (temp3 < 1 + ULTRAPOS/7 * 5) kind = 25;
                            else if (temp3 < 1 + ULTRAPOS/14 * 11) kind = 26;
                            else if (temp3 < 1 + ULTRAPOS/7 * 6) kind = 27;
                            else if (temp3 < 1 + ULTRAPOS/14 * 13) kind = 28;
                            else kind = 29;
                        }
                        else {
                            type = 2;
                            unmet_count = unmet_count + 1;
                            if (temp3 < 1 + ULTRAPOS/9 * 5) kind = 30;
                            else if (temp3 < 1 + ULTRAPOS/9) kind = 31;
                            else if (temp3 < 1 + ULTRAPOS/6) kind = 32;
                            else if (temp3 < 1 + ULTRAPOS/9 * 2) kind = 33;
                            else if (temp3 < 1 + ULTRAPOS/18 * 5) kind = 34;
                            else if (temp3 < 1 + ULTRAPOS/3) kind = 35;
                            else if (temp3 < 1 + ULTRAPOS/18 * 7) kind = 36;
                            else if (temp3 < 1 + ULTRAPOS/9 * 4) kind = 37;
                            else if (temp3 < 1 + ULTRAPOS/2) kind = 38;
                            else if (temp3 < 1 + ULTRAPOS/9 * 5) kind = 39;
                            else if (temp3 < 1 + ULTRAPOS/18 * 11) kind = 40;
                            else if (temp3 < 1 + ULTRAPOS/3 * 2) kind = 41;
                            else if (temp3 < 1 + ULTRAPOS/18 * 13) kind = 42;
                            else if (temp3 < 1 + ULTRAPOS/9 * 7) kind = 43;
                            else if (temp3 < 1 + ULTRAPOS/6 * 5) kind = 44;
                            else if (temp3 < 1 + ULTRAPOS/9 * 8) kind = 45;
                            else if (temp3 < 1 + ULTRAPOS/18 * 17) kind = 46;
                            else kind = 47;
                        }
                    }
                    else {
                        star = 3;
                        type = 2;
                        if (temp3 < 1 + ULTRAPOS/13) kind = 48;
                        else if (temp3 < 1 + ULTRAPOS/13 * 2) kind = 49;
                        else if (temp3 < 1 + ULTRAPOS/13 * 3) kind = 50;
                        else if (temp3 < 1 + ULTRAPOS/13 * 4) kind = 51;
                        else if (temp3 < 1 + ULTRAPOS/13 * 5) kind = 52;
                        else if (temp3 < 1 + ULTRAPOS/13 * 6) kind = 53;
                        else if (temp3 < 1 + ULTRAPOS/13 * 7) kind = 54;
                        else if (temp3 < 1 + ULTRAPOS/13 * 8) kind = 55;
                        else if (temp3 < 1 + ULTRAPOS/13 * 9) kind = 56;
                        else if (temp3 < 1 + ULTRAPOS/13 * 10) kind = 57;
                        else if (temp3 < 1 + ULTRAPOS/13 * 11) kind = 58;
                        else if (temp3 < 1 + ULTRAPOS/13 * 12) kind = 59;
                        else kind = 60;
                    }
                }
                else if (five_star_assurance_number < 1 + 89 && five_star_assurance_number >= 74 && four_star_assurance_number >= 10) {
                    if (temp1 < 1 + ULTRAPOS/1000 * 6 + (five_star_assurance_number - 73) * ULTRAPOS/1000 * 60) {
                        star = 5;
                        five_count = five_count + 1;
                        ave_fives = ave_fives + five_star_assurance_number;
                        if (five_star_assurance_number > max_fives) { max_fives = five_star_assurance_number; max_fivesth = five_count; max_fivecount = count; }
                        if (five_star_assurance_number < min_fives) { min_fives = five_star_assurance_number; min_fivesth = five_count; min_fivecount = count; }
                        five_star_assurance_number = 0;
                        if (temp2 < 1 + ULTRAPOS/2) {
                            type = 1;
                            if (temp3 < 1 + ULTRAPOS/5) kind = 1;
                            else if (temp3 < 1 + ULTRAPOS/5 * 2) kind = 2;
                            else if (temp3 < 1 + ULTRAPOS/5 * 3) kind = 3;
                            else if (temp3 < 1 + ULTRAPOS/5 * 4) kind = 4;
                            else kind = 5;
                        }
                        else {
                            type = 2;
                            if (temp3 < 1 + ULTRAPOS/10) kind = 6;
                            else if (temp3 < 1 + ULTRAPOS/5) kind = 7;
                            else if (temp3 < 1 + ULTRAPOS/10 * 3) kind = 8;
                            else if (temp3 < 1 + ULTRAPOS/5 * 2) kind = 9;
                            else if (temp3 < 1 + ULTRAPOS/2) kind = 10;
                            else if (temp3 < 1 + ULTRAPOS/5 * 3) kind = 11;
                            else if (temp3 < 1 + ULTRAPOS/10 * 7) kind = 12;
                            else if (temp3 < 1 + ULTRAPOS/5 * 4) kind = 13;
                            else if (temp3 < 1 + ULTRAPOS/10 * 9) kind = 14;
                            else kind = 15;
                        }
                    }
                    else {
                        star = 4;
                        four_count = four_count + 1;
                        four_star_assurance_number = 0;
                        if (temp2 < 1 + ULTRAPOS/2 * (int)(10 * (unmet - threshold))) {
                            type = 1;
                            unmet_count = 0;
                            unmet = (double)17.1;
                            if (temp3 < 1 + ULTRAPOS/14) kind = 16;
                            else if (temp3 < 1 + ULTRAPOS/7) kind = 17;
                            else if (temp3 < 1 + ULTRAPOS/14 * 3) kind = 18;
                            else if (temp3 < 1 + ULTRAPOS/7 * 2) kind = 19;
                            else if (temp3 < 1 + ULTRAPOS/14 * 5) kind = 20;
                            else if (temp3 < 1 + ULTRAPOS/7 * 3) kind = 21;
                            else if (temp3 < 1 + ULTRAPOS/2) kind = 22;
                            else if (temp3 < 1 + ULTRAPOS/7 * 4) kind = 23;
                            else if (temp3 < 1 + ULTRAPOS/14 * 9) kind = 24;
                            else if (temp3 < 1 + ULTRAPOS/7 * 5) kind = 25;
                            else if (temp3 < 1 + ULTRAPOS/14 * 11) kind = 26;
                            else if (temp3 < 1 + ULTRAPOS/7 * 6) kind = 27;
                            else if (temp3 < 1 + ULTRAPOS/14 * 13) kind = 28;
                            else kind = 29;
                        }
                        else {
                            type = 2;
                            unmet_count = unmet_count + 1;
                            if (temp3 < 1 + ULTRAPOS/9 * 5) kind = 30;
                            else if (temp3 < 1 + ULTRAPOS/9) kind = 31;
                            else if (temp3 < 1 + ULTRAPOS/6) kind = 32;
                            else if (temp3 < 1 + ULTRAPOS/9 * 2) kind = 33;
                            else if (temp3 < 1 + ULTRAPOS/18 * 5) kind = 34;
                            else if (temp3 < 1 + ULTRAPOS/3) kind = 35;
                            else if (temp3 < 1 + ULTRAPOS/18 * 7) kind = 36;
                            else if (temp3 < 1 + ULTRAPOS/9 * 4) kind = 37;
                            else if (temp3 < 1 + ULTRAPOS/2) kind = 38;
                            else if (temp3 < 1 + ULTRAPOS/9 * 5) kind = 39;
                            else if (temp3 < 1 + ULTRAPOS/18 * 11) kind = 40;
                            else if (temp3 < 1 + ULTRAPOS/3 * 2) kind = 41;
                            else if (temp3 < 1 + ULTRAPOS/18 * 13) kind = 42;
                            else if (temp3 < 1 + ULTRAPOS/9 * 7) kind = 43;
                            else if (temp3 < 1 + ULTRAPOS/6 * 5) kind = 44;
                            else if (temp3 < 1 + ULTRAPOS/9 * 8) kind = 45;
                            else if (temp3 < 1 + ULTRAPOS/18 * 17) kind = 46;
                            else kind = 47;
                        }
                    }
                }
                else {
                        star = 5;
                        five_count = five_count + 1;
                        ave_fives = ave_fives + five_star_assurance_number;
                        if (five_star_assurance_number > max_fives) { max_fives = five_star_assurance_number; max_fivesth = five_count; max_fivecount = count; }
                        if (five_star_assurance_number < min_fives) { min_fives = five_star_assurance_number; min_fivesth = five_count; min_fivecount = count; }
                        five_star_assurance_number = 0;
                        if (temp2 < 1 + ULTRAPOS/2) {
                            type = 1;
                            if (temp3 < 1 + ULTRAPOS/5) kind = 1;
                            else if (temp3 < 1 + ULTRAPOS/5 * 2) kind = 2;
                            else if (temp3 < 1 + ULTRAPOS/5 * 3) kind = 3;
                            else if (temp3 < 1 + ULTRAPOS/5 * 4) kind = 4;
                            else kind = 5;
                        }
                        else {
                            type = 2;
                            if (temp3 < 1 + ULTRAPOS/10) kind = 6;
                            else if (temp3 < 1 + ULTRAPOS/5) kind = 7;
                            else if (temp3 < 1 + ULTRAPOS/10 * 3) kind = 8;
                            else if (temp3 < 1 + ULTRAPOS/5 * 2) kind = 9;
                            else if (temp3 < 1 + ULTRAPOS/2) kind = 10;
                            else if (temp3 < 1 + ULTRAPOS/5 * 3) kind = 11;
                            else if (temp3 < 1 + ULTRAPOS/10 * 7) kind = 12;
                            else if (temp3 < 1 + ULTRAPOS/5 * 4) kind = 13;
                            else if (temp3 < 1 + ULTRAPOS/10 * 9) kind = 14;
                            else kind = 15;
                        }
                }
                std::cout << count + 1 << "(" << five_star_assurance_number << ")" << " ";
                switch (kind) {
                case 1: { std::cout << "!!!!!*****Keqing" << endl; pcount[0]++; } break;
                case 2: { std::cout << "!!!!!*****Mona" << endl; pcount[1]++; } break;
                case 3: { std::cout << "!!!!!*****Qiqi" << endl; pcount[2]++; } break;
                case 4: { std::cout << "!!!!!*****Diluc" << endl; pcount[3]++; } break;
                case 5: { std::cout << "!!!!!*****Jean" << endl; pcount[4]++; } break;
                case 6: { std::cout << "!!!!!*****Amos' Bow" << endl; pcount[5]++; } break;
                case 7: { std::cout << "!!!!!*****Skyward Harp" << endl; pcount[6]++; } break;
                case 8: { std::cout << "!!!!!*****Lost Prayer to the Sacred Winds" << endl; pcount[7]++; } break;
                case 9: { std::cout << "!!!!!*****Skyward Atlas" << endl; pcount[8]++; } break;
                case 10: { std::cout << "!!!!!*****Primordial Jade Winged-Spear" << endl; pcount[9]++; } break;
                case 11: { std::cout << "!!!!!*****Skyward Spine" << endl; pcount[10]++; } break;
                case 12: { std::cout << "!!!!!*****Wolf's Gravestone" << endl; pcount[11]++; } break;
                case 13: { std::cout << "!!!!!*****Skyward Pride" << endl; pcount[12]++; } break;
                case 14: { std::cout << "!!!!!*****Skyward Blade" << endl; pcount[13]++; } break;
                case 15: { std::cout << "!!!!!*****Aquila Favonia" << endl; pcount[14]++; } break;
                case 16: { std::cout << "!!****Rosaria" << endl; pcount[15]++; } break;
                case 17: { std::cout << "!!****Xinyan" << endl; pcount[16]++; } break;
                case 18: { std::cout << "!!****Sucrose" << endl; pcount[17]++; } break;
                case 19: { std::cout << "!!****Diona" << endl; pcount[18]++; } break;
                case 20: { std::cout << "!!****Chongyun" << endl; pcount[19]++; } break;
                case 21: { std::cout << "!!****Noelle" << endl; pcount[20]++; } break;
                case 22: { std::cout << "!!****Bennett" << endl; pcount[21]++; } break;
                case 23: { std::cout << "!!****Fischl" << endl; pcount[22]++; } break;
                case 24: { std::cout << "!!****Ningguang" << endl; pcount[23]++; } break;
                case 25: { std::cout << "!!****Xingqiu" << endl; pcount[24]++; } break;
                case 26: { std::cout << "!!****Beidou" << endl; pcount[25]++; } break;
                case 27: { std::cout << "!!****Xiangling" << endl; pcount[26]++; } break;
                case 28: { std::cout << "!!****Amber" << endl; pcount[27]++; } break;
                case 29: { std::cout << "!!****Razor" << endl; pcount[28]++; } break;
                case 30: { std::cout << "!!****Kaeya" << endl; pcount[29]++; } break;
                case 31: { std::cout << "!!****Barbara" << endl; pcount[30]++; } break;
                case 32: { std::cout << "!!****Lisa" << endl; pcount[31]++; } break;
                case 33: { std::cout << "!!****Rust" << endl; pcount[32]++; } break;
                case 34: { std::cout << "!!****Sacrificial Bow" << endl; pcount[33]++; } break;
                case 35: { std::cout << "!!****The Stringless" << endl; pcount[34]++; } break;
                case 36: { std::cout << "!!****Favonius Warbow" << endl; pcount[35]++; } break;
                case 37: { std::cout << "!!****Eye of Perception" << endl; pcount[36]++; } break;
                case 38: { std::cout << "!!****Sacrificial Fragments" << endl; pcount[37]++; } break;
                case 39: { std::cout << "!!****The Widsith" << endl; pcount[38]++; } break;
                case 40: { std::cout << "!!****Favonius Codex" << endl; pcount[39]++; } break;
                case 41: { std::cout << "!!****Favonius Lance" << endl; pcount[40]++; } break;
                case 42: { std::cout << "!!****Dragon's Bane" << endl; pcount[41]++; } break;
                case 43: { std::cout << "!!****Rainslasher" << endl; pcount[42]++; } break;
                case 44: { std::cout << "!!****Sacrificial Greatsword" << endl; pcount[43]++; } break;
                case 45: { std::cout << "!!****The Bell" << endl; pcount[44]++; } break;
                case 46: { std::cout << "!!****Favonius Greatsword" << endl; pcount[45]++; } break;
                case 47: { std::cout << "!!****Lion's Roar" << endl; pcount[46]++; } break;
                case 48: { std::cout << "!!****Sacrificial Sword" << endl; pcount[47]++; } break;
                case 49: { std::cout << "!!****The Flute" << endl; pcount[48]++; } break;
                case 50: { std::cout << "!!****Favonius Sword" << endl; pcount[49]++; } break;
                case 51: { std::cout << "***Slingshot" << endl; pcount[50]++; } break;
                case 52: { std::cout << "***Sharpshooter's Oath" << endl; pcount[51]++; } break;
                case 53: { std::cout << "***Raven Bow" << endl; pcount[52]++; } break;
                case 54: { std::cout << "***Emerald Orb" << endl; pcount[53]++; } break;
                case 55: { std::cout << "***Thrilling Tales of Dragon Slayers" << endl; pcount[54]++; } break;
                case 56: { std::cout << "***Magic Guide" << endl; pcount[55]++; } break;
                case 57: { std::cout << "***Black Tassel" << endl; pcount[56]++; } break;
                case 58: { std::cout << "***Debate Club" << endl; pcount[57]++; } break;
                case 59: { std::cout << "***Bloodtainted Greatsword" << endl; pcount[58]++; } break;
                case 60: { std::cout << "***Ferrous Shadow" << endl; pcount[59]++; } break;
                case 61: { std::cout << "***Skyrider Sword" << endl; pcount[60]++; } break;
                case 62: { std::cout << "***Harbinger of Dawn" << endl; pcount[61]++; } break;
                case 63: { std::cout << "***Cool Steel" << endl; pcount[62]++; } break;
                case 64: { std::cout << "!!!!!*****Venti" << endl; pcount[63]++; } break;
                case 65: { std::cout << "!!!!!*****Klee" << endl; pcount[64]++; } break;
                case 66: { std::cout << "!!!!!*****Tartaglia" << endl; pcount[65]++; } break;
                case 67: { std::cout << "!!!!!*****Zhongli" << endl; pcount[66]++; } break;
                case 68: { std::cout << "!!!!!*****Albedo" << endl; pcount[67]++; } break;
                case 69: { std::cout << "!!!!!*****Ganyu" << endl; pcount[68]++; } break;
                case 70: { std::cout << "!!!!!*****Xiao" << endl; pcount[69]++; } break;
                case 71: { std::cout << "!!!!!*****Hu Tao" << endl; pcount[70]++; } break;
                case 72: { std::cout << "!!****Yanfei" << endl; pcount[71]++; } break;
                case 73: { std::cout << "!!****Eula" << endl; pcount[72]++; } break;
                case 74: { std::cout << "!!!!!*****Memory of Dust" << endl; pcount[73]++; } break;
                case 75: { std::cout << "!!!!!*****Vortex Vanquisher" << endl; pcount[74]++; } break;
                case 76: { std::cout << "!!!!!*****The Unforged" << endl; pcount[75]++; } break;
                case 77: { std::cout << "!!!!!*****Summit Shaper" << endl; pcount[76]++; } break;
                case 78: { std::cout << "!!!!!*****Primordial Jade Cutter" << endl; pcount[77]++; } break;
                case 79: { std::cout << "!!!!!*****Staff of Homa" << endl; pcount[78]++; } break;
                case 80: { std::cout << "!!****Lithic Blade" << endl; pcount[79]++; } break;
                case 81: { std::cout << "!!****Lithic Spear" << endl; pcount[80]++; } break;
                case 82: { std::cout << "!!!!!*****Elegy of the End" << endl; pcount[81]++; } break;
                case 83: { std::cout << "!!****The Alley Flash" << endl; pcount[82]++; } break;
                case 84: { std::cout << "!!****Wine and Song" << endl; pcount[83]++; } break;
                case 85: { std::cout << "!!****Alley Hunter" << endl; pcount[84]++; } break;
                case 86: { std::cout << "Placeholder" << endl; pcount[85]++; } break;
                case 87: { std::cout << "Placeholder" << endl; pcount[86]++; } break;
                case 88: { std::cout << "Placeholder" << endl; pcount[87]++; } break;
                case 89: { std::cout << "Placeholder" << endl; pcount[88]++; } break;
                case 90: { std::cout << "Placeholder" << endl; pcount[89]++; } break;
                case 91: { std::cout << "Placeholder" << endl; pcount[90]++; } break;
                case 92: { std::cout << "Placeholder" << endl; pcount[91]++; } break;
                case 93: { std::cout << "Placeholder" << endl; pcount[92]++; } break;
                case 94: { std::cout << "Placeholder" << endl; pcount[93]++; } break;
                case 95: { std::cout << "Placeholder" << endl; pcount[94]++; } break;
                case 96: { std::cout << "Placeholder" << endl; pcount[95]++; } break;
                case 97: { std::cout << "Placeholder" << endl; pcount[96]++; } break;
                case 98: { std::cout << "Placeholder" << endl; pcount[97]++; } break;
                case 99: { std::cout << "Placeholder" << endl; pcount[98]++; } break;
                case 100: { std::cout << "Placeholder" << endl; pcount[99]++; } break;
                case 101: { std::cout << "Placeholder" << endl; pcount[100]++; } break;
                case 102: { std::cout << "Placeholder" << endl; pcount[101]++; } break;
                case 103: { std::cout << "Placeholder" << endl; pcount[102]++; } break;
                case 104: { std::cout << "Placeholder" << endl; pcount[103]++; } break;
                case 105: { std::cout << "Placeholder" << endl; pcount[104]++; } break;
                case 106: { std::cout << "Placeholder" << endl; pcount[105]++; } break;
                case 107: { std::cout << "Placeholder" << endl; pcount[106]++; } break;
                case 108: { std::cout << "Placeholder" << endl; pcount[107]++; } break;
                case 109: { std::cout << "Placeholder" << endl; pcount[108]++; } break;
                case 110: { std::cout << "Placeholder" << endl; pcount[109]++; } break;
                case 111: { std::cout << "Placeholder" << endl; pcount[110]++; } break;
                case 112: { std::cout << "Placeholder" << endl; pcount[111]++; } break;
                case 113: { std::cout << "Placeholder" << endl; pcount[112]++; } break;
                case 114: { std::cout << "Placeholder" << endl; pcount[113]++; } break;
                case 115: { std::cout << "Placeholder" << endl; pcount[114]++; } break;
                case 116: { std::cout << "Placeholder" << endl; pcount[115]++; } break;
                case 117: { std::cout << "Placeholder" << endl; pcount[116]++; } break;
                case 118: { std::cout << "Placeholder" << endl; pcount[117]++; } break;
                case 119: { std::cout << "Placeholder" << endl; pcount[118]++; } break;
                case 120: { std::cout << "Placeholder" << endl; pcount[119]++; } break;
                case 121: { std::cout << "Placeholder" << endl; pcount[120]++; } break;
                case 122: { std::cout << "Placeholder" << endl; pcount[121]++; } break;
                case 123: { std::cout << "Placeholder" << endl; pcount[122]++; } break;
                case 124: { std::cout << "Placeholder" << endl; pcount[123]++; } break;
                case 125: { std::cout << "Placeholder" << endl; pcount[124]++; } break;
                case 126: { std::cout << "Placeholder" << endl; pcount[125]++; } break;
                case 127: { std::cout << "Placeholder" << endl; pcount[126]++; } break;
                case 128: { std::cout << "Placeholder" << endl; pcount[127]++; } break;
                }
                wishes_number = wishes_number - 1;
                count = count + 1;
                five_star_assurance_number = five_star_assurance_number + 1;
                four_star_assurance_number = four_star_assurance_number + 1;
            }
        }
        if (chosen_banner == 3 && chosen_event == 2) {
            while (wishes_number > 0) {
                long long int temp1 = generator() % ULTRAPOS + 1;
                long long int temp2 = generator() % ULTRAPOS + 1;
                long long int temp3 = generator() % ULTRAPOS + 1;
                int star = 0; //4-star or 5-star
                int type = 0; //Up or non-up, character or weapon
                int kind = 0; //which exactly
                if (unmet_count > threshold) unmet = (double)unmet_count;
                if (five_star_assurance_number < 1 + 73 && four_star_assurance_number < 1 + 8) {
                    if (temp1 < 1 + ULTRAPOS/1000 * 6) {
                        star = 5;
                        five_count = five_count + 1;
                        ave_fives = ave_fives + five_star_assurance_number;
                        if (five_star_assurance_number > max_fives) { max_fives = five_star_assurance_number; max_fivesth = five_count; max_fivecount = count; }
                        if (five_star_assurance_number < min_fives) { min_fives = five_star_assurance_number; min_fivesth = five_count; min_fivecount = count; }
                        five_star_assurance_number = 0;
                        if (temp2 < 1 + ULTRAPOS/2) {
                            type = 1;
                            if (temp3 < 1 + ULTRAPOS/5) kind = 1;
                            else if (temp3 < 1 + ULTRAPOS/5 * 2) kind = 2;
                            else if (temp3 < 1 + ULTRAPOS/5 * 3) kind = 3;
                            else if (temp3 < 1 + ULTRAPOS/5 * 4) kind = 4;
                            else kind = 5;
                        }
                        else {
                            type = 2;
                            if (temp3 < 1 + ULTRAPOS/10) kind = 6;
                            else if (temp3 < 1 + ULTRAPOS/5) kind = 7;
                            else if (temp3 < 1 + ULTRAPOS/10 * 3) kind = 8;
                            else if (temp3 < 1 + ULTRAPOS/5 * 2) kind = 9;
                            else if (temp3 < 1 + ULTRAPOS/2) kind = 10;
                            else if (temp3 < 1 + ULTRAPOS/5 * 3) kind = 11;
                            else if (temp3 < 1 + ULTRAPOS/10 * 7) kind = 12;
                            else if (temp3 < 1 + ULTRAPOS/5 * 4) kind = 13;
                            else if (temp3 < 1 + ULTRAPOS/10 * 9) kind = 14;
                            else kind = 15;
                        }
                    }
                    else if (temp1 < 1 + ULTRAPOS/1000 * 57) {
                        star = 4;
                        four_count = four_count + 1;
                        four_star_assurance_number = 0;
                        if (temp2 < 1 + ULTRAPOS/2 * (int)(10 * (unmet - threshold))) {
                            type = 1;
                            unmet_count = 0;
                            unmet = (double)17.1;
                            if (temp3 < 1 + ULTRAPOS/16) kind = 16;
                            else if (temp3 < 1 + ULTRAPOS/8) kind = 17;
                            else if (temp3 < 1 + ULTRAPOS/16 * 3) kind = 18;
                            else if (temp3 < 1 + ULTRAPOS/4) kind = 19;
                            else if (temp3 < 1 + ULTRAPOS/16 * 5) kind = 20;
                            else if (temp3 < 1 + ULTRAPOS/8 * 3) kind = 21;
                            else if (temp3 < 1 + ULTRAPOS/16 * 7) kind = 22;
                            else if (temp3 < 1 + ULTRAPOS/2) kind = 23;
                            else if (temp3 < 1 + ULTRAPOS/16 * 9) kind = 24;
                            else if (temp3 < 1 + ULTRAPOS/8 * 5) kind = 25;
                            else if (temp3 < 1 + ULTRAPOS/16 * 11) kind = 26;
                            else if (temp3 < 1 + ULTRAPOS/4 * 3) kind = 27;
                            else if (temp3 < 1 + ULTRAPOS/16 * 13) kind = 28;
                            else if (temp3 < 1 + ULTRAPOS/8 * 7) kind = 29;
                            else if (temp3 < 1 + ULTRAPOS/16 * 15) kind = 30;
                            else kind = 31;
                        }
                        else {
                            type = 2;
                            unmet_count = unmet_count + 1;
                            if (temp3 < 1 + ULTRAPOS/9 * 5) kind = 32;
                            else if (temp3 < 1 + ULTRAPOS/9) kind = 33;
                            else if (temp3 < 1 + ULTRAPOS/6) kind = 34;
                            else if (temp3 < 1 + ULTRAPOS/9 * 2) kind = 35;
                            else if (temp3 < 1 + ULTRAPOS/18 * 5) kind = 36;
                            else if (temp3 < 1 + ULTRAPOS/3) kind = 37;
                            else if (temp3 < 1 + ULTRAPOS/18 * 7) kind = 38;
                            else if (temp3 < 1 + ULTRAPOS/9 * 4) kind = 39;
                            else if (temp3 < 1 + ULTRAPOS/2) kind = 40;
                            else if (temp3 < 1 + ULTRAPOS/9 * 5) kind = 41;
                            else if (temp3 < 1 + ULTRAPOS/18 * 11) kind = 42;
                            else if (temp3 < 1 + ULTRAPOS/3 * 2) kind = 43;
                            else if (temp3 < 1 + ULTRAPOS/18 * 13) kind = 44;
                            else if (temp3 < 1 + ULTRAPOS/9 * 7) kind = 45;
                            else if (temp3 < 1 + ULTRAPOS/6 * 5) kind = 46;
                            else if (temp3 < 1 + ULTRAPOS/9 * 8) kind = 47;
                            else if (temp3 < 1 + ULTRAPOS/18 * 17) kind = 48;
                            else kind = 49;
                        }
                    }
                    else {
                        star = 3;
                        type = 2;
                        if (temp3 < 1 + ULTRAPOS/13) kind = 50;
                        else if (temp3 < 1 + ULTRAPOS/13 * 2) kind = 51;
                        else if (temp3 < 1 + ULTRAPOS/13 * 3) kind = 52;
                        else if (temp3 < 1 + ULTRAPOS/13 * 4) kind = 53;
                        else if (temp3 < 1 + ULTRAPOS/13 * 5) kind = 54;
                        else if (temp3 < 1 + ULTRAPOS/13 * 6) kind = 55;
                        else if (temp3 < 1 + ULTRAPOS/13 * 7) kind = 56;
                        else if (temp3 < 1 + ULTRAPOS/13 * 8) kind = 57;
                        else if (temp3 < 1 + ULTRAPOS/13 * 9) kind = 58;
                        else if (temp3 < 1 + ULTRAPOS/13 * 10) kind = 59;
                        else if (temp3 < 1 + ULTRAPOS/13 * 11) kind = 60;
                        else if (temp3 < 1 + ULTRAPOS/13 * 12) kind = 61;
                        else kind = 62;
                    }
                }
                else if (five_star_assurance_number < 1 + 73 && four_star_assurance_number == 9) {
                    if (temp1 < 1 + ULTRAPOS/1000 * 6) {
                        star = 5;
                        five_count = five_count + 1;
                        ave_fives = ave_fives + five_star_assurance_number;
                        if (five_star_assurance_number > max_fives) { max_fives = five_star_assurance_number; max_fivesth = five_count; max_fivecount = count; }
                        if (five_star_assurance_number < min_fives) { min_fives = five_star_assurance_number; min_fivesth = five_count; min_fivecount = count; }
                        five_star_assurance_number = 0;
                        if (temp2 < 1 + ULTRAPOS/2) {
                            type = 1;
                            if (temp3 < 1 + ULTRAPOS/5) kind = 1;
                            else if (temp3 < 1 + ULTRAPOS/5 * 2) kind = 2;
                            else if (temp3 < 1 + ULTRAPOS/5 * 3) kind = 3;
                            else if (temp3 < 1 + ULTRAPOS/5 * 4) kind = 4;
                            else kind = 5;
                        }
                        else {
                            type = 2;
                            if (temp3 < 1 + ULTRAPOS/10) kind = 6;
                            else if (temp3 < 1 + ULTRAPOS/5) kind = 7;
                            else if (temp3 < 1 + ULTRAPOS/10 * 3) kind = 8;
                            else if (temp3 < 1 + ULTRAPOS/5 * 2) kind = 9;
                            else if (temp3 < 1 + ULTRAPOS/2) kind = 10;
                            else if (temp3 < 1 + ULTRAPOS/5 * 3) kind = 11;
                            else if (temp3 < 1 + ULTRAPOS/10 * 7) kind = 12;
                            else if (temp3 < 1 + ULTRAPOS/5 * 4) kind = 13;
                            else if (temp3 < 1 + ULTRAPOS/10 * 9) kind = 14;
                            else kind = 15;
                        }
                    }
                    else if (temp1 < 1 + ULTRAPOS/1000 * 567) {
                        star = 4;
                        four_count = four_count + 1;
                        four_star_assurance_number = 0;
                        if (temp2 < 1 + ULTRAPOS/2 * (int)(10 * (unmet - threshold))) {
                            type = 1;
                            unmet_count = 0;
                            unmet = (double)17.1;
                            if (temp3 < 1 + ULTRAPOS/16) kind = 16;
                            else if (temp3 < 1 + ULTRAPOS/8) kind = 17;
                            else if (temp3 < 1 + ULTRAPOS/16 * 3) kind = 18;
                            else if (temp3 < 1 + ULTRAPOS/4) kind = 19;
                            else if (temp3 < 1 + ULTRAPOS/16 * 5) kind = 20;
                            else if (temp3 < 1 + ULTRAPOS/8 * 3) kind = 21;
                            else if (temp3 < 1 + ULTRAPOS/16 * 7) kind = 22;
                            else if (temp3 < 1 + ULTRAPOS/2) kind = 23;
                            else if (temp3 < 1 + ULTRAPOS/16 * 9) kind = 24;
                            else if (temp3 < 1 + ULTRAPOS/8 * 5) kind = 25;
                            else if (temp3 < 1 + ULTRAPOS/16 * 11) kind = 26;
                            else if (temp3 < 1 + ULTRAPOS/4 * 3) kind = 27;
                            else if (temp3 < 1 + ULTRAPOS/16 * 13) kind = 28;
                            else if (temp3 < 1 + ULTRAPOS/8 * 7) kind = 29;
                            else if (temp3 < 1 + ULTRAPOS/16 * 15) kind = 30;
                            else kind = 31;
                        }
                        else {
                            type = 2;
                            unmet_count = unmet_count + 1;
                            if (temp3 < 1 + ULTRAPOS/9 * 5) kind = 32;
                            else if (temp3 < 1 + ULTRAPOS/9) kind = 33;
                            else if (temp3 < 1 + ULTRAPOS/6) kind = 34;
                            else if (temp3 < 1 + ULTRAPOS/9 * 2) kind = 35;
                            else if (temp3 < 1 + ULTRAPOS/18 * 5) kind = 36;
                            else if (temp3 < 1 + ULTRAPOS/3) kind = 37;
                            else if (temp3 < 1 + ULTRAPOS/18 * 7) kind = 38;
                            else if (temp3 < 1 + ULTRAPOS/9 * 4) kind = 39;
                            else if (temp3 < 1 + ULTRAPOS/2) kind = 40;
                            else if (temp3 < 1 + ULTRAPOS/9 * 5) kind = 41;
                            else if (temp3 < 1 + ULTRAPOS/18 * 11) kind = 42;
                            else if (temp3 < 1 + ULTRAPOS/3 * 2) kind = 43;
                            else if (temp3 < 1 + ULTRAPOS/18 * 13) kind = 44;
                            else if (temp3 < 1 + ULTRAPOS/9 * 7) kind = 45;
                            else if (temp3 < 1 + ULTRAPOS/6 * 5) kind = 46;
                            else if (temp3 < 1 + ULTRAPOS/9 * 8) kind = 47;
                            else if (temp3 < 1 + ULTRAPOS/18 * 17) kind = 48;
                            else kind = 49;
                        }
                    }
                    else {
                        star = 3;
                        type = 2;
                        if (temp3 < 1 + ULTRAPOS/13) kind = 50;
                        else if (temp3 < 1 + ULTRAPOS/13 * 2) kind = 51;
                        else if (temp3 < 1 + ULTRAPOS/13 * 3) kind = 52;
                        else if (temp3 < 1 + ULTRAPOS/13 * 4) kind = 53;
                        else if (temp3 < 1 + ULTRAPOS/13 * 5) kind = 54;
                        else if (temp3 < 1 + ULTRAPOS/13 * 6) kind = 55;
                        else if (temp3 < 1 + ULTRAPOS/13 * 7) kind = 56;
                        else if (temp3 < 1 + ULTRAPOS/13 * 8) kind = 57;
                        else if (temp3 < 1 + ULTRAPOS/13 * 9) kind = 58;
                        else if (temp3 < 1 + ULTRAPOS/13 * 10) kind = 59;
                        else if (temp3 < 1 + ULTRAPOS/13 * 11) kind = 60;
                        else if (temp3 < 1 + ULTRAPOS/13 * 12) kind = 61;
                        else kind = 62;
                    }
                }
                else if (five_star_assurance_number < 1 + 73 && four_star_assurance_number >= 10) {
                    if (temp1 < 1 + ULTRAPOS/1000 * 6) {
                        star = 5;
                        five_count = five_count + 1;
                        ave_fives = ave_fives + five_star_assurance_number;
                        if (five_star_assurance_number > max_fives) { max_fives = five_star_assurance_number; max_fivesth = five_count; max_fivecount = count; }
                        if (five_star_assurance_number < min_fives) { min_fives = five_star_assurance_number; min_fivesth = five_count; min_fivecount = count; }
                        five_star_assurance_number = 0;
                        if (temp2 < 1 + ULTRAPOS/2) {
                            type = 1;
                            if (temp3 < 1 + ULTRAPOS/5) kind = 1;
                            else if (temp3 < 1 + ULTRAPOS/5 * 2) kind = 2;
                            else if (temp3 < 1 + ULTRAPOS/5 * 3) kind = 3;
                            else if (temp3 < 1 + ULTRAPOS/5 * 4) kind = 4;
                            else kind = 5;
                        }
                        else {
                            type = 2;
                            if (temp3 < 1 + ULTRAPOS/10) kind = 6;
                            else if (temp3 < 1 + ULTRAPOS/5) kind = 7;
                            else if (temp3 < 1 + ULTRAPOS/10 * 3) kind = 8;
                            else if (temp3 < 1 + ULTRAPOS/5 * 2) kind = 9;
                            else if (temp3 < 1 + ULTRAPOS/2) kind = 10;
                            else if (temp3 < 1 + ULTRAPOS/5 * 3) kind = 11;
                            else if (temp3 < 1 + ULTRAPOS/10 * 7) kind = 12;
                            else if (temp3 < 1 + ULTRAPOS/5 * 4) kind = 13;
                            else if (temp3 < 1 + ULTRAPOS/10 * 9) kind = 14;
                            else kind = 15;
                        }
                    }
                    else {
                        star = 4;
                        four_count = four_count + 1;
                        four_star_assurance_number = 0;
                        if (temp2 < 1 + ULTRAPOS/2 * (int)(10 * (unmet - threshold))) {
                            type = 1;
                            unmet_count = 0;
                            unmet = (double)17.1;
                            if (temp3 < 1 + ULTRAPOS/16) kind = 16;
                            else if (temp3 < 1 + ULTRAPOS/8) kind = 17;
                            else if (temp3 < 1 + ULTRAPOS/16 * 3) kind = 18;
                            else if (temp3 < 1 + ULTRAPOS/4) kind = 19;
                            else if (temp3 < 1 + ULTRAPOS/16 * 5) kind = 20;
                            else if (temp3 < 1 + ULTRAPOS/8 * 3) kind = 21;
                            else if (temp3 < 1 + ULTRAPOS/16 * 7) kind = 22;
                            else if (temp3 < 1 + ULTRAPOS/2) kind = 23;
                            else if (temp3 < 1 + ULTRAPOS/16 * 9) kind = 24;
                            else if (temp3 < 1 + ULTRAPOS/8 * 5) kind = 25;
                            else if (temp3 < 1 + ULTRAPOS/16 * 11) kind = 26;
                            else if (temp3 < 1 + ULTRAPOS/4 * 3) kind = 27;
                            else if (temp3 < 1 + ULTRAPOS/16 * 13) kind = 28;
                            else if (temp3 < 1 + ULTRAPOS/8 * 7) kind = 29;
                            else if (temp3 < 1 + ULTRAPOS/16 * 15) kind = 30;
                            else kind = 31;
                        }
                        else {
                            type = 2;
                            unmet_count = unmet_count + 1;
                            if (temp3 < 1 + ULTRAPOS/9 * 5) kind = 32;
                            else if (temp3 < 1 + ULTRAPOS/9) kind = 33;
                            else if (temp3 < 1 + ULTRAPOS/6) kind = 34;
                            else if (temp3 < 1 + ULTRAPOS/9 * 2) kind = 35;
                            else if (temp3 < 1 + ULTRAPOS/18 * 5) kind = 36;
                            else if (temp3 < 1 + ULTRAPOS/3) kind = 37;
                            else if (temp3 < 1 + ULTRAPOS/18 * 7) kind = 38;
                            else if (temp3 < 1 + ULTRAPOS/9 * 4) kind = 39;
                            else if (temp3 < 1 + ULTRAPOS/2) kind = 40;
                            else if (temp3 < 1 + ULTRAPOS/9 * 5) kind = 41;
                            else if (temp3 < 1 + ULTRAPOS/18 * 11) kind = 42;
                            else if (temp3 < 1 + ULTRAPOS/3 * 2) kind = 43;
                            else if (temp3 < 1 + ULTRAPOS/18 * 13) kind = 44;
                            else if (temp3 < 1 + ULTRAPOS/9 * 7) kind = 45;
                            else if (temp3 < 1 + ULTRAPOS/6 * 5) kind = 46;
                            else if (temp3 < 1 + ULTRAPOS/9 * 8) kind = 47;
                            else if (temp3 < 1 + ULTRAPOS/18 * 17) kind = 48;
                            else kind = 49;
                        }
                    }
                }
                else if (five_star_assurance_number < 1 + 89 && five_star_assurance_number >= 74 && four_star_assurance_number < 1 + 8) {
                    if (temp1 < 1 + ULTRAPOS/1000 * 6 + (five_star_assurance_number - 73) * ULTRAPOS/1000 * 60) {
                        star = 5;
                        five_count = five_count + 1;
                        ave_fives = ave_fives + five_star_assurance_number;
                        if (five_star_assurance_number > max_fives) { max_fives = five_star_assurance_number; max_fivesth = five_count; max_fivecount = count; }
                        if (five_star_assurance_number < min_fives) { min_fives = five_star_assurance_number; min_fivesth = five_count; min_fivecount = count; }
                        five_star_assurance_number = 0;
                        if (temp2 < 1 + ULTRAPOS/2) {
                            type = 1;
                            if (temp3 < 1 + ULTRAPOS/5) kind = 1;
                            else if (temp3 < 1 + ULTRAPOS/5 * 2) kind = 2;
                            else if (temp3 < 1 + ULTRAPOS/5 * 3) kind = 3;
                            else if (temp3 < 1 + ULTRAPOS/5 * 4) kind = 4;
                            else kind = 5;
                        }
                        else {
                            type = 2;
                            if (temp3 < 1 + ULTRAPOS/10) kind = 6;
                            else if (temp3 < 1 + ULTRAPOS/5) kind = 7;
                            else if (temp3 < 1 + ULTRAPOS/10 * 3) kind = 8;
                            else if (temp3 < 1 + ULTRAPOS/5 * 2) kind = 9;
                            else if (temp3 < 1 + ULTRAPOS/2) kind = 10;
                            else if (temp3 < 1 + ULTRAPOS/5 * 3) kind = 11;
                            else if (temp3 < 1 + ULTRAPOS/10 * 7) kind = 12;
                            else if (temp3 < 1 + ULTRAPOS/5 * 4) kind = 13;
                            else if (temp3 < 1 + ULTRAPOS/10 * 9) kind = 14;
                            else kind = 15;
                        }
                    }
                    else if (temp1 < 1 + ULTRAPOS/1000 * 57 + (five_star_assurance_number - 73) * ULTRAPOS/1000 * 60){
                        star = 4;
                        four_count = four_count + 1;
                        four_star_assurance_number = 0;
                        if (temp2 < 1 + ULTRAPOS/2 * (int)(10 * (unmet - threshold))) {
                            type = 1;
                            unmet_count = 0;
                            unmet = (double)17.1;
                            if (temp3 < 1 + ULTRAPOS/16) kind = 16;
                            else if (temp3 < 1 + ULTRAPOS/8) kind = 17;
                            else if (temp3 < 1 + ULTRAPOS/16 * 3) kind = 18;
                            else if (temp3 < 1 + ULTRAPOS/4) kind = 19;
                            else if (temp3 < 1 + ULTRAPOS/16 * 5) kind = 20;
                            else if (temp3 < 1 + ULTRAPOS/8 * 3) kind = 21;
                            else if (temp3 < 1 + ULTRAPOS/16 * 7) kind = 22;
                            else if (temp3 < 1 + ULTRAPOS/2) kind = 23;
                            else if (temp3 < 1 + ULTRAPOS/16 * 9) kind = 24;
                            else if (temp3 < 1 + ULTRAPOS/8 * 5) kind = 25;
                            else if (temp3 < 1 + ULTRAPOS/16 * 11) kind = 26;
                            else if (temp3 < 1 + ULTRAPOS/4 * 3) kind = 27;
                            else if (temp3 < 1 + ULTRAPOS/16 * 13) kind = 28;
                            else if (temp3 < 1 + ULTRAPOS/8 * 7) kind = 29;
                            else if (temp3 < 1 + ULTRAPOS/16 * 15) kind = 30;
                            else kind = 31;
                        }
                        else {
                            type = 2;
                            unmet_count = unmet_count + 1;
                            if (temp3 < 1 + ULTRAPOS/9 * 5) kind = 32;
                            else if (temp3 < 1 + ULTRAPOS/9) kind = 33;
                            else if (temp3 < 1 + ULTRAPOS/6) kind = 34;
                            else if (temp3 < 1 + ULTRAPOS/9 * 2) kind = 35;
                            else if (temp3 < 1 + ULTRAPOS/18 * 5) kind = 36;
                            else if (temp3 < 1 + ULTRAPOS/3) kind = 37;
                            else if (temp3 < 1 + ULTRAPOS/18 * 7) kind = 38;
                            else if (temp3 < 1 + ULTRAPOS/9 * 4) kind = 39;
                            else if (temp3 < 1 + ULTRAPOS/2) kind = 40;
                            else if (temp3 < 1 + ULTRAPOS/9 * 5) kind = 41;
                            else if (temp3 < 1 + ULTRAPOS/18 * 11) kind = 42;
                            else if (temp3 < 1 + ULTRAPOS/3 * 2) kind = 43;
                            else if (temp3 < 1 + ULTRAPOS/18 * 13) kind = 44;
                            else if (temp3 < 1 + ULTRAPOS/9 * 7) kind = 45;
                            else if (temp3 < 1 + ULTRAPOS/6 * 5) kind = 46;
                            else if (temp3 < 1 + ULTRAPOS/9 * 8) kind = 47;
                            else if (temp3 < 1 + ULTRAPOS/18 * 17) kind = 48;
                            else kind = 49;
                        }
                    }
                    else {
                        star = 3;
                        type = 2;
                        if (temp3 < 1 + ULTRAPOS/13) kind = 50;
                        else if (temp3 < 1 + ULTRAPOS/13 * 2) kind = 51;
                        else if (temp3 < 1 + ULTRAPOS/13 * 3) kind = 52;
                        else if (temp3 < 1 + ULTRAPOS/13 * 4) kind = 53;
                        else if (temp3 < 1 + ULTRAPOS/13 * 5) kind = 54;
                        else if (temp3 < 1 + ULTRAPOS/13 * 6) kind = 55;
                        else if (temp3 < 1 + ULTRAPOS/13 * 7) kind = 56;
                        else if (temp3 < 1 + ULTRAPOS/13 * 8) kind = 57;
                        else if (temp3 < 1 + ULTRAPOS/13 * 9) kind = 58;
                        else if (temp3 < 1 + ULTRAPOS/13 * 10) kind = 59;
                        else if (temp3 < 1 + ULTRAPOS/13 * 11) kind = 60;
                        else if (temp3 < 1 + ULTRAPOS/13 * 12) kind = 61;
                        else kind = 62;
                    }
                }
                else if (five_star_assurance_number < 1 + 89 && five_star_assurance_number >= 74 && four_star_assurance_number == 9) {
                    if (temp1 < 1 + ULTRAPOS/1000 * 6 + (five_star_assurance_number - 73) * ULTRAPOS/1000 * 60) {
                        star = 5;
                        five_count = five_count + 1;
                        ave_fives = ave_fives + five_star_assurance_number;
                        if (five_star_assurance_number > max_fives) { max_fives = five_star_assurance_number; max_fivesth = five_count; max_fivecount = count; }
                        if (five_star_assurance_number < min_fives) { min_fives = five_star_assurance_number; min_fivesth = five_count; min_fivecount = count; }
                        five_star_assurance_number = 0;
                        if (temp2 < 1 + ULTRAPOS/2) {
                            type = 1;
                            if (temp3 < 1 + ULTRAPOS/5) kind = 1;
                            else if (temp3 < 1 + ULTRAPOS/5 * 2) kind = 2;
                            else if (temp3 < 1 + ULTRAPOS/5 * 3) kind = 3;
                            else if (temp3 < 1 + ULTRAPOS/5 * 4) kind = 4;
                            else kind = 5;
                        }
                        else {
                            type = 2;
                            if (temp3 < 1 + ULTRAPOS/10) kind = 6;
                            else if (temp3 < 1 + ULTRAPOS/5) kind = 7;
                            else if (temp3 < 1 + ULTRAPOS/10 * 3) kind = 8;
                            else if (temp3 < 1 + ULTRAPOS/5 * 2) kind = 9;
                            else if (temp3 < 1 + ULTRAPOS/2) kind = 10;
                            else if (temp3 < 1 + ULTRAPOS/5 * 3) kind = 11;
                            else if (temp3 < 1 + ULTRAPOS/10 * 7) kind = 12;
                            else if (temp3 < 1 + ULTRAPOS/5 * 4) kind = 13;
                            else if (temp3 < 1 + ULTRAPOS/10 * 9) kind = 14;
                            else kind = 15;
                        }
                    }
                    else if (temp1 < 1 + ULTRAPOS/1000 * 567 + (five_star_assurance_number - 73) * ULTRAPOS/1000 * 60) {
                        star = 4;
                        four_count = four_count + 1;
                        four_star_assurance_number = 0;
                        if (temp2 < 1 + ULTRAPOS/2 * (int)(10 * (unmet - threshold))) {
                            type = 1;
                            unmet_count = 0;
                            unmet = (double)17.1;
                            if (temp3 < 1 + ULTRAPOS/16) kind = 16;
                            else if (temp3 < 1 + ULTRAPOS/8) kind = 17;
                            else if (temp3 < 1 + ULTRAPOS/16 * 3) kind = 18;
                            else if (temp3 < 1 + ULTRAPOS/4) kind = 19;
                            else if (temp3 < 1 + ULTRAPOS/16 * 5) kind = 20;
                            else if (temp3 < 1 + ULTRAPOS/8 * 3) kind = 21;
                            else if (temp3 < 1 + ULTRAPOS/16 * 7) kind = 22;
                            else if (temp3 < 1 + ULTRAPOS/2) kind = 23;
                            else if (temp3 < 1 + ULTRAPOS/16 * 9) kind = 24;
                            else if (temp3 < 1 + ULTRAPOS/8 * 5) kind = 25;
                            else if (temp3 < 1 + ULTRAPOS/16 * 11) kind = 26;
                            else if (temp3 < 1 + ULTRAPOS/4 * 3) kind = 27;
                            else if (temp3 < 1 + ULTRAPOS/16 * 13) kind = 28;
                            else if (temp3 < 1 + ULTRAPOS/8 * 7) kind = 29;
                            else if (temp3 < 1 + ULTRAPOS/16 * 15) kind = 30;
                            else kind = 31;
                        }
                        else {
                            type = 2;
                            unmet_count = unmet_count + 1;
                            if (temp3 < 1 + ULTRAPOS/9 * 5) kind = 32;
                            else if (temp3 < 1 + ULTRAPOS/9) kind = 33;
                            else if (temp3 < 1 + ULTRAPOS/6) kind = 34;
                            else if (temp3 < 1 + ULTRAPOS/9 * 2) kind = 35;
                            else if (temp3 < 1 + ULTRAPOS/18 * 5) kind = 36;
                            else if (temp3 < 1 + ULTRAPOS/3) kind = 37;
                            else if (temp3 < 1 + ULTRAPOS/18 * 7) kind = 38;
                            else if (temp3 < 1 + ULTRAPOS/9 * 4) kind = 39;
                            else if (temp3 < 1 + ULTRAPOS/2) kind = 40;
                            else if (temp3 < 1 + ULTRAPOS/9 * 5) kind = 41;
                            else if (temp3 < 1 + ULTRAPOS/18 * 11) kind = 42;
                            else if (temp3 < 1 + ULTRAPOS/3 * 2) kind = 43;
                            else if (temp3 < 1 + ULTRAPOS/18 * 13) kind = 44;
                            else if (temp3 < 1 + ULTRAPOS/9 * 7) kind = 45;
                            else if (temp3 < 1 + ULTRAPOS/6 * 5) kind = 46;
                            else if (temp3 < 1 + ULTRAPOS/9 * 8) kind = 47;
                            else if (temp3 < 1 + ULTRAPOS/18 * 17) kind = 48;
                            else kind = 49;
                        }
                    }
                    else {
                        star = 3;
                        type = 2;
                        if (temp3 < 1 + ULTRAPOS/13) kind = 50;
                        else if (temp3 < 1 + ULTRAPOS/13 * 2) kind = 51;
                        else if (temp3 < 1 + ULTRAPOS/13 * 3) kind = 52;
                        else if (temp3 < 1 + ULTRAPOS/13 * 4) kind = 53;
                        else if (temp3 < 1 + ULTRAPOS/13 * 5) kind = 54;
                        else if (temp3 < 1 + ULTRAPOS/13 * 6) kind = 55;
                        else if (temp3 < 1 + ULTRAPOS/13 * 7) kind = 56;
                        else if (temp3 < 1 + ULTRAPOS/13 * 8) kind = 57;
                        else if (temp3 < 1 + ULTRAPOS/13 * 9) kind = 58;
                        else if (temp3 < 1 + ULTRAPOS/13 * 10) kind = 59;
                        else if (temp3 < 1 + ULTRAPOS/13 * 11) kind = 60;
                        else if (temp3 < 1 + ULTRAPOS/13 * 12) kind = 61;
                        else kind = 62;
                    }
                }
                else if (five_star_assurance_number < 1 + 89 && five_star_assurance_number >= 74 && four_star_assurance_number >= 10) {
                    if (temp1 < 1 + ULTRAPOS/1000 * 6 + (five_star_assurance_number - 73) * ULTRAPOS/1000 * 60) {
                        star = 5;
                        five_count = five_count + 1;
                        ave_fives = ave_fives + five_star_assurance_number;
                        if (five_star_assurance_number > max_fives) { max_fives = five_star_assurance_number; max_fivesth = five_count; max_fivecount = count; }
                        if (five_star_assurance_number < min_fives) { min_fives = five_star_assurance_number; min_fivesth = five_count; min_fivecount = count; }
                        five_star_assurance_number = 0;
                        if (temp2 < 1 + ULTRAPOS/2) {
                            type = 1;
                            if (temp3 < 1 + ULTRAPOS/5) kind = 1;
                            else if (temp3 < 1 + ULTRAPOS/5 * 2) kind = 2;
                            else if (temp3 < 1 + ULTRAPOS/5 * 3) kind = 3;
                            else if (temp3 < 1 + ULTRAPOS/5 * 4) kind = 4;
                            else kind = 5;
                        }
                        else {
                            type = 2;
                            if (temp3 < 1 + ULTRAPOS/10) kind = 6;
                            else if (temp3 < 1 + ULTRAPOS/5) kind = 7;
                            else if (temp3 < 1 + ULTRAPOS/10 * 3) kind = 8;
                            else if (temp3 < 1 + ULTRAPOS/5 * 2) kind = 9;
                            else if (temp3 < 1 + ULTRAPOS/2) kind = 10;
                            else if (temp3 < 1 + ULTRAPOS/5 * 3) kind = 11;
                            else if (temp3 < 1 + ULTRAPOS/10 * 7) kind = 12;
                            else if (temp3 < 1 + ULTRAPOS/5 * 4) kind = 13;
                            else if (temp3 < 1 + ULTRAPOS/10 * 9) kind = 14;
                            else kind = 15;
                        }
                    }
                    else {
                        star = 4;
                        four_count = four_count + 1;
                        four_star_assurance_number = 0;
                        if (temp2 < 1 + ULTRAPOS/2 * (int)(10 * (unmet - threshold))) {
                            type = 1;
                            unmet_count = 0;
                            unmet = (double)17.1;
                            if (temp3 < 1 + ULTRAPOS/16) kind = 16;
                            else if (temp3 < 1 + ULTRAPOS/8) kind = 17;
                            else if (temp3 < 1 + ULTRAPOS/16 * 3) kind = 18;
                            else if (temp3 < 1 + ULTRAPOS/4) kind = 19;
                            else if (temp3 < 1 + ULTRAPOS/16 * 5) kind = 20;
                            else if (temp3 < 1 + ULTRAPOS/8 * 3) kind = 21;
                            else if (temp3 < 1 + ULTRAPOS/16 * 7) kind = 22;
                            else if (temp3 < 1 + ULTRAPOS/2) kind = 23;
                            else if (temp3 < 1 + ULTRAPOS/16 * 9) kind = 24;
                            else if (temp3 < 1 + ULTRAPOS/8 * 5) kind = 25;
                            else if (temp3 < 1 + ULTRAPOS/16 * 11) kind = 26;
                            else if (temp3 < 1 + ULTRAPOS/4 * 3) kind = 27;
                            else if (temp3 < 1 + ULTRAPOS/16 * 13) kind = 28;
                            else if (temp3 < 1 + ULTRAPOS/8 * 7) kind = 29;
                            else if (temp3 < 1 + ULTRAPOS/16 * 15) kind = 30;
                            else kind = 31;
                        }
                        else {
                            type = 2;
                            unmet_count = unmet_count + 1;
                            if (temp3 < 1 + ULTRAPOS/9 * 5) kind = 32;
                            else if (temp3 < 1 + ULTRAPOS/9) kind = 33;
                            else if (temp3 < 1 + ULTRAPOS/6) kind = 34;
                            else if (temp3 < 1 + ULTRAPOS/9 * 2) kind = 35;
                            else if (temp3 < 1 + ULTRAPOS/18 * 5) kind = 36;
                            else if (temp3 < 1 + ULTRAPOS/3) kind = 37;
                            else if (temp3 < 1 + ULTRAPOS/18 * 7) kind = 38;
                            else if (temp3 < 1 + ULTRAPOS/9 * 4) kind = 39;
                            else if (temp3 < 1 + ULTRAPOS/2) kind = 40;
                            else if (temp3 < 1 + ULTRAPOS/9 * 5) kind = 41;
                            else if (temp3 < 1 + ULTRAPOS/18 * 11) kind = 42;
                            else if (temp3 < 1 + ULTRAPOS/3 * 2) kind = 43;
                            else if (temp3 < 1 + ULTRAPOS/18 * 13) kind = 44;
                            else if (temp3 < 1 + ULTRAPOS/9 * 7) kind = 45;
                            else if (temp3 < 1 + ULTRAPOS/6 * 5) kind = 46;
                            else if (temp3 < 1 + ULTRAPOS/9 * 8) kind = 47;
                            else if (temp3 < 1 + ULTRAPOS/18 * 17) kind = 48;
                            else kind = 49;
                        }
                    }
                }
                else {
                        star = 5;
                        five_count = five_count + 1;
                        ave_fives = ave_fives + five_star_assurance_number;
                        if (five_star_assurance_number > max_fives) { max_fives = five_star_assurance_number; max_fivesth = five_count; max_fivecount = count; }
                        if (five_star_assurance_number < min_fives) { min_fives = five_star_assurance_number; min_fivesth = five_count; min_fivecount = count; }
                        five_star_assurance_number = 0;
                        if (temp2 < 1 + ULTRAPOS/2) {
                            type = 1;
                            if (temp3 < 1 + ULTRAPOS/5) kind = 1;
                            else if (temp3 < 1 + ULTRAPOS/5 * 2) kind = 2;
                            else if (temp3 < 1 + ULTRAPOS/5 * 3) kind = 3;
                            else if (temp3 < 1 + ULTRAPOS/5 * 4) kind = 4;
                            else kind = 5;
                        }
                        else {
                            type = 2;
                            if (temp3 < 1 + ULTRAPOS/10) kind = 6;
                            else if (temp3 < 1 + ULTRAPOS/5) kind = 7;
                            else if (temp3 < 1 + ULTRAPOS/10 * 3) kind = 8;
                            else if (temp3 < 1 + ULTRAPOS/5 * 2) kind = 9;
                            else if (temp3 < 1 + ULTRAPOS/2) kind = 10;
                            else if (temp3 < 1 + ULTRAPOS/5 * 3) kind = 11;
                            else if (temp3 < 1 + ULTRAPOS/10 * 7) kind = 12;
                            else if (temp3 < 1 + ULTRAPOS/5 * 4) kind = 13;
                            else if (temp3 < 1 + ULTRAPOS/10 * 9) kind = 14;
                            else kind = 15;
                        }
                }
                std::cout << count + 1 << "(" << five_star_assurance_number << ")" << " ";
                switch (kind) {
                case 1: { std::cout << "!!!!!*****Keqing" << endl; pcount[0]++; } break;
                case 2: { std::cout << "!!!!!*****Mona" << endl; pcount[1]++; } break;
                case 3: { std::cout << "!!!!!*****Qiqi" << endl; pcount[2]++; } break;
                case 4: { std::cout << "!!!!!*****Diluc" << endl; pcount[3]++; } break;
                case 5: { std::cout << "!!!!!*****Jean" << endl; pcount[4]++; } break;
                case 6: { std::cout << "!!!!!*****Amos' Bow" << endl; pcount[5]++; } break;
                case 7: { std::cout << "!!!!!*****Skyward Harp" << endl; pcount[6]++; } break;
                case 8: { std::cout << "!!!!!*****Lost Prayer to the Sacred Winds" << endl; pcount[7]++; } break;
                case 9: { std::cout << "!!!!!*****Skyward Atlas" << endl; pcount[8]++; } break;
                case 10: { std::cout << "!!!!!*****Primordial Jade Winged-Spear" << endl; pcount[9]++; } break;
                case 11: { std::cout << "!!!!!*****Skyward Spine" << endl; pcount[10]++; } break;
                case 12: { std::cout << "!!!!!*****Wolf's Gravestone" << endl; pcount[11]++; } break;
                case 13: { std::cout << "!!!!!*****Skyward Pride" << endl; pcount[12]++; } break;
                case 14: { std::cout << "!!!!!*****Skyward Blade" << endl; pcount[13]++; } break;
                case 15: { std::cout << "!!!!!*****Aquila Favonia" << endl; pcount[14]++; } break;
                case 16: { std::cout << "!!****Rosaria" << endl; pcount[15]++; } break;
                case 17: { std::cout << "!!****Xinyan" << endl; pcount[16]++; } break;
                case 18: { std::cout << "!!****Sucrose" << endl; pcount[17]++; } break;
                case 19: { std::cout << "!!****Diona" << endl; pcount[18]++; } break;
                case 20: { std::cout << "!!****Chongyun" << endl; pcount[19]++; } break;
                case 21: { std::cout << "!!****Noelle" << endl; pcount[20]++; } break;
                case 22: { std::cout << "!!****Bennett" << endl; pcount[21]++; } break;
                case 23: { std::cout << "!!****Fischl" << endl; pcount[22]++; } break;
                case 24: { std::cout << "!!****Ningguang" << endl; pcount[23]++; } break;
                case 25: { std::cout << "!!****Xingqiu" << endl; pcount[24]++; } break;
                case 26: { std::cout << "!!****Beidou" << endl; pcount[25]++; } break;
                case 27: { std::cout << "!!****Xiangling" << endl; pcount[26]++; } break;
                case 28: { std::cout << "!!****Amber" << endl; pcount[27]++; } break;
                case 29: { std::cout << "!!****Razor" << endl; pcount[28]++; } break;
                case 30: { std::cout << "!!****Kaeya" << endl; pcount[29]++; } break;
                case 31: { std::cout << "!!****Barbara" << endl; pcount[30]++; } break;
                case 32: { std::cout << "!!****Lisa" << endl; pcount[31]++; } break;
                case 33: { std::cout << "!!****Rust" << endl; pcount[32]++; } break;
                case 34: { std::cout << "!!****Sacrificial Bow" << endl; pcount[33]++; } break;
                case 35: { std::cout << "!!****The Stringless" << endl; pcount[34]++; } break;
                case 36: { std::cout << "!!****Favonius Warbow" << endl; pcount[35]++; } break;
                case 37: { std::cout << "!!****Eye of Perception" << endl; pcount[36]++; } break;
                case 38: { std::cout << "!!****Sacrificial Fragments" << endl; pcount[37]++; } break;
                case 39: { std::cout << "!!****The Widsith" << endl; pcount[38]++; } break;
                case 40: { std::cout << "!!****Favonius Codex" << endl; pcount[39]++; } break;
                case 41: { std::cout << "!!****Favonius Lance" << endl; pcount[40]++; } break;
                case 42: { std::cout << "!!****Dragon's Bane" << endl; pcount[41]++; } break;
                case 43: { std::cout << "!!****Rainslasher" << endl; pcount[42]++; } break;
                case 44: { std::cout << "!!****Sacrificial Greatsword" << endl; pcount[43]++; } break;
                case 45: { std::cout << "!!****The Bell" << endl; pcount[44]++; } break;
                case 46: { std::cout << "!!****Favonius Greatsword" << endl; pcount[45]++; } break;
                case 47: { std::cout << "!!****Lion's Roar" << endl; pcount[46]++; } break;
                case 48: { std::cout << "!!****Sacrificial Sword" << endl; pcount[47]++; } break;
                case 49: { std::cout << "!!****The Flute" << endl; pcount[48]++; } break;
                case 50: { std::cout << "!!****Favonius Sword" << endl; pcount[49]++; } break;
                case 51: { std::cout << "***Slingshot" << endl; pcount[50]++; } break;
                case 52: { std::cout << "***Sharpshooter's Oath" << endl; pcount[51]++; } break;
                case 53: { std::cout << "***Raven Bow" << endl; pcount[52]++; } break;
                case 54: { std::cout << "***Emerald Orb" << endl; pcount[53]++; } break;
                case 55: { std::cout << "***Thrilling Tales of Dragon Slayers" << endl; pcount[54]++; } break;
                case 56: { std::cout << "***Magic Guide" << endl; pcount[55]++; } break;
                case 57: { std::cout << "***Black Tassel" << endl; pcount[56]++; } break;
                case 58: { std::cout << "***Debate Club" << endl; pcount[57]++; } break;
                case 59: { std::cout << "***Bloodtainted Greatsword" << endl; pcount[58]++; } break;
                case 60: { std::cout << "***Ferrous Shadow" << endl; pcount[59]++; } break;
                case 61: { std::cout << "***Skyrider Sword" << endl; pcount[60]++; } break;
                case 62: { std::cout << "***Harbinger of Dawn" << endl; pcount[61]++; } break;
                case 63: { std::cout << "***Cool Steel" << endl; pcount[62]++; } break;
                case 64: { std::cout << "!!!!!*****Venti" << endl; pcount[63]++; } break;
                case 65: { std::cout << "!!!!!*****Klee" << endl; pcount[64]++; } break;
                case 66: { std::cout << "!!!!!*****Tartaglia" << endl; pcount[65]++; } break;
                case 67: { std::cout << "!!!!!*****Zhongli" << endl; pcount[66]++; } break;
                case 68: { std::cout << "!!!!!*****Albedo" << endl; pcount[67]++; } break;
                case 69: { std::cout << "!!!!!*****Ganyu" << endl; pcount[68]++; } break;
                case 70: { std::cout << "!!!!!*****Xiao" << endl; pcount[69]++; } break;
                case 71: { std::cout << "!!!!!*****Hu Tao" << endl; pcount[70]++; } break;
                case 72: { std::cout << "!!****Yanfei" << endl; pcount[71]++; } break;
                case 73: { std::cout << "!!****Eula" << endl; pcount[72]++; } break;
                case 74: { std::cout << "!!!!!*****Memory of Dust" << endl; pcount[73]++; } break;
                case 75: { std::cout << "!!!!!*****Vortex Vanquisher" << endl; pcount[74]++; } break;
                case 76: { std::cout << "!!!!!*****The Unforged" << endl; pcount[75]++; } break;
                case 77: { std::cout << "!!!!!*****Summit Shaper" << endl; pcount[76]++; } break;
                case 78: { std::cout << "!!!!!*****Primordial Jade Cutter" << endl; pcount[77]++; } break;
                case 79: { std::cout << "!!!!!*****Staff of Homa" << endl; pcount[78]++; } break;
                case 80: { std::cout << "!!****Lithic Blade" << endl; pcount[79]++; } break;
                case 81: { std::cout << "!!****Lithic Spear" << endl; pcount[80]++; } break;
                case 82: { std::cout << "!!!!!*****Elegy of the End" << endl; pcount[81]++; } break;
                case 83: { std::cout << "!!****The Alley Flash" << endl; pcount[82]++; } break;
                case 84: { std::cout << "!!****Wine and Song" << endl; pcount[83]++; } break;
                case 85: { std::cout << "!!****Alley Hunter" << endl; pcount[84]++; } break;
                case 86: { std::cout << "Placeholder" << endl; pcount[85]++; } break;
                case 87: { std::cout << "Placeholder" << endl; pcount[86]++; } break;
                case 88: { std::cout << "Placeholder" << endl; pcount[87]++; } break;
                case 89: { std::cout << "Placeholder" << endl; pcount[88]++; } break;
                case 90: { std::cout << "Placeholder" << endl; pcount[89]++; } break;
                case 91: { std::cout << "Placeholder" << endl; pcount[90]++; } break;
                case 92: { std::cout << "Placeholder" << endl; pcount[91]++; } break;
                case 93: { std::cout << "Placeholder" << endl; pcount[92]++; } break;
                case 94: { std::cout << "Placeholder" << endl; pcount[93]++; } break;
                case 95: { std::cout << "Placeholder" << endl; pcount[94]++; } break;
                case 96: { std::cout << "Placeholder" << endl; pcount[95]++; } break;
                case 97: { std::cout << "Placeholder" << endl; pcount[96]++; } break;
                case 98: { std::cout << "Placeholder" << endl; pcount[97]++; } break;
                case 99: { std::cout << "Placeholder" << endl; pcount[98]++; } break;
                case 100: { std::cout << "Placeholder" << endl; pcount[99]++; } break;
                case 101: { std::cout << "Placeholder" << endl; pcount[100]++; } break;
                case 102: { std::cout << "Placeholder" << endl; pcount[101]++; } break;
                case 103: { std::cout << "Placeholder" << endl; pcount[102]++; } break;
                case 104: { std::cout << "Placeholder" << endl; pcount[103]++; } break;
                case 105: { std::cout << "Placeholder" << endl; pcount[104]++; } break;
                case 106: { std::cout << "Placeholder" << endl; pcount[105]++; } break;
                case 107: { std::cout << "Placeholder" << endl; pcount[106]++; } break;
                case 108: { std::cout << "Placeholder" << endl; pcount[107]++; } break;
                case 109: { std::cout << "Placeholder" << endl; pcount[108]++; } break;
                case 110: { std::cout << "Placeholder" << endl; pcount[109]++; } break;
                case 111: { std::cout << "Placeholder" << endl; pcount[110]++; } break;
                case 112: { std::cout << "Placeholder" << endl; pcount[111]++; } break;
                case 113: { std::cout << "Placeholder" << endl; pcount[112]++; } break;
                case 114: { std::cout << "Placeholder" << endl; pcount[113]++; } break;
                case 115: { std::cout << "Placeholder" << endl; pcount[114]++; } break;
                case 116: { std::cout << "Placeholder" << endl; pcount[115]++; } break;
                case 117: { std::cout << "Placeholder" << endl; pcount[116]++; } break;
                case 118: { std::cout << "Placeholder" << endl; pcount[117]++; } break;
                case 119: { std::cout << "Placeholder" << endl; pcount[118]++; } break;
                case 120: { std::cout << "Placeholder" << endl; pcount[119]++; } break;
                case 121: { std::cout << "Placeholder" << endl; pcount[120]++; } break;
                case 122: { std::cout << "Placeholder" << endl; pcount[121]++; } break;
                case 123: { std::cout << "Placeholder" << endl; pcount[122]++; } break;
                case 124: { std::cout << "Placeholder" << endl; pcount[123]++; } break;
                case 125: { std::cout << "Placeholder" << endl; pcount[124]++; } break;
                case 126: { std::cout << "Placeholder" << endl; pcount[125]++; } break;
                case 127: { std::cout << "Placeholder" << endl; pcount[126]++; } break;
                case 128: { std::cout << "Placeholder" << endl; pcount[127]++; } break;
                }
                wishes_number = wishes_number - 1;
                count = count + 1;
                five_star_assurance_number = five_star_assurance_number + 1;
                four_star_assurance_number = four_star_assurance_number + 1;
            }
        }
        if (chosen_banner == 3 && chosen_event == 3) {
            while (wishes_number > 0) {
                long long int temp1 = generator() % ULTRAPOS + 1;
                long long int temp2 = generator() % ULTRAPOS + 1;
                long long int temp3 = generator() % ULTRAPOS + 1;
                int star = 0; //4-star or 5-star
                int type = 0; //Up or non-up, character or weapon
                int kind = 0; //which exactly
                if (unmet_count > threshold) unmet = (double)unmet_count;
                if (five_star_assurance_number < 1 + 73 && four_star_assurance_number < 1 + 8) {
                    if (temp1 < 1 + ULTRAPOS/1000 * 6) {
                        star = 5;
                        five_count = five_count + 1;
                        ave_fives = ave_fives + five_star_assurance_number;
                        if (five_star_assurance_number > max_fives) { max_fives = five_star_assurance_number; max_fivesth = five_count; max_fivecount = count; }
                        if (five_star_assurance_number < min_fives) { min_fives = five_star_assurance_number; min_fivesth = five_count; min_fivecount = count; }
                        five_star_assurance_number = 0;
                        if (temp2 < 1 + ULTRAPOS/2) {
                            type = 1;
                            if (temp3 < 1 + ULTRAPOS/5) kind = 1;
                            else if (temp3 < 1 + ULTRAPOS/5 * 2) kind = 2;
                            else if (temp3 < 1 + ULTRAPOS/5 * 3) kind = 3;
                            else if (temp3 < 1 + ULTRAPOS/5 * 4) kind = 4;
                            else kind = 5;
                        }
                        else {
                            type = 2;
                            if (temp3 < 1 + ULTRAPOS/10) kind = 6;
                            else if (temp3 < 1 + ULTRAPOS/5) kind = 7;
                            else if (temp3 < 1 + ULTRAPOS/10 * 3) kind = 8;
                            else if (temp3 < 1 + ULTRAPOS/5 * 2) kind = 9;
                            else if (temp3 < 1 + ULTRAPOS/2) kind = 10;
                            else if (temp3 < 1 + ULTRAPOS/5 * 3) kind = 11;
                            else if (temp3 < 1 + ULTRAPOS/10 * 7) kind = 12;
                            else if (temp3 < 1 + ULTRAPOS/5 * 4) kind = 13;
                            else if (temp3 < 1 + ULTRAPOS/10 * 9) kind = 14;
                            else kind = 15;
                        }
                    }
                    else if (temp1 < 1 + ULTRAPOS/1000 * 57) {
                        star = 4;
                        four_count = four_count + 1;
                        four_star_assurance_number = 0;
                        if (temp2 < 1 + ULTRAPOS/2 * (int)(10 * (unmet - threshold))) {
                            type = 1;
                            unmet_count = 0;
                            unmet = (double)17.1;
                            if (temp3 < 1 + ULTRAPOS/17) kind = 16;
                            else if (temp3 < 1 + ULTRAPOS/17 * 2) kind = 17;
                            else if (temp3 < 1 + ULTRAPOS/17 * 3) kind = 18;
                            else if (temp3 < 1 + ULTRAPOS/17 * 4) kind = 19;
                            else if (temp3 < 1 + ULTRAPOS/17 * 5) kind = 20;
                            else if (temp3 < 1 + ULTRAPOS/17 * 6) kind = 21;
                            else if (temp3 < 1 + ULTRAPOS/17 * 7) kind = 22;
                            else if (temp3 < 1 + ULTRAPOS/17 * 8) kind = 23;
                            else if (temp3 < 1 + ULTRAPOS/17 * 9) kind = 24;
                            else if (temp3 < 1 + ULTRAPOS/17 * 10) kind = 25;
                            else if (temp3 < 1 + ULTRAPOS/17 * 11) kind = 26;
                            else if (temp3 < 1 + ULTRAPOS/17 * 12) kind = 27;
                            else if (temp3 < 1 + ULTRAPOS/17 * 13) kind = 28;
                            else if (temp3 < 1 + ULTRAPOS/17 * 14) kind = 29;
                            else if (temp3 < 1 + ULTRAPOS/17 * 15) kind = 30;
                            else if (temp3 < 1 + ULTRAPOS/17 * 16) kind = 31;
                            else kind = 32;
                        }
                        else {
                            type = 2;
                            unmet_count = unmet_count + 1;
                            if (temp3 < 1 + ULTRAPOS/9 * 5) kind = 33;
                            else if (temp3 < 1 + ULTRAPOS/9) kind = 34;
                            else if (temp3 < 1 + ULTRAPOS/6) kind = 35;
                            else if (temp3 < 1 + ULTRAPOS/9 * 2) kind = 36;
                            else if (temp3 < 1 + ULTRAPOS/18 * 5) kind = 37;
                            else if (temp3 < 1 + ULTRAPOS/3) kind = 38;
                            else if (temp3 < 1 + ULTRAPOS/18 * 7) kind = 39;
                            else if (temp3 < 1 + ULTRAPOS/9 * 4) kind = 40;
                            else if (temp3 < 1 + ULTRAPOS/2) kind = 41;
                            else if (temp3 < 1 + ULTRAPOS/9 * 5) kind = 42;
                            else if (temp3 < 1 + ULTRAPOS/18 * 11) kind = 43;
                            else if (temp3 < 1 + ULTRAPOS/3 * 2) kind = 44;
                            else if (temp3 < 1 + ULTRAPOS/18 * 13) kind = 45;
                            else if (temp3 < 1 + ULTRAPOS/9 * 7) kind = 46;
                            else if (temp3 < 1 + ULTRAPOS/6 * 5) kind = 47;
                            else if (temp3 < 1 + ULTRAPOS/9 * 8) kind = 48;
                            else if (temp3 < 1 + ULTRAPOS/18 * 17) kind = 49;
                            else kind = 50;
                        }
                    }
                    else {
                        star = 3;
                        type = 2;
                        if (temp3 < 1 + ULTRAPOS/13) kind = 51;
                        else if (temp3 < 1 + ULTRAPOS/13 * 2) kind = 52;
                        else if (temp3 < 1 + ULTRAPOS/13 * 3) kind = 53;
                        else if (temp3 < 1 + ULTRAPOS/13 * 4) kind = 54;
                        else if (temp3 < 1 + ULTRAPOS/13 * 5) kind = 55;
                        else if (temp3 < 1 + ULTRAPOS/13 * 6) kind = 56;
                        else if (temp3 < 1 + ULTRAPOS/13 * 7) kind = 57;
                        else if (temp3 < 1 + ULTRAPOS/13 * 8) kind = 58;
                        else if (temp3 < 1 + ULTRAPOS/13 * 9) kind = 59;
                        else if (temp3 < 1 + ULTRAPOS/13 * 10) kind = 60;
                        else if (temp3 < 1 + ULTRAPOS/13 * 11) kind = 61;
                        else if (temp3 < 1 + ULTRAPOS/13 * 12) kind = 62;
                        else kind = 63;
                    }
                }
                else if (five_star_assurance_number < 1 + 73 && four_star_assurance_number == 9) {
                    if (temp1 < 1 + ULTRAPOS/1000 * 6) {
                        star = 5;
                        five_count = five_count + 1;
                        ave_fives = ave_fives + five_star_assurance_number;
                        if (five_star_assurance_number > max_fives) { max_fives = five_star_assurance_number; max_fivesth = five_count; max_fivecount = count; }
                        if (five_star_assurance_number < min_fives) { min_fives = five_star_assurance_number; min_fivesth = five_count; min_fivecount = count; }
                        five_star_assurance_number = 0;
                        if (temp2 < 1 + ULTRAPOS/2) {
                            type = 1;
                            if (temp3 < 1 + ULTRAPOS/5) kind = 1;
                            else if (temp3 < 1 + ULTRAPOS/5 * 2) kind = 2;
                            else if (temp3 < 1 + ULTRAPOS/5 * 3) kind = 3;
                            else if (temp3 < 1 + ULTRAPOS/5 * 4) kind = 4;
                            else kind = 5;
                        }
                        else {
                            type = 2;
                            if (temp3 < 1 + ULTRAPOS/10) kind = 6;
                            else if (temp3 < 1 + ULTRAPOS/5) kind = 7;
                            else if (temp3 < 1 + ULTRAPOS/10 * 3) kind = 8;
                            else if (temp3 < 1 + ULTRAPOS/5 * 2) kind = 9;
                            else if (temp3 < 1 + ULTRAPOS/2) kind = 10;
                            else if (temp3 < 1 + ULTRAPOS/5 * 3) kind = 11;
                            else if (temp3 < 1 + ULTRAPOS/10 * 7) kind = 12;
                            else if (temp3 < 1 + ULTRAPOS/5 * 4) kind = 13;
                            else if (temp3 < 1 + ULTRAPOS/10 * 9) kind = 14;
                            else kind = 15;
                        }
                    }
                    else if (temp1 < 1 + ULTRAPOS/1000 * 567) {
                        star = 4;
                        four_count = four_count + 1;
                        four_star_assurance_number = 0;
                        if (temp2 < 1 + ULTRAPOS/2 * (int)(10 * (unmet - threshold))) {
                            type = 1;
                            unmet_count = 0;
                            unmet = (double)17.1;
                            if (temp3 < 1 + ULTRAPOS/17) kind = 16;
                            else if (temp3 < 1 + ULTRAPOS/17 * 2) kind = 17;
                            else if (temp3 < 1 + ULTRAPOS/17 * 3) kind = 18;
                            else if (temp3 < 1 + ULTRAPOS/17 * 4) kind = 19;
                            else if (temp3 < 1 + ULTRAPOS/17 * 5) kind = 20;
                            else if (temp3 < 1 + ULTRAPOS/17 * 6) kind = 21;
                            else if (temp3 < 1 + ULTRAPOS/17 * 7) kind = 22;
                            else if (temp3 < 1 + ULTRAPOS/17 * 8) kind = 23;
                            else if (temp3 < 1 + ULTRAPOS/17 * 9) kind = 24;
                            else if (temp3 < 1 + ULTRAPOS/17 * 10) kind = 25;
                            else if (temp3 < 1 + ULTRAPOS/17 * 11) kind = 26;
                            else if (temp3 < 1 + ULTRAPOS/17 * 12) kind = 27;
                            else if (temp3 < 1 + ULTRAPOS/17 * 13) kind = 28;
                            else if (temp3 < 1 + ULTRAPOS/17 * 14) kind = 29;
                            else if (temp3 < 1 + ULTRAPOS/17 * 15) kind = 30;
                            else if (temp3 < 1 + ULTRAPOS/17 * 16) kind = 31;
                            else kind = 32;
                        }
                        else {
                            type = 2;
                            unmet_count = unmet_count + 1;
                            if (temp3 < 1 + ULTRAPOS/9 * 5) kind = 33;
                            else if (temp3 < 1 + ULTRAPOS/9) kind = 34;
                            else if (temp3 < 1 + ULTRAPOS/6) kind = 35;
                            else if (temp3 < 1 + ULTRAPOS/9 * 2) kind = 36;
                            else if (temp3 < 1 + ULTRAPOS/18 * 5) kind = 37;
                            else if (temp3 < 1 + ULTRAPOS/3) kind = 38;
                            else if (temp3 < 1 + ULTRAPOS/18 * 7) kind = 39;
                            else if (temp3 < 1 + ULTRAPOS/9 * 4) kind = 40;
                            else if (temp3 < 1 + ULTRAPOS/2) kind = 41;
                            else if (temp3 < 1 + ULTRAPOS/9 * 5) kind = 42;
                            else if (temp3 < 1 + ULTRAPOS/18 * 11) kind = 43;
                            else if (temp3 < 1 + ULTRAPOS/3 * 2) kind = 44;
                            else if (temp3 < 1 + ULTRAPOS/18 * 13) kind = 45;
                            else if (temp3 < 1 + ULTRAPOS/9 * 7) kind = 46;
                            else if (temp3 < 1 + ULTRAPOS/6 * 5) kind = 47;
                            else if (temp3 < 1 + ULTRAPOS/9 * 8) kind = 48;
                            else if (temp3 < 1 + ULTRAPOS/18 * 17) kind = 49;
                            else kind = 50;
                        }
                    }
                    else {
                        star = 3;
                        type = 2;
                        if (temp3 < 1 + ULTRAPOS/13) kind = 51;
                        else if (temp3 < 1 + ULTRAPOS/13 * 2) kind = 52;
                        else if (temp3 < 1 + ULTRAPOS/13 * 3) kind = 53;
                        else if (temp3 < 1 + ULTRAPOS/13 * 4) kind = 54;
                        else if (temp3 < 1 + ULTRAPOS/13 * 5) kind = 55;
                        else if (temp3 < 1 + ULTRAPOS/13 * 6) kind = 56;
                        else if (temp3 < 1 + ULTRAPOS/13 * 7) kind = 57;
                        else if (temp3 < 1 + ULTRAPOS/13 * 8) kind = 58;
                        else if (temp3 < 1 + ULTRAPOS/13 * 9) kind = 59;
                        else if (temp3 < 1 + ULTRAPOS/13 * 10) kind = 60;
                        else if (temp3 < 1 + ULTRAPOS/13 * 11) kind = 61;
                        else if (temp3 < 1 + ULTRAPOS/13 * 12) kind = 62;
                        else kind = 63;
                    }
                }
                else if (five_star_assurance_number < 1 + 73 && four_star_assurance_number >= 10) {
                    if (temp1 < 1 + ULTRAPOS/1000 * 6) {
                        star = 5;
                        five_count = five_count + 1;
                        ave_fives = ave_fives + five_star_assurance_number;
                        if (five_star_assurance_number > max_fives) { max_fives = five_star_assurance_number; max_fivesth = five_count; max_fivecount = count; }
                        if (five_star_assurance_number < min_fives) { min_fives = five_star_assurance_number; min_fivesth = five_count; min_fivecount = count; }
                        five_star_assurance_number = 0;
                        if (temp2 < 1 + ULTRAPOS/2) {
                            type = 1;
                            if (temp3 < 1 + ULTRAPOS/5) kind = 1;
                            else if (temp3 < 1 + ULTRAPOS/5 * 2) kind = 2;
                            else if (temp3 < 1 + ULTRAPOS/5 * 3) kind = 3;
                            else if (temp3 < 1 + ULTRAPOS/5 * 4) kind = 4;
                            else kind = 5;
                        }
                        else {
                            type = 2;
                            if (temp3 < 1 + ULTRAPOS/10) kind = 6;
                            else if (temp3 < 1 + ULTRAPOS/5) kind = 7;
                            else if (temp3 < 1 + ULTRAPOS/10 * 3) kind = 8;
                            else if (temp3 < 1 + ULTRAPOS/5 * 2) kind = 9;
                            else if (temp3 < 1 + ULTRAPOS/2) kind = 10;
                            else if (temp3 < 1 + ULTRAPOS/5 * 3) kind = 11;
                            else if (temp3 < 1 + ULTRAPOS/10 * 7) kind = 12;
                            else if (temp3 < 1 + ULTRAPOS/5 * 4) kind = 13;
                            else if (temp3 < 1 + ULTRAPOS/10 * 9) kind = 14;
                            else kind = 15;
                        }
                    }
                    else {
                        star = 4;
                        four_count = four_count + 1;
                        four_star_assurance_number = 0;
                        if (temp2 < 1 + ULTRAPOS/2 * (int)(10 * (unmet - threshold))) {
                            type = 1;
                            unmet_count = 0;
                            unmet = (double)17.1;
                            if (temp3 < 1 + ULTRAPOS/17) kind = 16;
                            else if (temp3 < 1 + ULTRAPOS/17 * 2) kind = 17;
                            else if (temp3 < 1 + ULTRAPOS/17 * 3) kind = 18;
                            else if (temp3 < 1 + ULTRAPOS/17 * 4) kind = 19;
                            else if (temp3 < 1 + ULTRAPOS/17 * 5) kind = 20;
                            else if (temp3 < 1 + ULTRAPOS/17 * 6) kind = 21;
                            else if (temp3 < 1 + ULTRAPOS/17 * 7) kind = 22;
                            else if (temp3 < 1 + ULTRAPOS/17 * 8) kind = 23;
                            else if (temp3 < 1 + ULTRAPOS/17 * 9) kind = 24;
                            else if (temp3 < 1 + ULTRAPOS/17 * 10) kind = 25;
                            else if (temp3 < 1 + ULTRAPOS/17 * 11) kind = 26;
                            else if (temp3 < 1 + ULTRAPOS/17 * 12) kind = 27;
                            else if (temp3 < 1 + ULTRAPOS/17 * 13) kind = 28;
                            else if (temp3 < 1 + ULTRAPOS/17 * 14) kind = 29;
                            else if (temp3 < 1 + ULTRAPOS/17 * 15) kind = 30;
                            else if (temp3 < 1 + ULTRAPOS/17 * 16) kind = 31;
                            else kind = 32;
                        }
                        else {
                            type = 2;
                            unmet_count = unmet_count + 1;
                            if (temp3 < 1 + ULTRAPOS/9 * 5) kind = 33;
                            else if (temp3 < 1 + ULTRAPOS/9) kind = 34;
                            else if (temp3 < 1 + ULTRAPOS/6) kind = 35;
                            else if (temp3 < 1 + ULTRAPOS/9 * 2) kind = 36;
                            else if (temp3 < 1 + ULTRAPOS/18 * 5) kind = 37;
                            else if (temp3 < 1 + ULTRAPOS/3) kind = 38;
                            else if (temp3 < 1 + ULTRAPOS/18 * 7) kind = 39;
                            else if (temp3 < 1 + ULTRAPOS/9 * 4) kind = 40;
                            else if (temp3 < 1 + ULTRAPOS/2) kind = 41;
                            else if (temp3 < 1 + ULTRAPOS/9 * 5) kind = 42;
                            else if (temp3 < 1 + ULTRAPOS/18 * 11) kind = 43;
                            else if (temp3 < 1 + ULTRAPOS/3 * 2) kind = 44;
                            else if (temp3 < 1 + ULTRAPOS/18 * 13) kind = 45;
                            else if (temp3 < 1 + ULTRAPOS/9 * 7) kind = 46;
                            else if (temp3 < 1 + ULTRAPOS/6 * 5) kind = 47;
                            else if (temp3 < 1 + ULTRAPOS/9 * 8) kind = 48;
                            else if (temp3 < 1 + ULTRAPOS/18 * 17) kind = 49;
                            else kind = 50;
                        }
                    }
                }
                else if (five_star_assurance_number < 1 + 89 && five_star_assurance_number >= 74 && four_star_assurance_number < 1 + 8) {
                    if (temp1 < 1 + ULTRAPOS/1000 * 6 + (five_star_assurance_number - 73) * ULTRAPOS/1000 * 60) {
                        star = 5;
                        five_count = five_count + 1;
                        ave_fives = ave_fives + five_star_assurance_number;
                        if (five_star_assurance_number > max_fives) { max_fives = five_star_assurance_number; max_fivesth = five_count; max_fivecount = count; }
                        if (five_star_assurance_number < min_fives) { min_fives = five_star_assurance_number; min_fivesth = five_count; min_fivecount = count; }
                        five_star_assurance_number = 0;
                        if (temp2 < 1 + ULTRAPOS/2) {
                            type = 1;
                            if (temp3 < 1 + ULTRAPOS/5) kind = 1;
                            else if (temp3 < 1 + ULTRAPOS/5 * 2) kind = 2;
                            else if (temp3 < 1 + ULTRAPOS/5 * 3) kind = 3;
                            else if (temp3 < 1 + ULTRAPOS/5 * 4) kind = 4;
                            else kind = 5;
                        }
                        else {
                            type = 2;
                            if (temp3 < 1 + ULTRAPOS/10) kind = 6;
                            else if (temp3 < 1 + ULTRAPOS/5) kind = 7;
                            else if (temp3 < 1 + ULTRAPOS/10 * 3) kind = 8;
                            else if (temp3 < 1 + ULTRAPOS/5 * 2) kind = 9;
                            else if (temp3 < 1 + ULTRAPOS/2) kind = 10;
                            else if (temp3 < 1 + ULTRAPOS/5 * 3) kind = 11;
                            else if (temp3 < 1 + ULTRAPOS/10 * 7) kind = 12;
                            else if (temp3 < 1 + ULTRAPOS/5 * 4) kind = 13;
                            else if (temp3 < 1 + ULTRAPOS/10 * 9) kind = 14;
                            else kind = 15;
                        }
                    }
                    else if (temp1 < 1 + ULTRAPOS/1000 * 57 + (five_star_assurance_number - 73) * ULTRAPOS/1000 * 60){
                        star = 4;
                        four_count = four_count + 1;
                        four_star_assurance_number = 0;
                        if (temp2 < 1 + ULTRAPOS/2 * (int)(10 * (unmet - threshold))) {
                            type = 1;
                            unmet_count = 0;
                            unmet = (double)17.1;
                            if (temp3 < 1 + ULTRAPOS/17) kind = 16;
                            else if (temp3 < 1 + ULTRAPOS/17 * 2) kind = 17;
                            else if (temp3 < 1 + ULTRAPOS/17 * 3) kind = 18;
                            else if (temp3 < 1 + ULTRAPOS/17 * 4) kind = 19;
                            else if (temp3 < 1 + ULTRAPOS/17 * 5) kind = 20;
                            else if (temp3 < 1 + ULTRAPOS/17 * 6) kind = 21;
                            else if (temp3 < 1 + ULTRAPOS/17 * 7) kind = 22;
                            else if (temp3 < 1 + ULTRAPOS/17 * 8) kind = 23;
                            else if (temp3 < 1 + ULTRAPOS/17 * 9) kind = 24;
                            else if (temp3 < 1 + ULTRAPOS/17 * 10) kind = 25;
                            else if (temp3 < 1 + ULTRAPOS/17 * 11) kind = 26;
                            else if (temp3 < 1 + ULTRAPOS/17 * 12) kind = 27;
                            else if (temp3 < 1 + ULTRAPOS/17 * 13) kind = 28;
                            else if (temp3 < 1 + ULTRAPOS/17 * 14) kind = 29;
                            else if (temp3 < 1 + ULTRAPOS/17 * 15) kind = 30;
                            else if (temp3 < 1 + ULTRAPOS/17 * 16) kind = 31;
                            else kind = 32;
                        }
                        else {
                            type = 2;
                            unmet_count = unmet_count + 1;
                            if (temp3 < 1 + ULTRAPOS/9 * 5) kind = 33;
                            else if (temp3 < 1 + ULTRAPOS/9) kind = 34;
                            else if (temp3 < 1 + ULTRAPOS/6) kind = 35;
                            else if (temp3 < 1 + ULTRAPOS/9 * 2) kind = 36;
                            else if (temp3 < 1 + ULTRAPOS/18 * 5) kind = 37;
                            else if (temp3 < 1 + ULTRAPOS/3) kind = 38;
                            else if (temp3 < 1 + ULTRAPOS/18 * 7) kind = 39;
                            else if (temp3 < 1 + ULTRAPOS/9 * 4) kind = 40;
                            else if (temp3 < 1 + ULTRAPOS/2) kind = 41;
                            else if (temp3 < 1 + ULTRAPOS/9 * 5) kind = 42;
                            else if (temp3 < 1 + ULTRAPOS/18 * 11) kind = 43;
                            else if (temp3 < 1 + ULTRAPOS/3 * 2) kind = 44;
                            else if (temp3 < 1 + ULTRAPOS/18 * 13) kind = 45;
                            else if (temp3 < 1 + ULTRAPOS/9 * 7) kind = 46;
                            else if (temp3 < 1 + ULTRAPOS/6 * 5) kind = 47;
                            else if (temp3 < 1 + ULTRAPOS/9 * 8) kind = 48;
                            else if (temp3 < 1 + ULTRAPOS/18 * 17) kind = 49;
                            else kind = 50;
                        }
                    }
                    else {
                        star = 3;
                        type = 2;
                        if (temp3 < 1 + ULTRAPOS/13) kind = 51;
                        else if (temp3 < 1 + ULTRAPOS/13 * 2) kind = 52;
                        else if (temp3 < 1 + ULTRAPOS/13 * 3) kind = 53;
                        else if (temp3 < 1 + ULTRAPOS/13 * 4) kind = 54;
                        else if (temp3 < 1 + ULTRAPOS/13 * 5) kind = 55;
                        else if (temp3 < 1 + ULTRAPOS/13 * 6) kind = 56;
                        else if (temp3 < 1 + ULTRAPOS/13 * 7) kind = 57;
                        else if (temp3 < 1 + ULTRAPOS/13 * 8) kind = 58;
                        else if (temp3 < 1 + ULTRAPOS/13 * 9) kind = 59;
                        else if (temp3 < 1 + ULTRAPOS/13 * 10) kind = 60;
                        else if (temp3 < 1 + ULTRAPOS/13 * 11) kind = 61;
                        else if (temp3 < 1 + ULTRAPOS/13 * 12) kind = 62;
                        else kind = 63;
                    }
                }
                else if (five_star_assurance_number < 1 + 89 && five_star_assurance_number >= 74 && four_star_assurance_number == 9) {
                    if (temp1 < 1 + ULTRAPOS/1000 * 6 + (five_star_assurance_number - 73) * ULTRAPOS/1000 * 60) {
                        star = 5;
                        five_count = five_count + 1;
                        ave_fives = ave_fives + five_star_assurance_number;
                        if (five_star_assurance_number > max_fives) { max_fives = five_star_assurance_number; max_fivesth = five_count; max_fivecount = count; }
                        if (five_star_assurance_number < min_fives) { min_fives = five_star_assurance_number; min_fivesth = five_count; min_fivecount = count; }
                        five_star_assurance_number = 0;
                        if (temp2 < 1 + ULTRAPOS/2) {
                            type = 1;
                            if (temp3 < 1 + ULTRAPOS/5) kind = 1;
                            else if (temp3 < 1 + ULTRAPOS/5 * 2) kind = 2;
                            else if (temp3 < 1 + ULTRAPOS/5 * 3) kind = 3;
                            else if (temp3 < 1 + ULTRAPOS/5 * 4) kind = 4;
                            else kind = 5;
                        }
                        else {
                            type = 2;
                            if (temp3 < 1 + ULTRAPOS/10) kind = 6;
                            else if (temp3 < 1 + ULTRAPOS/5) kind = 7;
                            else if (temp3 < 1 + ULTRAPOS/10 * 3) kind = 8;
                            else if (temp3 < 1 + ULTRAPOS/5 * 2) kind = 9;
                            else if (temp3 < 1 + ULTRAPOS/2) kind = 10;
                            else if (temp3 < 1 + ULTRAPOS/5 * 3) kind = 11;
                            else if (temp3 < 1 + ULTRAPOS/10 * 7) kind = 12;
                            else if (temp3 < 1 + ULTRAPOS/5 * 4) kind = 13;
                            else if (temp3 < 1 + ULTRAPOS/10 * 9) kind = 14;
                            else kind = 15;
                        }
                    }
                    else if (temp1 < 1 + ULTRAPOS/1000 * 567 + (five_star_assurance_number - 73) * ULTRAPOS/1000 * 60) {
                        star = 4;
                        four_count = four_count + 1;
                        four_star_assurance_number = 0;
                        if (temp2 < 1 + ULTRAPOS/2 * (int)(10 * (unmet - threshold))) {
                            type = 1;
                            unmet_count = 0;
                            unmet = (double)17.1;
                            if (temp3 < 1 + ULTRAPOS/17) kind = 16;
                            else if (temp3 < 1 + ULTRAPOS/17 * 2) kind = 17;
                            else if (temp3 < 1 + ULTRAPOS/17 * 3) kind = 18;
                            else if (temp3 < 1 + ULTRAPOS/17 * 4) kind = 19;
                            else if (temp3 < 1 + ULTRAPOS/17 * 5) kind = 20;
                            else if (temp3 < 1 + ULTRAPOS/17 * 6) kind = 21;
                            else if (temp3 < 1 + ULTRAPOS/17 * 7) kind = 22;
                            else if (temp3 < 1 + ULTRAPOS/17 * 8) kind = 23;
                            else if (temp3 < 1 + ULTRAPOS/17 * 9) kind = 24;
                            else if (temp3 < 1 + ULTRAPOS/17 * 10) kind = 25;
                            else if (temp3 < 1 + ULTRAPOS/17 * 11) kind = 26;
                            else if (temp3 < 1 + ULTRAPOS/17 * 12) kind = 27;
                            else if (temp3 < 1 + ULTRAPOS/17 * 13) kind = 28;
                            else if (temp3 < 1 + ULTRAPOS/17 * 14) kind = 29;
                            else if (temp3 < 1 + ULTRAPOS/17 * 15) kind = 30;
                            else if (temp3 < 1 + ULTRAPOS/17 * 16) kind = 31;
                            else kind = 32;
                        }
                        else {
                            type = 2;
                            unmet_count = unmet_count + 1;
                            if (temp3 < 1 + ULTRAPOS/9 * 5) kind = 33;
                            else if (temp3 < 1 + ULTRAPOS/9) kind = 34;
                            else if (temp3 < 1 + ULTRAPOS/6) kind = 35;
                            else if (temp3 < 1 + ULTRAPOS/9 * 2) kind = 36;
                            else if (temp3 < 1 + ULTRAPOS/18 * 5) kind = 37;
                            else if (temp3 < 1 + ULTRAPOS/3) kind = 38;
                            else if (temp3 < 1 + ULTRAPOS/18 * 7) kind = 39;
                            else if (temp3 < 1 + ULTRAPOS/9 * 4) kind = 40;
                            else if (temp3 < 1 + ULTRAPOS/2) kind = 41;
                            else if (temp3 < 1 + ULTRAPOS/9 * 5) kind = 42;
                            else if (temp3 < 1 + ULTRAPOS/18 * 11) kind = 43;
                            else if (temp3 < 1 + ULTRAPOS/3 * 2) kind = 44;
                            else if (temp3 < 1 + ULTRAPOS/18 * 13) kind = 45;
                            else if (temp3 < 1 + ULTRAPOS/9 * 7) kind = 46;
                            else if (temp3 < 1 + ULTRAPOS/6 * 5) kind = 47;
                            else if (temp3 < 1 + ULTRAPOS/9 * 8) kind = 48;
                            else if (temp3 < 1 + ULTRAPOS/18 * 17) kind = 49;
                            else kind = 50;
                        }
                    }
                    else {
                        star = 3;
                        type = 2;
                        if (temp3 < 1 + ULTRAPOS/13) kind = 51;
                        else if (temp3 < 1 + ULTRAPOS/13 * 2) kind = 52;
                        else if (temp3 < 1 + ULTRAPOS/13 * 3) kind = 53;
                        else if (temp3 < 1 + ULTRAPOS/13 * 4) kind = 54;
                        else if (temp3 < 1 + ULTRAPOS/13 * 5) kind = 55;
                        else if (temp3 < 1 + ULTRAPOS/13 * 6) kind = 56;
                        else if (temp3 < 1 + ULTRAPOS/13 * 7) kind = 57;
                        else if (temp3 < 1 + ULTRAPOS/13 * 8) kind = 58;
                        else if (temp3 < 1 + ULTRAPOS/13 * 9) kind = 59;
                        else if (temp3 < 1 + ULTRAPOS/13 * 10) kind = 60;
                        else if (temp3 < 1 + ULTRAPOS/13 * 11) kind = 61;
                        else if (temp3 < 1 + ULTRAPOS/13 * 12) kind = 62;
                        else kind = 63;
                    }
                }
                else if (five_star_assurance_number < 1 + 89 && five_star_assurance_number >= 74 && four_star_assurance_number >= 10) {
                    if (temp1 < 1 + ULTRAPOS/1000 * 6 + (five_star_assurance_number - 73) * ULTRAPOS/1000 * 60) {
                        star = 5;
                        five_count = five_count + 1;
                        ave_fives = ave_fives + five_star_assurance_number;
                        if (five_star_assurance_number > max_fives) { max_fives = five_star_assurance_number; max_fivesth = five_count; max_fivecount = count; }
                        if (five_star_assurance_number < min_fives) { min_fives = five_star_assurance_number; min_fivesth = five_count; min_fivecount = count; }
                        five_star_assurance_number = 0;
                        if (temp2 < 1 + ULTRAPOS/2) {
                            type = 1;
                            if (temp3 < 1 + ULTRAPOS/5) kind = 1;
                            else if (temp3 < 1 + ULTRAPOS/5 * 2) kind = 2;
                            else if (temp3 < 1 + ULTRAPOS/5 * 3) kind = 3;
                            else if (temp3 < 1 + ULTRAPOS/5 * 4) kind = 4;
                            else kind = 5;
                        }
                        else {
                            type = 2;
                            if (temp3 < 1 + ULTRAPOS/10) kind = 6;
                            else if (temp3 < 1 + ULTRAPOS/5) kind = 7;
                            else if (temp3 < 1 + ULTRAPOS/10 * 3) kind = 8;
                            else if (temp3 < 1 + ULTRAPOS/5 * 2) kind = 9;
                            else if (temp3 < 1 + ULTRAPOS/2) kind = 10;
                            else if (temp3 < 1 + ULTRAPOS/5 * 3) kind = 11;
                            else if (temp3 < 1 + ULTRAPOS/10 * 7) kind = 12;
                            else if (temp3 < 1 + ULTRAPOS/5 * 4) kind = 13;
                            else if (temp3 < 1 + ULTRAPOS/10 * 9) kind = 14;
                            else kind = 15;
                        }
                    }
                    else {
                        star = 4;
                        four_count = four_count + 1;
                        four_star_assurance_number = 0;
                        if (temp2 < 1 + ULTRAPOS/2 * (int)(10 * (unmet - threshold))) {
                            type = 1;
                            unmet_count = 0;
                            unmet = (double)17.1;
                            if (temp3 < 1 + ULTRAPOS/17) kind = 16;
                            else if (temp3 < 1 + ULTRAPOS/17 * 2) kind = 17;
                            else if (temp3 < 1 + ULTRAPOS/17 * 3) kind = 18;
                            else if (temp3 < 1 + ULTRAPOS/17 * 4) kind = 19;
                            else if (temp3 < 1 + ULTRAPOS/17 * 5) kind = 20;
                            else if (temp3 < 1 + ULTRAPOS/17 * 6) kind = 21;
                            else if (temp3 < 1 + ULTRAPOS/17 * 7) kind = 22;
                            else if (temp3 < 1 + ULTRAPOS/17 * 8) kind = 23;
                            else if (temp3 < 1 + ULTRAPOS/17 * 9) kind = 24;
                            else if (temp3 < 1 + ULTRAPOS/17 * 10) kind = 25;
                            else if (temp3 < 1 + ULTRAPOS/17 * 11) kind = 26;
                            else if (temp3 < 1 + ULTRAPOS/17 * 12) kind = 27;
                            else if (temp3 < 1 + ULTRAPOS/17 * 13) kind = 28;
                            else if (temp3 < 1 + ULTRAPOS/17 * 14) kind = 29;
                            else if (temp3 < 1 + ULTRAPOS/17 * 15) kind = 30;
                            else if (temp3 < 1 + ULTRAPOS/17 * 16) kind = 31;
                            else kind = 32;
                        }
                        else {
                            type = 2;
                            unmet_count = unmet_count + 1;
                            if (temp3 < 1 + ULTRAPOS/9 * 5) kind = 33;
                            else if (temp3 < 1 + ULTRAPOS/9) kind = 34;
                            else if (temp3 < 1 + ULTRAPOS/6) kind = 35;
                            else if (temp3 < 1 + ULTRAPOS/9 * 2) kind = 36;
                            else if (temp3 < 1 + ULTRAPOS/18 * 5) kind = 37;
                            else if (temp3 < 1 + ULTRAPOS/3) kind = 38;
                            else if (temp3 < 1 + ULTRAPOS/18 * 7) kind = 39;
                            else if (temp3 < 1 + ULTRAPOS/9 * 4) kind = 40;
                            else if (temp3 < 1 + ULTRAPOS/2) kind = 41;
                            else if (temp3 < 1 + ULTRAPOS/9 * 5) kind = 42;
                            else if (temp3 < 1 + ULTRAPOS/18 * 11) kind = 43;
                            else if (temp3 < 1 + ULTRAPOS/3 * 2) kind = 44;
                            else if (temp3 < 1 + ULTRAPOS/18 * 13) kind = 45;
                            else if (temp3 < 1 + ULTRAPOS/9 * 7) kind = 46;
                            else if (temp3 < 1 + ULTRAPOS/6 * 5) kind = 47;
                            else if (temp3 < 1 + ULTRAPOS/9 * 8) kind = 48;
                            else if (temp3 < 1 + ULTRAPOS/18 * 17) kind = 49;
                            else kind = 50;
                        }
                    }
                }
                else {
                        star = 5;
                        five_count = five_count + 1;
                        ave_fives = ave_fives + five_star_assurance_number;
                        if (five_star_assurance_number > max_fives) { max_fives = five_star_assurance_number; max_fivesth = five_count; max_fivecount = count; }
                        if (five_star_assurance_number < min_fives) { min_fives = five_star_assurance_number; min_fivesth = five_count; min_fivecount = count; }
                        five_star_assurance_number = 0;
                        if (temp2 < 1 + ULTRAPOS/2) {
                            type = 1;
                            if (temp3 < 1 + ULTRAPOS/5) kind = 1;
                            else if (temp3 < 1 + ULTRAPOS/5 * 2) kind = 2;
                            else if (temp3 < 1 + ULTRAPOS/5 * 3) kind = 3;
                            else if (temp3 < 1 + ULTRAPOS/5 * 4) kind = 4;
                            else kind = 5;
                        }
                        else {
                            type = 2;
                            if (temp3 < 1 + ULTRAPOS/10) kind = 6;
                            else if (temp3 < 1 + ULTRAPOS/5) kind = 7;
                            else if (temp3 < 1 + ULTRAPOS/10 * 3) kind = 8;
                            else if (temp3 < 1 + ULTRAPOS/5 * 2) kind = 9;
                            else if (temp3 < 1 + ULTRAPOS/2) kind = 10;
                            else if (temp3 < 1 + ULTRAPOS/5 * 3) kind = 11;
                            else if (temp3 < 1 + ULTRAPOS/10 * 7) kind = 12;
                            else if (temp3 < 1 + ULTRAPOS/5 * 4) kind = 13;
                            else if (temp3 < 1 + ULTRAPOS/10 * 9) kind = 14;
                            else kind = 15;
                        }
                }
                std::cout << count + 1 << "(" << five_star_assurance_number << ")" << " ";
                switch (kind) {
                case 1: { std::cout << "!!!!!*****Keqing" << endl; pcount[0]++; } break;
                case 2: { std::cout << "!!!!!*****Mona" << endl; pcount[1]++; } break;
                case 3: { std::cout << "!!!!!*****Qiqi" << endl; pcount[2]++; } break;
                case 4: { std::cout << "!!!!!*****Diluc" << endl; pcount[3]++; } break;
                case 5: { std::cout << "!!!!!*****Jean" << endl; pcount[4]++; } break;
                case 6: { std::cout << "!!!!!*****Amos' Bow" << endl; pcount[5]++; } break;
                case 7: { std::cout << "!!!!!*****Skyward Harp" << endl; pcount[6]++; } break;
                case 8: { std::cout << "!!!!!*****Lost Prayer to the Sacred Winds" << endl; pcount[7]++; } break;
                case 9: { std::cout << "!!!!!*****Skyward Atlas" << endl; pcount[8]++; } break;
                case 10: { std::cout << "!!!!!*****Primordial Jade Winged-Spear" << endl; pcount[9]++; } break;
                case 11: { std::cout << "!!!!!*****Skyward Spine" << endl; pcount[10]++; } break;
                case 12: { std::cout << "!!!!!*****Wolf's Gravestone" << endl; pcount[11]++; } break;
                case 13: { std::cout << "!!!!!*****Skyward Pride" << endl; pcount[12]++; } break;
                case 14: { std::cout << "!!!!!*****Skyward Blade" << endl; pcount[13]++; } break;
                case 15: { std::cout << "!!!!!*****Aquila Favonia" << endl; pcount[14]++; } break;
                case 16: { std::cout << "!!****Rosaria" << endl; pcount[15]++; } break;
                case 17: { std::cout << "!!****Xinyan" << endl; pcount[16]++; } break;
                case 18: { std::cout << "!!****Sucrose" << endl; pcount[17]++; } break;
                case 19: { std::cout << "!!****Diona" << endl; pcount[18]++; } break;
                case 20: { std::cout << "!!****Chongyun" << endl; pcount[19]++; } break;
                case 21: { std::cout << "!!****Noelle" << endl; pcount[20]++; } break;
                case 22: { std::cout << "!!****Bennett" << endl; pcount[21]++; } break;
                case 23: { std::cout << "!!****Fischl" << endl; pcount[22]++; } break;
                case 24: { std::cout << "!!****Ningguang" << endl; pcount[23]++; } break;
                case 25: { std::cout << "!!****Xingqiu" << endl; pcount[24]++; } break;
                case 26: { std::cout << "!!****Beidou" << endl; pcount[25]++; } break;
                case 27: { std::cout << "!!****Xiangling" << endl; pcount[26]++; } break;
                case 28: { std::cout << "!!****Amber" << endl; pcount[27]++; } break;
                case 29: { std::cout << "!!****Razor" << endl; pcount[28]++; } break;
                case 30: { std::cout << "!!****Kaeya" << endl; pcount[29]++; } break;
                case 31: { std::cout << "!!****Barbara" << endl; pcount[30]++; } break;
                case 32: { std::cout << "!!****Lisa" << endl; pcount[31]++; } break;
                case 33: { std::cout << "!!****Rust" << endl; pcount[32]++; } break;
                case 34: { std::cout << "!!****Sacrificial Bow" << endl; pcount[33]++; } break;
                case 35: { std::cout << "!!****The Stringless" << endl; pcount[34]++; } break;
                case 36: { std::cout << "!!****Favonius Warbow" << endl; pcount[35]++; } break;
                case 37: { std::cout << "!!****Eye of Perception" << endl; pcount[36]++; } break;
                case 38: { std::cout << "!!****Sacrificial Fragments" << endl; pcount[37]++; } break;
                case 39: { std::cout << "!!****The Widsith" << endl; pcount[38]++; } break;
                case 40: { std::cout << "!!****Favonius Codex" << endl; pcount[39]++; } break;
                case 41: { std::cout << "!!****Favonius Lance" << endl; pcount[40]++; } break;
                case 42: { std::cout << "!!****Dragon's Bane" << endl; pcount[41]++; } break;
                case 43: { std::cout << "!!****Rainslasher" << endl; pcount[42]++; } break;
                case 44: { std::cout << "!!****Sacrificial Greatsword" << endl; pcount[43]++; } break;
                case 45: { std::cout << "!!****The Bell" << endl; pcount[44]++; } break;
                case 46: { std::cout << "!!****Favonius Greatsword" << endl; pcount[45]++; } break;
                case 47: { std::cout << "!!****Lion's Roar" << endl; pcount[46]++; } break;
                case 48: { std::cout << "!!****Sacrificial Sword" << endl; pcount[47]++; } break;
                case 49: { std::cout << "!!****The Flute" << endl; pcount[48]++; } break;
                case 50: { std::cout << "!!****Favonius Sword" << endl; pcount[49]++; } break;
                case 51: { std::cout << "***Slingshot" << endl; pcount[50]++; } break;
                case 52: { std::cout << "***Sharpshooter's Oath" << endl; pcount[51]++; } break;
                case 53: { std::cout << "***Raven Bow" << endl; pcount[52]++; } break;
                case 54: { std::cout << "***Emerald Orb" << endl; pcount[53]++; } break;
                case 55: { std::cout << "***Thrilling Tales of Dragon Slayers" << endl; pcount[54]++; } break;
                case 56: { std::cout << "***Magic Guide" << endl; pcount[55]++; } break;
                case 57: { std::cout << "***Black Tassel" << endl; pcount[56]++; } break;
                case 58: { std::cout << "***Debate Club" << endl; pcount[57]++; } break;
                case 59: { std::cout << "***Bloodtainted Greatsword" << endl; pcount[58]++; } break;
                case 60: { std::cout << "***Ferrous Shadow" << endl; pcount[59]++; } break;
                case 61: { std::cout << "***Skyrider Sword" << endl; pcount[60]++; } break;
                case 62: { std::cout << "***Harbinger of Dawn" << endl; pcount[61]++; } break;
                case 63: { std::cout << "***Cool Steel" << endl; pcount[62]++; } break;
                case 64: { std::cout << "!!!!!*****Venti" << endl; pcount[63]++; } break;
                case 65: { std::cout << "!!!!!*****Klee" << endl; pcount[64]++; } break;
                case 66: { std::cout << "!!!!!*****Tartaglia" << endl; pcount[65]++; } break;
                case 67: { std::cout << "!!!!!*****Zhongli" << endl; pcount[66]++; } break;
                case 68: { std::cout << "!!!!!*****Albedo" << endl; pcount[67]++; } break;
                case 69: { std::cout << "!!!!!*****Ganyu" << endl; pcount[68]++; } break;
                case 70: { std::cout << "!!!!!*****Xiao" << endl; pcount[69]++; } break;
                case 71: { std::cout << "!!!!!*****Hu Tao" << endl; pcount[70]++; } break;
                case 72: { std::cout << "!!****Yanfei" << endl; pcount[71]++; } break;
                case 73: { std::cout << "!!****Eula" << endl; pcount[72]++; } break;
                case 74: { std::cout << "!!!!!*****Memory of Dust" << endl; pcount[73]++; } break;
                case 75: { std::cout << "!!!!!*****Vortex Vanquisher" << endl; pcount[74]++; } break;
                case 76: { std::cout << "!!!!!*****The Unforged" << endl; pcount[75]++; } break;
                case 77: { std::cout << "!!!!!*****Summit Shaper" << endl; pcount[76]++; } break;
                case 78: { std::cout << "!!!!!*****Primordial Jade Cutter" << endl; pcount[77]++; } break;
                case 79: { std::cout << "!!!!!*****Staff of Homa" << endl; pcount[78]++; } break;
                case 80: { std::cout << "!!****Lithic Blade" << endl; pcount[79]++; } break;
                case 81: { std::cout << "!!****Lithic Spear" << endl; pcount[80]++; } break;
                case 82: { std::cout << "!!!!!*****Elegy of the End" << endl; pcount[81]++; } break;
                case 83: { std::cout << "!!****The Alley Flash" << endl; pcount[82]++; } break;
                case 84: { std::cout << "!!****Wine and Song" << endl; pcount[83]++; } break;
                case 85: { std::cout << "!!****Alley Hunter" << endl; pcount[84]++; } break;
                case 86: { std::cout << "Placeholder" << endl; pcount[85]++; } break;
                case 87: { std::cout << "Placeholder" << endl; pcount[86]++; } break;
                case 88: { std::cout << "Placeholder" << endl; pcount[87]++; } break;
                case 89: { std::cout << "Placeholder" << endl; pcount[88]++; } break;
                case 90: { std::cout << "Placeholder" << endl; pcount[89]++; } break;
                case 91: { std::cout << "Placeholder" << endl; pcount[90]++; } break;
                case 92: { std::cout << "Placeholder" << endl; pcount[91]++; } break;
                case 93: { std::cout << "Placeholder" << endl; pcount[92]++; } break;
                case 94: { std::cout << "Placeholder" << endl; pcount[93]++; } break;
                case 95: { std::cout << "Placeholder" << endl; pcount[94]++; } break;
                case 96: { std::cout << "Placeholder" << endl; pcount[95]++; } break;
                case 97: { std::cout << "Placeholder" << endl; pcount[96]++; } break;
                case 98: { std::cout << "Placeholder" << endl; pcount[97]++; } break;
                case 99: { std::cout << "Placeholder" << endl; pcount[98]++; } break;
                case 100: { std::cout << "Placeholder" << endl; pcount[99]++; } break;
                case 101: { std::cout << "Placeholder" << endl; pcount[100]++; } break;
                case 102: { std::cout << "Placeholder" << endl; pcount[101]++; } break;
                case 103: { std::cout << "Placeholder" << endl; pcount[102]++; } break;
                case 104: { std::cout << "Placeholder" << endl; pcount[103]++; } break;
                case 105: { std::cout << "Placeholder" << endl; pcount[104]++; } break;
                case 106: { std::cout << "Placeholder" << endl; pcount[105]++; } break;
                case 107: { std::cout << "Placeholder" << endl; pcount[106]++; } break;
                case 108: { std::cout << "Placeholder" << endl; pcount[107]++; } break;
                case 109: { std::cout << "Placeholder" << endl; pcount[108]++; } break;
                case 110: { std::cout << "Placeholder" << endl; pcount[109]++; } break;
                case 111: { std::cout << "Placeholder" << endl; pcount[110]++; } break;
                case 112: { std::cout << "Placeholder" << endl; pcount[111]++; } break;
                case 113: { std::cout << "Placeholder" << endl; pcount[112]++; } break;
                case 114: { std::cout << "Placeholder" << endl; pcount[113]++; } break;
                case 115: { std::cout << "Placeholder" << endl; pcount[114]++; } break;
                case 116: { std::cout << "Placeholder" << endl; pcount[115]++; } break;
                case 117: { std::cout << "Placeholder" << endl; pcount[116]++; } break;
                case 118: { std::cout << "Placeholder" << endl; pcount[117]++; } break;
                case 119: { std::cout << "Placeholder" << endl; pcount[118]++; } break;
                case 120: { std::cout << "Placeholder" << endl; pcount[119]++; } break;
                case 121: { std::cout << "Placeholder" << endl; pcount[120]++; } break;
                case 122: { std::cout << "Placeholder" << endl; pcount[121]++; } break;
                case 123: { std::cout << "Placeholder" << endl; pcount[122]++; } break;
                case 124: { std::cout << "Placeholder" << endl; pcount[123]++; } break;
                case 125: { std::cout << "Placeholder" << endl; pcount[124]++; } break;
                case 126: { std::cout << "Placeholder" << endl; pcount[125]++; } break;
                case 127: { std::cout << "Placeholder" << endl; pcount[126]++; } break;
                case 128: { std::cout << "Placeholder" << endl; pcount[127]++; } break;
                }
                wishes_number = wishes_number - 1;
                count = count + 1;
                five_star_assurance_number = five_star_assurance_number + 1;
                four_star_assurance_number = four_star_assurance_number + 1;
            }
        }
        if (chosen_banner == 4 && chosen_event == 1) {
            while (wishes_number > 0) {
                long long int temp1 = generator() % ULTRAPOS + 1;
                long long int temp2 = generator() % ULTRAPOS + 1;
                long long int temp3 = generator() % ULTRAPOS + 1;
                int star = 0; //4-star or 5-star
                int type = 0; //Up or non-up, character or weapon
                int kind = 0; //which exactly
                if (unmet_count > threshold) unmet = (double)unmet_count;
                if (is_noelle == 1 && count == 9) {
                    star = 4;
                    four_count = four_count + 1;
                    four_star_assurance_number = 0;
                    type = 1;
                    kind = 8;
                    is_noelle = 0;
                }
                else if (four_star_assurance_number < 1 + 8) {
                    if (temp1 < 1 + ULTRAPOS/1000 * 6) {
                        star = 5;
                        five_count = five_count + 1;
                        type = 1;
                        if (temp3 < 1 + ULTRAPOS/5) kind = 1;
                        else if (temp3 < 1 + ULTRAPOS/5 * 2) kind = 2;
                        else if (temp3 < 1 + ULTRAPOS/5 * 3) kind = 3;
                        else if (temp3 < 1 + ULTRAPOS/5 * 4) kind = 4;
                        else kind = 5;
                    }
                    else if (temp1 < 1 + ULTRAPOS / 1000 * 57) {
                        star = 4;
                        four_count = four_count + 1;
                        four_star_assurance_number = 0;
                        type = 1;
                        unmet_count = 0;
                        unmet = (double)17.1;
                        if (temp3 < 1 + ULTRAPOS / 11) kind = 6;
                        else if (temp3 < 1 + ULTRAPOS / 11 * 2) kind = 7;
                        else if (temp3 < 1 + ULTRAPOS / 11 * 3) { kind = 8; is_noelle = 0;}
                        else if (temp3 < 1 + ULTRAPOS / 11 * 4) kind = 9;
                        else if (temp3 < 1 + ULTRAPOS / 11 * 5) kind = 10;
                        else if (temp3 < 1 + ULTRAPOS / 11 * 6) kind = 11;
                        else if (temp3 < 1 + ULTRAPOS / 11 * 7) kind = 12;
                        else if (temp3 < 1 + ULTRAPOS / 11 * 8) kind = 13;
                        else if (temp3 < 1 + ULTRAPOS / 11 * 9) kind = 14;
                        else if (temp3 < 1 + ULTRAPOS / 11 * 10) kind = 15;
                        else kind = 16;
                    }
                    else {
                        star = 3;
                        type = 2;
                        if (temp3 < 1 + ULTRAPOS/13) kind = 17;
                        else if (temp3 < 1 + ULTRAPOS/13 * 2) kind = 18;
                        else if (temp3 < 1 + ULTRAPOS/13 * 3) kind = 19;
                        else if (temp3 < 1 + ULTRAPOS/13 * 4) kind = 20;
                        else if (temp3 < 1 + ULTRAPOS/13 * 5) kind = 21;
                        else if (temp3 < 1 + ULTRAPOS/13 * 6) kind = 22;
                        else if (temp3 < 1 + ULTRAPOS/13 * 7) kind = 23;
                        else if (temp3 < 1 + ULTRAPOS/13 * 8) kind = 24;
                        else if (temp3 < 1 + ULTRAPOS/13 * 9) kind = 25;
                        else if (temp3 < 1 + ULTRAPOS/13 * 10) kind = 26;
                        else if (temp3 < 1 + ULTRAPOS/13 * 11) kind = 27;
                        else if (temp3 < 1 + ULTRAPOS/13 * 12) kind = 28;
                        else kind = 29;
                    }
                }
                else if (four_star_assurance_number == 9) {
                    if (temp1 < 1 + ULTRAPOS/1000 * 6) {
                        star = 5;
                        five_count = five_count + 1;
                        type = 1;
                        if (temp3 < 1 + ULTRAPOS/5) kind = 1;
                        else if (temp3 < 1 + ULTRAPOS/5 * 2) kind = 2;
                        else if (temp3 < 1 + ULTRAPOS/5 * 3) kind = 3;
                        else if (temp3 < 1 + ULTRAPOS/5 * 4) kind = 4;
                        else kind = 5;
                    }
                    else if (temp1 < 1 + ULTRAPOS/1000 * 567) {
                        star = 4;
                        four_count = four_count + 1;
                        four_star_assurance_number = 0;
                            type = 1;
                            unmet_count = 0;
                            unmet = (double)17.1;
                            if (temp3 < 1 + ULTRAPOS / 11) kind = 6;
                            else if (temp3 < 1 + ULTRAPOS / 11 * 2) kind = 7;
                            else if (temp3 < 1 + ULTRAPOS / 11 * 3) { kind = 8; is_noelle = 0; }
                            else if (temp3 < 1 + ULTRAPOS / 11 * 4) kind = 9;
                            else if (temp3 < 1 + ULTRAPOS / 11 * 5) kind = 10;
                            else if (temp3 < 1 + ULTRAPOS / 11 * 6) kind = 11;
                            else if (temp3 < 1 + ULTRAPOS / 11 * 7) kind = 12;
                            else if (temp3 < 1 + ULTRAPOS / 11 * 8) kind = 13;
                            else if (temp3 < 1 + ULTRAPOS / 11 * 9) kind = 14;
                            else if (temp3 < 1 + ULTRAPOS / 11 * 10) kind = 15;
                            else kind = 16;
                    }
                    else {
                        star = 3;
                        type = 2;
                        if (temp3 < 1 + ULTRAPOS / 13) kind = 17;
                        else if (temp3 < 1 + ULTRAPOS / 13 * 2) kind = 18;
                        else if (temp3 < 1 + ULTRAPOS / 13 * 3) kind = 19;
                        else if (temp3 < 1 + ULTRAPOS / 13 * 4) kind = 20;
                        else if (temp3 < 1 + ULTRAPOS / 13 * 5) kind = 21;
                        else if (temp3 < 1 + ULTRAPOS / 13 * 6) kind = 22;
                        else if (temp3 < 1 + ULTRAPOS / 13 * 7) kind = 23;
                        else if (temp3 < 1 + ULTRAPOS / 13 * 8) kind = 24;
                        else if (temp3 < 1 + ULTRAPOS / 13 * 9) kind = 25;
                        else if (temp3 < 1 + ULTRAPOS / 13 * 10) kind = 26;
                        else if (temp3 < 1 + ULTRAPOS / 13 * 11) kind = 27;
                        else if (temp3 < 1 + ULTRAPOS / 13 * 12) kind = 28;
                        else kind = 29;
                    }
                }
                else {
                    if (temp1 < 1 + ULTRAPOS/1000 * 6) {
                        star = 5;
                        five_count = five_count + 1;
                        type = 1;
                        if (temp3 < 1 + ULTRAPOS/5) kind = 1;
                        else if (temp3 < 1 + ULTRAPOS/5 * 2) kind = 2;
                        else if (temp3 < 1 + ULTRAPOS/5 * 3) kind = 3;
                        else if (temp3 < 1 + ULTRAPOS/5 * 4) kind = 4;
                        else kind = 5;
                    }
                    else {
                        star = 4;
                        four_count = four_count + 1;
                        four_star_assurance_number = 0;
                            type = 1;
                            unmet_count = 0;
                            unmet = (double)17.1;
                            if (temp3 < 1 + ULTRAPOS / 11) kind = 6;
                            else if (temp3 < 1 + ULTRAPOS / 11 * 2) kind = 7;
                            else if (temp3 < 1 + ULTRAPOS / 11 * 3) { kind = 8; is_noelle = 0; }
                            else if (temp3 < 1 + ULTRAPOS / 11 * 4) kind = 9;
                            else if (temp3 < 1 + ULTRAPOS / 11 * 5) kind = 10;
                            else if (temp3 < 1 + ULTRAPOS / 11 * 6) kind = 11;
                            else if (temp3 < 1 + ULTRAPOS / 11 * 7) kind = 12;
                            else if (temp3 < 1 + ULTRAPOS / 11 * 8) kind = 13;
                            else if (temp3 < 1 + ULTRAPOS / 11 * 9) kind = 14;
                            else if (temp3 < 1 + ULTRAPOS / 11 * 10) kind = 15;
                            else kind = 16;
                    }
                }
                std::cout << count + 1 << "(" << five_star_assurance_number << ")" << " ";
                switch (kind) {
                case 1: { std::cout << "!!!!!*****Keqing" << endl; pcount[0]++; } break;
                case 2: { std::cout << "!!!!!*****Mona" << endl; pcount[1]++; } break;
                case 3: { std::cout << "!!!!!*****Qiqi" << endl; pcount[2]++; } break;
                case 4: { std::cout << "!!!!!*****Diluc" << endl; pcount[3]++; } break;
                case 5: { std::cout << "!!!!!*****Jean" << endl; pcount[4]++; } break;
                case 6: { std::cout << "!!!!!*****Amos' Bow" << endl; pcount[5]++; } break;
                case 7: { std::cout << "!!!!!*****Skyward Harp" << endl; pcount[6]++; } break;
                case 8: { std::cout << "!!!!!*****Lost Prayer to the Sacred Winds" << endl; pcount[7]++; } break;
                case 9: { std::cout << "!!!!!*****Skyward Atlas" << endl; pcount[8]++; } break;
                case 10: { std::cout << "!!!!!*****Primordial Jade Winged-Spear" << endl; pcount[9]++; } break;
                case 11: { std::cout << "!!!!!*****Skyward Spine" << endl; pcount[10]++; } break;
                case 12: { std::cout << "!!!!!*****Wolf's Gravestone" << endl; pcount[11]++; } break;
                case 13: { std::cout << "!!!!!*****Skyward Pride" << endl; pcount[12]++; } break;
                case 14: { std::cout << "!!!!!*****Skyward Blade" << endl; pcount[13]++; } break;
                case 15: { std::cout << "!!!!!*****Aquila Favonia" << endl; pcount[14]++; } break;
                case 16: { std::cout << "!!****Rosaria" << endl; pcount[15]++; } break;
                case 17: { std::cout << "!!****Xinyan" << endl; pcount[16]++; } break;
                case 18: { std::cout << "!!****Sucrose" << endl; pcount[17]++; } break;
                case 19: { std::cout << "!!****Diona" << endl; pcount[18]++; } break;
                case 20: { std::cout << "!!****Chongyun" << endl; pcount[19]++; } break;
                case 21: { std::cout << "!!****Noelle" << endl; pcount[20]++; } break;
                case 22: { std::cout << "!!****Bennett" << endl; pcount[21]++; } break;
                case 23: { std::cout << "!!****Fischl" << endl; pcount[22]++; } break;
                case 24: { std::cout << "!!****Ningguang" << endl; pcount[23]++; } break;
                case 25: { std::cout << "!!****Xingqiu" << endl; pcount[24]++; } break;
                case 26: { std::cout << "!!****Beidou" << endl; pcount[25]++; } break;
                case 27: { std::cout << "!!****Xiangling" << endl; pcount[26]++; } break;
                case 28: { std::cout << "!!****Amber" << endl; pcount[27]++; } break;
                case 29: { std::cout << "!!****Razor" << endl; pcount[28]++; } break;
                case 30: { std::cout << "!!****Kaeya" << endl; pcount[29]++; } break;
                case 31: { std::cout << "!!****Barbara" << endl; pcount[30]++; } break;
                case 32: { std::cout << "!!****Lisa" << endl; pcount[31]++; } break;
                case 33: { std::cout << "!!****Rust" << endl; pcount[32]++; } break;
                case 34: { std::cout << "!!****Sacrificial Bow" << endl; pcount[33]++; } break;
                case 35: { std::cout << "!!****The Stringless" << endl; pcount[34]++; } break;
                case 36: { std::cout << "!!****Favonius Warbow" << endl; pcount[35]++; } break;
                case 37: { std::cout << "!!****Eye of Perception" << endl; pcount[36]++; } break;
                case 38: { std::cout << "!!****Sacrificial Fragments" << endl; pcount[37]++; } break;
                case 39: { std::cout << "!!****The Widsith" << endl; pcount[38]++; } break;
                case 40: { std::cout << "!!****Favonius Codex" << endl; pcount[39]++; } break;
                case 41: { std::cout << "!!****Favonius Lance" << endl; pcount[40]++; } break;
                case 42: { std::cout << "!!****Dragon's Bane" << endl; pcount[41]++; } break;
                case 43: { std::cout << "!!****Rainslasher" << endl; pcount[42]++; } break;
                case 44: { std::cout << "!!****Sacrificial Greatsword" << endl; pcount[43]++; } break;
                case 45: { std::cout << "!!****The Bell" << endl; pcount[44]++; } break;
                case 46: { std::cout << "!!****Favonius Greatsword" << endl; pcount[45]++; } break;
                case 47: { std::cout << "!!****Lion's Roar" << endl; pcount[46]++; } break;
                case 48: { std::cout << "!!****Sacrificial Sword" << endl; pcount[47]++; } break;
                case 49: { std::cout << "!!****The Flute" << endl; pcount[48]++; } break;
                case 50: { std::cout << "!!****Favonius Sword" << endl; pcount[49]++; } break;
                case 51: { std::cout << "***Slingshot" << endl; pcount[50]++; } break;
                case 52: { std::cout << "***Sharpshooter's Oath" << endl; pcount[51]++; } break;
                case 53: { std::cout << "***Raven Bow" << endl; pcount[52]++; } break;
                case 54: { std::cout << "***Emerald Orb" << endl; pcount[53]++; } break;
                case 55: { std::cout << "***Thrilling Tales of Dragon Slayers" << endl; pcount[54]++; } break;
                case 56: { std::cout << "***Magic Guide" << endl; pcount[55]++; } break;
                case 57: { std::cout << "***Black Tassel" << endl; pcount[56]++; } break;
                case 58: { std::cout << "***Debate Club" << endl; pcount[57]++; } break;
                case 59: { std::cout << "***Bloodtainted Greatsword" << endl; pcount[58]++; } break;
                case 60: { std::cout << "***Ferrous Shadow" << endl; pcount[59]++; } break;
                case 61: { std::cout << "***Skyrider Sword" << endl; pcount[60]++; } break;
                case 62: { std::cout << "***Harbinger of Dawn" << endl; pcount[61]++; } break;
                case 63: { std::cout << "***Cool Steel" << endl; pcount[62]++; } break;
                case 64: { std::cout << "!!!!!*****Venti" << endl; pcount[63]++; } break;
                case 65: { std::cout << "!!!!!*****Klee" << endl; pcount[64]++; } break;
                case 66: { std::cout << "!!!!!*****Tartaglia" << endl; pcount[65]++; } break;
                case 67: { std::cout << "!!!!!*****Zhongli" << endl; pcount[66]++; } break;
                case 68: { std::cout << "!!!!!*****Albedo" << endl; pcount[67]++; } break;
                case 69: { std::cout << "!!!!!*****Ganyu" << endl; pcount[68]++; } break;
                case 70: { std::cout << "!!!!!*****Xiao" << endl; pcount[69]++; } break;
                case 71: { std::cout << "!!!!!*****Hu Tao" << endl; pcount[70]++; } break;
                case 72: { std::cout << "!!****Yanfei" << endl; pcount[71]++; } break;
                case 73: { std::cout << "!!****Eula" << endl; pcount[72]++; } break;
                case 74: { std::cout << "!!!!!*****Memory of Dust" << endl; pcount[73]++; } break;
                case 75: { std::cout << "!!!!!*****Vortex Vanquisher" << endl; pcount[74]++; } break;
                case 76: { std::cout << "!!!!!*****The Unforged" << endl; pcount[75]++; } break;
                case 77: { std::cout << "!!!!!*****Summit Shaper" << endl; pcount[76]++; } break;
                case 78: { std::cout << "!!!!!*****Primordial Jade Cutter" << endl; pcount[77]++; } break;
                case 79: { std::cout << "!!!!!*****Staff of Homa" << endl; pcount[78]++; } break;
                case 80: { std::cout << "!!****Lithic Blade" << endl; pcount[79]++; } break;
                case 81: { std::cout << "!!****Lithic Spear" << endl; pcount[80]++; } break;
                case 82: { std::cout << "!!!!!*****Elegy of the End" << endl; pcount[81]++; } break;
                case 83: { std::cout << "!!****The Alley Flash" << endl; pcount[82]++; } break;
                case 84: { std::cout << "!!****Wine and Song" << endl; pcount[83]++; } break;
                case 85: { std::cout << "!!****Alley Hunter" << endl; pcount[84]++; } break;
                case 86: { std::cout << "Placeholder" << endl; pcount[85]++; } break;
                case 87: { std::cout << "Placeholder" << endl; pcount[86]++; } break;
                case 88: { std::cout << "Placeholder" << endl; pcount[87]++; } break;
                case 89: { std::cout << "Placeholder" << endl; pcount[88]++; } break;
                case 90: { std::cout << "Placeholder" << endl; pcount[89]++; } break;
                case 91: { std::cout << "Placeholder" << endl; pcount[90]++; } break;
                case 92: { std::cout << "Placeholder" << endl; pcount[91]++; } break;
                case 93: { std::cout << "Placeholder" << endl; pcount[92]++; } break;
                case 94: { std::cout << "Placeholder" << endl; pcount[93]++; } break;
                case 95: { std::cout << "Placeholder" << endl; pcount[94]++; } break;
                case 96: { std::cout << "Placeholder" << endl; pcount[95]++; } break;
                case 97: { std::cout << "Placeholder" << endl; pcount[96]++; } break;
                case 98: { std::cout << "Placeholder" << endl; pcount[97]++; } break;
                case 99: { std::cout << "Placeholder" << endl; pcount[98]++; } break;
                case 100: { std::cout << "Placeholder" << endl; pcount[99]++; } break;
                case 101: { std::cout << "Placeholder" << endl; pcount[100]++; } break;
                case 102: { std::cout << "Placeholder" << endl; pcount[101]++; } break;
                case 103: { std::cout << "Placeholder" << endl; pcount[102]++; } break;
                case 104: { std::cout << "Placeholder" << endl; pcount[103]++; } break;
                case 105: { std::cout << "Placeholder" << endl; pcount[104]++; } break;
                case 106: { std::cout << "Placeholder" << endl; pcount[105]++; } break;
                case 107: { std::cout << "Placeholder" << endl; pcount[106]++; } break;
                case 108: { std::cout << "Placeholder" << endl; pcount[107]++; } break;
                case 109: { std::cout << "Placeholder" << endl; pcount[108]++; } break;
                case 110: { std::cout << "Placeholder" << endl; pcount[109]++; } break;
                case 111: { std::cout << "Placeholder" << endl; pcount[110]++; } break;
                case 112: { std::cout << "Placeholder" << endl; pcount[111]++; } break;
                case 113: { std::cout << "Placeholder" << endl; pcount[112]++; } break;
                case 114: { std::cout << "Placeholder" << endl; pcount[113]++; } break;
                case 115: { std::cout << "Placeholder" << endl; pcount[114]++; } break;
                case 116: { std::cout << "Placeholder" << endl; pcount[115]++; } break;
                case 117: { std::cout << "Placeholder" << endl; pcount[116]++; } break;
                case 118: { std::cout << "Placeholder" << endl; pcount[117]++; } break;
                case 119: { std::cout << "Placeholder" << endl; pcount[118]++; } break;
                case 120: { std::cout << "Placeholder" << endl; pcount[119]++; } break;
                case 121: { std::cout << "Placeholder" << endl; pcount[120]++; } break;
                case 122: { std::cout << "Placeholder" << endl; pcount[121]++; } break;
                case 123: { std::cout << "Placeholder" << endl; pcount[122]++; } break;
                case 124: { std::cout << "Placeholder" << endl; pcount[123]++; } break;
                case 125: { std::cout << "Placeholder" << endl; pcount[124]++; } break;
                case 126: { std::cout << "Placeholder" << endl; pcount[125]++; } break;
                case 127: { std::cout << "Placeholder" << endl; pcount[126]++; } break;
                case 128: { std::cout << "Placeholder" << endl; pcount[127]++; } break;
                }
                wishes_number = wishes_number - 1;
                count = count + 1;
                four_star_assurance_number = four_star_assurance_number + 1;
            }
        }
        if (wishes_number >= 0) {
        if(five_count == 0){
            std::cout << endl << "You have pulled " << count << " wishes." << endl
            << "5-stars:   " << five_count << "  " << five_count * 100.0 / count << "%" << endl
            << "4-stars:   " << four_count << "  " << four_count * 100.0 / count << "%" << endl;
            }
        else{
            std::cout << endl << "You have pulled " << count << " wishes." << endl
            << "5-stars:   " << five_count << "  " << five_count * 100.0 / count << "%" << endl
            << "4-stars:   " << four_count << "  " << four_count * 100.0 / count << "%" << endl
            << "max non-5-stars-max:   " << max_fives << " at " << max_fivesth << "-th non-5-stars  " << max_fivecount + 1 << "-th wishes" << endl
            << "min non-5-stars-max:   " << min_fives << " at " << min_fivesth << "-th non-5-stars  " << min_fivecount + 1 << "-th wishes" << endl
            << "ave non-5-star-max:   "<< ave_fives * 1.0 / five_count << endl << endl;
        }
        for (int iout = 0; iout < 15; iout++){if (pcount[iout] > 0) std::cout << pname[iout] << "(" << pcount[iout] << ")" << " ";}
        for (int iout = 63; iout < 71; iout++){if (pcount[iout] > 0) std::cout << pname[iout] << "(" << pcount[iout] << ")" << " ";}
        for (int iout = 73; iout < 79; iout++){if (pcount[iout] > 0) std::cout << pname[iout] << "(" << pcount[iout] << ")" << " ";}
        if (pcount[81] > 0) std::cout << 81 << "(" << pcount[81] << ")" << " ";
        std::cout << endl << endl;
        for (int iout = 15; iout < 50; iout++){if (pcount[iout] > 0) std::cout << pname[iout] << "(" << pcount[iout] << ")" << " ";}
        if (pcount[71] > 0) std::cout << pname[71] << "(" << pcount[71] << ")" << " ";
        if (pcount[72] > 0) std::cout << pname[72] << "(" << pcount[72] << ")" << " ";
        if (pcount[79] > 0) std::cout << pname[79] << "(" << pcount[79] << ")" << " ";
        if (pcount[80] > 0) std::cout << pname[80] << "(" << pcount[80] << ")" << " ";
        for (int iout = 82; iout < 85; iout++){if (pcount[iout] > 0) std::cout << pname[iout] << "(" << pcount[iout] << ")" << " ";}
        std::cout << endl << endl;auto elapsed = std::chrono::steady_clock::now() - start;
        long long int microseconds = std::chrono::duration_cast<std::chrono::microseconds>(elapsed).count();
        std::cout << microseconds * 1.0 / 1000000 << " seconds elapsed." << endl;
        }
        if (chosen_banner == 4 && chosen_event == 1 && count == 20) goto full_quit;
    }
    }
    full_quit:
    int prepause = getchar();
    int pause = getchar();
}
