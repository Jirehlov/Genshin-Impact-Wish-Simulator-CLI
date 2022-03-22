#include "variables.h"

bool d_item_c = true, is_s_mode = false, is_cross = false, is_dualcross = false,
     y_print = true, y_luck = true, y_arg = false, y_prog = false,
     y_track_luck = false, y_track_luck_mode = false, y_anim = false,
     y_anim_del = false, iacheck = false, achp_check = false,
     achp_check_again = false,
     ach_q[12] = {false, false, false, false, false, false,
                  false, false, false, false, false, false};
size_t luck = 0, luckiest = 0, countx_r = 0, countx_l = 0, drump5 = 0,
       drump4 = 0, d_item[128] = {0}, d_item_n[128] = {0}, anim_kind = 127,
       anim_location = 0, anim_sublocation = 0, anim_subsublocation = 0,
       luckkind[10] = {127, 127, 127, 127, 127, 127, 127, 127, 127, 127},
       luckiestkind[10] = {127, 127, 127, 127, 127, 127, 127, 127, 127, 127},
       animkind[10] = {127, 127, 127, 127, 127, 127, 127, 127, 127, 127},
       lucklocation[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10},
       lucksublocation[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10},
       lucksubsublocation[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10},
       luckiestlocation[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10},
       luckiestsublocation[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10},
       luckiestsubsublocation[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10},
       animlocation[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10},
       animsublocation[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10},
       animsubsublocation[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10},
       one_to_ten[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
std::chrono::system_clock::time_point starty = std::chrono::system_clock::now();
std::chrono::system_clock::time_point endy = std::chrono::system_clock::now();
std::chrono::nanoseconds elapsed = starty - endy;
std::time_t t_start = std::chrono::system_clock::to_time_t(starty);
std::time_t t_end = std::chrono::system_clock::to_time_t(endy);
size_t four_stars_c[23] = {15, 16, 17, 18, 19, 20, 21, 22, 23,  24,  25, 26,
                           27, 28, 29, 30, 31, 71, 91, 95, 100, 106, 108},
       four_stars_w[27] = {32, 33, 34, 35, 36, 37, 38,  39,  40,
                           41, 42, 43, 44, 45, 46, 47,  48,  49,
                           79, 80, 82, 83, 84, 88, 102, 103, 104},
       five_stars_c[23] = {0,  1,  2,  3,  4,  63, 64, 65, 66,  67,  68, 69,
                           70, 72, 86, 89, 90, 94, 96, 99, 105, 109, 111},
       five_stars_w[28] = {5,  6,  7,  8,   9,   10,  11,  12, 13, 14,
                           73, 74, 75, 76,  77,  78,  81,  85, 87, 92,
                           93, 97, 98, 101, 107, 110, 112, 113};
ptrdiff_t e_sav = 0, switch_b_should_be = 0, switch_b_sav = 0;
unsigned int lang_status = 0, delay_r = 0, star_max = 0, anim_number = 0,
             luckstar[10] = {3, 3, 3, 3, 3, 3, 3, 3, 3, 3};
signed long long int
    wishes_number = 0,
    wishes_number_r = 0, delay_prog = 0, wishes_number_r_t = 0,
    elapsed_time =
        std::chrono::duration_cast<std::chrono::microseconds>(elapsed).count();
signed int tuck = 0, full_q = 0;
