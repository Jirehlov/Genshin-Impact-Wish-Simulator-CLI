#include <chrono>
#include <iostream>
#include <random>
#include <string>
#include "cn.h" //include the language header file

#define output_string() {if (y_print) {std::cout << countx + 1 << "(" << five_star_assurance_number << ")(" << four_star_assurance_number << ") ";\
                    casesx( kind );\
                    std::cout << pname[kind] << "\n"; }\
                    pcount[kind]++;\
                    wishes_number--;\
                    countx++;\
                    five_star_assurance_number++;\
                    four_star_assurance_number++;\
                    } // cout what have come home
#define luckcpy() {if ( luck > luckiest || countx_l < 11) {\
                        luckiest = luck;\
                        for (size_t templuck = 0; templuck < 10; templuck++) {\
                            luckiestlocation[templuck] = lucklocation[templuck];\
                            luckiestsublocation[templuck] = lucksublocation[templuck];\
                            luckiestsubsublocation[templuck] = lucksubsublocation[templuck];\
                            luckiestkind[templuck] = luckkind[templuck];\
                        }\
                    }\
                } // snapshot the luckiest moment
#define luckget() {for (size_t templuck = 0; templuck < 9; templuck++) {\
                        lucklocation[templuck] = lucklocation[templuck + 1];\
                        lucksublocation[templuck] = lucksublocation[templuck + 1];\
                        lucksubsublocation[templuck] = lucksubsublocation[templuck + 1];\
                        luckkind[templuck] = luckkind[templuck + 1];\
                        luckstar[templuck] = luckstar[templuck + 1];\
                    }\
                    countx_l ++;\
                    lucklocation[9] = countx;\
                    lucksublocation[9] = static_cast<size_t> (five_star_assurance_number) - 1;\
                    lucksubsublocation[9] = static_cast<size_t> (four_star_assurance_number) - 1;\
                    luckkind[9] = kind;\
                    luckstar[9] = star;\
                    luck = 0;\
                } // get the recorded luckiest
#define Tri() {\
                star = 3;\
                kind = rspick(three_g, 13);\
                } // 3-star kind settler for all banners
#define is_mode() {if (is_s_mode) {\
                    bool check = false;\
                    if (d_item_n[kind] > 0) d_item_n[kind]--;\
                    for (size_t ikk = 0; ikk < 115; ikk++) {\
                    if (d_item_n[ikk] > 0) { d_item_c = true; check = true; break; }\
                    else if (d_item_n[ikk] == 0) d_item_c = false;\
                    else { std::cout << E_10 << "\n"; goto full_quit; }\
                    if (check){ break; }\
                    }\
                    }\
                } // do if is s mode
#define set_pool_1_m(up_five_m,size_nup_four_c_m, nup_four_cgm) {\
                    set_pool_1((up_five_m), (size_nup_four_c_m), tempg1, tempg5, up_four_g, nup_four_c, (nup_four_cgm), four_check);\
                }
#define set_pool_3_m(size_nup_four_c_m, nup_four_cgm) {\
                    set_pool_3(up_five_g, (size_nup_four_c_m), tempg1, tempg5, tempg6, tempg7, up_four_g, nup_four_c, (nup_four_cgm), four_check, five_check);\
                }
#define check_profile_throw() {\
                    std::cout << S_143 << "\n";\
                    wishes_number = 0;\
                    goto enter_wishes_number;\
                }
#define cin_error_by(){\
                    std::cout << "\n" << S_11 << "\n";\
                    cin.clear();\
                    cin.ignore(32767, '\n');\
                }
#define cin_error_by2(){\
                    std::cout << "\n" << S_11 << "\n\n";\
                    cin.clear();\
                    cin.ignore(32767, '\n');\
                }

using namespace std;

std::random_device seed_gen;
static unsigned int seed_r = seed_gen() % 10000000;
static unsigned long long int seed_t = std::chrono::high_resolution_clock::now().time_since_epoch().count() * static_cast<unsigned long long int>(100000);
static size_t seed = static_cast<size_t>(seed_t) + static_cast<size_t>(seed_r);
std::mt19937_64 generatorz(seed);
// random set

bool d_item_c = true,
is_s_mode = false,
quit = true,
is_noelle = true,
is_cross = false,
is_dualcross = false,
y_print = true,
y_luck = true,
y_arg = false,
five_star_guarantee_number = false,
four_star_guarantee_number = false;
size_t fate_points = 0,
resultt = 0,
resultu = 0,
up_five = 0,
size_nup_four_c = 1,
luck = 0,
luckiest = 0,
countx = 0,
countx_r = 0,
countx_l = 0,
five_count = 0,
five_count_c = 0,
five_count_w = 0,
four_count = 0,
four_count_c = 0,
four_count_w = 0,
max_fivesth = 1,
min_fivesth = 1,
max_fivecount = 1,
min_fivecount = 1,
size_nup_four_w = 18;
std::chrono::system_clock::time_point starty = std::chrono::system_clock::now();
std::chrono::system_clock::time_point endy = std::chrono::system_clock::now();
std::chrono::nanoseconds elapsed = starty - endy;
std::time_t t_start = std::chrono::system_clock::to_time_t(starty);
std::time_t t_end = std::chrono::system_clock::to_time_t(endy);
static size_t nup_five_c[32] = { 0, 1, 2, 3, 4 },
nup_five_w[32] = { 5, 6, 7, 8, 9, 10, 11, 12, 13, 14 },
nup_four_w[64] = { 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49 },
three_g[13] = { 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62 },
nup_four_cg1[11] = { 17, 19, 20, 21, 22, 23, 24, 25, 26, 28, 30 },
nup_four_cg2[13] = { 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 28, 30 },
nup_four_cg3[14] = { 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 28, 30 },
nup_four_cg4[15] = { 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 28, 30, 71 },
nup_four_cg5[16] = { 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 28, 30, 71, 91 },
nup_four_cg6[17] = { 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 28, 30, 71, 91, 95 },
nup_four_cg7[18] = { 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 28, 30, 71, 91, 95, 100 },
nup_four_cg8[19] = { 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 28, 30, 71, 91, 95, 100, 106 },
nup_four_cg9[20] = { 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 28, 30, 71, 91, 95, 100, 106, 108 },
four_stars_c[23] = { 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 71, 91, 95, 100, 106, 108 },
four_stars_w[27] = { 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 79, 80, 82, 83, 84, 88, 102, 103, 104 },
five_stars_c[23] = { 0, 1, 2, 3, 4, 63, 64, 65, 66, 67, 68, 69, 70, 72, 86, 89, 90, 94, 96, 99, 105, 109, 111 },
five_stars_w[28] = { 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 73, 74, 75, 76, 77, 78, 81, 85, 87, 92, 93, 97, 98, 101, 107, 110, 112, 113 };
ptrdiff_t chosen_event = 0,
chosen_banner = 0,
switch_b_should_be = 0,
switch_e_should_be = 0,
switch_b_sav = 0,
switch_e_sav = 0,
unmet4_c = 0,
unmet4_w = 0,
unmet5_c = 0,
unmet5_w = 0,
four_star_assurance_number = 1,
five_star_assurance_number = 1,
max_fives = 1,
min_fives = PTRDIFF_MAX,
e_sav = 0,
five_weight = 0,
four_weight = 0,
three_weight = 0,
fate_weapon = 0,
ave_fives = 0;
signed long long int wishes_number = 0;
auto elapsed_time = std::chrono::duration_cast<std::chrono::microseconds>(elapsed).count();

