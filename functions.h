#ifndef FUNCTIONS_H
#define FUNCTIONS_H
#include <string>
#include <thread>
#include <iomanip>

#include "cn.h"
#include "en.h"
#include "giwscli.h"
#include "macro_f.h"
#include "variables.h"
extern void casesx(size_t kind);
extern void ini_all(size_t* in, size_t ins, size_t nu);
extern void ini_ams(size_t* in, size_t ins, const size_t* out);
extern void set_pool_1(size_t up_five_p, size_t size_nup_four_c_p,
                       const size_t* tempg1, const size_t* tempg5,
                       const size_t* nup_four_cgm);
extern void set_pool_3(size_t size_nup_four_c_p, const size_t* tempg1,
                       const size_t* tempg5, const size_t* tempg6,
                       const size_t* tempg7, const size_t* nup_four_cgm);
extern void head_print();
extern void animation_gen(const unsigned int star);
extern void hash_gen();
extern void enter_chosen_banner_f();
extern void set_banner_f();
extern void output_string(size_t& kind);
extern void wishes_127();
extern void clean_f();
extern int arg_proc(int argc, char* argv[]);
extern int enter_chosen_event_f();
extern void pre_wishes();
extern int wishes_31();
extern int wishes_63();
extern void luckcpy();
extern void luckget(unsigned int star, size_t kind);
extern void lang_cout(unsigned int sq, size_t sw);
extern void pre_ccloop();
extern void stat_out();
extern int wishes_5();
extern int e_wishes();
extern void anim_p();
extern int ccloop();
extern int post_ccloop_1(unsigned int& star, unsigned int& type, size_t& kind,
                       size_t& anim_loop);
extern int post_ccloop_3(unsigned int& star, unsigned int& type, size_t& kind,
                  size_t& anim_loop);
extern int post_ccloop_4(unsigned int& star, unsigned int& type, size_t& kind,
                         size_t& anim_loop);
extern int post_ccloop_5(unsigned int& star, size_t& kind, size_t& anim_loop);
#endif
