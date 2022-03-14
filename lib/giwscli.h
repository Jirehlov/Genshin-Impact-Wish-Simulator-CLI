#ifndef GIWSCLI_H
#define GIWSCLI_H
#include <chrono>
#include <cstddef>
#include <iostream>

#include "random_gen.h"

#define set_pool_1_m(up_five_m, size_nup_four_c_m, nup_four_cgm) \
  {                                                              \
    set_pool_1((up_five_m), (size_nup_four_c_m), tempg1, tempg5, \
               (nup_four_cgm));                                  \
  }
#define set_pool_3_m(size_nup_four_c_m, nup_four_cgm)               \
  {                                                                 \
    set_pool_3((size_nup_four_c_m), tempg1, tempg5, tempg6, tempg7, \
               (nup_four_cgm));                                     \
  }

namespace giwscli {
extern bool quit, is_noelle, five_star_guarantee_number,
    four_star_guarantee_number, ach[12];
extern size_t kind, temp1, fate_points, up_five, size_nup_four_c, countx,
    five_count, five_count_c, five_count_w, four_count, four_count_c,
    four_count_w, max_fivesth, min_fivesth, max_fivecount, min_fivecount,
    size_nup_four_w, kind_r_ach_11, kind_r_ach_8, up_five_g[2], up_four_g[16],
    nup_four_c[32], five_check[8], four_check[8], pcount[128], four_pity[11],
    five_pity[90], five_pity_w[80];
extern const size_t nup_five_c[5], nup_five_w[10], nup_four_w[32], three_g[13],
    nup_four_cg1[11], nup_four_cg2[13], nup_four_cg3[14], nup_four_cg4[15],
    nup_four_cg5[16], nup_four_cg6[17], nup_four_cg7[18], nup_four_cg8[19],
    nup_four_cg9[20];
extern unsigned int resultt, resultu, lang_status, star, type;
extern ptrdiff_t chosen_event, chosen_banner, unmet4_c, unmet4_w, unmet5_c,
    unmet5_w, switch_b_should_be, switch_e_should_be, switch_b_sav,
    switch_e_sav, e_sav, four_star_assurance_number, five_star_assurance_number,
    max_fives, min_fives, five_weight, four_weight, three_weight, fate_weapon,
    ave_fives, ach_count[12];
extern signed int error_code, full_q;
extern void ini_ams(size_t *in, size_t ins, const size_t *out);
extern void full_quit_e [[noreturn]] ();

extern void set_pool_1(size_t up_five_p, size_t size_nup_four_c_p,
                       const size_t *tempg1, const size_t *tempg5,
                       const size_t *nup_four_cgm);
extern void set_pool_3(size_t size_nup_four_c_p, const size_t *tempg1,
                       const size_t *tempg5, const size_t *tempg6,
                       const size_t *tempg7, const size_t *nup_four_cgm);
extern size_t rspick(const size_t *kindx, size_t sizekind);
extern unsigned int WRSpick(const ptrdiff_t *weightx, size_t nom);
extern void tri();
extern void mpcheck();
extern void core_f_1();
extern void core_f_3();
extern void core_f_4();
extern void core_f_5();
extern void post_add();
extern void set_banner_f(ptrdiff_t chosen_banner_p, ptrdiff_t chosen_event_p);
extern void gipull(ptrdiff_t chosen_banner_p, ptrdiff_t chosen_event_p);
}  // namespace giwscli
#endif
