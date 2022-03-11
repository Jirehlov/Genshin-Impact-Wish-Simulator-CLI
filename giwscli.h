#ifndef GIWSCLI_H
#define GIWSCLI_H
#include <chrono>
#include <iostream>

#include "random_gen.h"

extern bool quit, is_noelle, five_star_guarantee_number,
    four_star_guarantee_number, ach[12];
extern size_t fate_points, up_five, size_nup_four_c, countx, five_count,
    five_count_c, five_count_w, four_count, four_count_c, four_count_w,
    max_fivesth, min_fivesth, max_fivecount, min_fivecount, size_nup_four_w,
    kind_r_ach_11, kind_r_ach_8, up_five_g[2], up_four_g[16], nup_four_c[32],
    five_check[8], four_check[8], pcount[128], four_pity[11], five_pity[90],
    five_pity_w[80];
extern size_t nup_five_c[5], nup_five_w[10], nup_four_w[32], three_g[13];
extern unsigned int resultt, resultu, lang_status;
extern ptrdiff_t unmet4_c, unmet4_w, unmet5_c, unmet5_w,
    four_star_assurance_number, five_star_assurance_number, max_fives,
    min_fives, five_weight, four_weight, three_weight, fate_weapon, ave_fives,
    ach_count[12];
extern signed int error_code, full_q;

extern size_t rspick(const size_t *kindx, size_t sizekind);
extern unsigned int WRSpick(const ptrdiff_t *weightx, size_t nom);
void full_quit_e [[noreturn]] ();
extern void tri(unsigned int &star, size_t &kind);
extern void mpcheck();
extern void core_f_1(const size_t &temp1, unsigned int &star,
                     unsigned int &type, size_t &kind);
extern void core_f_3(const size_t &temp1, unsigned int &star,
                     unsigned int &type, size_t &kind);
extern void core_f_4(unsigned int &star, unsigned int &type, size_t &kind);
extern void core_f_5(const size_t &temp1, unsigned int &star, size_t &kind);
#endif
