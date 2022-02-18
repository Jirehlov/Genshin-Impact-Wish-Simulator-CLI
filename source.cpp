#include <chrono>
#include <iostream>
#include <random>
#include <string>
#include "cn.h"
#include "en.h" //include the language header file


#define output_string() {if (y_print) {std::cout << countx + 1 << "(" << five_star_assurance_number << ")(" << four_star_assurance_number << ") ";\
                    casesx( kind );\
                    lang_cout(2, kind); std::cout << "\n"; }\
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
                if(ach_count[8] < 6) {\
                    if (kind_r_ach != kind) { kind_r_ach = kind; ach_count[8] = 0; }\
                    else ach_count[8]++;\
                }\
                } // 3-star kind settler for all banners
#define is_mode() {if (is_s_mode) {\
                    bool check = false;\
                    if (d_item_n[kind] > 0) d_item_n[kind]--;\
                    for (size_t ikk = 0; ikk < 115; ikk++) {\
                    if (d_item_n[ikk] > 0) { d_item_c = true; check = true; break; }\
                    else if (d_item_n[ikk] == 0) d_item_c = false;\
                    else { lang_cout(4, 10); std::cout << "\n"; goto full_quit; }\
                    if (check){ break; }\
                    }\
                    }\
                } // do if is s mode
#define set_pool_1_m(up_five_m,size_nup_four_c_m, nup_four_cgm) {\
                    set_pool_1((up_five_m), (size_nup_four_c_m), tempg1, tempg5, (nup_four_cgm));\
                }
#define set_pool_3_m(size_nup_four_c_m, nup_four_cgm) {\
                    set_pool_3((size_nup_four_c_m), tempg1, tempg5, tempg6, tempg7, (nup_four_cgm));\
                }
#define check_profile_throw() {\
                    lang_cout(1, 143);\
                    std::cout << "\n";\
                    wishes_number = 0;\
                    goto enter_wishes_number;\
                }
#define cin_error_by(){\
                    std::cout << "\n";\
                    lang_cout(1, 11);\
                    std::cout << "\n";\
                    cin.clear();\
                    cin.ignore(32767, '\n');\
                }
#define cin_error_by2(){\
                    std::cout << "\n";\
                    lang_cout(1, 11);\
                    std::cout << "\n\n";\
                    cin.clear();\
                    cin.ignore(32767, '\n');\
                }
#define cin_error_by3(){\
                    std::cout << "\n" << EN_S_72 << "\n" << CN_S_72 << "\n\n";\
                    cin.clear();\
                    cin.ignore(32767, '\n');\
                }