static const char* pname[128] = { C_0, C_1, C_2, C_3, C_4, C_5, C_6, C_7, C_8, C_9, C_10, C_11, C_12, C_13, C_14, C_15, C_16, C_17, C_18, C_19, C_20,
                C_21, C_22, C_23, C_24, C_25, C_26, C_27, C_28, C_29, C_30, C_31, C_32, C_33, C_34, C_35, C_36, C_37, C_38, C_39, C_40,
                C_41, C_42, C_43, C_44, C_45, C_46, C_47, C_48, C_49, C_50, C_51, C_52, C_53, C_54, C_55, C_56, C_57, C_58, C_59, C_60,
                C_61, C_62, C_63, C_64, C_65, C_66, C_67, C_68, C_69, C_70, C_71, C_72, C_73, C_74, C_75, C_76, C_77, C_78, C_79, C_80,
                C_81, C_82, C_83, C_84, C_85, C_86, C_87, C_88, C_89, C_90, C_91, C_92, C_93, C_94, C_95, C_96, C_97, C_98, C_99, C_100,
                C_101, C_102, C_103, C_104, C_105, C_106, C_107, C_108, C_109, C_110, C_111, C_112, C_113, C_114,
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
static const char* pnameshort[128] = { X_0, X_1, X_2, X_3, X_4, X_5, X_6, X_7, X_8, X_9, X_10, X_11, X_12, X_13, X_14, X_15, X_16, X_17, X_18, X_19, X_20,
                X_21, X_22, X_23, X_24, X_25, X_26, X_27, X_28, X_29, X_30, X_31, X_32, X_33, X_34, X_35, X_36, X_37, X_38, X_39, X_40,
                X_41, X_42, X_43, X_44, X_45, X_46, X_47, X_48, X_49, X_50, X_51, X_52, X_53, X_54, X_55, X_56, X_57, X_58, X_59, X_60,
                X_61, X_62, X_63, X_64, X_65, X_66, X_67, X_68, X_69, X_70, X_71, X_72, X_73, X_74, X_75, X_76, X_77, X_78, X_79, X_80,
                X_81, X_82, X_83, X_84, X_85, X_86, X_87, X_88, X_89, X_90, X_91, X_92, X_93, X_94, X_95, X_96, X_97, X_98, X_99, X_100,
                X_101, X_102, X_103, X_104, X_105, X_106, X_107, X_108, X_109, X_110, X_111, X_112, X_113, X_114,
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
// names of the items

static size_t rspick(const size_t* kindx, size_t sizekind) {
    size_t kindout = kindx[1];
    size_t index = 0;
    size_t temp121 = 0;
    for (; index < sizekind; index++)
    {
        temp121 = generatorz() % (static_cast<unsigned long long int>(index) + 1);
        if (temp121 < 1) kindout = kindx[index];
    }
    return kindout;
}
// randomly pick an element among kindx which size is sizekind

static size_t WRSpick(const ptrdiff_t* weightx, size_t nom) {
    ptrdiff_t ceilling = 1;
    for (size_t inin = 0; inin < nom; inin++) ceilling += weightx[inin];
    const size_t typess1[3] = { 0, 1, 2 };
    const size_t typess2[2] = { 0, 1 };
    if (nom == 3 && ceilling > 10000) ceilling = 10000;
    ptrdiff_t randomn = static_cast<ptrdiff_t> (generatorz() % static_cast<size_t>(ceilling));
    size_t tc = 0, results = 0;
    for (size_t inin = 0; inin < nom; inin++) {
        if (randomn < weightx[inin]) {
            if (nom == 3) results = typess1[tc];
            else results = typess2[tc];
            inin = nom;
        }
        else {
            randomn -= weightx[inin];
            tc += 1;
        }
    }
    return results;
}
// weighted random sampling

static void casesx( size_t kind ){
    if (kind < 15 ) { std::cout << "!!!!!***** "; }
    else if (kind < 50 ) { std::cout << "!!**** "; }
    else if (kind < 63 ) { std::cout << "*** "; }
    else if (kind == 71 || kind == 79 || kind == 80 || kind == 82 || kind == 83 || kind == 84 || kind == 88 || kind == 91 || kind == 95 || kind == 100 || kind == 102 || kind == 103 || kind == 104 || kind == 106 || kind == 108 ) { std::cout << "!!**** "; }
    else if (kind < 115 ) { std::cout << "!!!!!***** "; }
    else { std::cout << E_1 << "  "; }
} // cout stars prefix

static void set_pool_1(size_t up_five_p, size_t size_nup_four_c_p, const size_t* tempg1, const size_t* tempg5, size_t* up_four_g, size_t* nup_four_c, const size_t* nup_four_cgm, size_t* four_check) {
    up_five = up_five_p;
    size_nup_four_c = size_nup_four_c_p;
    for (size_t i = 0; i < 3; i++) { up_four_g[i] = tempg1[i]; }
    for (size_t i = 0; i < size_nup_four_c; i++) { nup_four_c[i] = nup_four_cgm[i]; }
    for (size_t i = 0; i < 8; i++) { four_check[i] = tempg5[i]; }
}

static void set_pool_3(size_t* up_five_g, size_t size_nup_four_c_p, const size_t* tempg1, const size_t* tempg5, const size_t* tempg6, const size_t* tempg7, size_t* up_four_g, size_t* nup_four_c, const size_t* nup_four_cgm, size_t* four_check, size_t* five_check) {
    for (size_t i = 0; i < 2; i++) { up_five_g[i] = tempg6[i]; }
    size_nup_four_c = size_nup_four_c_p;
    for (size_t i = 0; i < 5; i++) { up_four_g[i] = tempg1[i]; }
    for (size_t i = 0; i < size_nup_four_c; i++) { nup_four_c[i] = nup_four_cgm[i]; }
    for (size_t i = 0; i < 8; i++) { four_check[i] = tempg5[i]; }
    for (size_t i = 0; i < 8; i++) { five_check[i] = tempg7[i]; }
}

int main(int argc, char* argv[]) {
    static char default_argv0[] = "giwscli";
    if (!argv[0] || !argv[0][0])
        argv[0] = default_argv0;
    y_print = true;
    y_luck = true;
enter_chosen_banner:
    d_item_c = true;
    is_s_mode = false;
    quit = true;
    is_noelle = true;
    is_cross = false;
    is_dualcross = false;
    five_star_guarantee_number = false;
    four_star_guarantee_number = false;
    chosen_banner = 0;
    chosen_event = 0;
    four_star_assurance_number = 1;
    five_star_assurance_number = 1;
    max_fives = 1;
    min_fives = PTRDIFF_MAX;
    fate_weapon = 0;
    fate_points = 0;
    five_weight = 0;
    four_weight = 0;
    three_weight = 0;
    unmet4_c = 0;
    unmet4_w = 0;
    unmet5_c = 0;
    unmet5_w = 0;
    resultt = 0;
    resultu = 0;
    switch_b_should_be = 0;
    switch_e_should_be = 0;
    switch_b_sav = 0;
    switch_e_sav = 0;
    luck = 0;
    luckiest = 0;
    e_sav = 0;
    size_nup_four_w = 18;
    countx = 0;
    countx_l = 0;
    wishes_number = 0;
    five_count = 0;
    five_count_c = 0;
    five_count_w = 0;
    four_count = 0;
    four_count_c = 0;
    four_count_w = 0;
    ave_fives = 0;
    max_fivesth = 1;
    min_fivesth = 1;
    max_fivecount = 1;
    min_fivecount = 1;
    size_t d_item[128] = { 0 },
        d_item_n[128] = { 0 },
        up_five_g[2] = { 0 },
        up_four_g[16] = { 0 },
        nup_four_c[32] = { 0 },
        luckkind[10] = { 127, 127, 127, 127, 127, 127, 127, 127, 127, 127 },
        luckstar[10] = { 3, 3, 3, 3, 3, 3, 3, 3, 3, 3 },
        luckiestkind[10] = { 127, 127, 127, 127, 127, 127, 127, 127, 127, 127 },
        five_check[8] = { 127, 127, 127, 127, 127, 127, 127, 127 },
        four_check[8] = { 127, 127, 127, 127, 127, 127, 127, 127 },
        lucklocation[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 },
        lucksublocation[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 },
        lucksubsublocation[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 },
        luckiestlocation[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 },
        luckiestsublocation[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 },
        luckiestsubsublocation[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 },
        pcount[128] = { 0 },
        four_pity[11] = { 0 },
        five_pity[90] = { 0 },
        five_pity_w[80] = { 0 };
    if (argc == 4) {
        int test0 = 0;
        int test1 = 0;
        long long int test2 = 0;
        try {
            test0 = stoi(argv[1]);
            test1 = stoi(argv[2]);
            test2 = stoll(argv[3]);
        }
        catch (...) {
            std::cout << E_11 << "\n";
            y_arg = true;
            goto full_quit;
        }
        test0 = 1 + test1;
        test1 = 1 + test0;
        test2 = 1 + test2;
        chosen_banner = stoi(argv[1]);
        chosen_event = stoi(argv[2]);
        wishes_number = stoll(argv[3]);
        if (wishes_number < 1) {
            wishes_number = 0;
            std::cout << S_72 << "\n";
            y_arg = true;
            goto full_quit;
        }
        quit = false;
        y_arg = true;
        goto set_banner;
    }
    else if (argc == 1) {
        goto welcome;
    }
    else {
        std::cout << E_11 << "\n";
        y_arg = true;
        goto full_quit;
    }
welcome:
    std::cout << S_1 << "\n" << S_2 << "\n" << S_3 << "\n" << S_4 << "\n\n";
enter_chosen_banner_switch:
    std::cout << S_5 << "\n" << S_6 << "\n" << S_7 << "\n" << S_108 << "\n" << S_8 << "\n" << S_9 << "\n" << S_10 << "\n\n";
    std::cin >> chosen_banner;
    if (cin.fail()) { chosen_banner = 0; cin_error_by2() goto enter_chosen_banner; }
enter_chosen_event:
    e_sav = chosen_event;
    switch (chosen_banner) {
    case -1: goto full_quit;
    case 1: {
        chosen_event = 0;
        static const char* banner_1 = "\n" S_12 "\n" S_13 "\n" S_109 "\n" S_14 "\n" S_15 "\n" S_16 "\n" S_17 "\n" S_18 "\n"
             S_19 "\n" S_20 "\n" S_21 "\n" S_22 "\n" S_23 "\n" S_24 "\n" S_25 "\n" S_26 "\n"
             S_27 "\n" S_28 "\n" S_29 "\n" S_30 "\n" S_94 "\n" S_95 "\n" S_100 "\n" S_101 "\n"
             S_102 "\n" S_103 "\n" S_144 "\n" S_145 "\n" S_151 "\n" S_153 "\n\n";
        std::cout << banner_1;
        std::cin >> chosen_event;
        fate_weapon = 0;
        fate_points = 0;
        switch_b_sav = switch_b_should_be;
        switch_b_should_be = 2;
        if (cin.fail()) { chosen_event = 0; cin_error_by() goto enter_chosen_event; }
        else if (chosen_event == -1) { chosen_event = 0; is_cross = true; std::cout << "\n"; goto enter_chosen_banner; }
        else if (chosen_event == -2) { chosen_event = 0; is_cross = true; std::cout << "\n"; goto enter_chosen_banner_switch; }
        else if (chosen_event > 0 && chosen_event < 28) quit = false; else { std::cout << "\n" << S_31 << "\n"; goto enter_chosen_event; }
    } break;
    case 2: {
        chosen_event = 0;
        static const char* banner_2 = "\n" S_12 "\n" S_13 "\n" S_109 "\n" S_107 "\n" S_146 "\n" S_147 "\n" S_154 "\n\n";
        std::cout << banner_2;
        std::cin >> chosen_event;
        fate_weapon = 0;
        fate_points = 0;
        switch_b_sav = switch_b_should_be;
        switch_b_should_be = 1;
        if (cin.fail()) { chosen_event = 0; cin_error_by() goto enter_chosen_event; }
        else if (chosen_event == -1) { chosen_event = 0; is_cross = true; std::cout << "\n"; goto enter_chosen_banner; }
        else if (chosen_event == -2) { chosen_event = 0; is_cross = true; std::cout << "\n"; goto enter_chosen_banner_switch; }
        else if (chosen_event > 0 && chosen_event < 5) quit = false; else { std::cout << "\n" << S_31 << "\n"; goto enter_chosen_event; }
    } break;
    case 3: {
        chosen_event = 0;
        static const char* banner_3 = "\n" S_12 "\n" S_13 "\n" S_109 "\n" S_32 "\n" S_33 "\n" S_34 "\n" S_35 "\n" S_36 "\n"
            S_37 "\n" S_38 "\n" S_39 "\n" S_40 "\n" S_41 "\n" S_42 "\n" S_43 "\n" S_44 "\n"
            S_45 "\n" S_46 "\n" S_47 "\n" S_96 "\n" S_97 "\n" S_104 "\n" S_105 "\n" S_111 "\n"
            S_126 "\n" S_148 "\n" S_149 "\n" S_152 "\n" S_155 "\n\n";
        std::cout << banner_3;
        std::cin >> chosen_event;
        fate_weapon = 0;
        fate_points = 0;
        if (cin.fail()) { chosen_event = 0; cin_error_by() goto enter_chosen_event; }
        else if (chosen_event == -1) { chosen_event = 0; is_cross = true; std::cout << "\n"; goto enter_chosen_banner; }
        else if (chosen_event == -2) { chosen_event = 0; is_cross = true; std::cout << "\n"; goto enter_chosen_banner_switch; }
        else if (chosen_event > 0 && chosen_event < 27) quit = false; else { std::cout << "\n" << S_31 << "\n"; goto enter_chosen_event; }
    } break;
    case 4: {
        chosen_event = 0;
        static const char* banner_4 = "\n" S_12 "\n" S_13 "\n" S_109 "\n" S_48 "\n" S_49 "\n" S_50 "\n" S_51 "\n" S_98 "\n"
            S_99 "\n" S_106 "\n" S_110 "\n" S_150 "\n\n";
        std::cout << banner_4;
        std::cin >> chosen_event;
        fate_weapon = 0;
        fate_points = 0;
        if (cin.fail()) { chosen_event = 0; cin_error_by() goto enter_chosen_event; }
        else if (chosen_event == -1) { chosen_event = 0; is_cross = true; std::cout << "\n"; goto enter_chosen_banner; }
        else if (chosen_event == -2) { chosen_event = 0; is_cross = true; std::cout << "\n"; goto enter_chosen_banner_switch; }
        else if (chosen_event > 0 && chosen_event < 10) quit = false; else { std::cout << "\n" << S_31 << "\n"; goto enter_chosen_event; }
    } break;
    case 5: {
        chosen_event = 0;
        std::cout << "\n" << S_12 << "\n" << S_13 << "\n" << S_109 << "\n" << S_52 << "\n\n";
        std::cin >> chosen_event;
        fate_weapon = 0;
        fate_points = 0;
        if (cin.fail()) { chosen_event = 0; cin_error_by() goto enter_chosen_event; }
        else if (chosen_event == -1) { chosen_event = 0; is_cross = true; std::cout << "\n"; goto enter_chosen_banner; }
        else if (chosen_event == -2) { chosen_event = 0; is_cross = true; std::cout << "\n"; goto enter_chosen_banner_switch; }
        else if (chosen_event == 1) quit = false; else { std::cout << "\n" << S_31 << "\n"; goto enter_chosen_event; } } break;
    default: {chosen_banner = 0; chosen_event = 0; quit = true; std::cout << "\n" << S_53 << "\n\n"; goto enter_chosen_banner; }
    }
    // choose event
set_banner:
    if (chosen_banner == 1) {
        if (chosen_event < 22) switch_e_should_be = 0;
        switch (chosen_event) {
        case 1: {
            const size_t tempg1[3] = { 22, 26, 30 };
            const size_t tempg5[8] = { 22, 26, 30, 0, 0, 0, 0, 0 };
            set_pool_1_m(63, 11, nup_four_cg1)
        } break;
        case 2: {
            const size_t tempg1[3] = { 17, 20, 24 };
            const size_t tempg5[8] = { 17, 20, 24, 0, 0, 0, 0, 0 };
            set_pool_1_m(64, 11, nup_four_cg1)
        } break;
        case 3: {
            const size_t tempg1[3] = { 18, 23, 25 };
            const size_t tempg5[8] = { 23, 25, 0, 0, 0, 0, 0, 0 };
            set_pool_1_m(65, 11, nup_four_cg1)
        } break;
        case 4: {
            const size_t tempg1[3] = { 16, 19, 28 };
            const size_t tempg5[8] = { 19, 28, 0, 0, 0, 0, 0, 0 };
            set_pool_1_m(66, 11, nup_four_cg1)
        } break;
        case 5: {
            const size_t tempg1[3] = { 17, 21, 22 };
            const size_t tempg5[8] = { 17, 21, 22, 0, 0, 0, 0, 0 };
            set_pool_1_m(67, 13, nup_four_cg2)
        } break;
        case 6: {
            const size_t tempg1[3] = { 22, 24, 26 };
            const size_t tempg5[8] = { 22, 24, 26, 0, 0, 0, 0, 0 };
            set_pool_1_m(68, 13, nup_four_cg2)
        } break;
        case 7: {
            const size_t tempg1[3] = { 16, 18, 25 };
            const size_t tempg5[8] = { 16, 18, 25, 0, 0, 0, 0, 0 };
            set_pool_1_m(69, 13, nup_four_cg2)
        } break;
        case 8: {
            const size_t tempg1[3] = { 21, 23, 30 };
            const size_t tempg5[8] = { 21, 23, 30, 0, 0, 0, 0, 0 };
            set_pool_1_m(0, 13, nup_four_cg2)
            five_check[0] = 0;
        } break;
        case 9: {
            const size_t tempg1[3] = { 19, 24, 26 };
            const size_t tempg5[8] = { 19, 24, 26, 0, 0, 0, 0, 0 };
            set_pool_1_m(70, 13, nup_four_cg2)
        } break;
        case 10: {
            const size_t tempg1[3] = { 17, 20, 28 };
            const size_t tempg5[8] = { 17, 20, 28, 0, 0, 0, 0, 0 };
            set_pool_1_m(63, 13, nup_four_cg2)
        } break;
        case 11: {
            const size_t tempg1[3] = { 15, 22, 30 };
            const size_t tempg5[8] = { 22, 30, 0, 0, 0, 0, 0, 0 };
            set_pool_1_m(65, 13, nup_four_cg2)
        } break;
        case 12: {
            const size_t tempg1[3] = { 71, 20, 18 };
            const size_t tempg5[8] = { 18, 20, 0, 0, 0, 0, 0, 0 };
            set_pool_1_m(66, 14, nup_four_cg3)
        } break;
        case 13: {
            const size_t tempg1[3] = { 16, 24, 25 };
            const size_t tempg5[8] = { 16, 24, 25, 0, 0, 0, 0, 0 };
            set_pool_1_m(72, 14, nup_four_cg3)
        } break;
        case 14: {
            const size_t tempg1[3] = { 17, 22, 30 };
            const size_t tempg5[8] = { 17, 22, 30, 0, 0, 0, 0, 0 };
            set_pool_1_m(64, 15, nup_four_cg4)
        } break;
        case 15: {
            const size_t tempg1[3] = { 15, 21, 28 };
            const size_t tempg5[8] = { 15, 21, 28, 0, 0, 0, 0, 0 };
            set_pool_1_m(86, 15, nup_four_cg4)
        } break;
        case 16: {
            const size_t tempg1[3] = { 71, 23, 19 };
            const size_t tempg5[8] = { 71, 23, 19, 0, 0, 0, 0, 0 };
            set_pool_1_m(89, 15, nup_four_cg4)
        } break;
        case 17: {
            const size_t tempg1[3] = { 91, 16, 18 };
            const size_t tempg5[8] = { 16, 18, 0, 0, 0, 0, 0, 0 };
            set_pool_1_m(90, 15, nup_four_cg4)
        } break;
        case 18: {
            const size_t tempg1[3] = { 95, 17, 26 };
            const size_t tempg5[8] = { 17, 26, 0, 0, 0, 0, 0, 0 };
            set_pool_1_m(96, 16, nup_four_cg5)
        } break;
        case 19: {
            const size_t tempg1[3] = { 15, 24, 25 };
            const size_t tempg5[8] = { 15, 24, 25, 0, 0, 0, 0, 0 };
            set_pool_1_m(94, 16, nup_four_cg5)
        } break;
        case 20: {
            const size_t tempg1[3] = { 23, 19, 71 };
            const size_t tempg5[8] = { 23, 19, 71, 0, 0, 0, 0, 0 };
            set_pool_1_m(65, 17, nup_four_cg6)
        } break;
        case 21: {
            const size_t tempg1[3] = { 100, 18, 91 };
            const size_t tempg5[8] = { 18, 91, 0, 0, 0, 0, 0, 0 };
            set_pool_1_m(70, 17, nup_four_cg6)
        } break;
        case 22: {
            switch_e_sav = switch_e_should_be;
            switch_e_should_be = 1;
            const size_t tempg1[3] = { 15, 20, 21 };
            const size_t tempg5[8] = { 15, 20, 21, 0, 0, 0, 0, 0 };
            set_pool_1_m(67, 18, nup_four_cg7)
        } break;
        case 23: {
            switch_e_sav = switch_e_should_be;
            switch_e_should_be = 0;
            const size_t tempg1[3] = { 26, 30, 106 };
            const size_t tempg5[8] = { 26, 30, 0, 0, 0, 0, 0, 0 };
            set_pool_1_m(105, 18, nup_four_cg7)
        } break;
        case 24: {
            switch_e_sav = switch_e_should_be;
            switch_e_should_be = 2;
            const size_t tempg1[3] = { 19, 23, 108 };
            const size_t tempg5[8] = { 19, 23, 0, 0, 0, 0, 0, 0 };
            set_pool_1_m(109, 19, nup_four_cg8)
        } break;
        case 25: {
            switch_e_sav = switch_e_should_be;
            switch_e_should_be = 3;
            const size_t tempg1[3] = { 24, 25, 71 };
            const size_t tempg5[8] = { 24, 25, 71, 0, 0, 0, 0, 0 };
            set_pool_1_m(66, 19, nup_four_cg8)
        } break;
        case 26: {
            switch_e_sav = switch_e_should_be;
            switch_e_should_be = 0;
            const size_t tempg1[3] = { 18, 22, 100 };
            const size_t tempg5[8] = { 18, 22, 100, 0, 0, 0, 0, 0 };
            set_pool_1_m(99, 20, nup_four_cg9)
        } break;
        case 27: {
            switch_e_sav = switch_e_should_be;
            switch_e_should_be = 4;
            const size_t tempg1[3] = { 18, 22, 100 };
            const size_t tempg5[8] = { 18, 22, 100, 0, 0, 0, 0, 0 };
            set_pool_1_m(96, 20, nup_four_cg9)
        } break;
        default: { std::cout << E_5 << "\n"; goto full_quit; }
        }
    }
    else if (chosen_banner == 2) {
        switch (chosen_event) {
        case 1: {
            switch_e_sav = switch_e_should_be;
            switch_e_should_be = 22;
            const size_t tempg1[3] = { 15, 20, 21 };
            const size_t tempg5[8] = { 15, 20, 21, 0, 0, 0, 0, 0 };
            set_pool_1_m(72, 18, nup_four_cg7)
        } break;
        case 2: {
            switch_e_sav = switch_e_should_be;
            switch_e_should_be = 24;
            const size_t tempg1[3] = { 19, 23, 108 };
            const size_t tempg5[8] = { 19, 23, 0, 0, 0, 0, 0, 0 };
            set_pool_1_m(69, 19, nup_four_cg8)
        } break;
        case 3: {
            switch_e_sav = switch_e_should_be;
            switch_e_should_be = 25;
            const size_t tempg1[3] = { 24, 25, 71 };
            const size_t tempg5[8] = { 24, 25, 71, 0, 0, 0, 0, 0 };
            set_pool_1_m(68, 19, nup_four_cg8)
        } break;
        case 4: {
            switch_e_sav = switch_e_should_be;
            switch_e_should_be = 27;
            const size_t tempg1[3] = { 24, 25, 71 };
            const size_t tempg5[8] = { 24, 25, 71, 0, 0, 0, 0, 0 };
            set_pool_1_m(94, 20, nup_four_cg9)
        } break;
        default: { std::cout << E_5 << "\n"; goto full_quit; }
        }
    }
    else if (chosen_banner == 3) {
        switch (chosen_event) {
        case 1: {
            const size_t tempg6[2] = { 5, 14 };
            const size_t tempg1[5] = { 34, 38, 40, 44, 48 };
            const size_t tempg5[8] = { 34, 38, 40, 44, 48, 0, 0, 0 };
            const size_t tempg7[8] = { 5, 14, 0, 0, 0, 0, 0, 0 };
            set_pool_3_m(11, nup_four_cg1)
        } break;
        case 2: {
            const size_t tempg6[2] = { 7, 11 };
            const size_t tempg1[5] = { 33, 37, 41, 43, 49 };
            const size_t tempg5[8] = { 33, 37, 41, 43, 49, 0, 0, 0 };
            const size_t tempg7[8] = { 7, 11, 0, 0, 0, 0, 0, 0 };
            set_pool_3_m(11, nup_four_cg1)
        } break;
        case 3: {
            const size_t tempg6[2] = { 6, 73 };
            const size_t tempg1[5] = { 32, 36, 40, 42, 48 };
            const size_t tempg5[8] = { 32, 36, 40, 42, 48, 0, 0, 0 };
            const size_t tempg7[8] = { 6, 0, 0, 0, 0, 0, 0, 0 };
            set_pool_3_m(11, nup_four_cg1)
        } break;
        case 4: {
            const size_t tempg6[2] = { 74, 75 };
            const size_t tempg1[5] = { 35, 39, 41, 44, 46 };
            const size_t tempg5[8] = { 35, 39, 41, 44, 46, 0, 0, 0 };
            const size_t tempg7[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };
            set_pool_3_m(11, nup_four_cg1)
        } break;
        case 5: {
            const size_t tempg6[2] = { 8, 76 };
            const size_t tempg1[5] = { 34, 37, 40, 45, 49 };
            const size_t tempg5[8] = { 34, 37, 40, 45, 49, 0, 0, 0 };
            const size_t tempg7[8] = { 8, 0, 0, 0, 0, 0, 0, 0 };
            set_pool_3_m(13, nup_four_cg2)
        } break;
        case 6: {
            const size_t tempg6[2] = { 5, 12 };
            const size_t tempg1[5] = { 35, 36, 41, 44, 47 };
            const size_t tempg5[8] = { 35, 36, 41, 44, 47, 0, 0, 0 };
            const size_t tempg7[8] = { 5, 12, 0, 0, 0, 0, 0, 0 };
            set_pool_3_m(13, nup_four_cg2)
        } break;
        case 7: {
            const size_t tempg6[2] = { 9, 77 };
            const size_t tempg1[5] = { 32, 36, 40, 43, 48 };
            const size_t tempg5[8] = { 32, 36, 40, 43, 48, 0, 0, 0 };
            const size_t tempg7[8] = { 9, 0, 0, 0, 0, 0, 0, 0 };
            set_pool_3_m(13, nup_four_cg2)
        } break;
        case 8: {
            const size_t tempg6[2] = { 11, 78 };
            const size_t tempg1[5] = { 33, 38, 46, 79, 80 };
            const size_t tempg5[8] = { 33, 38, 46, 0, 0, 0, 0, 0 };
            const size_t tempg7[8] = { 11, 0, 0, 0, 0, 0, 0, 0 };
            set_pool_3_m(13, nup_four_cg2)
        } break;
        case 9: {
            const size_t tempg6[2] = { 13, 81 };
            const size_t tempg1[5] = { 35, 41, 45, 82, 83 };
            const size_t tempg5[8] = { 35, 41, 45, 0, 0, 0, 0, 0 };
            const size_t tempg7[8] = { 13, 0, 0, 0, 0, 0, 0, 0 };
            set_pool_3_m(13, nup_four_cg2)
        } break;
        case 10: {
            const size_t tempg6[2] = { 6, 7 };
            const size_t tempg1[5] = { 39, 40, 43, 49, 84 };
            const size_t tempg5[8] = { 39, 40, 43, 49, 0, 0, 0, 0 };
            const size_t tempg7[8] = { 6, 7, 0, 0, 0, 0, 0, 0 };
            set_pool_3_m(13, nup_four_cg2)
        } break;
        case 11: {
            const size_t tempg6[2] = { 73, 76 };
            const size_t tempg1[5] = { 33, 36, 48, 79, 80 };
            const size_t tempg5[8] = { 33, 36, 48, 0, 0, 0, 0, 0 };
            const size_t tempg7[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };
            set_pool_3_m(14, nup_four_cg3)
        } break;
        case 12: {
            const size_t tempg6[2] = { 14, 85 };
            const size_t tempg1[5] = { 32, 37, 41, 42, 47 };
            const size_t tempg5[8] = { 32, 37, 41, 42, 47, 0, 0, 0 };
            const size_t tempg7[8] = { 14, 0, 0, 0, 0, 0, 0, 0 };
            set_pool_3_m(14, nup_four_cg3)
        } break;
        case 13: {
            const size_t tempg6[2] = { 7, 12 };
            const size_t tempg1[5] = { 88, 46, 44, 40, 38 };
            const size_t tempg5[8] = { 46, 44, 40, 38, 0, 0, 0, 0 };
            const size_t tempg7[8] = { 7, 12, 0, 0, 0, 0, 0, 0 };
            set_pool_3_m(15, nup_four_cg4)
        } break;
        case 14: {
            const size_t tempg6[2] = { 87, 8 };
            const size_t tempg1[5] = { 82, 83, 84, 45, 41 };
            const size_t tempg5[8] = { 45, 41, 0, 0, 0, 0, 0, 0 };
            const size_t tempg7[8] = { 8, 0, 0, 0, 0, 0, 0, 0 };
            set_pool_3_m(15, nup_four_cg4)
        } break;
        case 15: {
            const size_t tempg6[2] = { 92, 10 };
            const size_t tempg1[5] = { 34, 39, 40, 43, 49 };
            const size_t tempg5[8] = { 34, 39, 40, 43, 49, 0, 0, 0 };
            const size_t tempg7[8] = { 10, 0, 0, 0, 0, 0, 0, 0 };
            set_pool_3_m(15, nup_four_cg4)
        } break;
        case 16: {
            const size_t tempg6[2] = { 93, 13 };
            const size_t tempg1[5] = { 35, 37, 41, 42, 47 };
            const size_t tempg5[8] = { 35, 37, 41, 42, 47, 0, 0, 0 };
            const size_t tempg7[8] = { 13, 0, 0, 0, 0, 0, 0, 0 };
            set_pool_3_m(15, nup_four_cg4)
        } break;
        case 17: {
            const size_t tempg6[2] = { 97, 75 };
            const size_t tempg1[5] = { 33, 38, 40, 44, 46 };
            const size_t tempg5[8] = { 33, 38, 40, 44, 46, 0, 0, 0 };
            const size_t tempg7[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };
            set_pool_3_m(16, nup_four_cg5)
        } break;
        case 18: {
            const size_t tempg6[2] = { 98, 77 };
            const size_t tempg1[5] = { 34, 39, 41, 45, 48 };
            const size_t tempg5[8] = { 34, 39, 41, 45, 48, 0, 0, 0 };
            const size_t tempg7[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };
            set_pool_3_m(16, nup_four_cg5)
        } break;
        case 19: {
            const size_t tempg6[2] = { 101, 73 };
            const size_t tempg1[5] = { 32, 36, 40, 49, 104 };
            const size_t tempg5[8] = { 32, 36, 40, 49, 0, 0, 0, 0 };
            const size_t tempg7[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };
            set_pool_3_m(17, nup_four_cg6)
        } break;
        case 20: {
            const size_t tempg6[2] = { 78, 81 };
            const size_t tempg1[5] = { 38, 42, 47, 102, 103 };
            const size_t tempg5[8] = { 38, 42, 47, 0, 0, 0, 0, 0 };
            const size_t tempg7[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };
            set_pool_3_m(17, nup_four_cg6)
        } break;
        case 21: {
            const size_t tempg6[2] = { 85, 87 };
            const size_t tempg1[5] = { 41, 43, 46, 83, 84 };
            const size_t tempg5[8] = { 41, 43, 46, 0, 0, 0, 0, 0 };
            const size_t tempg7[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };
            set_pool_3_m(18, nup_four_cg7)
        } break;
        case 22: {
            const size_t tempg6[2] = { 107, 6 };
            const size_t tempg1[5] = { 37, 40, 44, 82, 88 };
            const size_t tempg5[8] = { 37, 40, 44, 0, 0, 0, 0, 0 };
            const size_t tempg7[8] = { 6, 0, 0, 0, 0, 0, 0, 0 };
            set_pool_3_m(18, nup_four_cg7)
        } break;
        case 23: {
            const size_t tempg6[2] = { 110, 9 };
            const size_t tempg1[5] = { 35, 38, 45, 48, 80 };
            const size_t tempg5[8] = { 35, 38, 45, 48, 0, 0, 0, 0 };
            const size_t tempg7[8] = { 9, 0, 0, 0, 0, 0, 0, 0 };
            set_pool_3_m(19, nup_four_cg8)
        } break;
        case 24: {
            const size_t tempg6[2] = { 74, 5 };
            const size_t tempg1[5] = { 33, 39, 41, 49, 79 };
            const size_t tempg5[8] = { 33, 39, 41, 49, 0, 0, 0, 0 };
            const size_t tempg7[8] = { 5, 0, 0, 0, 0, 0, 0, 0 };
            set_pool_3_m(19, nup_four_cg8)
        } break;
        case 25: {
            const size_t tempg6[2] = { 112, 77 };
            const size_t tempg1[5] = { 34, 36, 42, 47, 103 };
            const size_t tempg5[8] = { 34, 36, 42, 47, 0, 0, 0, 0 };
            const size_t tempg7[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };
            set_pool_3_m(20, nup_four_cg9)
        } break;
        case 26: {
            const size_t tempg6[2] = { 112, 77 };
            const size_t tempg1[5] = { 34, 36, 42, 47, 104 };
            const size_t tempg5[8] = { 34, 36, 42, 47, 0, 0, 0, 0 };
            const size_t tempg7[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };
            set_pool_3_m(20, nup_four_cg9)
        } break;
        default: { std::cout << E_5 << "\n"; goto full_quit; }
        }
    }
    else if (chosen_banner == 4) {
        switch (chosen_event) {
        case 1: {
            const size_t nup_four_cg31[14] = { 17, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31 };
            size_nup_four_c = 14;
            for (size_t i = 0; i < 14; i++) { nup_four_c[i] = nup_four_cg31[i]; }
        } break;
        case 2: {
            const size_t nup_four_cg32[16] = { 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31 };
            size_nup_four_c = 16;
            for (size_t i = 0; i < 16; i++) { nup_four_c[i] = nup_four_cg32[i]; }
        } break;
        case 3: {
            const size_t nup_four_cg33[17] = { 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31 };
            size_nup_four_c = 17;
            for (size_t i = 0; i < 17; i++) { nup_four_c[i] = nup_four_cg33[i]; }
        } break;
        case 4: {
            const size_t nup_four_cg34[18] = { 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 71 };
            size_nup_four_c = 18;
            for (size_t i = 0; i < 18; i++) { nup_four_c[i] = nup_four_cg34[i]; }
        } break;
        case 5: {
            const size_t nup_four_cg35[19] = { 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 71, 91 };
            size_nup_four_c = 19;
            for (size_t i = 0; i < 19; i++) { nup_four_c[i] = nup_four_cg35[i]; }
        } break;
        case 6: {
            const size_t nup_four_cg36[20] = { 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 71, 91, 95 };
            size_nup_four_c = 20;
            for (size_t i = 0; i < 20; i++) { nup_four_c[i] = nup_four_cg36[i]; }
        } break;
        case 7: {
            const size_t nup_four_cg37[21] = { 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 71, 91, 95, 100 };
            size_nup_four_c = 21;
            for (size_t i = 0; i < 21; i++) { nup_four_c[i] = nup_four_cg37[i]; }
        } break;
        case 8: {
            const size_t nup_four_cg38[22] = { 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 71, 91, 95, 100, 106 };
            size_nup_four_c = 22;
            for (size_t i = 0; i < 22; i++) { nup_four_c[i] = nup_four_cg38[i]; }
        } break;
        case 9: {
            const size_t nup_four_cg39[23] = { 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 71, 91, 95, 100, 106, 108 };
            size_nup_four_c = 22;
            for (size_t i = 0; i < 23; i++) { nup_four_c[i] = nup_four_cg39[i]; }
        } break;
        default: { std::cout << E_5 << "\n"; goto full_quit; }
        }
    }
    else if (chosen_banner == 5) {
        for (size_t i = 0; i < 11; i++) {
            nup_four_c[i] = nup_four_cg1[i];
        }
    }
    else { std::cout << E_7 << "\n"; goto full_quit; }
    if (y_arg) goto core_core_loop;
    // set banner
    if (!is_cross) goto pre_core_loop;
    else if (chosen_banner == 3) min_fives = 80;
    else if (chosen_banner == 1 || chosen_banner == 2 || chosen_banner == 4) min_fives = 90;
    else min_fives = PTRDIFF_MAX;
pre_core_loop:
    if ((switch_b_sav == chosen_banner && switch_e_sav == chosen_event) || e_sav == chosen_event) is_dualcross = true;
    else is_dualcross = false;
    if (is_dualcross) goto core_loop;
    else { unmet4_c = 0; unmet4_w = 0; unmet5_c = 0; unmet5_w = 0; }
core_loop:
        if (quit) { std::cout << E_6 << "\n"; goto full_quit; }
enter_wishes_number:
        d_item_c = true;
        std::cout << "\n" << S_54 << "\n" << S_55 << "\n" << S_56 << "\n" << S_57 << "\n" << S_58 << "\n" << S_59 << "\n" << S_60;
        if (chosen_banner == 1 || chosen_banner == 2 || chosen_banner == 3 || chosen_banner == 4) { std::cout << ";\n" << S_90; }
        if (chosen_banner == 3 && chosen_event > 14) { std::cout << ";\n" << S_61; }
        std::cout << ";\n" << S_158;
        if (chosen_banner != 5) { std::cout << ";\n" << S_128; }
        std::cout << ";\n" << S_113 << "\n\n";
        std::cin >> wishes_number;
        if (cin.fail()) { wishes_number = 0; cin_error_by() goto enter_wishes_number; }
        std::cout << "\n";
        if (wishes_number == -1) { wishes_number = 0; goto enter_chosen_event; }
        else if (wishes_number == -2) {
            if (countx_l < 10) { std::cout << S_62 << "\n"; goto enter_wishes_number; }
            std::cout << S_63 << luckiest << "\n";
            for (size_t templuck = 0; templuck < 10; templuck++) {
                std::cout << luckiestlocation[templuck] << "(" << luckiestsublocation[templuck] << ")(" << luckiestsubsublocation[templuck] << ") ";
                casesx(luckiestkind[templuck]);
                    std::cout << pname[luckiestkind[templuck]] << "\n";
            }
            wishes_number = 0;
            goto enter_wishes_number;
        }
        else if (wishes_number == -3) {
        enter_cleanornot:
            std::cout << S_91 << "\n" << S_92 << "\n" << S_93 << "\n\n";
            ptrdiff_t cleanornot = 0;
            std::cin >> cleanornot;
            if (cin.fail()) { cleanornot = 0; cin_error_by2() goto enter_cleanornot; }
            std::cout << "\n";
            if (cleanornot == 1) {
                wishes_number = 0;
                four_star_assurance_number = 1;
                five_star_assurance_number = 1;
                five_star_guarantee_number = false;
                four_star_guarantee_number = false;
                countx = 0;
                five_count = 0;
                five_count_c = 0;
                five_count_w = 0;
                four_count = 0;
                four_count_c = 0;
                four_count_w = 0;
                is_noelle = true;
                ave_fives = 0;
                max_fives = 1;
                if (chosen_banner == 3) min_fives = 80;
                else if (chosen_banner == 1 || chosen_banner == 2 || chosen_banner == 4) min_fives = 90;
                else if (chosen_banner == 5) min_fives = PTRDIFF_MAX;
                else { std::cout << E_7 << "\n"; goto full_quit; }
                max_fivesth = 1;
                min_fivesth = 1;
                max_fivecount = 1;
                min_fivecount = 1;
                unmet4_c = 0;
                unmet4_w = 0;
                unmet5_c = 0;
                unmet5_w = 0;
                fate_points = 0;
                for (size_t& ini : pcount) { ini = 0; }
                luck = 0;
                for (size_t ini = 0; ini < 10; ini++) { lucklocation[ini] = static_cast<size_t> (ini) + 1; }
                for (size_t ini = 0; ini < 10; ini++) { lucksublocation[ini] = static_cast<size_t> (ini) + 1; }
                for (size_t& ini : luckkind) { ini = 127; }
                for (size_t& ini : luckstar) { ini = 3; }
                luckiest = 0;
                for (size_t ini = 0; ini < 10; ini++) { luckiestlocation[ini] = static_cast<size_t> (ini) + 1; }
                for (size_t ini = 0; ini < 10; ini++) { luckiestsublocation[ini] = static_cast<size_t> (ini) + 1; }
                for (size_t& ini : luckiestkind) { ini = 127; }
                for (size_t ini = 0; ini < 10; ini++) { four_pity[ini] = 0; }
                for (size_t& ini : five_pity) { ini = 0; }
                for (size_t& ini : five_pity_w) { ini = 0; }
                for (size_t ini = 0; ini < 127; ini++) { d_item[ini] = 0; }
                for (size_t ini = 0; ini < 127; ini++) { d_item_n[ini] = 0; }
                d_item_c = true;
                is_s_mode = false;
                std::cout << S_64 << "\n";
                goto enter_wishes_number;
            }
            else if (cleanornot == -1) {
                cleanornot = 0;
                wishes_number = 0;
                goto enter_wishes_number;
            }
            else {
                cleanornot = 0;
                wishes_number = 0;
                std::cout << S_72 << "\n\n";
                goto enter_cleanornot;
            }
        }
        else if (wishes_number == -4) {
            if (y_print) { y_print = false; std::cout << S_65 << "\n"; }
            else { y_print = true; std::cout << S_66 << "\n"; }
            wishes_number = 0;
            goto enter_wishes_number;
        }
        else if (wishes_number == -5) {
            if (chosen_banner == 5 || four_count == 0 || five_count == 0) { wishes_number = 0; std::cout << S_72 << "\n"; goto enter_wishes_number; }
            else if (chosen_banner == 1 || chosen_banner == 2 || chosen_banner == 4) {
                std::cout << S_88 << "\n\n";
                for (size_t iout = 0; iout < 10; iout++) { std::cout << iout + 1 << "  " << four_pity[iout] << "   " << static_cast<double>(four_pity[iout]) * 100.0 / static_cast<double>(four_count) << "%\n"; }
                std::cout << "10+  " << four_pity[10] << "   " << static_cast<double>(four_pity[10]) * 100.0 / static_cast<double>(four_count) << "%\n\n" << S_89 << "\n\n";
                for (size_t iout = 0; iout < 90; iout++) { std::cout << fixed << iout + 1 << "  " << five_pity[iout] << "   " << static_cast<double>(five_pity[iout]) * 100.0 / static_cast<double>(five_count) << "%\n"; }
                wishes_number = 0;
                goto enter_wishes_number;
            }
            else if (chosen_banner == 3) {
                std::cout << S_88 << "\n\n";
                for (size_t iout = 0; iout < 10; iout++) { std::cout << iout + 1 << "  " << four_pity[iout] << "   " << static_cast<double>(four_pity[iout]) * 100.0 / static_cast<double>(four_count) << "%\n"; }
                std::cout << "10+  " << four_pity[10] << "   " << static_cast<double>(four_pity[10]) * 100.0 / static_cast<double>(four_count) << "%\n\n" << S_89 << "\n\n";
                for (size_t iout = 0; iout < 80; iout++) { std::cout << fixed << iout + 1 << "  " << five_pity_w[iout] << "   " << static_cast<double>(five_pity_w[iout]) * 100.0 / static_cast<double>(five_count) << "%\n"; }
                wishes_number = 0;
                goto enter_wishes_number;
            }
            else {
                wishes_number = 0; std::cout << E_7 << "\n"; goto full_quit;
            }
        }
        else if (wishes_number == -6) {
            if (chosen_banner == 3 && chosen_event > 14) {
            enter_fate_weapon:
                std::cout << S_67 << "\n" << S_68 << "\n"
                    << S_69 << " ( " << pname[up_five_g[0]] << " ) \n"
                    << S_70 << " ( " << pname[up_five_g[1]] << " ) \n"
                    << S_71 << "\n\n";
                std::cin >> fate_weapon;
                if (cin.fail()) { fate_weapon = 0; cin_error_by2() goto enter_fate_weapon; }
                else if (fate_weapon == -1) { fate_weapon = 0; goto enter_wishes_number; }
                else if (fate_weapon > 2) { std::cout << "\n" << S_72 << "\n\n"; fate_weapon = 0; goto enter_fate_weapon; }
                else fate_points = 0;
                wishes_number = 0;
                goto enter_wishes_number;
            }
            else {
                wishes_number = 0; std::cout << S_72 << "\n"; goto enter_wishes_number;
            }
        }
        else if (wishes_number == -7) {
            if (y_luck) { y_luck = false; std::cout << S_156 << "\n"; }
            else { y_luck = true; std::cout << S_157 << "\n"; }
            wishes_number = 0;
            goto enter_wishes_number;
        }
        else if (wishes_number == -31) {
            if (chosen_banner == 5) { wishes_number = 0; std::cout << S_72 << "\n"; goto enter_wishes_number; }
            ptrdiff_t sav[16] = { 0 };
            size_t else_counter = 0;
            if (chosen_banner == 3 && chosen_event > 14) {
            enter_profile_0:
                std::cout << S_138 << "\n" << S_139 << "\n\n" << S_67 << "\n"
                    << S_69 << " ( " << pname[up_five_g[0]] << " ) \n"
                    << S_70 << " ( " << pname[up_five_g[1]] << " ) \n"
                    << S_71 << "\n\n";
                std::cin >> sav[8];
                if (cin.fail()) { sav[8] = 0; cin_error_by2() goto enter_profile_0; }
                else if (sav[8] == -1) { sav[8] = 0; wishes_number = 0; goto enter_wishes_number; }
                else if (sav[8] == -2) { goto apply_profile; }
                else if (sav[8] < -1 || sav[8] > 2) { sav[8] = 0; std::cout << "\n" << S_72 << "\n\n"; goto enter_profile_0; }
                else if (sav[8] == 0) { std::cout << "\n"; goto enter_profile_1; }
                else { else_counter++; }
                std::cout << "\n";
            enter_profile_01:
                std::cout << S_138 << "\n" << S_139 << "\n\n" << S_140 << "\n\n";
                std::cin >> sav[9];
                if (cin.fail()) { sav[9] = 0; cin_error_by2() goto enter_profile_01; }
                else if (sav[9] == -1) { sav[9] = 0; wishes_number = 0; goto enter_wishes_number; }
                else if (sav[9] == -2) { goto apply_profile; }
                else if (sav[9] != 0 && sav[9] != 1 && sav[9] != 2) { sav[9] = 0; std::cout << "\n" << S_72 << "\n"; goto enter_profile_01; }
                else { else_counter++; }
                std::cout << "\n";
            }
            else { else_counter++; }
        enter_profile_1:
            std::cout << S_138 << "\n" << S_139 << "\n\n" << S_129 << "\n\n";
            std::cin >> sav[0];
            if (cin.fail()) { sav[0] = 0; cin_error_by2() goto enter_profile_1; }
            else if (sav[0] == -1) { sav[0] = 0; wishes_number = 0; goto enter_wishes_number; }
            else if (sav[0] == -2) { goto apply_profile; }
            else if (sav[0] != 1 && sav[0] != 0) { sav[0] = 0; std::cout << "\n" << S_72 << "\n\n"; goto enter_profile_1; }
            else { else_counter++; }
            std::cout << "\n";
        enter_profile_2:
            std::cout << S_138 << "\n" << S_139 << "\n\n" << S_130 << S_137 << "\n\n";
            std::cin >> sav[1];
            if (cin.fail()) { sav[1] = 0; cin_error_by() goto enter_profile_2; }
            else if (sav[1] == -1) { sav[1] = 0; wishes_number = 0; goto enter_wishes_number; }
            else if (sav[1] == -2) { goto apply_profile; }
            else if (((chosen_banner == 1 || chosen_banner == 2 || chosen_banner == 4) && sav[1] > 89) || (chosen_banner == 3 && sav[1] > 79) || sav[1] < 0) { sav[1] = 0; std::cout << "\n" << S_72 << "\n\n"; goto enter_profile_2; }
            else { else_counter++; }
            std::cout << "\n";
        enter_profile_3:
            std::cout << S_138 << "\n" << S_139 << "\n\n" << S_131 << "\n\n";
            std::cin >> sav[2];
            if (cin.fail()) { sav[2] = 0; cin_error_by() goto enter_profile_3; }
            else if (sav[2] == -1) { sav[2] = 0; wishes_number = 0; goto enter_wishes_number; }
            else if (sav[2] == -2) { goto apply_profile; }
            else if (sav[2] != 1 && sav[2] != 0) { sav[2] = 0; std::cout << "\n" << S_72 << "\n\n"; goto enter_profile_3; }
            else { else_counter++; }
            std::cout << "\n";
        enter_profile_4:
            std::cout << S_138 << "\n" << S_139 << "\n\n" << S_132 << S_137 << "\n\n";
            std::cin >> sav[3];
            if (cin.fail()) { sav[3] = 0; cin_error_by() goto enter_profile_4; }
            else if (sav[3] == -1) { sav[3] = 0; wishes_number = 0; goto enter_wishes_number; }
            else if (sav[3] == -2) { goto apply_profile; }
            else if (sav[3] < 0) { sav[3] = 0; std::cout << "\n" << S_72 << "\n\n"; goto enter_profile_4; }
            else { else_counter++; }
            std::cout << "\n";
        enter_profile_5:
            std::cout << S_138 << "\n" << S_139 << "\n\n" << S_133 << S_137 << "\n\n";
            std::cin >> sav[4];
            if (cin.fail()) { sav[4] = 0; cin_error_by() goto enter_profile_5; }
            else if (sav[4] == -1) { sav[4] = 0; wishes_number = 0; goto enter_wishes_number; }
            else if (sav[4] == -2) { goto apply_profile; }
            else if (sav[4] < 0) { sav[4] = 0; std::cout << "\n" << S_72 << "\n\n"; goto enter_profile_5; }
            else if ((chosen_banner == 1 || chosen_banner == 2 || chosen_banner == 4) && sav[4] > 89) { sav[1] = 0; std::cout << "\n" << S_72 << "\n"; goto enter_profile_5; }
            else if (chosen_banner == 3 && sav[4] > 79) { sav[1] = 0; std::cout << "\n" << S_72 << "\n\n"; goto enter_profile_5; }
            else { else_counter++; }
            std::cout << "\n";
            if (chosen_banner == 3 || chosen_banner == 4) {
            enter_profile_6:
                std::cout << S_138 << "\n" << S_139 << "\n\n" << S_134 << S_137 << "\n\n";
                std::cin >> sav[5];
                if (cin.fail()) { sav[5] = 0; cin_error_by() goto enter_profile_6; }
                else if (sav[5] == -1) { sav[5] = 0; wishes_number = 0; goto enter_wishes_number; }
                else if (sav[5] == -2) { goto apply_profile; }
                else if (sav[5] < 0 || (chosen_banner == 4 && sav[4] > 89) || (chosen_banner == 3 && sav[4] > 79)) { sav[5] = 0; std::cout << "\n" << S_72 << "\n\n"; goto enter_profile_6; }
                else { else_counter++; }
            }
            std::cout << "\n";
        enter_profile_7:
            std::cout << S_138 << "\n" << S_139 << "\n\n" << S_135 << S_137 << "\n\n";
            std::cin >> sav[6];
            if (cin.fail()) { sav[6] = 0; cin_error_by() goto enter_profile_7; }
            else if (sav[6] == -1) { sav[6] = 0; wishes_number = 0; goto enter_wishes_number; }
            else if (sav[6] == -2) { goto apply_profile; }
            else if (sav[6] < 0) { sav[6] = 0; std::cout << "\n" << S_72 << "\n\n"; goto enter_profile_7; }
            else { else_counter++; }
            std::cout << "\n";
        enter_profile_8:
            std::cout << S_138 << "\n" << S_139 << "\n\n" << S_136 << S_137 << "\n\n";
            std::cin >> sav[7];
            if (cin.fail()) { sav[7] = 0; cin_error_by() goto enter_profile_8; }
            else if (sav[7] == -1) { sav[7] = 0; wishes_number = 0; goto enter_wishes_number; }
            else if (sav[7] == -2) { goto apply_profile; }
            else if (sav[7] < 0) { sav[7] = 0; std::cout << "\n" << S_72 << "\n\n"; goto enter_profile_8; }
            else { else_counter++; }
            std::cout << "\n";
        apply_profile:
            std::cout << "\n" << S_141 << "\n";
            if (sav[1] == sav[3] || (sav[4] != sav[1] && sav[5] != sav[1]) || (sav[6] != sav[3] && sav[7] != sav[3]) || (chosen_banner != 3 && sav[4] > 89 && sav[5] > 89) || (chosen_banner == 3 && sav[4] > 79 && sav[5] > 79) ) check_profile_throw()
            std::cout << "\n" << S_142 << "\n";
            five_star_guarantee_number = static_cast<bool> (sav[0]);
            five_star_assurance_number = sav[1];
            four_star_guarantee_number = static_cast<bool> (sav[2]);
            four_star_assurance_number = sav[3];
            if (sav[4] > 0) unmet5_c = sav[4] - 1; else unmet5_c = 0;
            if (sav[5] > 0) unmet5_w = sav[5] - 1; else unmet5_w = 0;
            if (sav[6] > 0) unmet4_c = sav[6] - 1; else unmet4_c = 0;
            if (sav[7] > 0) unmet4_w = sav[7] - 1; else unmet4_w = 0;
            fate_weapon = sav[8];
            wishes_number = 0;
            goto enter_wishes_number;
        }
        else if (wishes_number == -63) {
            wishes_number = 0;
            is_s_mode = true;
            bool zero_input_check = true;
            bool zero_input_recheck = true;
            while (true) {
                ptrdiff_t ij = 0;
            enter_ij:
                std::cout << S_114 << "\n\n" << S_121 << "\n";
                for (size_t uk5 : three_g) {
                    std::cout << uk5 << ": " << pnameshort[uk5] << "\n";
                    d_item[uk5] = 1;
                }
                if (chosen_banner == 1 || chosen_banner == 2) {
                    std::cout << "\n" << S_120 << "\n";
                    for (size_t uk3 = 0; uk3 < size_nup_four_c; uk3++) {
                        std::cout << nup_four_c[uk3] << ": " << pnameshort[nup_four_c[uk3]] << "\n";
                        d_item[nup_four_c[uk3]] = 1;
                    }
                    for (size_t uk4 = 0; uk4 < 18; uk4++) {
                        std::cout << nup_four_w[uk4] << ": " << pnameshort[nup_four_w[uk4]] << "\n";
                        d_item[nup_four_w[uk4]] = 1;
                    }
                    std::cout << "\n" << S_119 << "\n";
                    for (size_t uk2 = 0; uk2 < 3; uk2++) {
                        std::cout << up_four_g[uk2] << ": " << pnameshort[up_four_g[uk2]] << "\n";
                        d_item[up_four_g[uk2]] = 1;
                    }
                    std::cout << "\n" << S_118 << "\n";
                    for (size_t ukt = 0; ukt < 5; ukt++) {
                        std::cout << nup_five_c[ukt] << ": " << pnameshort[nup_five_c[ukt]] << "\n";
                        d_item[nup_five_c[ukt]] = 1;
                    }
                    std::cout << "\n" << S_117 << "\n" << up_five << ": " << pnameshort[up_five] << "\n";
                    d_item[up_five] = 1;
                }
                else if (chosen_banner == 3) {
                    std::cout << "\n" << S_120 << "\n";
                    for (size_t uk3 = 0; uk3 < size_nup_four_c; uk3++) {
                        std::cout << nup_four_c[uk3] << ": " << pnameshort[nup_four_c[uk3]] << "\n";
                        d_item[nup_four_c[uk3]] = 1;
                    }
                    for (size_t uk4 = 0; uk4 < 18; uk4++) {
                        std::cout << nup_four_w[uk4] << ": " << pnameshort[nup_four_w[uk4]] << "\n";
                        d_item[nup_four_w[uk4]] = 1;
                    }
                    std::cout << "\n" << S_119 << "\n";
                    for (size_t uk2 = 0; uk2 < 5; uk2++) {
                        std::cout << up_four_g[uk2] << ": " << pnameshort[up_four_g[uk2]] << "\n";
                        d_item[up_four_g[uk2]] = 1;
                    }
                    std::cout << "\n" << S_118 << "\n";
                    for (size_t uktt = 0; uktt < 10; uktt++) {
                        std::cout << nup_five_w[uktt] << ": " << pnameshort[nup_five_w[uktt]] << "\n";
                        d_item[nup_five_w[uktt]] = 1;
                    }
                    std::cout << "\n" << S_117 << "\n";
                    for (size_t uk = 0; uk < 2; uk++) {
                        std::cout << up_five_g[uk] << ": " << pnameshort[up_five_g[uk]] << "\n";
                        d_item[up_five_g[uk]] = 1;
                    }
                }
                else if (chosen_banner == 4) {
                    std::cout << "\n" << S_120 << "\n";
                    for (size_t uk3 = 0; uk3 < size_nup_four_c; uk3++) {
                        std::cout << nup_four_c[uk3] << ": " << pnameshort[nup_four_c[uk3]] << "\n";
                        d_item[nup_four_c[uk3]] = 1;
                    }
                    for (size_t uk4 = 0; uk4 < 18; uk4++) {
                        std::cout << nup_four_w[uk4] << ": " << pnameshort[nup_four_w[uk4]] << "\n";
                        d_item[nup_four_w[uk4]] = 1;
                    }
                    std::cout << "\n" << S_118 << "\n";
                    for (size_t ukt = 0; ukt < 5; ukt++) {
                        std::cout << nup_five_c[ukt] << ": " << pnameshort[nup_five_c[ukt]] << "\n";
                        d_item[nup_five_c[ukt]] = 1;
                    }
                    for (size_t uktt = 0; uktt < 10; uktt++) {
                        std::cout << nup_five_w[uktt] << ": " << pnameshort[nup_five_w[uktt]] << "\n";
                        d_item[nup_five_w[uktt]] = 1;
                    }
                }
                else if (chosen_banner == 5) {
                    std::cout << "\n" << S_120 << "\n";
                    for (size_t uk3 = 0; uk3 < 11; uk3++) {
                        std::cout << nup_four_c[uk3] << ": " << pnameshort[nup_four_c[uk3]] << "\n";
                        d_item[nup_four_c[uk3]] = 1;
                    }
                    std::cout << "\n" << S_118 << "\n";
                    for (size_t ukt = 0; ukt < 5; ukt++) {
                        std::cout << nup_five_c[ukt] << ": " << pnameshort[nup_five_c[ukt]] << "\n";
                        d_item[nup_five_c[ukt]] = 1;
                    }
                }
                else { std::cout << E_7 << "\n"; goto full_quit; }
                std::cout << "\n" << S_116 << "\n" << S_123 << "\n\n";
                std::cin >> ij;
                if (cin.fail()) { ij = 0; cin_error_by2() goto enter_ij; }
                if (ij == -1 && zero_input_check) { ij = 0; d_item_c = false; std::cout << "\n" << S_125 << "\n"; goto core_loop; }
                else if (ij == -1) { ij = 0; std::cout << "\n" << S_85 << "\n\n"; goto core_core_loop; }
                else if (ij == -2) { ij = 0; for (size_t qi = 0; qi < 108; qi++) d_item_n[qi] = 0; std::cout << "\n"; goto enter_wishes_number; }
                else if (ij > -1) {
                    if (ij > 127 || d_item[ij] == 0) { ij = 0; std::cout << "\n" << S_122 << "\n\n"; goto enter_ij; }
                    zero_input_check = false;
                enter_d_item:
                    std::cout << "\n" << S_115 << pnameshort[ij] << S_124 << "\n\n";
                    std::cin >> d_item_n[ij];
                    if (cin.fail()) { d_item_n[ij] = 0; cin_error_by() goto enter_d_item; }
                    if (d_item_n[ij] > 0) { zero_input_recheck = false; }
                    if ((countx < 1 && zero_input_recheck) || d_item_n[ij] > LLONG_MAX) { std::cout << "\n" << S_72 << "\n"; goto enter_d_item; }
                    std::cout << "\n";
                }
                else { ij = 0; std::cout << S_72 << "\n"; goto enter_ij; }
            }
        }
        else if (wishes_number == -127) {
            wishes_number = 0;
            std::cout <<
                V_1 << "chosen_banner = " << chosen_banner << "\n" <<
                V_2 << "chosen_event = " << chosen_event << "\n" <<
                V_3 << "up_five = " << up_five << "\n" <<
                V_4 << "y_print = " << y_print << "\n" <<
                V_42 << "y_luck = " << y_luck << "\n" <<
                V_5 << "four_star_assurance_number = " << four_star_assurance_number << "\n" <<
                V_6 << "five_star_assurance_number = " << five_star_assurance_number << "\n" <<
                V_7 << "four_star_guarantee_number = " << four_star_guarantee_number << "\n" <<
                V_8 << "five_star_guarantee_number = " << five_star_guarantee_number << "\n" <<
                V_9 << "countx = " << countx << "\n" <<
                V_10 << "five_count = " << five_count << "\n" <<
                V_11 << "five_count_c = " << five_count_c << "\n" <<
                V_12 << "five_count_w = " << five_count_w << "\n" <<
                V_13 << "four_count = " << four_count << "\n" <<
                V_14 << "four_count_c = " << four_count_c << "\n" <<
                V_15 << "four_count_w = " << four_count_w << "\n" <<
                V_16 << "is_noelle = " << is_noelle << "\n" <<
                V_17 << "ave_fives = " << ave_fives << "\n" <<
                V_18 << "max_fives = " << max_fives << "\n" <<
                V_19 << "min_fives = " << min_fives << "\n" <<
                V_20 << "max_fivesth = " << max_fivesth << "\n" <<
                V_21 << "min_fivesth = " << min_fivesth << "\n" <<
                V_22 << "max_fivecount = " << max_fivecount << "\n" <<
                V_23 << "min_fivecount = " << min_fivecount << "\n" <<
                V_24 << "unmet4_c = " << unmet4_c << "\n" <<
                V_25 << "unmet4_w = " << unmet4_w << "\n" <<
                V_26 << "unmet5_c = " << unmet5_c << "\n" <<
                V_27 << "unmet5_w = " << unmet5_w << "\n" <<
                V_28 << "five_weight = " << five_weight << "\n" <<
                V_29 << "four_weight = " << four_weight << "\n" <<
                V_30 << "three_weight = " << three_weight << "\n" <<
                V_31 << "size_nup_four_c = " << size_nup_four_c << "\n" <<
                V_32 << "size_nup_four_w = " << size_nup_four_w << "\n" <<
                V_33 << "is_cross = " << is_cross << "\n" <<
                V_34 << "is_dualcross = " << is_dualcross << "\n" <<
                V_35 << "switch_b_should_be = " << switch_b_should_be << "\n" <<
                V_36 << "switch_e_should_be = " << switch_e_should_be << "\n" <<
                V_37 << "fate_weapon = " << fate_weapon << "\n" <<
                V_38 << "fate_points = " << fate_points << "\n" <<
                V_39 << "luckiest = " << luckiest << "\n" <<
                V_40 << "d_item_c = " << d_item_c << "\n" <<
                V_41 << "is_s_mode = " << is_s_mode << "\n" <<
                V_43 << "countx_l = " << countx_l << "\n\n";
            goto enter_wishes_number;
        }
        else if (wishes_number < 1) { wishes_number = 0; std::cout << S_72 << "\n"; goto enter_wishes_number; }
        else { 
            std::cout << S_85 << "\n";
            if (!y_print) {
                if (!y_luck) {
                    std::cout << S_159 << S_156 << "\n";
                }
                else {
                    std::cout << S_159 << S_157 << "\n";
                }
            }
            std::cout << "\n";
        }
    core_core_loop:
        countx_r = countx;
        if (y_arg) { std::cout << S_1 << "\n" << S_2 << "\n" << S_3 << "\n" << S_4 << "\n\n" << S_85 << "\n\n"; }
        if (!is_s_mode) { d_item_c = false; }
        starty = std::chrono::system_clock::now();
        if (chosen_banner == 1 || chosen_banner == 2) {
            while (wishes_number > 0 || d_item_c) {
                const size_t temp1 = generatorz() % 2;
                size_t star = 0; //4-star or 5-star
                size_t type = 0; //Up or non-up, character or weapon
                size_t kind = 0; //which exactly
                if (five_star_assurance_number < 74) five_weight = 60;
                else five_weight = 60 + 600 * (five_star_assurance_number - 73);
                if (four_star_assurance_number < 9) four_weight = 510;
                else four_weight = 510 + 5100 * (four_star_assurance_number - 8);
                three_weight = 9430;
                const ptrdiff_t weight[3] = { five_weight, four_weight, three_weight };
                resultt = WRSpick(weight, 3);
                switch (resultt) {
                case 0: {
                    star = 5;
                    five_count++;
                    ave_fives += five_star_assurance_number;
                    if (five_star_assurance_number > max_fives) { max_fives = five_star_assurance_number; max_fivesth = five_count; max_fivecount = countx; }
                    if (five_star_assurance_number < min_fives) { min_fives = five_star_assurance_number; min_fivesth = five_count; min_fivecount = countx; }
                    five_pity[five_star_assurance_number - 1]++;
                    five_star_assurance_number = 0;
                    if (five_star_guarantee_number || temp1 < 1) {
                        type = 1;
                        five_count_c++;
                        kind = up_five;
                        five_star_guarantee_number = false;
                    }
                    else {
                        type = 2;
                        five_count_c++;
                        kind = rspick(nup_five_c, 5);
                        if (kind == five_check[0]) five_star_guarantee_number = false; else five_star_guarantee_number = true;
                    }// 5-star kind settler for banner I
                } break;
                case 1: {
                    star = 4;
                    four_count++;
                    if (four_star_assurance_number < 11) four_pity[four_star_assurance_number - 1]++;
                    else four_pity[10]++;
                    four_star_assurance_number = 0;
                    if (four_star_guarantee_number || temp1 < 1) {
                        type = 1;
                        four_count_c++;
                        unmet4_c = 0;
                        kind = rspick(up_four_g, 3);
                        four_star_guarantee_number = false;
                    }
                    else {
                        if (unmet4_c < 17 && unmet4_w < 17) {
                            const ptrdiff_t weight1[2] = { 255, 255 };
                            resultu = WRSpick(weight1, 2);
                            switch (resultu) {
                            case 0: {
                                type = 2;
                                four_count_c++;
                                unmet4_c = 0;
                                kind = rspick(nup_four_c, size_nup_four_c);
                                if ((kind == four_check[0] || kind == four_check[1] || kind == four_check[2] || kind == four_check[3] || kind == four_check[4] || kind == four_check[5] || kind == four_check[6] || kind == four_check[7])) four_star_guarantee_number = false; else four_star_guarantee_number = true;
                            } break;
                            case 1: {
                                type = 3;
                                four_count_w++;
                                unmet4_w = 0;
                                kind = rspick(nup_four_w, size_nup_four_w);
                                four_star_guarantee_number = true;
                            } break;
                            default: std::cout << E_4 << "\n"; break;
                            }
                        }
                        else if (unmet4_c > 16) {
                            const ptrdiff_t weight1[2] = { 255 + 2550 * (unmet4_c - 16), 255 };
                            resultu = WRSpick(weight1, 2);
                            switch (resultu) {
                            case 0: {
                                type = 2;
                                four_count_c++;
                                unmet4_c = 0;
                                kind = rspick(nup_four_c, size_nup_four_c);
                                if ((kind == four_check[0] || kind == four_check[1] || kind == four_check[2] || kind == four_check[3] || kind == four_check[4] || kind == four_check[5] || kind == four_check[6] || kind == four_check[7])) four_star_guarantee_number = false; else four_star_guarantee_number = true;
                            } break;
                            case 1: {
                                type = 3;
                                four_count_w++;
                                unmet4_w = 0;
                                kind = rspick(nup_four_w, size_nup_four_w);
                                four_star_guarantee_number = true;
                            } break;
                            default: std::cout << E_4 << "\n"; break;
                            }
                        }
                        else {
                            const ptrdiff_t weight1[2] = { 255 + 2550 * (unmet4_w - 16), 255 };
                            resultu = WRSpick(weight1, 2);
                            switch (resultu) {
                            case 0: {
                                type = 3;
                                four_count_w++;
                                unmet4_w = 0;
                                kind = rspick(nup_four_w, size_nup_four_w);
                                four_star_guarantee_number = true;
                            } break;
                            case 1: {
                                type = 2;
                                four_count_c++;
                                unmet4_c = 0;
                                kind = rspick(nup_four_c, size_nup_four_c);
                                if ((kind == four_check[0] || kind == four_check[1] || kind == four_check[2] || kind == four_check[3] || kind == four_check[4] || kind == four_check[5] || kind == four_check[6] || kind == four_check[7])) four_star_guarantee_number = false; else four_star_guarantee_number = true;
                            } break;
                            default: std::cout << E_4 << "\n"; break;
                            }
                        }
                    }
                } break;
                case 2: Tri() break;
                default: std::cout << E_3 << "\n"; break;
                }
                output_string()
                if (star != 4 || type == 3) unmet4_c++;
                if (star != 4 || type != 3) unmet4_w++;
                if (!y_arg && y_luck) {
                    luckget()
                    if (star == 4 || star == 5) {
                        for (const size_t templuck : luckstar) {
                            if (templuck == 5) luck += 6232;
                            else if (templuck == 4) luck += 766;
                            else luck += 0;
                        }
                    }
                    luckcpy()
                    is_mode()
                }
            }
        }
        else if (chosen_banner == 3) {
            while (wishes_number > 0 || d_item_c) {
                const size_t temp1 = generatorz() % 4;
                size_t star = 0; //4-star or 5-star
                size_t type = 0; //Up or non-up, character or weapon
                size_t kind = 0; //which exactly
                if (five_star_assurance_number < 63) five_weight = 70;
                else if (five_star_assurance_number < 74) five_weight = 70 + 700 * (five_star_assurance_number - 62);
                else five_weight = 7770 + 350 * (five_star_assurance_number - 73);
                if (four_star_assurance_number < 8) four_weight = 600;
                else if (four_star_assurance_number == 8) four_weight = 6600;
                else four_weight = 6600 + 3000 * (four_star_assurance_number - 8);
                three_weight = 9330;
                const ptrdiff_t weight[3] = { five_weight, four_weight, three_weight };
                resultt = WRSpick(weight, 3);
                switch (resultt) {
                case 0: {
                    star = 5;
                    five_count++;
                    ave_fives += five_star_assurance_number;
                    if (five_star_assurance_number > max_fives) { max_fives = five_star_assurance_number; max_fivesth = five_count; max_fivecount = countx; }
                    if (five_star_assurance_number < min_fives) { min_fives = five_star_assurance_number; min_fivesth = five_count; min_fivecount = countx; }
                    five_pity_w[five_star_assurance_number - 1]++;
                    five_star_assurance_number = 0;
                    if (fate_weapon == 1 || fate_weapon == 2) {
                        if (fate_points == 2) {
                            type = 1;
                            five_count_w++;
                            kind = up_five_g[fate_weapon - 1];
                            fate_points = 0;
                            five_star_guarantee_number = false;
                        }
                        else if (five_star_guarantee_number || temp1 < 3) {
                            type = 1;
                            five_count_w++;
                            kind = rspick(up_five_g, 2);
                            if (kind == up_five_g[fate_weapon - 1]) fate_points = 0; else fate_points++;
                            five_star_guarantee_number = false;
                        }
                        else {
                            type = 2;
                            five_count_w++;
                            kind = rspick(nup_five_w, 10);
                            fate_points++;
                            if ((kind == five_check[0] || kind == five_check[1] || kind == five_check[2] || kind == five_check[3] || kind == five_check[4] || kind == five_check[5] || kind == five_check[6] || kind == five_check[7])) five_star_guarantee_number = false; else five_star_guarantee_number = true;
                        }
                    }
                    else if (fate_weapon == 0) {
                        if (five_star_guarantee_number || temp1 < 3) {
                            type = 1;
                            five_count_w++;
                            kind = rspick(up_five_g, 2);
                            five_star_guarantee_number = false;
                        }
                        else {
                            type = 2;
                            five_count_w++;
                            kind = rspick(nup_five_w, 10);
                            if ((kind == five_check[0] || kind == five_check[1] || kind == five_check[2] || kind == five_check[3] || kind == five_check[4] || kind == five_check[5] || kind == five_check[6] || kind == five_check[7])) five_star_guarantee_number = false; else five_star_guarantee_number = true;
                        }
                    }
                    else { std::cout << E_2 << "\n"; goto full_quit; }
                } break;
                case 1: {
                    star = 4;
                    four_count++;
                    if (four_star_assurance_number < 11) four_pity[four_star_assurance_number - 1]++;
                    else four_pity[10]++;
                    four_star_assurance_number = 0;
                    if (four_star_guarantee_number || temp1 < 3) {
                        type = 1;
                        four_count_w++;
                        unmet4_w = 0;
                        kind = rspick(up_four_g, 5);
                        four_star_guarantee_number = false;
                    }
                    else {
                        if (unmet4_c < 15 && unmet4_w < 15) {
                            const ptrdiff_t weight2[2] = { 300, 300 };
                            resultu = WRSpick(weight2, 2);
                            switch (resultu) {
                            case 0: {
                                type = 2;
                                four_count_c++;
                                unmet4_c = 0;
                                kind = rspick(nup_four_c, size_nup_four_c);
                                four_star_guarantee_number = true;
                            } break;
                            case 1: {
                                type = 3;
                                four_count_w++;
                                unmet4_w = 0;
                                kind = rspick(nup_four_w, size_nup_four_w);
                                if ((kind == four_check[0] || kind == four_check[1] || kind == four_check[2] || kind == four_check[3] || kind == four_check[4] || kind == four_check[5] || kind == four_check[6] || kind == four_check[7])) four_star_guarantee_number = false; else four_star_guarantee_number = true;
                            } break;
                            default: std::cout << E_4 << "\n"; break;
                            }
                        }
                        else if (unmet4_c > 14) {
                            const ptrdiff_t weight2[2] = { 300 + 3000 * (unmet4_c - 14), 300 };
                            resultu = WRSpick(weight2, 2);
                            switch (resultu) {
                            case 0: {
                                type = 2;
                                four_count_c++;
                                unmet4_c = 0;
                                kind = rspick(nup_four_c, size_nup_four_c);
                                four_star_guarantee_number = true;
                            } break;
                            case 1: {
                                type = 3;
                                four_count_w++;
                                unmet4_w = 0;
                                kind = rspick(nup_four_w, size_nup_four_w);
                                if ((kind == four_check[0] || kind == four_check[1] || kind == four_check[2] || kind == four_check[3] || kind == four_check[4] || kind == four_check[5] || kind == four_check[6] || kind == four_check[7])) four_star_guarantee_number = false; else four_star_guarantee_number = true;
                            } break;
                            default: std::cout << E_4 << "\n"; break;
                            }
                        }
                        else {
                            const ptrdiff_t weight2[2] = { 300 + 3000 * (unmet4_w - 14), 300 };
                            resultu = WRSpick(weight2, 2);
                            switch (resultu) {
                            case 0: {
                                type = 3;
                                four_count_w++;
                                unmet4_w = 0;
                                kind = rspick(nup_four_w, size_nup_four_w);
                                if ((kind == four_check[0] || kind == four_check[1] || kind == four_check[2] || kind == four_check[3] || kind == four_check[4] || kind == four_check[5] || kind == four_check[6] || kind == four_check[7])) four_star_guarantee_number = false; else four_star_guarantee_number = true;
                            } break;
                            case 1: {
                                type = 2;
                                four_count_c++;
                                unmet4_c = 0;
                                kind = rspick(nup_four_c, size_nup_four_c);
                                four_star_guarantee_number = true;
                            } break;
                            default: std::cout << E_4 << "\n"; break;
                            }
                        }
                    }
                } break;
                case 2: Tri() break;
                default: std::cout << E_3 << "\n"; break;
                }
                output_string()
                if (star != 4 || type == 3) unmet4_c++;
                if (star != 4 || type != 3) unmet4_w++;
                if (!y_arg && y_luck) {
                    luckget()
                    if (star == 4 || star == 5) {
                        for (const size_t templuck : luckstar) {
                            if (templuck == 5) luck += 5328;
                            else if (templuck == 4) luck += 674;
                            else luck += 0;
                        }
                    }
                    luckcpy()
                    is_mode()
                }
            }
        }
        else if (chosen_banner == 4) {
            while (wishes_number > 0 || d_item_c) {
                size_t star = 0; //4-star or 5-star
                size_t type = 0; //Up or non-up, character or weapon
                size_t kind = 0; //which exactly
                if (five_star_assurance_number < 74) five_weight = 60;
                else five_weight = 60 + 600 * (five_star_assurance_number - 73);
                if (four_star_assurance_number < 9) four_weight = 510;
                else four_weight = 510 + 5100 * (four_star_assurance_number - 8);
                three_weight = 9430;
                const ptrdiff_t weight[3] = { five_weight, four_weight, three_weight };
                resultt = WRSpick(weight, 3);
                switch (resultt) {
                case 0: {
                    star = 5;
                    five_count++;
                    ave_fives += five_star_assurance_number;
                    if (five_star_assurance_number > max_fives) { max_fives = five_star_assurance_number; max_fivesth = five_count; max_fivecount = countx; }
                    if (five_star_assurance_number < min_fives) { min_fives = five_star_assurance_number; min_fivesth = five_count; min_fivecount = countx; }
                    five_pity[five_star_assurance_number - 1]++;
                    five_star_assurance_number = 0;
                    if (unmet5_c < 147 && unmet5_w < 147) {
                        const ptrdiff_t weight4[2] = { 30, 30 };
                        resultu = WRSpick(weight4, 2);
                        switch (resultu) {
                        case 0: {
                            type = 1;
                            five_count_c++;
                            unmet5_c = 0;
                            kind = rspick(nup_five_c, 5);
                        } break;
                        case 1: {
                            type = 2;
                            five_count_w++;
                            unmet5_w = 0;
                            kind = rspick(nup_five_w, 10);
                        } break;
                        default: std::cout << E_4 << "\n"; break;
                        }
                    }
                    else if (unmet5_c > 146) {
                        const ptrdiff_t weight4[2] = { 30 + 300 * (unmet5_c - 146), 30 };
                        resultu = WRSpick(weight4, 2);
                        switch (resultu) {
                        case 0: {
                            type = 1;
                            five_count_c++;
                            unmet5_c = 0;
                            kind = rspick(nup_five_c, 5);
                        } break;
                        case 1: {
                            type = 2;
                            five_count_w++;
                            unmet5_w = 0;
                            kind = rspick(nup_five_w, 10);
                        } break;
                        default: std::cout << E_4 << "\n"; break;
                        }
                    }
                    else {
                        const ptrdiff_t weight4[2] = { 30 + 300 * (unmet5_w - 146), 30 };
                        resultu = WRSpick(weight4, 2);
                        switch (resultu) {
                        case 0: {
                            type = 2;
                            five_count_w++;
                            unmet5_w = 0;
                            kind = rspick(nup_five_w, 10);
                        } break;
                        case 1: {
                            type = 1;
                            five_count_c++;
                            unmet5_c = 0;
                            kind = rspick(nup_five_c, 5);
                        } break;
                        default: std::cout << E_4 << "\n"; break;
                        }
                    }
                } break;
                case 1: {
                    star = 4;
                    four_count++;
                    if (four_star_assurance_number < 11) four_pity[four_star_assurance_number - 1]++;
                    else four_pity[10]++;
                    four_star_assurance_number = 0;
                    if (unmet4_c < 17 && unmet4_w < 17) {
                        const ptrdiff_t weight3[2] = { 255, 255 };
                        resultu = WRSpick(weight3, 2);
                        switch (resultu) {
                        case 0: {
                            type = 1;
                            four_count_c++;
                            unmet4_c = 0;
                            kind = rspick(nup_four_c, size_nup_four_c);
                        } break;
                        case 1: {
                            type = 2;
                            four_count_w++;
                            unmet4_w = 0;
                            kind = rspick(nup_four_w, size_nup_four_w);
                        } break;
                        default: std::cout << E_4 << "\n"; break;
                        }
                    }
                    else if (unmet4_c > 16) {
                        const ptrdiff_t weight3[2] = { 255 + 2550 * (unmet4_c - 16), 255 };
                        resultu = WRSpick(weight3, 2);
                        switch (resultu) {
                        case 0: {
                            type = 1;
                            four_count_c++;
                            unmet4_c = 0;
                            kind = rspick(nup_four_c, size_nup_four_c);
                        } break;
                        case 1: {
                            type = 2;
                            four_count_w++;
                            unmet4_w = 0;
                            kind = rspick(nup_four_w, size_nup_four_w);
                        } break;
                        default: std::cout << E_4 << "\n"; break;
                        }
                    }
                    else {
                        const ptrdiff_t weight3[2] = { 255 + 2550 * (unmet4_w - 16), 255 };
                        resultu = WRSpick(weight3, 2);
                        switch (resultu) {
                        case 0: {
                            type = 2;
                            four_count_w++;
                            unmet4_w = 0;
                            kind = rspick(nup_four_w, size_nup_four_w);
                        } break;
                        case 1: {
                            type = 1;
                            four_count_c++;
                            unmet4_c = 0;
                            kind = rspick(nup_four_c, size_nup_four_c);
                        } break;
                        default: std::cout << E_4 << "\n"; break;
                        }
                    }
                } break;
                case 2: Tri() break;
                default: std::cout << E_3 << "\n"; break;
                }
                output_string()
                if (!(star == 5 && type == 1)) unmet5_c++;
                if (!(star == 5 && type == 2)) unmet5_w++;
                if (!(star == 4 && type == 1)) unmet4_c++;
                if (!(star == 4 && type == 2)) unmet4_w++;
                if (!y_arg && y_luck) {
                    luckget()
                    if (star == 4 || star == 5) {
                        for (const size_t templuck : luckstar) {
                            if (templuck == 5) luck += 6232;
                            else if (templuck == 4) luck += 766;
                            else luck += 0;
                        }
                    }
                    luckcpy()
                    is_mode()
                }
            }
        }
        else if (chosen_banner == 5) {
            while (wishes_number > 0 || d_item_c) {
                const size_t temp1 = generatorz() % 1000;
                size_t star = 0; //4-star or 5-star
                size_t kind = 0; //which exactly
                if (is_noelle && countx == 9) {
                    star = 4;
                    four_count++;
                    four_star_assurance_number = 0;
                    kind = 20;
                    four_count_c++;
                    is_noelle = false;
                }
                else if (four_star_assurance_number < 9) {
                    if (temp1 < 6) {
                        star = 5;
                        five_count++;
                        ave_fives += five_star_assurance_number;
                        if (five_star_assurance_number > max_fives) { max_fives = five_star_assurance_number; max_fivesth = five_count; max_fivecount = countx; }
                        if (five_star_assurance_number < min_fives) { min_fives = five_star_assurance_number; min_fivesth = five_count; min_fivecount = countx; }
                        five_star_assurance_number = 0;
                        five_count_c++;
                        kind = rspick(nup_five_c, 5);
                    }
                    else if (temp1 < 57) {
                        star = 4;
                        four_count++;
                        four_star_assurance_number = 0;
                        four_count_c++;
                        kind = rspick(nup_four_c, 11);
                        if (kind == 20) { is_noelle = false; }
                    }
                    else Tri()
                }
                else if (four_star_assurance_number == 9) {
                    if (temp1 < 6) {
                        star = 5;
                        five_count++;
                        ave_fives += five_star_assurance_number;
                        if (five_star_assurance_number > max_fives) { max_fives = five_star_assurance_number; max_fivesth = five_count; max_fivecount = countx; }
                        if (five_star_assurance_number < min_fives) { min_fives = five_star_assurance_number; min_fivesth = five_count; min_fivecount = countx; }
                        five_star_assurance_number = 0;
                        five_count_c++;
                        kind = rspick(nup_five_c, 5);
                    }
                    else if (temp1 < 567) {
                        star = 4;
                        four_count++;
                        four_star_assurance_number = 0;
                        four_count_c++;
                        kind = rspick(nup_four_c, 11);
                        if (kind == 20) { is_noelle = false; }
                    }
                    else Tri()
                }
                else {
                    if (temp1 < 6) {
                        star = 5;
                        five_count++;
                        ave_fives += five_star_assurance_number;
                        if (five_star_assurance_number > max_fives) { max_fives = five_star_assurance_number; max_fivesth = five_count; max_fivecount = countx; }
                        if (five_star_assurance_number < min_fives) { min_fives = five_star_assurance_number; min_fivesth = five_count; min_fivecount = countx; }
                        five_star_assurance_number = 0;
                        five_count_c++;
                        kind = rspick(nup_five_c, 5);
                    }
                    else {
                        star = 4;
                        four_count++;
                        four_star_assurance_number = 0;
                        four_count_c++;
                        kind = rspick(nup_four_c, 11);
                        if (kind == 20) { is_noelle = false; }
                    }
                }
                output_string()
                if (!y_arg && y_luck) {
                    luckget()
                        if (star == 4 || star == 5) {
                            for (const size_t templuck : luckstar) {
                                if (templuck == 5) luck += 16667;
                                else if (templuck == 4) luck += 766;
                                else luck += 0;
                            }
                        }
                    luckcpy()
                    is_mode()
                }
            }
        }
        else { std::cout << E_7 << "\n"; goto full_quit; }
        // real work
        endy = std::chrono::system_clock::now();
        elapsed = endy - starty;
        elapsed_time = std::chrono::duration_cast<std::chrono::microseconds>(elapsed).count();
        t_start = std::chrono::system_clock::to_time_t(starty);
        t_end = std::chrono::system_clock::to_time_t(endy);
        std::cout << "\n" << S_86 << t_start << "\n";
        std::cout << S_87 << t_end << "\n";
        std::cout << static_cast<double>(elapsed_time) * 1.0 / 1000000 << S_84 << "\n";
        if (five_count == 0) {
            std::cout << "\n" << S_127 << countx - countx_r << S_74 << "\n" << S_73 << countx << S_74 << "\n"
                << S_75 << five_count << "  " << static_cast<double>(five_count) * 100.0 / static_cast<double>(countx) << "%\n"
                << S_76 << four_count << "  " << static_cast<double>(four_count) * 100.0 / static_cast<double>(countx) << "%\n"
                << S_77 << five_count_c << " : " << five_count_w << " : " << four_count_c << " : " << four_count_w << "\n\n";
        }
        else {
            std::cout << "\n" << S_127 << countx - countx_r << S_74 << "\n" << S_73 << countx << S_74 << "\n"
                << S_75 << five_count << "  " << static_cast<double>(five_count) * 100.0 / static_cast<double>(countx) << "%\n"
                << S_76 << four_count << "  " << static_cast<double>(four_count) * 100.0 / static_cast<double>(countx) << "%\n"
                << S_78 << max_fives << S_79 << max_fivesth << S_80 << max_fivecount + 1 << S_81 << "\n"
                << S_82 << min_fives << S_79 << min_fivesth << S_80 << min_fivecount + 1 << S_81 << "\n"
                << S_83 << static_cast<double>(ave_fives) * 1.0 / static_cast<double>(five_count) << "\n"
                << S_77 << five_count_c << " : " << five_count_w << " : " << four_count_c << " : " << four_count_w << "\n\n";
        }
        for (const size_t iout : five_stars_c) { if (pcount[iout] > 0) std::cout << pnameshort[iout] << "(" << pcount[iout] << ") "; }
        for (const size_t iout : five_stars_w) { if (pcount[iout] > 0) std::cout << pnameshort[iout] << "(" << pcount[iout] << ") "; }
        if (five_count > 0) { std::cout << "\n\n"; }
        for (const size_t iout : four_stars_c) { if (pcount[iout] > 0) std::cout << pnameshort[iout] << "(" << pcount[iout] << ") "; }
        for (const size_t iout : four_stars_w) { if (pcount[iout] > 0) std::cout << pnameshort[iout] << "(" << pcount[iout] << ") "; }
        std::cout << "\n\n";
        countx_r = 0;
        if (y_arg) goto full_quit;
        // a bunch of output of statistics
goto core_loop;
full_quit:
    int pausex = 0;
    {
        std::cin >> pausex;
        if (cin.fail()) { pausex = 340; cin.clear(); cin.ignore(32767, '\n'); }
        else { pausex = 729; }
    }
    return pausex;
}
