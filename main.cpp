#include "functions.h"

using namespace giwscli;

int main(int argc, char *argv[]) {
  static char default_argv0[] = "giwscli";
  argv[0] = default_argv0;
  // general settings for robustness

  y_print = true;
  y_luck = true;
  y_prog = false;
  y_track_luck = false;
  y_track_luck_mode = false;
  y_anim = false;
  y_anim_del = false;
  // bool pre-set

  // arg_proc:
  {
    switch (arg_proc(argc, argv)) {
      case 1: {
        goto set_banner;  // direct mode with lang provided
      }
      case 2: {
        goto language_setting;  // with lang not provided
      }
      default:
        return error_code;
    }
  }

language_setting : {
#if CN_H
  std::cout << EN_S_160 << '\n' << CN_S_160 << UNI_S_0;
#endif
  std::cin >> lang_status;
  slash_n() if (std::cin.fail() || lang_status > 1) {
    lang_status = 0;
    cin_error_by3();
    goto language_setting;
  }
  if (argc == 4) {
    goto set_banner;
  }
}
  // pre-settings for language

pre_announcement : {
  enter_chosen_banner_f();
  // welcome:
  lang_cout(1, 1);
  slash_n() lang_cout(1, 2);
  slash_n() lang_cout(1, 3);
  slash_n() lang_cout(1, 4);
  slash_nn()
}  // pre-announcement and ini of variables

enter_chosen_banner : {
  lang_cout(1, 5);
  slash_n() lang_cout(1, 6);
  slash_n() lang_cout(1, 7);
  slash_n() lang_cout(1, 108);
  slash_n() lang_cout(1, 8);
  slash_n() lang_cout(1, 9);
  slash_n() lang_cout(1, 10);
  slash_n() lang_cout(1, 161);
  slash_nn() std::cin >> chosen_banner;
  if (std::cin.fail()) {
    chosen_banner = 0;
    cin_error_by2() goto pre_announcement;
  }
}  // interface for banner chosing

enter_chosen_event : {
  e_sav = chosen_event;
  {
    switch (enter_chosen_event_f()) {
      case 1: {
        goto enter_chosen_event;
      }
      case 2: {
        goto pre_announcement;
      }
      case 3: {
        goto enter_chosen_banner;
      }
      case 0: {
        goto set_banner;
      }
      default:
        return error_code;
    }
  }
}  // which event? seriously, it's a pretty long list

set_banner : {
  set_banner_f(chosen_banner, chosen_event);
  if (y_arg) {
    goto core_core_loop;
  }
  // set banner
  if (is_cross) {
    if (chosen_banner == 3) {
      min_fives = 80;
    } else if (chosen_banner == 1 || chosen_banner == 2 || chosen_banner == 4) {
      min_fives = 90;
    } else {
      min_fives = PTRDIFF_MAX;
    }
  }
  // set min_fives since they vary
}

  // switch_check:
  {
    if ((switch_b_sav == chosen_banner && switch_e_sav == chosen_event) ||
        e_sav == chosen_event) {
      is_dualcross = true;
    } else {
      is_dualcross = false;
    }
    if (!is_dualcross) {
      unmet4_c = 0;
      unmet4_w = 0;
      unmet5_c = 0;
      unmet5_w = 0;
    }
  }
  // seriously, why mihoyo want dual banners

enter_wishes_number : {  // this is a pretty long symbol
  if (quit) {
    lang_cout(4, 6);
    slash_n() error_code = 6;
    full_quit_f()
  }  // quit detect

  {
    pre_wishes();
    std::cin >> wishes_number;
    if (std::cin.fail()) {
      wishes_number = 0;
      cin_error_by() goto enter_wishes_number;
    }
    slash_n()
  }
  // enter wishes number
  switch (e_wishes()) {
    case 1: {
      goto enter_wishes_number;
    }
    case 2: {
      goto enter_chosen_event;
    }
    case 3: {
      goto core_core_loop;
    }
    default: {
      error_code = 101;
      return error_code;
    }
  }
}

core_core_loop : {
  pre_ccloop();
  starty = std::chrono::system_clock::now();
  // ikuzo

  int ccloop_r;
  if (y_savtof) {
    ccloop_r = ccloop_of();
  } else {
    ccloop_r = ccloop();
  }
  if (ccloop_r != 0) {
    return error_code;
  }

  endy = std::chrono::system_clock::now();
  // real work

  anim_p();

  elapsed = endy - starty;
  elapsed_time =
      std::chrono::duration_cast<std::chrono::microseconds>(elapsed).count();
  t_start = std::chrono::system_clock::to_time_t(starty);
  t_end = std::chrono::system_clock::to_time_t(endy);
  // time's up

  delay_r = 100;
  if (!y_arg && !y_print && y_prog && !is_s_mode && !y_track_luck_mode) {
    prog_p()
  }
  y_track_luck_mode = false;
  // prog post-output

  stat_out();
  wishes_number_r = 0;
  if (y_arg || error_code != 0) {
    hash_gen();
    hash_p();
    full_quit_f()
  }
  goto enter_wishes_number;
}
}
