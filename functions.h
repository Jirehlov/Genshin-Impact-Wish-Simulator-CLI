#ifndef FUNCTIONS_H
#define FUNCTIONS_H 1
#include <fstream>
#include <iomanip>
#include <string>
#include <thread>

#include "cn.h"
#include "en.h"
#include "lib/giwscli.h"
#include "macro_f.h"
#include "variables.h"

extern void casesx(const size_t& kind_p);
extern void ini_all(size_t* in, size_t ins, size_t nu);
extern void head_print();
extern void animation_gen(const unsigned int star_p);
extern void hash_gen();
extern void hash_p();
extern void enter_chosen_banner_f();
extern void output_string();
extern void wishes_127();
extern void clean_f();
extern int arg_proc(int argc, char* argv[]);
extern int enter_chosen_event_f();
extern void pre_wishes();
extern int wishes_31();
extern int wishes_63();
extern void luckcpy();
extern void luckget();
extern void lang_cout(unsigned int sq, size_t sw);
extern void pre_ccloop();
extern void stat_out();
extern int wishes_5();
extern int e_wishes();
extern void anim_p();
extern int ccloop();
extern int ccloop_of();
extern int post_ccloop_1(size_t& anim_loop);
extern int post_ccloop_3(size_t& anim_loop);
extern int post_ccloop_4(size_t& anim_loop);
extern int post_ccloop_5(size_t& anim_loop);
extern void cin_error_by3();
extern void wishes_384();
#endif