#define mpcheck(){if (countx == 2 ||\
                    countx == 6 ||\
                    countx == 30 ||\
                    countx == 126 ||\
                    countx == 8190 ||\
                    countx == 131070 ||\
                    countx == 524286 ||\
                    countx == 2147483646 ||\
                    countx == 2305843009213693950) ach[7] = true;\
                  if (countx == 20192978) ach[9] = true;\
                  if (countx == 157087285) ach[10] = true;\
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
four_star_guarantee_number = false,
iacheck = false,
achp_check = false,
achp_check_again = false,
ach[11] = { false, false, false, false, false, false, false, false, false, false, false },
ach_q[11] = { false, false, false, false, false, false, false, false, false, false, false };
size_t fate_points = 0,
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
size_nup_four_w = 18,
kind_r_ach = 0,
d_item[128] = { 0 },
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
five_pity_w[80] = { 0 },
one_to_ten[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
std::chrono::system_clock::time_point starty = std::chrono::system_clock::now();
std::chrono::system_clock::time_point endy = std::chrono::system_clock::now();
std::chrono::nanoseconds elapsed = starty - endy;
std::time_t t_start = std::chrono::system_clock::to_time_t(starty);
std::time_t t_end = std::chrono::system_clock::to_time_t(endy);
static size_t nup_five_c[5] = { 0, 1, 2, 3, 4 },
nup_five_w[10] = { 5, 6, 7, 8, 9, 10, 11, 12, 13, 14 },
nup_four_w[32] = { 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49 },
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
unsigned int resultt = 0,
resultu = 0,
lang_status = 0;
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
ave_fives = 0,
ach_count[11] = { 0 };
signed long long int wishes_number = 0;
auto elapsed_time = std::chrono::duration_cast<std::chrono::microseconds>(elapsed).count();

static size_t rspick(const size_t* kindx, size_t sizekind) {
    size_t kindout = kindx[0];
    size_t index = 1;
    unsigned int temp121 = 0;
    for (; index < sizekind; ++index)
    {
        temp121 = static_cast<unsigned int>(generatorz() % (static_cast<unsigned long long int>(index) + 1));
        if (temp121 == 0) kindout = kindx[index];
    }
    return kindout;
}
// randomly pick an element among kindx which size is sizekind

static unsigned int WRSpick(const ptrdiff_t* weightx, size_t nom) {
    ptrdiff_t ceilling = 1;
    for (size_t inin = 0; inin < nom; inin++) ceilling += weightx[inin];
    const unsigned int typess1[3] = { 0, 1, 2 };
    const unsigned int typess2[2] = { 0, 1 };
    if (nom == 3 && ceilling > 10000) ceilling = 10000;
    ptrdiff_t randomn = static_cast<ptrdiff_t> (generatorz() % static_cast<size_t>(ceilling));
    size_t tc = 0;
    unsigned int results = 0;
    for (size_t inin = 0; inin < nom; inin++) {
        if (randomn < weightx[inin]) {
            if (nom == 3) results = typess1[tc];
            else results = typess2[tc];
            inin = nom;
        }
        else {
            randomn -= weightx[inin];
            tc ++;
        }
    }
    return results;
}
// weighted random sampling

static void lang_cout(unsigned int sq, size_t sw) {
    if (lang_status == 0) {
        switch (sq) {
            case 1: std::cout << pstring_en[sw]; break;
            case 2: std::cout << pname_en[sw]; break;
            case 3: std::cout << pnameshort_en[sw]; break;
            case 4: std::cout << perror_en[sw]; break;
            case 5: std::cout << pvalue_en[sw]; break;
            case 6: std::cout << pachieve_en[sw]; break;
            default: { std::cout << EN_E_13 << "\n" << CN_E_13 << "\n"; quit = true; }
        }
    }
    else if (lang_status == 1) {
        switch (sq) {
            case 1: std::cout << pstring_cn[sw]; break;
            case 2: std::cout << pname_cn[sw]; break;
            case 3: std::cout << pnameshort_cn[sw]; break;
            case 4: std::cout << perror_cn[sw]; break;
            case 5: std::cout << pvalue_cn[sw]; break;
            case 6: std::cout << pachieve_cn[sw]; break;
            default: { std::cout << EN_E_13 << "\n" << CN_E_13 << "\n"; quit = true; }
        }
    }
    else {
        std::cout << EN_E_12 << "\n" << CN_E_12 << "\n"; quit = true;
    }
}

static void casesx( size_t kind ){
    if (kind < 15 ) { std::cout << "!!!!!***** "; }
    else if (kind < 50 ) { std::cout << "!!**** "; }
    else if (kind < 63 ) { std::cout << "*** "; }
    else if (kind == 71 || kind == 79 || kind == 80 || kind == 82 || kind == 83 || kind == 84 || kind == 88 || kind == 91 || kind == 95 || kind == 100 || kind == 102 || kind == 103 || kind == 104 || kind == 106 || kind == 108 ) { std::cout << "!!**** "; }
    else if (kind < 115 ) { std::cout << "!!!!!***** "; }
    else { lang_cout(4, 1); std::cout << "  "; }
} // cout stars prefix


static void ini_all(size_t* in, size_t ins, size_t nu) {
    for (size_t i = 0; i < ins; i++) { in[i] = nu; }
}

static void ini_ams(size_t* in, size_t ins, const size_t* out) {
    for (size_t i = 0; i < ins; i++) { in[i] = out[i]; }
}//for of the same size


static void set_pool_1(size_t up_five_p, size_t size_nup_four_c_p, const size_t* tempg1, const size_t* tempg5, const size_t* nup_four_cgm) {
    up_five = up_five_p;
    size_nup_four_c = size_nup_four_c_p;
    ini_ams(up_four_g, 3, tempg1);
    ini_ams(nup_four_c, size_nup_four_c, nup_four_cgm);
    ini_ams(four_check, 8, tempg5);
}

static void set_pool_3(size_t size_nup_four_c_p, const size_t* tempg1, const size_t* tempg5, const size_t* tempg6, const size_t* tempg7, const size_t* nup_four_cgm) {
    ini_ams(up_five_g, 2, tempg6);
    size_nup_four_c = size_nup_four_c_p;
    ini_ams(up_four_g, 5, tempg1);
    ini_ams(nup_four_c, size_nup_four_c, nup_four_cgm);
    ini_ams(four_check, 8, tempg5);
    ini_ams(five_check, 8, tempg7);
}

int main(int argc, char* argv[]) {
    static char default_argv0[] = "giwscli";
    if (!argv[0] || !argv[0][0])
        argv[0] = default_argv0;
    y_print = true;
    y_luck = true;
//arg_proc:
    if (argc == 5) {
        int test0 = 0;
        int test1 = 0;
        long long int test2 = 0;
        unsigned long int test3 = 0;
        try {
            test0 = stoi(argv[1]);
            test1 = stoi(argv[2]);
            test2 = stoll(argv[3]);
            test3 = stoul(argv[4]);
        }
        catch (...) {
            lang_cout(4, 11); std::cout << "\n";
            y_arg = true;
            goto full_quit;
        }
        test0 = 1 + test1;
        test1 = 1 + test0;
        test2 = 1 + test2;
        test3 = 1 + test3;
        chosen_banner = stoi(argv[1]);
        chosen_event = stoi(argv[2]);
        wishes_number = stoll(argv[3]);
        lang_status = stoul(argv[4]);
        if (wishes_number < 1) {
            wishes_number = 0;
            lang_cout(4, 72); std::cout << "\n";
            y_arg = true;
            goto full_quit;
        }
        quit = false;
        y_arg = true;
        goto set_banner;
    }
    else if (argc == 4) {
        int test0 = 0;
        int test1 = 0;
        long long int test2 = 0;
        try {
            test0 = stoi(argv[1]);
            test1 = stoi(argv[2]);
            test2 = stoll(argv[3]);
        }
        catch (...) {
            lang_cout(4, 11); std::cout << "\n";
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
            lang_cout(4, 72); std::cout << "\n";
            y_arg = true;
            goto full_quit;
        }
        quit = false;
        y_arg = true;
        goto language_setting;
    }
    else if (argc == 1) {
        goto language_setting;
    }
    else {
        lang_cout(4, 11); std::cout << "\n";
        y_arg = true;
        goto full_quit;
    }
language_setting:
    std::cout << EN_S_160 << "\n" << CN_S_160 << UNI_S_0;
    std::cin >> lang_status;
    std::cout << "\n";
    if (cin.fail() || lang_status > 1) { lang_status = 0; cin_error_by3() goto language_setting; }
    if (argc == 4) goto set_banner;
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
    kind_r_ach = 0;
    ini_all(d_item, 128, 0);
    ini_all(d_item_n, 128, 0);
    ini_all(up_five_g, 2, 0);
    ini_all(up_four_g, 16, 0);
    ini_all(nup_four_c, 32, 0);
    ini_all(luckkind, 10, 127);
    ini_all(luckstar, 10, 3);
    ini_all(luckiestkind, 10, 127);
    ini_all(five_check, 8, 127);
    ini_all(four_check, 8, 127);
    ini_all(pcount, 128, 0);
    ini_all(four_pity, 11, 0);
    ini_all(five_pity, 90, 0);
    ini_all(five_pity_w, 80, 0);
    ini_ams(lucklocation, 10, one_to_ten);
    ini_ams(lucksublocation, 10, one_to_ten);
    ini_ams(lucksubsublocation, 10, one_to_ten);
    ini_ams(luckiestlocation, 10, one_to_ten);
    ini_ams(luckiestsublocation, 10, one_to_ten);
    ini_ams(luckiestsubsublocation, 10, one_to_ten);
    for (size_t i = 0; i < 11; i++) { ach_count[i] = 0; }
//welcome:
    lang_cout(1, 1); std::cout << "\n";
    lang_cout(1, 2); std::cout << "\n";
    lang_cout(1, 3); std::cout << "\n";
    lang_cout(1, 4); std::cout << "\n\n";
enter_chosen_banner_switch:
    lang_cout(1, 5); std::cout << "\n";
    lang_cout(1, 6); std::cout << "\n";
    lang_cout(1, 7); std::cout << "\n";
    lang_cout(1, 108); std::cout << "\n";
    lang_cout(1, 8); std::cout << "\n";
    lang_cout(1, 9); std::cout << "\n";
    lang_cout(1, 10); std::cout << "\n";
    lang_cout(1, 161); std::cout << "\n\n";
    std::cin >> chosen_banner;
    if (cin.fail()) { chosen_banner = 0; cin_error_by2() goto enter_chosen_banner; }
enter_chosen_event:
    e_sav = chosen_event;
    switch (chosen_banner) {
    case -1: goto full_quit;
    case 1: {
        chosen_event = 0;
        static const size_t banner_1[31] = { 12, 13, 109, 161, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30,
                                        94, 95, 100, 101, 102, 103, 144, 145, 151, 153 };
        std::cout << "\n";
        for (size_t i = 0; i < 31; i++) { lang_cout(1, banner_1[i]); std::cout << "\n"; }
        std::cout << "\n";
        std::cin >> chosen_event;
        fate_weapon = 0;
        fate_points = 0;
        switch_b_sav = switch_b_should_be;
        switch_b_should_be = 2;
        if (cin.fail()) { chosen_event = 0; cin_error_by() goto enter_chosen_event; }
        else if (chosen_event == -1) { chosen_event = 0; is_cross = true; std::cout << "\n"; goto enter_chosen_banner; }
        else if (chosen_event == -2) { chosen_event = 0; is_cross = true; std::cout << "\n"; goto enter_chosen_banner_switch; }
        else if (chosen_event == -120) {
        language_setting_local:
            std::cout << "\n" << EN_S_160 << "\n" << CN_S_160 << UNI_S_0;
            std::cin >> lang_status;
            std::cout << "\n";
            if (cin.fail() || lang_status > 1) { lang_status = 0; cin_error_by3() goto language_setting_local; }
            else { chosen_event = 0; goto enter_chosen_event; }
        }
        else if (chosen_event > 0 && chosen_event < 28) quit = false; else { std::cout << "\n"; lang_cout(1, 31); std::cout << "\n"; goto enter_chosen_event; }
    } break;
    case 2: {
        chosen_event = 0;
        static const size_t banner_2[8] = { 12, 13, 109, 161, 107, 146, 147, 154 };
        std::cout << "\n";
        for (size_t i = 0; i < 8; i++) { lang_cout(1, banner_2[i]); std::cout << "\n"; }
        std::cout << "\n";
        std::cin >> chosen_event;
        fate_weapon = 0;
        fate_points = 0;
        switch_b_sav = switch_b_should_be;
        switch_b_should_be = 1;
        if (cin.fail()) { chosen_event = 0; cin_error_by() goto enter_chosen_event; }
        else if (chosen_event == -1) { chosen_event = 0; is_cross = true; std::cout << "\n"; goto enter_chosen_banner; }
        else if (chosen_event == -2) { chosen_event = 0; is_cross = true; std::cout << "\n"; goto enter_chosen_banner_switch; }
        else if (chosen_event == -120) {
        language_setting_local_1:
            std::cout << "\n" << EN_S_160 << "\n" << CN_S_160 << UNI_S_0;
            std::cin >> lang_status;
            std::cout << "\n";
            if (cin.fail() || lang_status > 1) { lang_status = 0; cin_error_by3() goto language_setting_local_1; }
            else { chosen_event = 0; goto enter_chosen_event; }
        }
        else if (chosen_event > 0 && chosen_event < 5) quit = false; else { std::cout << "\n"; lang_cout(1, 31); std::cout << "\n"; goto enter_chosen_event; }
    } break;
    case 3: {
        chosen_event = 0;
        static const size_t banner_3[30] = { 12, 13, 109, 161, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47,
                                            96, 97, 104, 105, 111, 126, 148, 149, 152, 155};
        std::cout << "\n";
        for (size_t i = 0; i < 30; i++) { lang_cout(1, banner_3[i]); std::cout << "\n"; }
        std::cout << "\n";
        std::cin >> chosen_event;
        fate_weapon = 0;
        fate_points = 0;
        if (cin.fail()) { chosen_event = 0; cin_error_by() goto enter_chosen_event; }
        else if (chosen_event == -1) { chosen_event = 0; is_cross = true; std::cout << "\n"; goto enter_chosen_banner; }
        else if (chosen_event == -2) { chosen_event = 0; is_cross = true; std::cout << "\n"; goto enter_chosen_banner_switch; }
        else if (chosen_event == -120) {
        language_setting_local_2:
            std::cout << "\n" << EN_S_160 << "\n" << CN_S_160 << UNI_S_0;
            std::cin >> lang_status;
            std::cout << "\n";
            if (cin.fail() || lang_status > 1) { lang_status = 0; cin_error_by3() goto language_setting_local_2; }
            else { chosen_event = 0; goto enter_chosen_event; }
        }
        else if (chosen_event > 0 && chosen_event < 27) quit = false; else { std::cout << "\n"; lang_cout(1, 31); std::cout << "\n"; goto enter_chosen_event; }
    } break;
    case 4: {
        chosen_event = 0;
        static const size_t banner_4[13] = { 12, 13, 109, 161, 48, 49, 50, 51, 98, 99, 106, 110, 150 };
        std::cout << "\n";
        for (size_t i = 0; i < 13; i++) { lang_cout(1, banner_4[i]); std::cout << "\n"; }
        std::cout << "\n";
        std::cin >> chosen_event;
        fate_weapon = 0;
        fate_points = 0;
        if (cin.fail()) { chosen_event = 0; cin_error_by() goto enter_chosen_event; }
        else if (chosen_event == -1) { chosen_event = 0; is_cross = true; std::cout << "\n"; goto enter_chosen_banner; }
        else if (chosen_event == -2) { chosen_event = 0; is_cross = true; std::cout << "\n"; goto enter_chosen_banner_switch; }
        else if (chosen_event == -120) {
        language_setting_local_3:
            std::cout << "\n" << EN_S_160 << "\n" << CN_S_160 << UNI_S_0;
            std::cin >> lang_status;
            std::cout << "\n";
            if (cin.fail() || lang_status > 1) { lang_status = 0; cin_error_by3() goto language_setting_local_3; }
            else { chosen_event = 0; goto enter_chosen_event; }
        }
        else if (chosen_event > 0 && chosen_event < 10) quit = false; else { std::cout << "\n"; lang_cout(1, 31); std::cout << "\n"; goto enter_chosen_event; }
    } break;
    case 5: {
        chosen_event = 0;
        static const size_t banner_5[5] = { 12, 13, 109, 161, 52 };
        std::cout << "\n";
        for (size_t i = 0; i < 5; i++) { lang_cout(1, banner_5[i]); std::cout << "\n"; }
        std::cout << "\n";
        std::cin >> chosen_event;
        fate_weapon = 0;
        fate_points = 0;
        if (cin.fail()) { chosen_event = 0; cin_error_by() goto enter_chosen_event; }
        else if (chosen_event == -1) { chosen_event = 0; is_cross = true; std::cout << "\n"; goto enter_chosen_banner; }
        else if (chosen_event == -2) { chosen_event = 0; is_cross = true; std::cout << "\n"; goto enter_chosen_banner_switch; }
        else if (chosen_event == -120) {
        language_setting_local_4:
            std::cout << "\n" << EN_S_160 << "\n" << CN_S_160 << UNI_S_0;
            std::cin >> lang_status;
            std::cout << "\n";
            if (cin.fail() || lang_status > 1) { lang_status = 0; cin_error_by3() goto language_setting_local_4; }
            else { chosen_event = 0; goto enter_chosen_event; }
        }
        else if (chosen_event == 1) quit = false; else { std::cout << "\n"; lang_cout(1, 31); std::cout << "\n"; goto enter_chosen_event; } } break;
    case -120: {
    language_setting_local_5:
        std::cout << "\n" << EN_S_160 << "\n" << CN_S_160 << UNI_S_0;
        std::cin >> lang_status;
        std::cout << "\n";
        if (cin.fail() || lang_status > 1) { lang_status = 0; cin_error_by3() goto language_setting_local_5; }
        else { chosen_event = 0; goto enter_chosen_banner; }
    } break;
    default: {chosen_banner = 0; chosen_event = 0; quit = true; std::cout << "\n"; lang_cout(1, 53); std::cout << "\n\n"; goto enter_chosen_banner; }
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
        default: { lang_cout(4, 5); std::cout << "\n"; goto full_quit; }
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
        default: { lang_cout(4, 5); std::cout << "\n"; goto full_quit; }
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
        default: { lang_cout(4, 5); std::cout << "\n"; goto full_quit; }
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
        default: { lang_cout(4, 5); std::cout << "\n"; goto full_quit; }
        }
    }
    else if (chosen_banner == 5) {
        for (size_t i = 0; i < 11; i++) {
            nup_four_c[i] = nup_four_cg1[i];
        }
    }
    else { lang_cout(4, 7); std::cout << "\n"; goto full_quit; }
    if (y_arg) goto core_core_loop;
    // set banner
    if (!is_cross) goto pre_core_loop;
    else if (chosen_banner == 3) min_fives = 80;
    else if (chosen_banner == 1 || chosen_banner == 2 || chosen_banner == 4) min_fives = 90;
    else min_fives = PTRDIFF_MAX;
pre_core_loop:
    if ((switch_b_sav == chosen_banner && switch_e_sav == chosen_event) || e_sav == chosen_event) is_dualcross = true;
    else is_dualcross = false;
    if (is_dualcross) goto enter_wishes_number;
    else { unmet4_c = 0; unmet4_w = 0; unmet5_c = 0; unmet5_w = 0; }
enter_wishes_number:
        if (quit) { lang_cout(4, 6); std::cout << "\n"; goto full_quit; }
        d_item_c = true;
        static const size_t ewn[6] = { 54, 55, 56, 57, 58, 59 };
        std::cout << "\n";
        for (size_t i = 0; i < 6; i++) { lang_cout(1, ewn[i]); std::cout << "\n"; }
        lang_cout(1, 60);
        if (chosen_banner == 1 || chosen_banner == 2 || chosen_banner == 3 || chosen_banner == 4) { std::cout << ";\n"; lang_cout(1, 90); }
        if (chosen_banner == 3 && chosen_event > 14) { std::cout << ";\n"; lang_cout(1, 61); }
        std::cout << ";\n"; lang_cout(1, 158);
        if (chosen_banner != 5) { std::cout << ";\n"; lang_cout(1, 128); }
        std::cout << ";\n"; lang_cout(1, 113); std::cout << "\n"; lang_cout(1, 161);
        for (size_t i = 0; i < 9; i++) {
            if (ach_q[i]) {
                achp_check = true;
            }
        }
        if (achp_check) { std::cout << "\n"; lang_cout(1, 162); }
        std::cout << "\n\n";
        std::cin >> wishes_number;
        if (cin.fail()) { wishes_number = 0; cin_error_by() goto enter_wishes_number; }
        std::cout << "\n";
        if (wishes_number == -1) { wishes_number = 0; goto enter_chosen_event; }
        else if (wishes_number == -2) {
            if (countx_l < 10) { lang_cout(1, 62); std::cout << "\n"; goto enter_wishes_number; }
            lang_cout(1, 63); std::cout << luckiest << "\n";
            for (size_t templuck = 0; templuck < 10; templuck++) {
                std::cout << luckiestlocation[templuck] << "(" << luckiestsublocation[templuck] << ")(" << luckiestsubsublocation[templuck] << ") ";
                casesx(luckiestkind[templuck]);
                lang_cout(2, luckiestkind[templuck]); std::cout << "\n";
            }
            wishes_number = 0;
            goto enter_wishes_number;
        }
        else if (wishes_number == -3) {
        enter_cleanornot:
            lang_cout(1, 91); std::cout << "\n";
            lang_cout(1, 92); std::cout << "\n";
            lang_cout(1, 93); std::cout << "\n\n";
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
                else { lang_cout(4, 7); std::cout << "\n"; goto full_quit; }
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
                for (size_t ini = 0; ini < 11; ini++) { ach_count[ini] = 0; }
                for (size_t ini = 0; ini < 11; ini++) { ach_q[ini] = false; }
                achp_check_again = false;
                d_item_c = true;
                is_s_mode = false;
                lang_cout(1, 64); std::cout << "\n";
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
                lang_cout(1, 72); std::cout << "\n\n";
                goto enter_cleanornot;
            }
        }
        else if (wishes_number == -4) {
            if (y_print) { y_print = false; lang_cout(1, 65); std::cout << "\n"; }
            else { y_print = true; lang_cout(1, 66); std::cout << "\n"; }
            wishes_number = 0;
            goto enter_wishes_number;
        }
        else if (wishes_number == -5) {
            if (chosen_banner == 5 || four_count == 0 || five_count == 0) { wishes_number = 0; lang_cout(1, 72); std::cout << "\n"; goto enter_wishes_number; }
            else if (chosen_banner == 1 || chosen_banner == 2 || chosen_banner == 4) {
                lang_cout(1, 88); std::cout << "\n\n";
                for (size_t iout = 0; iout < 10; iout++) { std::cout << iout + 1 << "  " << four_pity[iout] << "   " << static_cast<double>(four_pity[iout]) * 100.0 / static_cast<double>(four_count) << "%\n"; }
                std::cout << "10+  " << four_pity[10] << "   " << static_cast<double>(four_pity[10]) * 100.0 / static_cast<double>(four_count) << "%\n\n"; lang_cout(1, 89); std::cout << "\n\n";
                for (size_t iout = 0; iout < 90; iout++) { std::cout << fixed << iout + 1 << "  " << five_pity[iout] << "   " << static_cast<double>(five_pity[iout]) * 100.0 / static_cast<double>(five_count) << "%\n"; }
                wishes_number = 0;
                goto enter_wishes_number;
            }
            else if (chosen_banner == 3) {
                lang_cout(1, 88); std::cout << "\n\n";
                for (size_t iout = 0; iout < 10; iout++) { std::cout << iout + 1 << "  " << four_pity[iout] << "   " << static_cast<double>(four_pity[iout]) * 100.0 / static_cast<double>(four_count) << "%\n"; }
                std::cout << "10+  " << four_pity[10] << "   " << static_cast<double>(four_pity[10]) * 100.0 / static_cast<double>(four_count) << "%\n\n"; lang_cout(1, 89); std::cout << "\n\n";
                for (size_t iout = 0; iout < 80; iout++) { std::cout << fixed << iout + 1 << "  " << five_pity_w[iout] << "   " << static_cast<double>(five_pity_w[iout]) * 100.0 / static_cast<double>(five_count) << "%\n"; }
                wishes_number = 0;
                goto enter_wishes_number;
            }
            else {
                wishes_number = 0; lang_cout(4, 7); std::cout << "\n"; goto full_quit;
            }
        }
        else if (wishes_number == -6) {
            if (chosen_banner == 3 && chosen_event > 14) {
            enter_fate_weapon:
                lang_cout(1, 67); std::cout << "\n";
                lang_cout(1, 68); std::cout << "\n";
                lang_cout(1, 69); std::cout << " ( ";
                lang_cout(2, up_five_g[0]); std::cout << " ) \n";
                lang_cout(1, 70); std::cout << " ( ";
                lang_cout(2, up_five_g[1]); std::cout << " ) \n";
                lang_cout(1, 71); std::cout << "\n\n";
                std::cin >> fate_weapon;
                if (cin.fail()) { fate_weapon = 0; cin_error_by2() goto enter_fate_weapon; }
                else if (fate_weapon == -1) { fate_weapon = 0; goto enter_wishes_number; }
                else if (fate_weapon > 2) { std::cout << "\n"; lang_cout(1, 72); std::cout << "\n\n"; fate_weapon = 0; goto enter_fate_weapon; }
                else fate_points = 0;
                wishes_number = 0;
                goto enter_wishes_number;
            }
            else {
                wishes_number = 0; lang_cout(1, 72); std::cout << "\n"; goto enter_wishes_number;
            }
        }
        else if (wishes_number == -7) {
            if (y_luck) { y_luck = false; lang_cout(1, 156); std::cout << "\n"; }
            else { y_luck = true; lang_cout(1, 157); std::cout << "\n"; }
            wishes_number = 0;
            goto enter_wishes_number;
        }
        else if (wishes_number == -31) {
            if (chosen_banner == 5) { wishes_number = 0; lang_cout(1, 72); std::cout << "\n"; goto enter_wishes_number; }
            ptrdiff_t sav[16] = { 0 };
            size_t else_counter = 0;
            if (chosen_banner == 3 && chosen_event > 14) {
            enter_profile_0:
                lang_cout(1, 138); std::cout << "\n";
                lang_cout(1, 139); std::cout << "\n\n";
                lang_cout(1, 67); std::cout << "\n";
                lang_cout(1, 69); std::cout << " ( ";
                lang_cout(2, up_five_g[0]); std::cout << " ) \n";
                lang_cout(1, 70); std::cout << " ( ";
                lang_cout(2, up_five_g[1]); std::cout << " ) \n";
                lang_cout(1, 71); std::cout << "\n\n";
                std::cin >> sav[8];
                if (cin.fail()) { sav[8] = 0; cin_error_by2() goto enter_profile_0; }
                else if (sav[8] == -1) { sav[8] = 0; wishes_number = 0; goto enter_wishes_number; }
                else if (sav[8] == -2) { goto apply_profile; }
                else if (sav[8] < -1 || sav[8] > 2) { sav[8] = 0; std::cout << "\n"; lang_cout(1, 72); std::cout << "\n\n"; goto enter_profile_0; }
                else if (sav[8] == 0) { std::cout << "\n"; goto enter_profile_1; }
                else { else_counter++; }
                std::cout << "\n";
            enter_profile_01:
                lang_cout(1, 138); std::cout << "\n";
                lang_cout(1, 139); std::cout << "\n\n";
                lang_cout(1, 140); std::cout << "\n\n";
                std::cin >> sav[9];
                if (cin.fail()) { sav[9] = 0; cin_error_by2() goto enter_profile_01; }
                else if (sav[9] == -1) { sav[9] = 0; wishes_number = 0; goto enter_wishes_number; }
                else if (sav[9] == -2) { goto apply_profile; }
                else if (sav[9] != 0 && sav[9] != 1 && sav[9] != 2) { sav[9] = 0; std::cout << "\n"; lang_cout(1, 72); std::cout << "\n"; goto enter_profile_01; }
                else { else_counter++; }
                std::cout << "\n";
            }
            else { else_counter++; }
        enter_profile_1:
            lang_cout(1, 138); std::cout << "\n";
            lang_cout(1, 139); std::cout << "\n\n";
            lang_cout(1, 129); std::cout << "\n\n";
            std::cin >> sav[0];
            if (cin.fail()) { sav[0] = 0; cin_error_by2() goto enter_profile_1; }
            else if (sav[0] == -1) { sav[0] = 0; wishes_number = 0; goto enter_wishes_number; }
            else if (sav[0] == -2) { goto apply_profile; }
            else if (sav[0] != 1 && sav[0] != 0) { sav[0] = 0; std::cout << "\n"; lang_cout(1, 72); std::cout << "\n\n"; goto enter_profile_1; }
            else { else_counter++; }
            std::cout << "\n";
        enter_profile_2:
            lang_cout(1, 138); std::cout << "\n";
            lang_cout(1, 139); std::cout << "\n\n";
            lang_cout(1, 130);
            lang_cout(1, 137); std::cout << "\n\n";
            std::cin >> sav[1];
            if (cin.fail()) { sav[1] = 0; cin_error_by() goto enter_profile_2; }
            else if (sav[1] == -1) { sav[1] = 0; wishes_number = 0; goto enter_wishes_number; }
            else if (sav[1] == -2) { goto apply_profile; }
            else if (((chosen_banner == 1 || chosen_banner == 2 || chosen_banner == 4) && sav[1] > 89) || (chosen_banner == 3 && sav[1] > 79) || sav[1] < 0) { sav[1] = 0; std::cout << "\n"; lang_cout(1, 72); std::cout << "\n\n"; goto enter_profile_2; }
            else { else_counter++; }
            std::cout << "\n";
        enter_profile_3:
            lang_cout(1, 138); std::cout << "\n";
            lang_cout(1, 139); std::cout << "\n\n";
            lang_cout(1, 131); std::cout << "\n\n";
            std::cin >> sav[2];
            if (cin.fail()) { sav[2] = 0; cin_error_by() goto enter_profile_3; }
            else if (sav[2] == -1) { sav[2] = 0; wishes_number = 0; goto enter_wishes_number; }
            else if (sav[2] == -2) { goto apply_profile; }
            else if (sav[2] != 1 && sav[2] != 0) { sav[2] = 0; std::cout << "\n"; lang_cout(1, 72); std::cout << "\n\n"; goto enter_profile_3; }
            else { else_counter++; }
            std::cout << "\n";
        enter_profile_4:
            lang_cout(1, 138); std::cout << "\n";
            lang_cout(1, 139); std::cout << "\n\n";
            lang_cout(1, 132);
            lang_cout(1, 137); std::cout << "\n\n";
            std::cin >> sav[3];
            if (cin.fail()) { sav[3] = 0; cin_error_by() goto enter_profile_4; }
            else if (sav[3] == -1) { sav[3] = 0; wishes_number = 0; goto enter_wishes_number; }
            else if (sav[3] == -2) { goto apply_profile; }
            else if (sav[3] < 0) { sav[3] = 0; std::cout << "\n"; lang_cout(1, 72); std::cout << "\n\n"; goto enter_profile_4; }
            else { else_counter++; }
            std::cout << "\n";
        enter_profile_5:
            lang_cout(1, 138); std::cout << "\n";
            lang_cout(1, 139); std::cout << "\n\n";
            lang_cout(1, 133);
            lang_cout(1, 137); std::cout << "\n\n";
            std::cin >> sav[4];
            if (cin.fail()) { sav[4] = 0; cin_error_by() goto enter_profile_5; }
            else if (sav[4] == -1) { sav[4] = 0; wishes_number = 0; goto enter_wishes_number; }
            else if (sav[4] == -2) { goto apply_profile; }
            else if (sav[4] < 0) { sav[4] = 0; std::cout << "\n"; lang_cout(1, 72); std::cout << "\n\n"; goto enter_profile_5; }
            else if ((chosen_banner == 1 || chosen_banner == 2 || chosen_banner == 4) && sav[4] > 89) { sav[1] = 0; std::cout << "\n"; lang_cout(1, 72); std::cout << "\n"; goto enter_profile_5; }
            else if (chosen_banner == 3 && sav[4] > 79) { sav[1] = 0; std::cout << "\n"; lang_cout(1, 72); std::cout << "\n\n"; goto enter_profile_5; }
            else { else_counter++; }
            std::cout << "\n";
            if (chosen_banner == 3 || chosen_banner == 4) {
            enter_profile_6:
                lang_cout(1, 138); std::cout << "\n";
                lang_cout(1, 139); std::cout << "\n\n";
                lang_cout(1, 134);
                lang_cout(1, 137); std::cout << "\n\n";
                std::cin >> sav[5];
                if (cin.fail()) { sav[5] = 0; cin_error_by() goto enter_profile_6; }
                else if (sav[5] == -1) { sav[5] = 0; wishes_number = 0; goto enter_wishes_number; }
                else if (sav[5] == -2) { goto apply_profile; }
                else if (sav[5] < 0 || (chosen_banner == 4 && sav[4] > 89) || (chosen_banner == 3 && sav[4] > 79)) { sav[5] = 0; std::cout << "\n"; lang_cout(1, 72); std::cout << "\n\n"; goto enter_profile_6; }
                else { else_counter++; }
            }
            std::cout << "\n";
        enter_profile_7:
            lang_cout(1, 138); std::cout << "\n";
            lang_cout(1, 139); std::cout << "\n\n";
            lang_cout(1, 135);
            lang_cout(1, 137); std::cout << "\n\n";
            std::cin >> sav[6];
            if (cin.fail()) { sav[6] = 0; cin_error_by() goto enter_profile_7; }
            else if (sav[6] == -1) { sav[6] = 0; wishes_number = 0; goto enter_wishes_number; }
            else if (sav[6] == -2) { goto apply_profile; }
            else if (sav[6] < 0) { sav[6] = 0; std::cout << "\n"; lang_cout(1, 72); std::cout << "\n\n"; goto enter_profile_7; }
            else { else_counter++; }
            std::cout << "\n";
        enter_profile_8:
            lang_cout(1, 138); std::cout << "\n";
            lang_cout(1, 139); std::cout << "\n\n";
            lang_cout(1, 136);
            lang_cout(1, 137); std::cout << "\n\n";
            std::cin >> sav[7];
            if (cin.fail()) { sav[7] = 0; cin_error_by() goto enter_profile_8; }
            else if (sav[7] == -1) { sav[7] = 0; wishes_number = 0; goto enter_wishes_number; }
            else if (sav[7] == -2) { goto apply_profile; }
            else if (sav[7] < 0) { sav[7] = 0; std::cout << "\n"; lang_cout(1, 72); std::cout << "\n\n"; goto enter_profile_8; }
            else { else_counter++; }
            std::cout << "\n";
        apply_profile:
            std::cout << "\n"; lang_cout(1, 141); std::cout << "\n";
            if (sav[1] == sav[3] || (sav[4] != sav[1] && sav[5] != sav[1]) || (sav[6] != sav[3] && sav[7] != sav[3]) || (chosen_banner != 3 && sav[4] > 89 && sav[5] > 89) || (chosen_banner == 3 && sav[4] > 79 && sav[5] > 79) ) check_profile_throw()
                std::cout << "\n"; lang_cout(1, 142); std::cout << "\n";
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
                lang_cout(1, 114); std::cout << "\n\n"; lang_cout(1, 121); std::cout << "\n";
                for (size_t uk5 : three_g) {
                    std::cout << uk5 << ": "; lang_cout(3, uk5); std::cout << "\n";
                    d_item[uk5] = 1;
                }
                if (chosen_banner == 1 || chosen_banner == 2) {
                    std::cout << "\n"; lang_cout(1, 120); std::cout << "\n";
                    for (size_t uk3 = 0; uk3 < size_nup_four_c; uk3++) {
                        std::cout << nup_four_c[uk3] << ": "; lang_cout(3, nup_four_c[uk3]); std::cout << "\n";
                        d_item[nup_four_c[uk3]] = 1;
                    }
                    for (size_t uk4 = 0; uk4 < 18; uk4++) {
                        std::cout << nup_four_w[uk4] << ": "; lang_cout(3, nup_four_w[uk4]); std::cout << "\n";
                        d_item[nup_four_w[uk4]] = 1;
                    }
                    std::cout << "\n"; lang_cout(1, 119); std::cout << "\n";
                    for (size_t uk2 = 0; uk2 < 3; uk2++) {
                        std::cout << up_four_g[uk2] << ": "; lang_cout(3, up_four_g[uk2]); std::cout << "\n";
                        d_item[up_four_g[uk2]] = 1;
                    }
                    std::cout << "\n"; lang_cout(1, 118); std::cout << "\n";
                    for (size_t ukt = 0; ukt < 5; ukt++) {
                        std::cout << nup_five_c[ukt] << ": "; lang_cout(3, nup_five_c[ukt]); std::cout << "\n";
                        d_item[nup_five_c[ukt]] = 1;
                    }
                    std::cout << "\n"; lang_cout(1, 117); std::cout << "\n" << up_five << ": "; lang_cout(3, up_five); std::cout << "\n";
                    d_item[up_five] = 1;
                }
                else if (chosen_banner == 3) {
                    std::cout << "\n"; lang_cout(1, 120); std::cout << "\n";
                    for (size_t uk3 = 0; uk3 < size_nup_four_c; uk3++) {
                        std::cout << nup_four_c[uk3] << ": "; lang_cout(3, nup_four_c[uk3]); std::cout << "\n";
                        d_item[nup_four_c[uk3]] = 1;
                    }
                    for (size_t uk4 = 0; uk4 < 18; uk4++) {
                        std::cout << nup_four_w[uk4] << ": "; lang_cout(3, nup_four_w[uk4]); std::cout << "\n";
                        d_item[nup_four_w[uk4]] = 1;
                    }
                    std::cout << "\n"; lang_cout(1, 119); std::cout << "\n";
                    for (size_t uk2 = 0; uk2 < 5; uk2++) {
                        std::cout << up_four_g[uk2] << ": "; lang_cout(3, up_four_g[uk2]); std::cout << "\n";
                        d_item[up_four_g[uk2]] = 1;
                    }
                    std::cout << "\n"; lang_cout(1, 118); std::cout << "\n";
                    for (size_t uktt = 0; uktt < 10; uktt++) {
                        std::cout << nup_five_w[uktt] << ": "; lang_cout(3, nup_five_w[uktt]); std::cout << "\n";
                        d_item[nup_five_w[uktt]] = 1;
                    }
                    std::cout << "\n"; lang_cout(1, 117); std::cout << "\n";
                    for (size_t uk = 0; uk < 2; uk++) {
                        std::cout << up_five_g[uk] << ": "; lang_cout(3, up_five_g[uk]); std::cout << "\n";
                        d_item[up_five_g[uk]] = 1;
                    }
                }
                else if (chosen_banner == 4) {
                    std::cout << "\n"; lang_cout(1, 120); std::cout << "\n";
                    for (size_t uk3 = 0; uk3 < size_nup_four_c; uk3++) {
                        std::cout << nup_four_c[uk3] << ": "; lang_cout(3, nup_four_c[uk3]); std::cout << "\n";
                        d_item[nup_four_c[uk3]] = 1;
                    }
                    for (size_t uk4 = 0; uk4 < 18; uk4++) {
                        std::cout << nup_four_w[uk4] << ": "; lang_cout(3, nup_four_w[uk4]); std::cout << "\n";
                        d_item[nup_four_w[uk4]] = 1;
                    }
                    std::cout << "\n"; lang_cout(1, 118); std::cout << "\n";
                    for (size_t ukt = 0; ukt < 5; ukt++) {
                        std::cout << nup_five_c[ukt] << ": "; lang_cout(3, nup_five_c[ukt]); std::cout << "\n";
                        d_item[nup_five_c[ukt]] = 1;
                    }
                    for (size_t uktt = 0; uktt < 10; uktt++) {
                        std::cout << nup_five_w[uktt] << ": "; lang_cout(3, nup_five_w[uktt]); std::cout << "\n";
                        d_item[nup_five_w[uktt]] = 1;
                    }
                }
                else if (chosen_banner == 5) {
                    std::cout << "\n"; lang_cout(1, 120); std::cout << "\n";
                    for (size_t uk3 = 0; uk3 < 11; uk3++) {
                        std::cout << nup_four_c[uk3] << ": "; lang_cout(3, nup_four_c[uk3]); std::cout << "\n";
                        d_item[nup_four_c[uk3]] = 1;
                    }
                    std::cout << "\n"; lang_cout(1, 118); std::cout << "\n";
                    for (size_t ukt = 0; ukt < 5; ukt++) {
                        std::cout << nup_five_c[ukt] << ": "; lang_cout(3, nup_five_c[ukt]); std::cout << "\n";
                        d_item[nup_five_c[ukt]] = 1;
                    }
                }
                else { lang_cout(4, 7); std::cout << "\n"; goto full_quit; }
                std::cout << "\n"; lang_cout(1, 116); std::cout << "\n"; lang_cout(1, 123); std::cout << "\n\n";
                std::cin >> ij;
                if (cin.fail()) { ij = 0; cin_error_by2() goto enter_ij; }
                if (ij == -1 && zero_input_check) { ij = 0; d_item_c = false; std::cout << "\n"; lang_cout(1, 125); std::cout << "\n"; goto enter_wishes_number; }
                else if (ij == -1) { ij = 0; std::cout << "\n"; lang_cout(1, 85); std::cout << "\n\n"; goto core_core_loop; }
                else if (ij == -2) { ij = 0; for (size_t qi = 0; qi < 108; qi++) d_item_n[qi] = 0; std::cout << "\n"; goto enter_wishes_number; }
                else if (ij > -1) {
                    if (ij > 127 || d_item[ij] == 0) { ij = 0; std::cout << "\n"; lang_cout(1, 122); std::cout << "\n\n"; goto enter_ij; }
                    zero_input_check = false;
                enter_d_item:
                    std::cout << "\n"; lang_cout(1, 115); lang_cout(3, static_cast<size_t>(ij)); lang_cout(1, 124); std::cout << "\n\n";
                    std::cin >> d_item_n[ij];
                    if (cin.fail()) { d_item_n[ij] = 0; cin_error_by() goto enter_d_item; }
                    if (d_item_n[ij] > 0) { zero_input_recheck = false; }
                    if ((countx < 1 && zero_input_recheck) || d_item_n[ij] > LLONG_MAX) { std::cout << "\n"; lang_cout(1, 72); std::cout << "\n"; goto enter_d_item; }
                    std::cout << "\n";
                }
                else { ij = 0; lang_cout(1, 72); std::cout << "\n"; goto enter_ij; }
            }
        }
        else if (wishes_number == -127) {
            wishes_number = 0;
                lang_cout(5, 1); std::cout << "chosen_banner = " << chosen_banner << "\n";
                lang_cout(5, 2); std::cout << "chosen_event = " << chosen_event << "\n";
                lang_cout(5, 3); std::cout << "up_five = " << up_five << "\n";
                lang_cout(5, 4); std::cout << "y_print = " << y_print << "\n";
                lang_cout(5, 42); std::cout << "y_luck = " << y_luck << "\n";
                lang_cout(5, 5); std::cout << "four_star_assurance_number = " << four_star_assurance_number << "\n";
                lang_cout(5, 6); std::cout << "five_star_assurance_number = " << five_star_assurance_number << "\n";
                lang_cout(5, 7); std::cout << "four_star_guarantee_number = " << four_star_guarantee_number << "\n";
                lang_cout(5, 8); std::cout << "five_star_guarantee_number = " << five_star_guarantee_number << "\n";
                lang_cout(5, 9); std::cout << "countx = " << countx << "\n";
                lang_cout(5, 10); std::cout << "five_count = " << five_count << "\n";
                lang_cout(5, 11); std::cout << "five_count_c = " << five_count_c << "\n";
                lang_cout(5, 12); std::cout << "five_count_w = " << five_count_w << "\n";
                lang_cout(5, 13); std::cout << "four_count = " << four_count << "\n";
                lang_cout(5, 14); std::cout << "four_count_c = " << four_count_c << "\n";
                lang_cout(5, 15); std::cout << "four_count_w = " << four_count_w << "\n";
                lang_cout(5, 16); std::cout << "is_noelle = " << is_noelle << "\n";
                lang_cout(5, 17); std::cout << "ave_fives = " << ave_fives << "\n";
                lang_cout(5, 18); std::cout << "max_fives = " << max_fives << "\n";
                lang_cout(5, 19); std::cout << "min_fives = " << min_fives << "\n";
                lang_cout(5, 20); std::cout << "max_fivesth = " << max_fivesth << "\n";
                lang_cout(5, 21); std::cout << "min_fivesth = " << min_fivesth << "\n";
                lang_cout(5, 22); std::cout << "max_fivecount = " << max_fivecount << "\n";
                lang_cout(5, 23); std::cout << "min_fivecount = " << min_fivecount << "\n";
                lang_cout(5, 24); std::cout << "unmet4_c = " << unmet4_c << "\n";
                lang_cout(5, 25); std::cout << "unmet4_w = " << unmet4_w << "\n";
                lang_cout(5, 26); std::cout << "unmet5_c = " << unmet5_c << "\n";
                lang_cout(5, 27); std::cout << "unmet5_w = " << unmet5_w << "\n";
                lang_cout(5, 28); std::cout << "five_weight = " << five_weight << "\n";
                lang_cout(5, 29); std::cout << "four_weight = " << four_weight << "\n";
                lang_cout(5, 30); std::cout << "three_weight = " << three_weight << "\n";
                lang_cout(5, 31); std::cout << "size_nup_four_c = " << size_nup_four_c << "\n";
                lang_cout(5, 32); std::cout << "size_nup_four_w = " << size_nup_four_w << "\n";
                lang_cout(5, 33); std::cout << "is_cross = " << is_cross << "\n";
                lang_cout(5, 34); std::cout << "is_dualcross = " << is_dualcross << "\n";
                lang_cout(5, 35); std::cout << "switch_b_should_be = " << switch_b_should_be << "\n";
                lang_cout(5, 36); std::cout << "switch_e_should_be = " << switch_e_should_be << "\n";
                lang_cout(5, 37); std::cout << "fate_weapon = " << fate_weapon << "\n";
                lang_cout(5, 38); std::cout << "fate_points = " << fate_points << "\n";
                lang_cout(5, 39); std::cout << "luckiest = " << luckiest << "\n";
                lang_cout(5, 40); std::cout << "d_item_c = " << d_item_c << "\n";
                lang_cout(5, 41); std::cout << "is_s_mode = " << is_s_mode << "\n";
                lang_cout(5, 43); std::cout << "countx_l = " << countx_l << "\n";
                lang_cout(5, 44); std::cout << "ach_cout[] = "; for (size_t i = 0; i < 11; i++) { std::cout << ach_count[i] << " "; } std::cout << "\n";
                lang_cout(5, 45); std::cout << "ach[] = "; for (size_t i = 0; i < 11; i++) { std::cout << ach[i] << " "; } std::cout << "\n";
                lang_cout(5, 46); std::cout << "ach_q[] = "; for (size_t i = 0; i < 11; i++) { std::cout << ach_q[i] << " "; } std::cout << "\n";
                lang_cout(5, 47); std::cout << "kind_r_ach = " << kind_r_ach << "\n\n";
            goto enter_wishes_number;
        }
        else if (wishes_number == -120) {
        language_setting_local_6:
            std::cout << "\n" << EN_S_160 << "\n" << CN_S_160 << UNI_S_0;
            std::cin >> lang_status;
            std::cout << "\n";
            if (cin.fail() || lang_status > 1) { lang_status = 0; cin_error_by3() goto language_setting_local_6; }
            else { wishes_number = 0; goto enter_wishes_number; }
        }
        else if (wishes_number == -270) {
        wishes_number = 0;
        if (!achp_check) { lang_cout(1, 163); }
        else {
            for (size_t i = 0; i < 9; i++) {
                if (ach_q[i]) {
                    const size_t achdis = i + i + 3;
                    const size_t achname = i + i + 4;
                    lang_cout(6, achname); std::cout << " --- "; lang_cout(6, achdis); std::cout << "\n";
                    achp_check_again = true;
                }
            }
            if (!achp_check_again) { lang_cout(1, 164); }
        }
        std::cout << "\n";
        goto enter_wishes_number;
        }
        else if (wishes_number < 1) { wishes_number = 0; lang_cout(1, 72); std::cout << "\n"; goto enter_wishes_number; }
        else { 
            lang_cout(1, 85); std::cout << "\n";
            if (!y_print) {
                if (!y_luck) {
                    lang_cout(1, 159); lang_cout(1, 156); std::cout << "\n";
                }
                else {
                    lang_cout(1, 159); lang_cout(1, 157); std::cout << "\n";
                }
            }
            std::cout << "\n";
        }
    core_core_loop:
        countx_r = countx;
        if (y_arg) {
            lang_cout(1, 1); std::cout << "\n";
            lang_cout(1, 2); std::cout << "\n";
            lang_cout(1, 3); std::cout << "\n";
            lang_cout(1, 4); std::cout << "\n\n";
            lang_cout(1, 85); std::cout << "\n\n";
        }
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
                    mpcheck()
                    ave_fives += five_star_assurance_number;
                    if (five_star_assurance_number > max_fives) { max_fives = five_star_assurance_number; max_fivesth = five_count; max_fivecount = countx; }
                    if (five_star_assurance_number < min_fives) { min_fives = five_star_assurance_number; min_fivesth = five_count; min_fivecount = countx; }
                    five_pity[five_star_assurance_number - 1]++;
                    five_star_assurance_number = 0;
                    if (five_star_guarantee_number || temp1 < 1) {
                        type = 1;
                        five_count_c++;
                        kind = up_five;
                        if (!five_star_guarantee_number) { ach_count[0] = 0; ach_count[1] ++; }
                        five_star_guarantee_number = false;
                    }
                    else {
                        type = 2;
                        five_count_c++;
                        kind = rspick(nup_five_c, 5);
                        if (kind == five_check[0]) { five_star_guarantee_number = false; ach_count[0] = 0; ach_count[1] ++; }
                        else { five_star_guarantee_number = true; ach_count[0] ++; ach_count[1] = 0; }
                    }// 5-star kind settler for banner I
                } break;
                case 1: {
                    star = 4;
                    four_count++;
                    if (four_star_assurance_number < 11) four_pity[four_star_assurance_number - 1]++;
                    else { four_pity[10]++; ach[2] = true; }
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
                            default: lang_cout(4, 4); std::cout << "\n"; break;
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
                            default: lang_cout(4, 4); std::cout << "\n"; break;
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
                            default: lang_cout(4, 4); std::cout << "\n"; break;
                            }
                        }
                    }
                } break;
                case 2: Tri() break;
                default: lang_cout(4, 3); std::cout << "\n"; break;
                }
                output_string()
                if (star != 4 || type == 3) unmet4_c++;
                if (star != 4 || type != 3) unmet4_w++;
                if (ach_count[0] > 7) ach[0] = true;
                if (ach_count[1] > 7) ach[1] = true;
                if (ach_count[8] > 5) ach[8] = true;
                if (ach_count[6] < 11) { ach_count[6]++; if (star == 5) ach[6] = true; }
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
                    mpcheck()
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
                            ach_count[4]++;
                            ach_count[5] = 0;
                        }
                        else if (five_star_guarantee_number || temp1 < 3) {
                            type = 1;
                            five_count_w++;
                            kind = rspick(up_five_g, 2);
                            if (kind == up_five_g[fate_weapon - 1]) { fate_points = 0; ach_count[4] = 0; if (!five_star_guarantee_number) ach_count[5] ++; }
                            else { fate_points++; ach_count[5] = 0; }
                            five_star_guarantee_number = false;
                        }
                        else {
                            type = 2;
                            five_count_w++;
                            kind = rspick(nup_five_w, 10);
                            if (kind == up_five_g[fate_weapon - 1]) { fate_points = 0; ach_count[4] = 0; ach_count[5] ++; }
                            else { fate_points++; ach_count[5] = 0; }
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
                    else { lang_cout(4, 2); std::cout << "\n"; goto full_quit; }
                } break;
                case 1: {
                    star = 4;
                    four_count++;
                    if (four_star_assurance_number < 11) four_pity[four_star_assurance_number - 1]++;
                    else { four_pity[10]++; ach[2] = true; }
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
                            default: lang_cout(4, 4); std::cout << "\n"; break;
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
                            default: lang_cout(4, 4); std::cout << "\n"; break;
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
                            default: lang_cout(4, 4); std::cout << "\n"; break;
                            }
                        }
                    }
                } break;
                case 2: Tri() break;
                default: lang_cout(4, 3); std::cout << "\n"; break;
                }
                output_string()
                if (star != 4 || type == 3) unmet4_c++;
                if (star != 4 || type != 3) unmet4_w++;
                if (ach_count[4] > 6) ach[4] = true;
                if (ach_count[5] > 6) ach[5] = true;
                if (ach_count[8] > 5) ach[8] = true;
                if (ach_count[6] < 11) { ach_count[6]++; if (star == 5) ach[6] = true; }
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
                    mpcheck()
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
                        default: lang_cout(4, 4); std::cout << "\n"; break;
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
                        default: lang_cout(4, 4); std::cout << "\n"; break;
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
                        default: lang_cout(4, 4); std::cout << "\n"; break;
                        }
                    }
                } break;
                case 1: {
                    star = 4;
                    four_count++;
                    if (four_star_assurance_number < 11) four_pity[four_star_assurance_number - 1]++;
                    else { four_pity[10]++; ach[2] = true; }
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
                        default: lang_cout(4, 4); std::cout << "\n"; break;
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
                        default: lang_cout(4, 4); std::cout << "\n"; break;
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
                        default: lang_cout(4, 4); std::cout << "\n"; break;
                        }
                    }
                } break;
                case 2: Tri() break;
                default: lang_cout(4, 3); std::cout << "\n"; break;
                }
                output_string()
                if (!(star == 5 && type == 1)) unmet5_c++;
                if (!(star == 5 && type == 2)) unmet5_w++;
                if (!(star == 4 && type == 1)) unmet4_c++;
                if (!(star == 4 && type == 2)) unmet4_w++;
                if (ach_count[8] > 5) ach[8] = true;
                if (ach_count[6] < 11) { ach_count[6]++; if (star == 5) ach[6] = true; }
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
                        mpcheck()
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
                        mpcheck()
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
                        mpcheck()
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
                if (ach_count[8] > 5) ach[8] = true;
                if (ach_count[6] < 11) { ach_count[6]++; if (star == 5) ach[6] = true; }
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
        else { lang_cout(4, 7); std::cout << "\n"; goto full_quit; }
        // real work
        endy = std::chrono::system_clock::now();
        elapsed = endy - starty;
        elapsed_time = std::chrono::duration_cast<std::chrono::microseconds>(elapsed).count();
        t_start = std::chrono::system_clock::to_time_t(starty);
        t_end = std::chrono::system_clock::to_time_t(endy);
        std::cout << "\n"; lang_cout(1, 86); std::cout << t_start << "\n";
        lang_cout(1, 87); std::cout << t_end << "\n";
        std::cout << static_cast<double>(elapsed_time) * 1.0 / 1000000; lang_cout(1, 84); std::cout << "\n";
        if (max_fives > 86) { ach[3] = true; }
        if (five_count == 0) {
            std::cout << "\n"; lang_cout(1, 127); std::cout << countx - countx_r; lang_cout(1, 74); std::cout << "\n"; lang_cout(1, 73); std::cout << countx; lang_cout(1, 74); std::cout << "\n";
            lang_cout(1, 75); std::cout << five_count << "  " << static_cast<double>(five_count) * 100.0 / static_cast<double>(countx) << "%\n";
            lang_cout(1, 76); std::cout << four_count << "  " << static_cast<double>(four_count) * 100.0 / static_cast<double>(countx) << "%\n";
            lang_cout(1, 77); std::cout << five_count_c << " : " << five_count_w << " : " << four_count_c << " : " << four_count_w << "\n\n";
        }
        else {
            std::cout << "\n"; lang_cout(1, 127); std::cout << countx - countx_r; lang_cout(1, 74); std::cout << "\n"; lang_cout(1, 73); std::cout << countx; lang_cout(1, 74); std::cout << "\n";
            lang_cout(1, 75); std::cout << five_count << "  " << static_cast<double>(five_count) * 100.0 / static_cast<double>(countx) << "%\n";
            lang_cout(1, 76); std::cout << four_count << "  " << static_cast<double>(four_count) * 100.0 / static_cast<double>(countx) << "%\n";
            lang_cout(1, 78); std::cout << max_fives; lang_cout(1, 79); std::cout << max_fivesth; lang_cout(1, 80); std::cout << max_fivecount + 1; lang_cout(1, 81); std::cout << "\n";
            lang_cout(1, 82); std::cout << min_fives; lang_cout(1, 79); std::cout << min_fivesth; lang_cout(1, 80); std::cout << min_fivecount + 1; lang_cout(1, 81); std::cout << "\n";
            lang_cout(1, 83); std::cout << static_cast<double>(ave_fives) * 1.0 / static_cast<double>(five_count) << "\n";
            lang_cout(1, 77); std::cout << five_count_c << " : " << five_count_w << " : " << four_count_c << " : " << four_count_w << "\n\n";
        }
        for (const size_t iout : five_stars_c) { if (pcount[iout] > 0) { lang_cout(3, iout); std::cout << "(" << pcount[iout] << ") "; } }
        for (const size_t iout : five_stars_w) { if (pcount[iout] > 0) { lang_cout(3, iout); std::cout << "(" << pcount[iout] << ") "; } }
        if (five_count > 0) { std::cout << "\n\n"; }
        for (const size_t iout : four_stars_c) { if (pcount[iout] > 0) { lang_cout(3, iout); std::cout << "(" << pcount[iout] << ") "; } }
        for (const size_t iout : four_stars_w) { if (pcount[iout] > 0) { lang_cout(3, iout); std::cout << "(" << pcount[iout] << ") "; } }
        std::cout << "\n\n";
        iacheck = false;
        for (size_t iach = 0; iach < 9; iach++) {
            if (ach[iach] && !ach_q[iach]) {
                const size_t achdis = iach + iach + 3;
                const size_t achname = iach + iach + 4;
                lang_cout(6, 0); lang_cout(6, achdis); lang_cout(6, 1); lang_cout(6, achname); lang_cout(6, 2);
                ach_q[iach] = true;
                iacheck = true;
            }
        }
        if (iacheck) { std::cout << "\n"; }
        countx_r = 0;
        if (y_arg) goto full_quit;
        // a bunch of output of statistics
goto enter_wishes_number;
full_quit:
    return 0;
}
