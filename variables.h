#ifndef VARIABLES_H
#define VARIABLES_H
#include <chrono>

extern bool d_item_c, is_s_mode, is_cross, is_dualcross, y_print, y_luck, y_arg,
    y_prog, y_track_luck, y_track_luck_mode, y_anim, y_anim_del, iacheck,
    achp_check, achp_check_again, ach_q[12];
extern size_t luck, luckiest, countx_r, countx_l, drump5, drump4, d_item[128],
    d_item_n[128], anim_kind, anim_location, anim_sublocation,
    anim_subsublocation, luckkind[10], luckiestkind[10], animkind[10],
    lucklocation[10], lucksublocation[10], lucksubsublocation[10],
    luckiestlocation[10], luckiestsublocation[10], luckiestsubsublocation[10],
    animlocation[10], animsublocation[10], animsubsublocation[10],
    one_to_ten[10];
extern std::chrono::system_clock::time_point starty;
extern std::chrono::system_clock::time_point endy;
extern std::chrono::nanoseconds elapsed;
extern std::time_t t_start;
extern std::time_t t_end;
extern size_t four_stars_c[23], four_stars_w[27],
    five_stars_c[23], five_stars_w[28];
extern unsigned int delay_r, star_max, anim_number, luckstar[10];
extern signed long long int wishes_number, wishes_number_r, delay_prog,
    wishes_number_r_t, elapsed_time;
extern signed int tuck;

#endif
